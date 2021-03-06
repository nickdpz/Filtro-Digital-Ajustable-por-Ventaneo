/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* P0 */
#define P0__0__INTTYPE CYREG_PICU0_INTTYPE4
#define P0__0__MASK 0x10u
#define P0__0__PC CYREG_PRT0_PC4
#define P0__0__PORT 0u
#define P0__0__SHIFT 4u
#define P0__1__INTTYPE CYREG_PICU0_INTTYPE5
#define P0__1__MASK 0x20u
#define P0__1__PC CYREG_PRT0_PC5
#define P0__1__PORT 0u
#define P0__1__SHIFT 5u
#define P0__2__INTTYPE CYREG_PICU0_INTTYPE6
#define P0__2__MASK 0x40u
#define P0__2__PC CYREG_PRT0_PC6
#define P0__2__PORT 0u
#define P0__2__SHIFT 6u
#define P0__3__INTTYPE CYREG_PICU0_INTTYPE7
#define P0__3__MASK 0x80u
#define P0__3__PC CYREG_PRT0_PC7
#define P0__3__PORT 0u
#define P0__3__SHIFT 7u
#define P0__AG CYREG_PRT0_AG
#define P0__AMUX CYREG_PRT0_AMUX
#define P0__BIE CYREG_PRT0_BIE
#define P0__BIT_MASK CYREG_PRT0_BIT_MASK
#define P0__BYP CYREG_PRT0_BYP
#define P0__CTL CYREG_PRT0_CTL
#define P0__DM0 CYREG_PRT0_DM0
#define P0__DM1 CYREG_PRT0_DM1
#define P0__DM2 CYREG_PRT0_DM2
#define P0__DR CYREG_PRT0_DR
#define P0__INP_DIS CYREG_PRT0_INP_DIS
#define P0__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define P0__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define P0__LCD_EN CYREG_PRT0_LCD_EN
#define P0__MASK 0xF0u
#define P0__PORT 0u
#define P0__PRT CYREG_PRT0_PRT
#define P0__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define P0__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define P0__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define P0__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define P0__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define P0__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define P0__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define P0__PS CYREG_PRT0_PS
#define P0__SHIFT 4u
#define P0__SLW CYREG_PRT0_SLW

/* SW */
#define SW__0__INTTYPE CYREG_PICU0_INTTYPE0
#define SW__0__MASK 0x01u
#define SW__0__PC CYREG_PRT0_PC0
#define SW__0__PORT 0u
#define SW__0__SHIFT 0u
#define SW__1__INTTYPE CYREG_PICU0_INTTYPE1
#define SW__1__MASK 0x02u
#define SW__1__PC CYREG_PRT0_PC1
#define SW__1__PORT 0u
#define SW__1__SHIFT 1u
#define SW__2__INTTYPE CYREG_PICU0_INTTYPE2
#define SW__2__MASK 0x04u
#define SW__2__PC CYREG_PRT0_PC2
#define SW__2__PORT 0u
#define SW__2__SHIFT 2u
#define SW__3__INTTYPE CYREG_PICU0_INTTYPE3
#define SW__3__MASK 0x08u
#define SW__3__PC CYREG_PRT0_PC3
#define SW__3__PORT 0u
#define SW__3__SHIFT 3u
#define SW__AG CYREG_PRT0_AG
#define SW__AMUX CYREG_PRT0_AMUX
#define SW__BIE CYREG_PRT0_BIE
#define SW__BIT_MASK CYREG_PRT0_BIT_MASK
#define SW__BYP CYREG_PRT0_BYP
#define SW__CTL CYREG_PRT0_CTL
#define SW__DM0 CYREG_PRT0_DM0
#define SW__DM1 CYREG_PRT0_DM1
#define SW__DM2 CYREG_PRT0_DM2
#define SW__DR CYREG_PRT0_DR
#define SW__INP_DIS CYREG_PRT0_INP_DIS
#define SW__INTSTAT CYREG_PICU0_INTSTAT
#define SW__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define SW__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define SW__LCD_EN CYREG_PRT0_LCD_EN
#define SW__MASK 0x0Fu
#define SW__PORT 0u
#define SW__PRT CYREG_PRT0_PRT
#define SW__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define SW__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define SW__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define SW__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define SW__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define SW__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define SW__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define SW__PS CYREG_PRT0_PS
#define SW__SHIFT 0u
#define SW__SLW CYREG_PRT0_SLW
#define SW__SNAP CYREG_PICU0_SNAP

