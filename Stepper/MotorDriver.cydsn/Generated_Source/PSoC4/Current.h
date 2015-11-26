/*******************************************************************************
* File Name: Current.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Current_H) /* Pins Current_H */
#define CY_PINS_Current_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Current_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Current_Write(uint8 value) ;
void    Current_SetDriveMode(uint8 mode) ;
uint8   Current_ReadDataReg(void) ;
uint8   Current_Read(void) ;
uint8   Current_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Current_DRIVE_MODE_BITS        (3)
#define Current_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Current_DRIVE_MODE_BITS))

#define Current_DM_ALG_HIZ         (0x00u)
#define Current_DM_DIG_HIZ         (0x01u)
#define Current_DM_RES_UP          (0x02u)
#define Current_DM_RES_DWN         (0x03u)
#define Current_DM_OD_LO           (0x04u)
#define Current_DM_OD_HI           (0x05u)
#define Current_DM_STRONG          (0x06u)
#define Current_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define Current_MASK               Current__MASK
#define Current_SHIFT              Current__SHIFT
#define Current_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Current_PS                     (* (reg32 *) Current__PS)
/* Port Configuration */
#define Current_PC                     (* (reg32 *) Current__PC)
/* Data Register */
#define Current_DR                     (* (reg32 *) Current__DR)
/* Input Buffer Disable Override */
#define Current_INP_DIS                (* (reg32 *) Current__PC2)


#if defined(Current__INTSTAT)  /* Interrupt Registers */

    #define Current_INTSTAT                (* (reg32 *) Current__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define Current_DRIVE_MODE_SHIFT       (0x00u)
#define Current_DRIVE_MODE_MASK        (0x07u << Current_DRIVE_MODE_SHIFT)


#endif /* End Pins Current_H */


/* [] END OF FILE */
