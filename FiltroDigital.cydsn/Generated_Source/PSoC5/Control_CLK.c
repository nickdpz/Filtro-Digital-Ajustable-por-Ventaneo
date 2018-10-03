/*******************************************************************************
* File Name: Control_CLK.c  
* Version 1.80
*
* Description:
*  This file contains API to enable firmware control of a Control Register.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "Control_CLK.h"

/* Check for removal by optimization */
#if !defined(Control_CLK_Sync_ctrl_reg__REMOVED)

    
/*******************************************************************************
* Function Name: Control_CLK_Write
********************************************************************************
*
* Summary:
*  Write a byte to the Control Register.
*
* Parameters:
*  control:  The value to be assigned to the Control Register.
*
* Return:
*  None.
*
*******************************************************************************/
void Control_CLK_Write(uint8 control) 
{
    Control_CLK_Control = control;
}


/*******************************************************************************
* Function Name: Control_CLK_Read
********************************************************************************
*
* Summary:
*  Reads the current value assigned to the Control Register.
*
* Parameters:
*  None.
*
* Return:
*  Returns the current value in the Control Register.
*
*******************************************************************************/
uint8 Control_CLK_Read(void) 
{
    return Control_CLK_Control;
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
