/*******************************************************************************
* File Name: Continuo.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Continuo_H) /* Pins Continuo_H */
#define CY_PINS_Continuo_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Continuo_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Continuo__PORT == 15 && ((Continuo__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Continuo_Write(uint8 value);
void    Continuo_SetDriveMode(uint8 mode);
uint8   Continuo_ReadDataReg(void);
uint8   Continuo_Read(void);
void    Continuo_SetInterruptMode(uint16 position, uint16 mode);
uint8   Continuo_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Continuo_SetDriveMode() function.
     *  @{
     */
        #define Continuo_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Continuo_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Continuo_DM_RES_UP          PIN_DM_RES_UP
        #define Continuo_DM_RES_DWN         PIN_DM_RES_DWN
        #define Continuo_DM_OD_LO           PIN_DM_OD_LO
        #define Continuo_DM_OD_HI           PIN_DM_OD_HI
        #define Continuo_DM_STRONG          PIN_DM_STRONG
        #define Continuo_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Continuo_MASK               Continuo__MASK
#define Continuo_SHIFT              Continuo__SHIFT
#define Continuo_WIDTH              1u

/* Interrupt constants */
#if defined(Continuo__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Continuo_SetInterruptMode() function.
     *  @{
     */
        #define Continuo_INTR_NONE      (uint16)(0x0000u)
        #define Continuo_INTR_RISING    (uint16)(0x0001u)
        #define Continuo_INTR_FALLING   (uint16)(0x0002u)
        #define Continuo_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Continuo_INTR_MASK      (0x01u) 
#endif /* (Continuo__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Continuo_PS                     (* (reg8 *) Continuo__PS)
/* Data Register */
#define Continuo_DR                     (* (reg8 *) Continuo__DR)
/* Port Number */
#define Continuo_PRT_NUM                (* (reg8 *) Continuo__PRT) 
/* Connect to Analog Globals */                                                  
#define Continuo_AG                     (* (reg8 *) Continuo__AG)                       
/* Analog MUX bux enable */
#define Continuo_AMUX                   (* (reg8 *) Continuo__AMUX) 
/* Bidirectional Enable */                                                        
#define Continuo_BIE                    (* (reg8 *) Continuo__BIE)
/* Bit-mask for Aliased Register Access */
#define Continuo_BIT_MASK               (* (reg8 *) Continuo__BIT_MASK)
/* Bypass Enable */
#define Continuo_BYP                    (* (reg8 *) Continuo__BYP)
/* Port wide control signals */                                                   
#define Continuo_CTL                    (* (reg8 *) Continuo__CTL)
/* Drive Modes */
#define Continuo_DM0                    (* (reg8 *) Continuo__DM0) 
#define Continuo_DM1                    (* (reg8 *) Continuo__DM1)
#define Continuo_DM2                    (* (reg8 *) Continuo__DM2) 
/* Input Buffer Disable Override */
#define Continuo_INP_DIS                (* (reg8 *) Continuo__INP_DIS)
/* LCD Common or Segment Drive */
#define Continuo_LCD_COM_SEG            (* (reg8 *) Continuo__LCD_COM_SEG)
/* Enable Segment LCD */
#define Continuo_LCD_EN                 (* (reg8 *) Continuo__LCD_EN)
/* Slew Rate Control */
#define Continuo_SLW                    (* (reg8 *) Continuo__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Continuo_PRTDSI__CAPS_SEL       (* (reg8 *) Continuo__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Continuo_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Continuo__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Continuo_PRTDSI__OE_SEL0        (* (reg8 *) Continuo__PRTDSI__OE_SEL0) 
#define Continuo_PRTDSI__OE_SEL1        (* (reg8 *) Continuo__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Continuo_PRTDSI__OUT_SEL0       (* (reg8 *) Continuo__PRTDSI__OUT_SEL0) 
#define Continuo_PRTDSI__OUT_SEL1       (* (reg8 *) Continuo__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Continuo_PRTDSI__SYNC_OUT       (* (reg8 *) Continuo__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Continuo__SIO_CFG)
    #define Continuo_SIO_HYST_EN        (* (reg8 *) Continuo__SIO_HYST_EN)
    #define Continuo_SIO_REG_HIFREQ     (* (reg8 *) Continuo__SIO_REG_HIFREQ)
    #define Continuo_SIO_CFG            (* (reg8 *) Continuo__SIO_CFG)
    #define Continuo_SIO_DIFF           (* (reg8 *) Continuo__SIO_DIFF)
#endif /* (Continuo__SIO_CFG) */

/* Interrupt Registers */
#if defined(Continuo__INTSTAT)
    #define Continuo_INTSTAT            (* (reg8 *) Continuo__INTSTAT)
    #define Continuo_SNAP               (* (reg8 *) Continuo__SNAP)
    
	#define Continuo_0_INTTYPE_REG 		(* (reg8 *) Continuo__0__INTTYPE)
#endif /* (Continuo__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Continuo_H */


/* [] END OF FILE */
