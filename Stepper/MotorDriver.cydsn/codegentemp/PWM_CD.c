/*******************************************************************************
* File Name: PWM_CD.c  
* Version 2.10
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "PWM_CD.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        PWM_CD_PC =   (PWM_CD_PC & \
                                (uint32)(~(uint32)(PWM_CD_DRIVE_MODE_IND_MASK << (PWM_CD_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (PWM_CD_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: PWM_CD_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void PWM_CD_Write(uint8 value) 
{
    uint8 drVal = (uint8)(PWM_CD_DR & (uint8)(~PWM_CD_MASK));
    drVal = (drVal | ((uint8)(value << PWM_CD_SHIFT) & PWM_CD_MASK));
    PWM_CD_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: PWM_CD_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  PWM_CD_DM_STRONG     Strong Drive 
*  PWM_CD_DM_OD_HI      Open Drain, Drives High 
*  PWM_CD_DM_OD_LO      Open Drain, Drives Low 
*  PWM_CD_DM_RES_UP     Resistive Pull Up 
*  PWM_CD_DM_RES_DWN    Resistive Pull Down 
*  PWM_CD_DM_RES_UPDWN  Resistive Pull Up/Down 
*  PWM_CD_DM_DIG_HIZ    High Impedance Digital 
*  PWM_CD_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void PWM_CD_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(PWM_CD__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: PWM_CD_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro PWM_CD_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 PWM_CD_Read(void) 
{
    return (uint8)((PWM_CD_PS & PWM_CD_MASK) >> PWM_CD_SHIFT);
}


/*******************************************************************************
* Function Name: PWM_CD_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 PWM_CD_ReadDataReg(void) 
{
    return (uint8)((PWM_CD_DR & PWM_CD_MASK) >> PWM_CD_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(PWM_CD_INTSTAT) 

    /*******************************************************************************
    * Function Name: PWM_CD_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 PWM_CD_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(PWM_CD_INTSTAT & PWM_CD_MASK);
		PWM_CD_INTSTAT = maskedStatus;
        return maskedStatus >> PWM_CD_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
