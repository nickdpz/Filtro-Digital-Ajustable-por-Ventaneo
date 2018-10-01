/*******************************************************************************
* File Name: In_Dato.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_In_Dato_H)
#define CY_ISR_In_Dato_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void In_Dato_Start(void);
void In_Dato_StartEx(cyisraddress address);
void In_Dato_Stop(void);

CY_ISR_PROTO(In_Dato_Interrupt);

void In_Dato_SetVector(cyisraddress address);
cyisraddress In_Dato_GetVector(void);

void In_Dato_SetPriority(uint8 priority);
uint8 In_Dato_GetPriority(void);

void In_Dato_Enable(void);
uint8 In_Dato_GetState(void);
void In_Dato_Disable(void);

void In_Dato_SetPending(void);
void In_Dato_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the In_Dato ISR. */
#define In_Dato_INTC_VECTOR            ((reg32 *) In_Dato__INTC_VECT)

/* Address of the In_Dato ISR priority. */
#define In_Dato_INTC_PRIOR             ((reg8 *) In_Dato__INTC_PRIOR_REG)

/* Priority of the In_Dato interrupt. */
#define In_Dato_INTC_PRIOR_NUMBER      In_Dato__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable In_Dato interrupt. */
#define In_Dato_INTC_SET_EN            ((reg32 *) In_Dato__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the In_Dato interrupt. */
#define In_Dato_INTC_CLR_EN            ((reg32 *) In_Dato__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the In_Dato interrupt state to pending. */
#define In_Dato_INTC_SET_PD            ((reg32 *) In_Dato__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the In_Dato interrupt. */
#define In_Dato_INTC_CLR_PD            ((reg32 *) In_Dato__INTC_CLR_PD_REG)


#endif /* CY_ISR_In_Dato_H */


/* [] END OF FILE */