/* ADC */
#define ADC_DEC__COHER CYREG_DEC_COHER
#define ADC_DEC__CR CYREG_DEC_CR
#define ADC_DEC__DR1 CYREG_DEC_DR1
#define ADC_DEC__DR2 CYREG_DEC_DR2
#define ADC_DEC__DR2H CYREG_DEC_DR2H
#define ADC_DEC__GCOR CYREG_DEC_GCOR
#define ADC_DEC__GCORH CYREG_DEC_GCORH
#define ADC_DEC__GVAL CYREG_DEC_GVAL
#define ADC_DEC__OCOR CYREG_DEC_OCOR
#define ADC_DEC__OCORH CYREG_DEC_OCORH
#define ADC_DEC__OCORM CYREG_DEC_OCORM
#define ADC_DEC__OUTSAMP CYREG_DEC_OUTSAMP
#define ADC_DEC__OUTSAMPH CYREG_DEC_OUTSAMPH
#define ADC_DEC__OUTSAMPM CYREG_DEC_OUTSAMPM
#define ADC_DEC__OUTSAMPS CYREG_DEC_OUTSAMPS
#define ADC_DEC__PM_ACT_CFG CYREG_PM_ACT_CFG10
#define ADC_DEC__PM_ACT_MSK 0x01u
#define ADC_DEC__PM_STBY_CFG CYREG_PM_STBY_CFG10
#define ADC_DEC__PM_STBY_MSK 0x01u
#define ADC_DEC__SHIFT1 CYREG_DEC_SHIFT1
#define ADC_DEC__SHIFT2 CYREG_DEC_SHIFT2
#define ADC_DEC__SR CYREG_DEC_SR
#define ADC_DEC__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DEC_M1
#define ADC_DEC__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DEC_M2
#define ADC_DEC__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DEC_M3
#define ADC_DEC__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DEC_M4
#define ADC_DEC__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DEC_M5
#define ADC_DEC__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DEC_M6
#define ADC_DEC__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DEC_M7
#define ADC_DEC__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DEC_M8
#define ADC_DSM__BUF0 CYREG_DSM0_BUF0
#define ADC_DSM__BUF1 CYREG_DSM0_BUF1
#define ADC_DSM__BUF2 CYREG_DSM0_BUF2
#define ADC_DSM__BUF3 CYREG_DSM0_BUF3
#define ADC_DSM__CLK CYREG_DSM0_CLK
#define ADC_DSM__CR0 CYREG_DSM0_CR0
#define ADC_DSM__CR1 CYREG_DSM0_CR1
#define ADC_DSM__CR10 CYREG_DSM0_CR10
#define ADC_DSM__CR11 CYREG_DSM0_CR11
#define ADC_DSM__CR12 CYREG_DSM0_CR12
#define ADC_DSM__CR13 CYREG_DSM0_CR13
#define ADC_DSM__CR14 CYREG_DSM0_CR14
#define ADC_DSM__CR15 CYREG_DSM0_CR15
#define ADC_DSM__CR16 CYREG_DSM0_CR16
#define ADC_DSM__CR17 CYREG_DSM0_CR17
#define ADC_DSM__CR2 CYREG_DSM0_CR2
#define ADC_DSM__CR3 CYREG_DSM0_CR3
#define ADC_DSM__CR4 CYREG_DSM0_CR4
#define ADC_DSM__CR5 CYREG_DSM0_CR5
#define ADC_DSM__CR6 CYREG_DSM0_CR6
#define ADC_DSM__CR7 CYREG_DSM0_CR7
#define ADC_DSM__CR8 CYREG_DSM0_CR8
#define ADC_DSM__CR9 CYREG_DSM0_CR9
#define ADC_DSM__DEM0 CYREG_DSM0_DEM0
#define ADC_DSM__DEM1 CYREG_DSM0_DEM1
#define ADC_DSM__MISC CYREG_DSM0_MISC
#define ADC_DSM__OUT0 CYREG_DSM0_OUT0
#define ADC_DSM__OUT1 CYREG_DSM0_OUT1
#define ADC_DSM__REF0 CYREG_DSM0_REF0
#define ADC_DSM__REF1 CYREG_DSM0_REF1
#define ADC_DSM__REF2 CYREG_DSM0_REF2
#define ADC_DSM__REF3 CYREG_DSM0_REF3
#define ADC_DSM__RSVD1 CYREG_DSM0_RSVD1
#define ADC_DSM__SW0 CYREG_DSM0_SW0
#define ADC_DSM__SW2 CYREG_DSM0_SW2
#define ADC_DSM__SW3 CYREG_DSM0_SW3
#define ADC_DSM__SW4 CYREG_DSM0_SW4
#define ADC_DSM__SW6 CYREG_DSM0_SW6
#define ADC_DSM__TR0 CYREG_NPUMP_DSM_TR0
#define ADC_DSM__TST0 CYREG_DSM0_TST0
#define ADC_DSM__TST1 CYREG_DSM0_TST1
#define ADC_Ext_CP_Clk__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define ADC_Ext_CP_Clk__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define ADC_Ext_CP_Clk__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define ADC_Ext_CP_Clk__CFG2_SRC_SEL_MASK 0x07u
#define ADC_Ext_CP_Clk__INDEX 0x00u
#define ADC_Ext_CP_Clk__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define ADC_Ext_CP_Clk__PM_ACT_MSK 0x01u
#define ADC_Ext_CP_Clk__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define ADC_Ext_CP_Clk__PM_STBY_MSK 0x01u
#define ADC_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_IRQ__INTC_MASK 0x20000000u
#define ADC_IRQ__INTC_NUMBER 29u
#define ADC_IRQ__INTC_PRIOR_NUM 7u
#define ADC_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_29
#define ADC_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define ADC_theACLK__CFG0 CYREG_CLKDIST_ACFG0_CFG0
#define ADC_theACLK__CFG1 CYREG_CLKDIST_ACFG0_CFG1
#define ADC_theACLK__CFG2 CYREG_CLKDIST_ACFG0_CFG2
#define ADC_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define ADC_theACLK__CFG3 CYREG_CLKDIST_ACFG0_CFG3
#define ADC_theACLK__CFG3_PHASE_DLY_MASK 0x0Fu
#define ADC_theACLK__INDEX 0x00u
#define ADC_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define ADC_theACLK__PM_ACT_MSK 0x01u
#define ADC_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define ADC_theACLK__PM_STBY_MSK 0x01u

