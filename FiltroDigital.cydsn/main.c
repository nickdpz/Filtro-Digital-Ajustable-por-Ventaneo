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

volatile uint16 frecuenciaux=100;
volatile uint16 frecuencia=100;

void visual(uint8 numero){
    if(numero==10){  
        frecuencia=frecuenciaux;
    }else{
            if(frecuencia<10){
                frecuencia=numero;
            }else{
                if(frecuencia<100){
                frecuencia=frecuencia*10+numero;
                }else{
                    Timer_Stop();
                }
        }
    }   
}



CY_ISR(Int_SW){
    Control_Write(0);
    switch(SW_Read()) {
            case 0b00001110:
            switch(P0_Read()) {
                    case 0xE:
                    LCD_Position(0,1);    
                    LCD_PrintString("1");
                    break;
                    case 0xD:
                    LCD_Position(0,1);    
                    LCD_PrintString("2");
                    break;
                     case 0xB:
                    LCD_Position(0,1);    
                    LCD_PrintString("3");
                    break;
                    case 0x7:
                    //LCD_Position(0,1);    
                    //LCD_PrintString("A");
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
                    LCD_Position(0,1);    
                    LCD_PrintString("4");
                    break;
                    case 0xD:
                    LCD_Position(0,1);    
                    LCD_PrintString("5");
                    break;
                     case 0xB:
                    LCD_Position(0,1);    
                    LCD_PrintString("6");
                    break;
                    case 0x7:
                    //LCD_Position(0,1);    
                    //LCD_PrintString("B");
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
                    LCD_Position(0,1);    
                    LCD_PrintString("7");
                    break;
                    case 0xD:
                    
                    LCD_Position(0,1);    
                    LCD_PrintString("8");
                    break;
                     case 0xB:
                    
                    LCD_Position(0,1);    
                    LCD_PrintString("9");
                    break;
                    case 0x7:
                    //LCD_Position(0,1);    
                    //LCD_PrintString("C");
                    LCD_Position(0,6);
                    LCD_PrintString("PasaBanda");
                    break;
                    default:
                    break;   
                }
                    break;
                case 0b000000111:
                    switch(P0_Read()) {
                    case 0xE:
                    LCD_Position(0,1);    
                    LCD_PrintString("*");
                    break;
                    case 0xD:
                    LCD_Position(0,1);    
                    LCD_PrintString("0");
                    break;
                     case 0xB:
                    LCD_Position(0,1);    
                    LCD_PrintString("#");
                    break;
                    case 0x7:
                    LCD_Position(0,1);    
                    LCD_PrintString("D");
                    break;
                    default:
                    break;   
                }

                    break;
            default:
                break;
    }
    Control_Write(1);
    SW_ClearInterrupt();
}


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    ISR_SW_StartEx(Int_SW); //indicar cual es la rutina/vector de interrupcion
    LCD_Start();
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
