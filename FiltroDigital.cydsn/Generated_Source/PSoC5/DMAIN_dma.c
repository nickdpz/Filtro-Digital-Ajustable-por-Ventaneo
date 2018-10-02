/***************************************************************************
* File Name: DMAIN_dma.c  
* Version 1.70
*
*  Description:
*   Provides an API for the DMAC component. The API includes functions
*   for the DMA controller, DMA channels and Transfer Descriptors.
*
*
*   Note:
*     This module requires the developer to finish or fill in the auto
*     generated funcions and setup the dma channel and TD's.
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/
#include <CYLIB.H>
#include <CYDMAC.H>
#include <DMAIN_dma.H>



/****************************************************************************
* 
* The following defines are available in Cyfitter.h
* 
* 
* 
* DMAIN__DRQ_CTL_REG
* 
* 
* DMAIN__DRQ_NUMBER
* 
* Number of TD's used by this channel.
* DMAIN__NUMBEROF_TDS
* 
* Priority of this channel.
* DMAIN__PRIORITY
* 
* True if DMAIN_TERMIN_SEL is used.
* DMAIN__TERMIN_EN
* 
* TERMIN interrupt line to signal terminate.
* DMAIN__TERMIN_SEL
* 
* 
* True if DMAIN_TERMOUT0_SEL is used.
* DMAIN__TERMOUT0_EN
* 
* 
* TERMOUT0 interrupt line to signal completion.
* DMAIN__TERMOUT0_SEL
* 
* 
* True if DMAIN_TERMOUT1_SEL is used.
* DMAIN__TERMOUT1_EN
* 
* 
* TERMOUT1 interrupt line to signal completion.
* DMAIN__TERMOUT1_SEL
* 
****************************************************************************/


/* Zero based index of DMAIN dma channel */
uint8 DMAIN_DmaHandle = DMA_INVALID_CHANNEL;

/*********************************************************************
* Function Name: uint8 DMAIN_DmaInitalize
**********************************************************************
* Summary:
*   Allocates and initialises a channel of the DMAC to be used by the
*   caller.
*
* Parameters:
*   BurstCount.
*       
*       
*   ReqestPerBurst.
*       
*       
*   UpperSrcAddress.
*       
*       
*   UpperDestAddress.
*       
*
* Return:
*   The channel that can be used by the caller for DMA activity.
*   DMA_INVALID_CHANNEL (0xFF) if there are no channels left. 
*
*
*******************************************************************/
uint8 DMAIN_DmaInitialize(uint8 BurstCount, uint8 ReqestPerBurst, uint16 UpperSrcAddress, uint16 UpperDestAddress) 
{

    /* Allocate a DMA channel. */
    DMAIN_DmaHandle = (uint8)DMAIN__DRQ_NUMBER;

    /* Configure the channel. */
    (void)CyDmaChSetConfiguration(DMAIN_DmaHandle,
                                  BurstCount,
                                  ReqestPerBurst,
                                  (uint8)DMAIN__TERMOUT0_SEL,
                                  (uint8)DMAIN__TERMOUT1_SEL,
                                  (uint8)DMAIN__TERMIN_SEL);

    /* Set the extended address for the transfers */
    (void)CyDmaChSetExtendedAddress(DMAIN_DmaHandle, UpperSrcAddress, UpperDestAddress);

    /* Set the priority for this channel */
    (void)CyDmaChPriority(DMAIN_DmaHandle, (uint8)DMAIN__PRIORITY);
    
    return DMAIN_DmaHandle;
}

/*********************************************************************
* Function Name: void DMAIN_DmaRelease
**********************************************************************
* Summary:
*   Frees the channel associated with DMAIN.
*
*
* Parameters:
*   void.
*
*
*
* Return:
*   void.
*
*******************************************************************/
void DMAIN_DmaRelease(void) 
{
    /* Disable the channel */
    (void)CyDmaChDisable(DMAIN_DmaHandle);
}