/* DAC */
#define DAC_viDAC8__CR0 CYREG_DAC3_CR0
#define DAC_viDAC8__CR1 CYREG_DAC3_CR1
#define DAC_viDAC8__D CYREG_DAC3_D
#define DAC_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define DAC_viDAC8__PM_ACT_MSK 0x08u
#define DAC_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define DAC_viDAC8__PM_STBY_MSK 0x08u
#define DAC_viDAC8__STROBE CYREG_DAC3_STROBE
#define DAC_viDAC8__SW0 CYREG_DAC3_SW0
#define DAC_viDAC8__SW2 CYREG_DAC3_SW2
#define DAC_viDAC8__SW3 CYREG_DAC3_SW3
#define DAC_viDAC8__SW4 CYREG_DAC3_SW4
#define DAC_viDAC8__TR CYREG_DAC3_TR
#define DAC_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC3_M1
#define DAC_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC3_M2
#define DAC_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC3_M3
#define DAC_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC3_M4
#define DAC_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC3_M5
#define DAC_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC3_M6
#define DAC_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC3_M7
#define DAC_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC3_M8
#define DAC_viDAC8__TST CYREG_DAC3_TST

/* LCD */
#define LCD_LCDPort__0__INTTYPE CYREG_PICU12_INTTYPE0
#define LCD_LCDPort__0__MASK 0x01u
#define LCD_LCDPort__0__PC CYREG_PRT12_PC0
#define LCD_LCDPort__0__PORT 12u
#define LCD_LCDPort__0__SHIFT 0u
#define LCD_LCDPort__1__INTTYPE CYREG_PICU12_INTTYPE1
#define LCD_LCDPort__1__MASK 0x02u
#define LCD_LCDPort__1__PC CYREG_PRT12_PC1
#define LCD_LCDPort__1__PORT 12u
#define LCD_LCDPort__1__SHIFT 1u
#define LCD_LCDPort__2__INTTYPE CYREG_PICU12_INTTYPE2
#define LCD_LCDPort__2__MASK 0x04u
#define LCD_LCDPort__2__PC CYREG_PRT12_PC2
#define LCD_LCDPort__2__PORT 12u
#define LCD_LCDPort__2__SHIFT 2u
#define LCD_LCDPort__3__INTTYPE CYREG_PICU12_INTTYPE3
#define LCD_LCDPort__3__MASK 0x08u
#define LCD_LCDPort__3__PC CYREG_PRT12_PC3
#define LCD_LCDPort__3__PORT 12u
#define LCD_LCDPort__3__SHIFT 3u
#define LCD_LCDPort__4__INTTYPE CYREG_PICU12_INTTYPE4
#define LCD_LCDPort__4__MASK 0x10u
#define LCD_LCDPort__4__PC CYREG_PRT12_PC4
#define LCD_LCDPort__4__PORT 12u
#define LCD_LCDPort__4__SHIFT 4u
#define LCD_LCDPort__5__INTTYPE CYREG_PICU12_INTTYPE5
#define LCD_LCDPort__5__MASK 0x20u
#define LCD_LCDPort__5__PC CYREG_PRT12_PC5
#define LCD_LCDPort__5__PORT 12u
#define LCD_LCDPort__5__SHIFT 5u
#define LCD_LCDPort__6__INTTYPE CYREG_PICU12_INTTYPE6
#define LCD_LCDPort__6__MASK 0x40u
#define LCD_LCDPort__6__PC CYREG_PRT12_PC6
#define LCD_LCDPort__6__PORT 12u
#define LCD_LCDPort__6__SHIFT 6u
#define LCD_LCDPort__AG CYREG_PRT12_AG
#define LCD_LCDPort__BIE CYREG_PRT12_BIE
#define LCD_LCDPort__BIT_MASK CYREG_PRT12_BIT_MASK
#define LCD_LCDPort__BYP CYREG_PRT12_BYP
#define LCD_LCDPort__DM0 CYREG_PRT12_DM0
#define LCD_LCDPort__DM1 CYREG_PRT12_DM1
#define LCD_LCDPort__DM2 CYREG_PRT12_DM2
#define LCD_LCDPort__DR CYREG_PRT12_DR
#define LCD_LCDPort__INP_DIS CYREG_PRT12_INP_DIS
#define LCD_LCDPort__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define LCD_LCDPort__MASK 0x7Fu
#define LCD_LCDPort__PORT 12u
#define LCD_LCDPort__PRT CYREG_PRT12_PRT
#define LCD_LCDPort__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define LCD_LCDPort__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define LCD_LCDPort__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define LCD_LCDPort__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define LCD_LCDPort__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define LCD_LCDPort__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define LCD_LCDPort__PS CYREG_PRT12_PS
#define LCD_LCDPort__SHIFT 0u
#define LCD_LCDPort__SIO_CFG CYREG_PRT12_SIO_CFG
#define LCD_LCDPort__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define LCD_LCDPort__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define LCD_LCDPort__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define LCD_LCDPort__SLW CYREG_PRT12_SLW

