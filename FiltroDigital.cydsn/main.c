/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================

*Mecanica 
Modo Nomal
Se configura el ADC en modo continuo, para que muestre con una frecuentcia de 10 K Hz con 8 bit( porque el DAC tiene esa resolucion)
Una vez el ADC Termina la conversion el DMA Lo pasa al arreglo Muestra[]
Cuando el DMA termina la transacion la interrupcion INT_dato se ejecuta y calcula el valor de la salida
Este valor un tiempo despues es cargado al DMA Y de este al DAC

Cambio de parametros

Cuando se seleccione una frecuencia diferente o se cambia la naturaleza del filrtro
se llama la funcion coeficientes. Esta detiene el ADC por ende toda la cadena
hasta calcular los coeficientes, una vez los tenga vuleve al modo normal. Se utiliza la libreria MATH.C



*/
#include "project.h"
#include <math.h>

#define BUFFER 64
#define PI 3.14159265
#define ORDEN 100
    /* Defines for DMAIN */
#define DMAIN_BYTES_PER_BURST 2
#define DMAIN_REQUEST_PER_BURST 1
#define DMAIN_SRC_BASE (CYDEV_PERIPH_BASE)
#define DMAIN_DST_BASE (CYDEV_SRAM_BASE)

    
    /* Defines for DMA_OUT */
#define DMA_OUT_BYTES_PER_BURST 1
#define DMA_OUT_REQUEST_PER_BURST 1
#define DMA_OUT_SRC_BASE (CYDEV_SRAM_BASE)
#define DMA_OUT_DST_BASE (CYDEV_PERIPH_BASE)


volatile uint16 frecuenciaux=0;
volatile uint8 de=0,clase=0;
volatile uint16 frecuencia=0;

uint8 Muestra[BUFFER]={0};
uint8 Salida[BUFFER]={0};


/* Variable declarations for DMAIN */
/* Move these variable declarations to the top of the function */
uint8 DMAIN_Chan;
uint8 DMAIN_TD[1];

/* Variable declarations for DMA_OUT */
/* Move these variable declarations to the top of the function */
uint8 DMA_OUT_Chan;
uint8 DMA_OUT_TD[1];

uint8 cont=0;
uint8 bk[200];


void coeficientes(){
        ADC_StopConvert();
    switch(clase){
        case 0:
        //Calculo pasa bajos
        bk[0]=2*frecuencia;
         for (uint8 i=1;i<200;i++){
        bk[i]=(2*frecuencia)*(sin(2*PI*frecuencia*i)/(2*PI*frecuencia*i));}
        break;
        case 1:
        // Calculo pasa altos
        bk[0]=1-2*frecuencia;
         for (uint8 i=1;i<200;i++){
        bk[i]=-(2*frecuencia)*(sin(2*PI*frecuencia*i)/(2*PI*frecuencia*i));}
        
        break;
        case 2:
        // Calculo pasa banda
          bk[0]=1-2*frecuencia;
         for (uint8 i=1;i<200;i++){
            bk[i]=(2*frecuencia+10)*(sin(2*PI*(frecuencia+10)*i)/(2*PI*(frecuencia+10)*i))-(2*frecuencia-10)*(sin(2*PI*(frecuencia-10)*i)/(2*PI*(frecuencia-10)*i));}
        break;
        default:
        break;
    }
    

    ADC_StartConvert();
}

void visual(uint8 numero){
    if(numero==10){  
        //Enter
        if(de==0){
        frecuencia=frecuenciaux;
        frecuenciaux=0;
        de=1;
        coeficientes();    
        }
    }else{
        de=0;
            if(frecuenciaux==0){
                frecuenciaux=numero;
            }else{
                frecuenciaux=frecuenciaux*10+numero;
                if(frecuenciaux>100){
                    //Timer_Stop();
                if(frecuenciaux>1000){
                    frecuencia=1000;
                    frecuenciaux=0;
                    de=1;
                }
                }
        }
    } 
    LCD_Position(1,10);
    LCD_PrintString("    ");
    LCD_Position(1,10);
    if(de==0){
        LCD_PrintNumber(frecuenciaux);
    }else{
        LCD_PrintNumber(frecuencia);
    }
}

