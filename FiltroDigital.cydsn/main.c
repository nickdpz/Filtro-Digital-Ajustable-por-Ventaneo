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
volatile uint8 de=1,po=9;

void visual(uint16 numero){
    LCD_Position(1,15);
    LCD_PrintString("n");
    if(numero==10){  
        frecuencia=frecuenciaux;
        Timer_Stop();
    }else{
            if(frecuencia<10){
                Timer_Start();
                frecuenciaux=numero;
                po=10;
            }else{
                if(frecuencia<100){
                    frecuenciaux=frecuenciaux*10+numero;
                    po=11;
                }else{
                    Timer_Stop();
                }
        }
    }   
    LCD_Position(1,10);
    LCD_PrintNumber(frecuenciaux);

}

CY_ISR(Int_Timer){
    LCD_Position(1,po);
    if(de==0){
        LCD_PutChar(' '); 
        de=1;
    }else{
        LCD_PutChar(LCD_CUSTOM_0); 
        de=0;
    }
}

CY_ISR(Int_SW){
    Control_Write(0);
    switch(SW_Read()) {
            case 0b00001110:
            switch(P0_Read()) {
                    case 0xE:
                        visual(1);
                    break;
                    case 0xD:
                        visual(2);
                        LCD_Position(0,1);    
                        LCD_PrintString("2");
                    break;
                     case 0xB:
                        visual(3);
                    break;
                    case 0x7:
                    //A
                    LCD_Position(0,0);
                    LCD_PrintString("Fil. Pasa Bajos");            
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
                    //B
                    LCD_Position(0,0);
                    LCD_PrintString("Fil. Pasa Altos");
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
                    //C
                    LCD_Position(0,0);
                    LCD_PrintString("Fil. Pasa Banda");
                    break;
                    default:
                    break;   
                }
                    break;
                case 0b000000111:
                    switch(P0_Read()) {
                    case 0xE:
                        visual(10);//Enter
                    break;
                    case 0xD:
                        visual(0);
                    break;
                     case 0xB:
                        visual(10);//Enter
                    break;
                    /*
                    case 0x7:
                    LCD_Position(0,1);    
                    LCD_PrintString("D");
                    break;
                    */
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
    //ISR_T_StartEx(Int_Timer); //indicar cual es la rutina/vector de interrupcion
    LCD_Start();
    LCD_Position(0,0);
    LCD_PrintString("Fil. Pasa Bajos");
    LCD_Position(1,0);
    LCD_PrintString("F. Corte: ");
    //Timer_Start();
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    for(;;)
    {
        
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