/* P_out */
#define P_out__0__INTTYPE CYREG_PICU3_INTTYPE5
#define P_out__0__MASK 0x20u
#define P_out__0__PC CYREG_PRT3_PC5
#define P_out__0__PORT 3u
#define P_out__0__SHIFT 5u
#define P_out__AG CYREG_PRT3_AG
#define P_out__AMUX CYREG_PRT3_AMUX
#define P_out__BIE CYREG_PRT3_BIE
#define P_out__BIT_MASK CYREG_PRT3_BIT_MASK
#define P_out__BYP CYREG_PRT3_BYP
#define P_out__CTL CYREG_PRT3_CTL
#define P_out__DM0 CYREG_PRT3_DM0
#define P_out__DM1 CYREG_PRT3_DM1
#define P_out__DM2 CYREG_PRT3_DM2
#define P_out__DR CYREG_PRT3_DR
#define P_out__INP_DIS CYREG_PRT3_INP_DIS
#define P_out__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define P_out__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define P_out__LCD_EN CYREG_PRT3_LCD_EN
#define P_out__MASK 0x20u
#define P_out__PORT 3u
#define P_out__PRT CYREG_PRT3_PRT
#define P_out__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define P_out__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define P_out__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define P_out__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define P_out__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define P_out__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define P_out__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define P_out__PS CYREG_PRT3_PS
#define P_out__SHIFT 5u
#define P_out__SLW CYREG_PRT3_SLW

