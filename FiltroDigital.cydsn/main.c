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
volatile uint8 letra;

CY_ISR(Int_SW){
        LCD_Position(0,1);    
        LCD_PrintString("1");
        Control_Write(0);
    switch(SW_Read()) {
            case 0x01:
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
                    LCD_Position(0,1);    
                    LCD_PrintString("A");
                    break;
                    default:
                    break;
                }
                    
                    break;
                case 0x02:
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
                    LCD_Position(0,1);    
                    LCD_PrintString("B");
                    break;
                    default:
                    break;   
                }
                    break;

                    break;
                case 0x08:
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
                    LCD_Position(0,1);    
                    LCD_PrintString("C");
                    break;
                    default:
                    break;   
                }
                    break;
                case 0x10:
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
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    LCD_Position(1,1);
    LCD_PrintString("cel");
    Control_Write(1);
    for(;;)
    {
        
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
