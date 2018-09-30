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


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    ISR_SW_StartEx(Int_SW); //indicar cual es la rutina/vector de interrupcion
    LCD_Start();
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