/* Pin_1 */
#define Pin_1__0__INTTYPE CYREG_PICU2_INTTYPE1
#define Pin_1__0__MASK 0x02u
#define Pin_1__0__PC CYREG_PRT2_PC1
#define Pin_1__0__PORT 2u
#define Pin_1__0__SHIFT 1u
#define Pin_1__AG CYREG_PRT2_AG
#define Pin_1__AMUX CYREG_PRT2_AMUX
#define Pin_1__BIE CYREG_PRT2_BIE
#define Pin_1__BIT_MASK CYREG_PRT2_BIT_MASK
#define Pin_1__BYP CYREG_PRT2_BYP
#define Pin_1__CTL CYREG_PRT2_CTL
#define Pin_1__DM0 CYREG_PRT2_DM0
#define Pin_1__DM1 CYREG_PRT2_DM1
#define Pin_1__DM2 CYREG_PRT2_DM2
#define Pin_1__DR CYREG_PRT2_DR
#define Pin_1__INP_DIS CYREG_PRT2_INP_DIS
#define Pin_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Pin_1__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Pin_1__LCD_EN CYREG_PRT2_LCD_EN
#define Pin_1__MASK 0x02u
#define Pin_1__PORT 2u
#define Pin_1__PRT CYREG_PRT2_PRT
#define Pin_1__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Pin_1__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Pin_1__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Pin_1__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Pin_1__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Pin_1__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Pin_1__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Pin_1__PS CYREG_PRT2_PS
#define Pin_1__SHIFT 1u
#define Pin_1__SLW CYREG_PRT2_SLW

/* DMA_IN */
#define DMA_IN__DRQ_CTL CYREG_IDMUX_DRQ_CTL2
#define DMA_IN__DRQ_NUMBER 10u
#define DMA_IN__NUMBEROF_TDS 0u
#define DMA_IN__PRIORITY 2u
#define DMA_IN__TERMIN_EN 0u
#define DMA_IN__TERMIN_SEL 0u
#define DMA_IN__TERMOUT0_EN 1u
#define DMA_IN__TERMOUT0_SEL 10u
#define DMA_IN__TERMOUT1_EN 0u
#define DMA_IN__TERMOUT1_SEL 0u

/* ISR_SW */
#define ISR_SW__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ISR_SW__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ISR_SW__INTC_MASK 0x10u
#define ISR_SW__INTC_NUMBER 4u
#define ISR_SW__INTC_PRIOR_NUM 7u
#define ISR_SW__INTC_PRIOR_REG CYREG_NVIC_PRI_4
#define ISR_SW__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ISR_SW__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Clock_1 */
#define Clock_1__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define Clock_1__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define Clock_1__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define Clock_1__CFG2_SRC_SEL_MASK 0x07u
#define Clock_1__INDEX 0x01u
#define Clock_1__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_1__PM_ACT_MSK 0x02u
#define Clock_1__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_1__PM_STBY_MSK 0x02u

/* Clock_2 */
#define Clock_2__CFG0 CYREG_CLKDIST_ACFG1_CFG0
#define Clock_2__CFG1 CYREG_CLKDIST_ACFG1_CFG1
#define Clock_2__CFG2 CYREG_CLKDIST_ACFG1_CFG2
#define Clock_2__CFG2_SRC_SEL_MASK 0x07u
#define Clock_2__CFG3 CYREG_CLKDIST_ACFG1_CFG3
#define Clock_2__CFG3_PHASE_DLY_MASK 0x0Fu
#define Clock_2__INDEX 0x01u
#define Clock_2__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define Clock_2__PM_ACT_MSK 0x02u
#define Clock_2__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define Clock_2__PM_STBY_MSK 0x02u

