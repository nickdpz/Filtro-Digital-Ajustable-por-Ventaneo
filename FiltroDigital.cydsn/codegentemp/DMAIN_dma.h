/******************************************************************************
* File Name: DMAIN_dma.h  
* Version 1.70
*
*  Description:
*   Provides the function definitions for the DMA Controller.
*
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/
#if !defined(CY_DMA_DMAIN_DMA_H__)
#define CY_DMA_DMAIN_DMA_H__



#include <CYDMAC.H>
#include <CYFITTER.H>

#define DMAIN__TD_TERMOUT_EN (((0 != DMAIN__TERMOUT0_EN) ? TD_TERMOUT0_EN : 0) | \
    (DMAIN__TERMOUT1_EN ? TD_TERMOUT1_EN : 0))

/* Zero based index of DMAIN dma channel */
extern uint8 DMAIN_DmaHandle;


uint8 DMAIN_DmaInitialize(uint8 BurstCount, uint8 ReqestPerBurst, uint16 UpperSrcAddress, uint16 UpperDestAddress) ;
void  DMAIN_DmaRelease(void) ;


/* CY_DMA_DMAIN_DMA_H__ */
#endif
