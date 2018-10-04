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


#define BUFFER 511
#define PI 3.14159265
#define ORDEN 10   

    /* Defines for DMA_OUT */
#define DMA_OUT_BYTES_PER_BURST 1
#define DMA_OUT_REQUEST_PER_BURST 1
#define DMA_OUT_SRC_BASE (CYDEV_SRAM_BASE)
#define DMA_OUT_DST_BASE (CYDEV_PERIPH_BASE)

/* Variable declarations for DMA_OUT */
/* Move these variable declarations to the top of the function */
uint8 DMA_OUT_Chan;
uint8 DMA_OUT_TD[1];


/* Defines for DMA_IN */
#define DMA_IN_BYTES_PER_BURST 1
#define DMA_IN_REQUEST_PER_BURST 1
#define DMA_IN_SRC_BASE (CYDEV_PERIPH_BASE)
#define DMA_IN_DST_BASE (CYDEV_SRAM_BASE)

/* Variable declarations for DMA_IN */
/* Move these variable declarations to the top of the function */
uint8 DMA_IN_Chan;
uint8 DMA_IN_TD[1];

volatile uint16 frecuenciaux=0;
volatile uint8 de=0,de2=0,clase=0;
volatile uint16 frecuencia=100;

uint8 Muestra[BUFFER]={0};
uint8 Salida[BUFFER]={0};


uint8 cont=0;
double bk[ORDEN];


void coeficientes(){

        double fc,fd;
        fc=2*PI*(frecuencia/20000+0.165);
    switch(clase){
        case 0:
        //Calculo pasa bajos
        bk[0]=2*fc;
         for (uint8 i=1;i<ORDEN;i++){
        bk[i]=(sin(fc*i)/(ORDEN*PI));
            }
        break;
        case 1:
        // Calculo pasa altos
        bk[0]=1-2*fc;
         for (uint8 i=1;i<ORDEN;i++){
        bk[i]=(-sin(fc*i)/(ORDEN*PI));
            }
        break;
        case 2:
        // Calculo pasa banda
        fd=2*PI*((frecuencia-10)/20000-0.165);
          bk[0]=1-2*(fc-fd);
         for (uint8 i=1;i<ORDEN;i++){
            bk[i]=((sin(fc*i)-sin(fd*i))/(ORDEN*PI));
            }
        break;
        default:
        break;
    }
    


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
    //ADC_StopConvert();
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
                    LCD_Position(0,7);
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
                    LCD_Position(0,7);
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
                    LCD_Position(0,7);
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
                        //
                        de2=!de2;
                    break;
                    visual(0);//Enter D
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
    //ADC_StartConvert();
    Control_Write(1);
    SW_ClearInterrupt();
    
}

CY_ISR(Int_dato){
    
    /*if(de2==0){
    for(uint16 i=0;i<=BUFFER;i++){
        Salida[i]=Muestra[i];}
    }else{*/
        double aux=0;
        
        for(uint16 n=0;n<ORDEN;n++){             
            for(uint16 k=0;k<ORDEN;k++){
                aux=aux+bk[k]*Muestra[BUFFER-n-k];
            
            }
               Salida[n]=(char)aux;
        }
    
        for(uint16 n=ORDEN;n<BUFFER;n++){             
            for(uint16 k=0;k<ORDEN;k++){
                aux=aux+bk[k]*Muestra[n-k];
            
            }
               Salida[n]=(char)aux;
        }
    //}
}



int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    /* DMA Configuration for DMA_OUT */
    DMA_OUT_Chan = DMA_OUT_DmaInitialize(DMA_OUT_BYTES_PER_BURST, DMA_OUT_REQUEST_PER_BURST, 
        HI16(DMA_OUT_SRC_BASE), HI16(DMA_OUT_DST_BASE));
    DMA_OUT_TD[0] = CyDmaTdAllocate();
    CyDmaTdSetConfiguration(DMA_OUT_TD[0], BUFFER, DMA_OUT_TD[0], CY_DMA_TD_INC_SRC_ADR);
    CyDmaTdSetAddress(DMA_OUT_TD[0], LO16((uint32)Salida), LO16((uint32)DAC_Data_PTR));
    CyDmaChSetInitialTd(DMA_OUT_Chan, DMA_OUT_TD[0]);
    CyDmaChEnable(DMA_OUT_Chan, 1);
    

    /* DMA Configuration for DMA_IN */
    DMA_IN_Chan = DMA_IN_DmaInitialize(DMA_IN_BYTES_PER_BURST, DMA_IN_REQUEST_PER_BURST, 
        HI16(DMA_IN_SRC_BASE), HI16(DMA_IN_DST_BASE));
    DMA_IN_TD[0] = CyDmaTdAllocate();
    CyDmaTdSetConfiguration(DMA_IN_TD[0], BUFFER, DMA_IN_TD[0], DMA_IN__TD_TERMOUT_EN | CY_DMA_TD_INC_DST_ADR);
    CyDmaTdSetAddress(DMA_IN_TD[0], LO16((uint32)ADC_DEC_SAMP_PTR), LO16((uint32)Muestra));
    CyDmaChSetInitialTd(DMA_IN_Chan, DMA_IN_TD[0]);
    CyDmaChEnable(DMA_IN_Chan, 1);
    
    ISR_SW_StartEx(Int_SW); //indicar cual es la rutina/vector de interrupcion
    ISR_Data_StartEx(Int_dato);
    LCD_Start();
    Control_Write(1);
    ADC_Start();
    ADC_StartConvert();
    DAC_Start();    
    coeficientes();
    LCD_Position(0,0);
    LCD_PrintString("Filtro PasaBajos");
    LCD_Position(1,0);
    LCD_PrintString("F. Corte: 100");
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    for(;;)
    {

        /* Place your application code here. */
    }
}

/* [] END OF FILE */