/* Control */
#define Control_Sync_ctrl_reg__0__MASK 0x01u
#define Control_Sync_ctrl_reg__0__POS 0
#define Control_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB09_10_ACTL
#define Control_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB09_10_CTL
#define Control_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB09_10_CTL
#define Control_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB09_10_CTL
#define Control_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG CYREG_B1_UDB09_10_CTL
#define Control_Sync_ctrl_reg__16BIT_MASK_MASK_REG CYREG_B1_UDB09_10_MSK
#define Control_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG CYREG_B1_UDB09_10_MSK
#define Control_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG CYREG_B1_UDB09_10_MSK
#define Control_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB09_10_MSK
#define Control_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_B1_UDB09_ACTL
#define Control_Sync_ctrl_reg__CONTROL_REG CYREG_B1_UDB09_CTL
#define Control_Sync_ctrl_reg__CONTROL_ST_REG CYREG_B1_UDB09_ST_CTL
#define Control_Sync_ctrl_reg__COUNT_REG CYREG_B1_UDB09_CTL
#define Control_Sync_ctrl_reg__COUNT_ST_REG CYREG_B1_UDB09_ST_CTL
#define Control_Sync_ctrl_reg__MASK 0x01u
#define Control_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB09_MSK_ACTL
#define Control_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_B1_UDB09_MSK_ACTL
#define Control_Sync_ctrl_reg__PERIOD_REG CYREG_B1_UDB09_MSK

/* DMA_OUT */
#define DMA_OUT__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define DMA_OUT__DRQ_NUMBER 0u
#define DMA_OUT__NUMBEROF_TDS 0u
#define DMA_OUT__PRIORITY 2u
#define DMA_OUT__TERMIN_EN 0u
#define DMA_OUT__TERMIN_SEL 0u
#define DMA_OUT__TERMOUT0_EN 0u
#define DMA_OUT__TERMOUT0_SEL 0u
#define DMA_OUT__TERMOUT1_EN 0u
#define DMA_OUT__TERMOUT1_SEL 0u

/* Continuo */
#define Continuo__0__INTTYPE CYREG_PICU2_INTTYPE5
#define Continuo__0__MASK 0x20u
#define Continuo__0__PC CYREG_PRT2_PC5
#define Continuo__0__PORT 2u
#define Continuo__0__SHIFT 5u
#define Continuo__AG CYREG_PRT2_AG
#define Continuo__AMUX CYREG_PRT2_AMUX
#define Continuo__BIE CYREG_PRT2_BIE
#define Continuo__BIT_MASK CYREG_PRT2_BIT_MASK
#define Continuo__BYP CYREG_PRT2_BYP
#define Continuo__CTL CYREG_PRT2_CTL
#define Continuo__DM0 CYREG_PRT2_DM0
#define Continuo__DM1 CYREG_PRT2_DM1
#define Continuo__DM2 CYREG_PRT2_DM2
#define Continuo__DR CYREG_PRT2_DR
#define Continuo__INP_DIS CYREG_PRT2_INP_DIS
#define Continuo__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Continuo__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Continuo__LCD_EN CYREG_PRT2_LCD_EN
#define Continuo__MASK 0x20u
#define Continuo__PORT 2u
#define Continuo__PRT CYREG_PRT2_PRT
#define Continuo__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Continuo__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Continuo__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Continuo__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Continuo__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Continuo__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Continuo__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Continuo__PS CYREG_PRT2_PS
#define Continuo__SHIFT 5u
#define Continuo__SLW CYREG_PRT2_SLW

/* ISR_Data */
#define ISR_Data__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ISR_Data__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ISR_Data__INTC_MASK 0x01u
#define ISR_Data__INTC_NUMBER 0u
#define ISR_Data__INTC_PRIOR_NUM 7u
#define ISR_Data__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define ISR_Data__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ISR_Data__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 74700000U
#define BCLK__BUS_CLK__KHZ 74700U
#define BCLK__BUS_CLK__MHZ 74U
#define CY_PROJECT_NAME "FiltroDigital"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 18u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 18u
#define CYDEV_CHIP_MEMBER_4D 13u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 19u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 17u
#define CYDEV_CHIP_MEMBER_4I 23u
#define CYDEV_CHIP_MEMBER_4J 14u
#define CYDEV_CHIP_MEMBER_4K 15u
#define CYDEV_CHIP_MEMBER_4L 22u
#define CYDEV_CHIP_MEMBER_4M 21u
#define CYDEV_CHIP_MEMBER_4N 10u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 20u
#define CYDEV_CHIP_MEMBER_4Q 12u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 11u
#define CYDEV_CHIP_MEMBER_4T 9u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 16u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 24u
#define CYDEV_CHIP_MEMBER_FM3 28u
#define CYDEV_CHIP_MEMBER_FM4 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000001u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000401u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
