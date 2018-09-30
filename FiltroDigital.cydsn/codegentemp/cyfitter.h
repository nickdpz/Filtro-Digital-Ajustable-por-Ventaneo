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

/* ISR_T */
#define ISR_T__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ISR_T__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ISR_T__INTC_MASK 0x01u
#define ISR_T__INTC_NUMBER 0u
#define ISR_T__INTC_PRIOR_NUM 7u
#define ISR_T__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define ISR_T__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ISR_T__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Timer */
#define Timer_TimerHW__CAP0 CYREG_TMR0_CAP0
#define Timer_TimerHW__CAP1 CYREG_TMR0_CAP1
#define Timer_TimerHW__CFG0 CYREG_TMR0_CFG0
#define Timer_TimerHW__CFG1 CYREG_TMR0_CFG1
#define Timer_TimerHW__CFG2 CYREG_TMR0_CFG2
#define Timer_TimerHW__CNT_CMP0 CYREG_TMR0_CNT_CMP0
#define Timer_TimerHW__CNT_CMP1 CYREG_TMR0_CNT_CMP1
#define Timer_TimerHW__PER0 CYREG_TMR0_PER0
#define Timer_TimerHW__PER1 CYREG_TMR0_PER1
#define Timer_TimerHW__PM_ACT_CFG CYREG_PM_ACT_CFG3
#define Timer_TimerHW__PM_ACT_MSK 0x01u
#define Timer_TimerHW__PM_STBY_CFG CYREG_PM_STBY_CFG3
#define Timer_TimerHW__PM_STBY_MSK 0x01u
#define Timer_TimerHW__RT0 CYREG_TMR0_RT0
#define Timer_TimerHW__RT1 CYREG_TMR0_RT1
#define Timer_TimerHW__SR0 CYREG_TMR0_SR0

/* ISR_SW */
#define ISR_SW__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ISR_SW__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ISR_SW__INTC_MASK 0x10u
#define ISR_SW__INTC_NUMBER 4u
#define ISR_SW__INTC_PRIOR_NUM 7u
#define ISR_SW__INTC_PRIOR_REG CYREG_NVIC_PRI_4
#define ISR_SW__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ISR_SW__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Clock_2 */
#define Clock_2__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define Clock_2__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define Clock_2__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define Clock_2__CFG2_SRC_SEL_MASK 0x07u
#define Clock_2__INDEX 0x00u
#define Clock_2__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_2__PM_ACT_MSK 0x01u
#define Clock_2__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_2__PM_STBY_MSK 0x01u

/* Control */
#define Control_Sync_ctrl_reg__0__MASK 0x01u
#define Control_Sync_ctrl_reg__0__POS 0
#define Control_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB05_06_ACTL
#define Control_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB05_06_CTL
#define Control_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB05_06_CTL
#define Control_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB05_06_CTL
#define Control_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB05_06_CTL
#define Control_Sync_ctrl_reg__16BIT_MASK_MASK_REG CYREG_B0_UDB05_06_MSK
#define Control_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB05_06_MSK
#define Control_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB05_06_MSK
#define Control_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB05_06_MSK
#define Control_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_B0_UDB05_ACTL
#define Control_Sync_ctrl_reg__CONTROL_REG CYREG_B0_UDB05_CTL
#define Control_Sync_ctrl_reg__CONTROL_ST_REG CYREG_B0_UDB05_ST_CTL
#define Control_Sync_ctrl_reg__COUNT_REG CYREG_B0_UDB05_CTL
#define Control_Sync_ctrl_reg__COUNT_ST_REG CYREG_B0_UDB05_ST_CTL
#define Control_Sync_ctrl_reg__MASK 0x01u
#define Control_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB05_MSK_ACTL
#define Control_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB05_MSK_ACTL
#define Control_Sync_ctrl_reg__PERIOD_REG CYREG_B0_UDB05_MSK

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
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
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