CY_ISR(Int_SW){
    uint8 temp=SW_Read();
    Control_Write(0);
    switch(SW_Read()) {
            case 0b00001110:
            switch(P0_Read()) {
                    case 0xE:
                    visual(1);
                    break;
                    case 0xD:
                    visual(2);
                    break;
                     case 0xB:
                    visual(3);
                    break;
                    case 0x7:
                    LCD_Position(0,6);
                    LCD_PrintString("PasaBajos");
                    clase=0;
                    coeficientes();
                    break;
                    default:
                    break;
                }
                    break;
                case 0b00001101:
            switch(P0_Read()) {
                    case 0xE:
                    visual(4);
                    break;
                    case 0xD:
                    visual(5);
                    break;
                    case 0xB:
                    visual(6);
                    break;
                    case 0x7:
                    LCD_Position(0,6);
                    LCD_PrintString("PasaAltos");
                    clase=1;
                    coeficientes();
                    break;
                    default:
                    break;   
                }
                    break;
                case 0b00001011:            
                    switch(P0_Read()) {
                    case 0xE:
                    visual(7);
                    break;
                    case 0xD:
                    visual(8);
                    break;
                     case 0xB:
                    visual(9);
                    break;
                    case 0x7:
                    LCD_Position(0,6);
                    LCD_PrintString("PasaBanda");
                    clase=2;
                    break;
                    default:
                    break;   
                }
                    break;
                case 0b000000111:
                    switch(P0_Read()) {
                    //case 0xE:
                    //LCD_Position(0,1);    
                    //LCD_PrintString("*");
                    //break;
                    case 0xD:
                    visual(0);
                    break;
                    //case 0xB:
                    //LCD_Position(0,1);    
                    //LCD_PrintString("D");
                    //break;
                    case 0x7:
                        visual(10);
                    break;
                    default:
                    break;   
                }

                    break;
            default:
                break;
    }
    while(SW_Read()==temp);
    SW_ClearInterrupt();
    Control_Write(1);
}

CY_ISR(Int_dato){
    
    // Se calcula la salida Muestra[i]=bk[1]*Muestra[i-1]+bk*Muestra[i-2]+bk[2]*Muestra[i-3]; 
    
}

void Configuracion(){
    
    ISR_SW_StartEx(Int_SW); //indicar cual es la rutina/vector de interrupcion
    ISR_Data_StartEx(Int_dato);
    LCD_Start();
    Control_Write(1);
    ADC_Start();
    DAC_Start();    
}


int main(void)
{
    
    CyGlobalIntEnable; /* Enable global interrupts. */

/* DMA Configuration for DMAIN */
    DMAIN_Chan = DMAIN_DmaInitialize(DMAIN_BYTES_PER_BURST, DMAIN_REQUEST_PER_BURST, 
    HI16(DMAIN_SRC_BASE), HI16(DMAIN_DST_BASE));
    DMAIN_TD[0] = CyDmaTdAllocate();
    CyDmaTdSetConfiguration(DMAIN_TD[0], BUFFER, DMAIN_TD[0], DMAIN__TD_TERMOUT_EN | CY_DMA_TD_INC_DST_ADR);
    CyDmaTdSetAddress(DMAIN_TD[0], LO16((uint32)ADC_DEC_SAMP_PTR), LO16((uint32)Muestra));
    CyDmaChSetInitialTd(DMAIN_Chan, DMAIN_TD[0]);
    CyDmaChEnable(DMAIN_Chan, 1);


    /* DMA Configuration for DMA_OUT */
    DMA_OUT_Chan = DMA_OUT_DmaInitialize(DMA_OUT_BYTES_PER_BURST, DMA_OUT_REQUEST_PER_BURST, 
        HI16(DMA_OUT_SRC_BASE), HI16(DMA_OUT_DST_BASE));
    DMA_OUT_TD[0] = CyDmaTdAllocate();
    CyDmaTdSetConfiguration(DMA_OUT_TD[0], BUFFER, DMA_OUT_TD[0], CY_DMA_TD_INC_SRC_ADR);
    CyDmaTdSetAddress(DMA_OUT_TD[0], LO16((uint32)Salida), LO16((uint32)DAC_Data_PTR));
    CyDmaChSetInitialTd(DMA_OUT_Chan, DMA_OUT_TD[0]);
    CyDmaChEnable(DMA_OUT_Chan, 1);

    
    
    Configuracion();
    coeficientes();
    LCD_Position(0,0);
    LCD_PrintString("Filtro PasaBajos");
    LCD_Position(1,0);
    LCD_PrintString("F. Corte: 1000");
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    for(;;)
    {

        /* Place your application code here. */
    }
}

/* [] END OF FILE */