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
*/
#include "project.h"

volatile uint16 frecuenciaux=0;
volatile uint8 de=0;
volatile uint16 frecuencia=0;

    /* Defines for DMA */
#define DMA_BYTES_PER_BURST 1
#define DMA_REQUEST_PER_BURST 1
#define DMA_SRC_BASE (CYDEV_SRAM_BASE)
#define DMA_DST_BASE (CYDEV_PERIPH_BASE)

/* Variable declarations for DMA */
/* Move these variable declarations to the top of the function */
uint8 DMA_Chan;
uint8 DMA_TD[1];
CYCODE char tabla[256];

uint8 DMA_done=0;

void visual(uint8 numero){
    if(numero==10){  
        //Enter
        if(de==0){
        frecuencia=frecuenciaux;
        frecuenciaux=0;
        de=1;
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
    
           ADC_Stop();
           DMA_done=0;
        ///procesamiento
           ADC_StartConvert();    
}


int main(void)
{
    
    CyGlobalIntEnable; /* Enable global interrupts. */
/* DMA Configuration for DMA */
    DMA_Chan = DMA_DmaInitialize(DMA_BYTES_PER_BURST, DMA_REQUEST_PER_BURST, 
    HI16(DMA_SRC_BASE), HI16(DMA_DST_BASE));
    DMA_TD[0] = CyDmaTdAllocate();
    CyDmaTdSetConfiguration(DMA_TD[0], 256, DMA_TD[0], CY_DMA_TD_INC_SRC_ADR);
    CyDmaTdSetAddress(DMA_TD[0], LO16((uint32)tabla), LO16((uint32)DAC_Data_PTR));
    CyDmaChSetInitialTd(DMA_Chan, DMA_TD[0]);
    CyDmaChEnable(DMA_Chan, 1);
    ADC_Start();
    DAC_Start();
    ISR_SW_StartEx(Int_SW); //indicar cual es la rutina/vector de interrupcion
    ISR_Data_StartEx(Int_dato);
    LCD_Start();
    ADC_StartConvert();
    Control_Write(1);
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