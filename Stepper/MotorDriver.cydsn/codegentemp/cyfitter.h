#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* ADC_cy_psoc4_sar */
#define ADC_cy_psoc4_sar__SAR_CTRL CYREG_SAR_CTRL
#define ADC_cy_psoc4_sar__SAR_INTR CYREG_SAR_INTR
#define ADC_cy_psoc4_sar__SAR_INTR_CAUSE CYREG_SAR_INTR_CAUSE
#define ADC_cy_psoc4_sar__SAR_INTR_MASK CYREG_SAR_INTR_MASK
#define ADC_cy_psoc4_sar__SAR_INTR_MASKED CYREG_SAR_INTR_MASKED
#define ADC_cy_psoc4_sar__SAR_INTR_SET CYREG_SAR_INTR_SET
#define ADC_cy_psoc4_sar__SAR_NUMBER 0u
#define ADC_cy_psoc4_sar__SAR_RANGE_COND CYREG_SAR_RANGE_COND
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR_MASK CYREG_SAR_RANGE_INTR_MASK
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR_MASKED CYREG_SAR_RANGE_INTR_MASKED
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR_SET CYREG_SAR_RANGE_INTR_SET
#define ADC_cy_psoc4_sar__SAR_RANGE_THRES CYREG_SAR_RANGE_THRES
#define ADC_cy_psoc4_sar__SAR_SAMPLE_CTRL CYREG_SAR_SAMPLE_CTRL
#define ADC_cy_psoc4_sar__SAR_SAMPLE_TIME01 CYREG_SAR_SAMPLE_TIME01
#define ADC_cy_psoc4_sar__SAR_SAMPLE_TIME23 CYREG_SAR_SAMPLE_TIME23
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR_MASK CYREG_SAR_SATURATE_INTR_MASK
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR_MASKED CYREG_SAR_SATURATE_INTR_MASKED
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR_SET CYREG_SAR_SATURATE_INTR_SET
#define ADC_cy_psoc4_sar__SAR_STATUS CYREG_SAR_STATUS

/* ADC_intClock */
#define ADC_intClock__DIVIDER_MASK 0x0000FFFFu
#define ADC_intClock__ENABLE CYREG_CLK_DIVIDER_B00
#define ADC_intClock__ENABLE_MASK 0x80000000u
#define ADC_intClock__MASK 0x80000000u
#define ADC_intClock__REGISTER CYREG_CLK_DIVIDER_B00

/* ADC_IRQ */
#define ADC_IRQ__INTC_CLR_EN_REG CYREG_CM0_ICER
#define ADC_IRQ__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define ADC_IRQ__INTC_MASK 0x4000u
#define ADC_IRQ__INTC_NUMBER 14u
#define ADC_IRQ__INTC_PRIOR_MASK 0xC00000u
#define ADC_IRQ__INTC_PRIOR_NUM 3u
#define ADC_IRQ__INTC_PRIOR_REG CYREG_CM0_IPR3
#define ADC_IRQ__INTC_SET_EN_REG CYREG_CM0_ISER
#define ADC_IRQ__INTC_SET_PD_REG CYREG_CM0_ISPR

/* I2C_SCB */
#define I2C_SCB__BIST_CONTROL CYREG_SCB1_BIST_CONTROL
#define I2C_SCB__BIST_DATA CYREG_SCB1_BIST_DATA
#define I2C_SCB__CTRL CYREG_SCB1_CTRL
#define I2C_SCB__EZ_DATA00 CYREG_SCB1_EZ_DATA00
#define I2C_SCB__EZ_DATA01 CYREG_SCB1_EZ_DATA01
#define I2C_SCB__EZ_DATA02 CYREG_SCB1_EZ_DATA02
#define I2C_SCB__EZ_DATA03 CYREG_SCB1_EZ_DATA03
#define I2C_SCB__EZ_DATA04 CYREG_SCB1_EZ_DATA04
#define I2C_SCB__EZ_DATA05 CYREG_SCB1_EZ_DATA05
#define I2C_SCB__EZ_DATA06 CYREG_SCB1_EZ_DATA06
#define I2C_SCB__EZ_DATA07 CYREG_SCB1_EZ_DATA07
#define I2C_SCB__EZ_DATA08 CYREG_SCB1_EZ_DATA08
#define I2C_SCB__EZ_DATA09 CYREG_SCB1_EZ_DATA09
#define I2C_SCB__EZ_DATA10 CYREG_SCB1_EZ_DATA10
#define I2C_SCB__EZ_DATA11 CYREG_SCB1_EZ_DATA11
#define I2C_SCB__EZ_DATA12 CYREG_SCB1_EZ_DATA12
#define I2C_SCB__EZ_DATA13 CYREG_SCB1_EZ_DATA13
#define I2C_SCB__EZ_DATA14 CYREG_SCB1_EZ_DATA14
#define I2C_SCB__EZ_DATA15 CYREG_SCB1_EZ_DATA15
#define I2C_SCB__EZ_DATA16 CYREG_SCB1_EZ_DATA16
#define I2C_SCB__EZ_DATA17 CYREG_SCB1_EZ_DATA17
#define I2C_SCB__EZ_DATA18 CYREG_SCB1_EZ_DATA18
#define I2C_SCB__EZ_DATA19 CYREG_SCB1_EZ_DATA19
#define I2C_SCB__EZ_DATA20 CYREG_SCB1_EZ_DATA20
#define I2C_SCB__EZ_DATA21 CYREG_SCB1_EZ_DATA21
#define I2C_SCB__EZ_DATA22 CYREG_SCB1_EZ_DATA22
#define I2C_SCB__EZ_DATA23 CYREG_SCB1_EZ_DATA23
#define I2C_SCB__EZ_DATA24 CYREG_SCB1_EZ_DATA24
#define I2C_SCB__EZ_DATA25 CYREG_SCB1_EZ_DATA25
#define I2C_SCB__EZ_DATA26 CYREG_SCB1_EZ_DATA26
#define I2C_SCB__EZ_DATA27 CYREG_SCB1_EZ_DATA27
#define I2C_SCB__EZ_DATA28 CYREG_SCB1_EZ_DATA28
#define I2C_SCB__EZ_DATA29 CYREG_SCB1_EZ_DATA29
#define I2C_SCB__EZ_DATA30 CYREG_SCB1_EZ_DATA30
#define I2C_SCB__EZ_DATA31 CYREG_SCB1_EZ_DATA31
#define I2C_SCB__I2C_CFG CYREG_SCB1_I2C_CFG
#define I2C_SCB__I2C_CTRL CYREG_SCB1_I2C_CTRL
#define I2C_SCB__I2C_M_CMD CYREG_SCB1_I2C_M_CMD
#define I2C_SCB__I2C_S_CMD CYREG_SCB1_I2C_S_CMD
#define I2C_SCB__I2C_STATUS CYREG_SCB1_I2C_STATUS
#define I2C_SCB__INTR_CAUSE CYREG_SCB1_INTR_CAUSE
#define I2C_SCB__INTR_I2C_EC CYREG_SCB1_INTR_I2C_EC
#define I2C_SCB__INTR_I2C_EC_MASK CYREG_SCB1_INTR_I2C_EC_MASK
#define I2C_SCB__INTR_I2C_EC_MASKED CYREG_SCB1_INTR_I2C_EC_MASKED
#define I2C_SCB__INTR_M CYREG_SCB1_INTR_M
#define I2C_SCB__INTR_M_MASK CYREG_SCB1_INTR_M_MASK
#define I2C_SCB__INTR_M_MASKED CYREG_SCB1_INTR_M_MASKED
#define I2C_SCB__INTR_M_SET CYREG_SCB1_INTR_M_SET
#define I2C_SCB__INTR_RX CYREG_SCB1_INTR_RX
#define I2C_SCB__INTR_RX_MASK CYREG_SCB1_INTR_RX_MASK
#define I2C_SCB__INTR_RX_MASKED CYREG_SCB1_INTR_RX_MASKED
#define I2C_SCB__INTR_RX_SET CYREG_SCB1_INTR_RX_SET
#define I2C_SCB__INTR_S CYREG_SCB1_INTR_S
#define I2C_SCB__INTR_S_MASK CYREG_SCB1_INTR_S_MASK
#define I2C_SCB__INTR_S_MASKED CYREG_SCB1_INTR_S_MASKED
#define I2C_SCB__INTR_S_SET CYREG_SCB1_INTR_S_SET
#define I2C_SCB__INTR_SPI_EC CYREG_SCB1_INTR_SPI_EC
#define I2C_SCB__INTR_SPI_EC_MASK CYREG_SCB1_INTR_SPI_EC_MASK
#define I2C_SCB__INTR_SPI_EC_MASKED CYREG_SCB1_INTR_SPI_EC_MASKED
#define I2C_SCB__INTR_TX CYREG_SCB1_INTR_TX
#define I2C_SCB__INTR_TX_MASK CYREG_SCB1_INTR_TX_MASK
#define I2C_SCB__INTR_TX_MASKED CYREG_SCB1_INTR_TX_MASKED
#define I2C_SCB__INTR_TX_SET CYREG_SCB1_INTR_TX_SET
#define I2C_SCB__RX_CTRL CYREG_SCB1_RX_CTRL
#define I2C_SCB__RX_FIFO_CTRL CYREG_SCB1_RX_FIFO_CTRL
#define I2C_SCB__RX_FIFO_RD CYREG_SCB1_RX_FIFO_RD
#define I2C_SCB__RX_FIFO_RD_SILENT CYREG_SCB1_RX_FIFO_RD_SILENT
#define I2C_SCB__RX_FIFO_STATUS CYREG_SCB1_RX_FIFO_STATUS
#define I2C_SCB__RX_MATCH CYREG_SCB1_RX_MATCH
#define I2C_SCB__SPI_CTRL CYREG_SCB1_SPI_CTRL
#define I2C_SCB__SPI_STATUS CYREG_SCB1_SPI_STATUS
#define I2C_SCB__SS0_POSISTION 0u
#define I2C_SCB__SS1_POSISTION 1u
#define I2C_SCB__SS2_POSISTION 2u
#define I2C_SCB__SS3_POSISTION 3u
#define I2C_SCB__STATUS CYREG_SCB1_STATUS
#define I2C_SCB__TX_CTRL CYREG_SCB1_TX_CTRL
#define I2C_SCB__TX_FIFO_CTRL CYREG_SCB1_TX_FIFO_CTRL
#define I2C_SCB__TX_FIFO_STATUS CYREG_SCB1_TX_FIFO_STATUS
#define I2C_SCB__TX_FIFO_WR CYREG_SCB1_TX_FIFO_WR
#define I2C_SCB__UART_CTRL CYREG_SCB1_UART_CTRL
#define I2C_SCB__UART_RX_CTRL CYREG_SCB1_UART_RX_CTRL
#define I2C_SCB__UART_RX_STATUS CYREG_SCB1_UART_RX_STATUS
#define I2C_SCB__UART_TX_CTRL CYREG_SCB1_UART_TX_CTRL

/* I2C_SCB_IRQ */
#define I2C_SCB_IRQ__INTC_CLR_EN_REG CYREG_CM0_ICER
#define I2C_SCB_IRQ__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define I2C_SCB_IRQ__INTC_MASK 0x800u
#define I2C_SCB_IRQ__INTC_NUMBER 11u
#define I2C_SCB_IRQ__INTC_PRIOR_MASK 0xC0000000u
#define I2C_SCB_IRQ__INTC_PRIOR_NUM 3u
#define I2C_SCB_IRQ__INTC_PRIOR_REG CYREG_CM0_IPR2
#define I2C_SCB_IRQ__INTC_SET_EN_REG CYREG_CM0_ISER
#define I2C_SCB_IRQ__INTC_SET_PD_REG CYREG_CM0_ISPR

/* I2C_SCBCLK */
#define I2C_SCBCLK__DIVIDER_MASK 0x0000FFFFu
#define I2C_SCBCLK__ENABLE CYREG_CLK_DIVIDER_C00
#define I2C_SCBCLK__ENABLE_MASK 0x80000000u
#define I2C_SCBCLK__MASK 0x80000000u
#define I2C_SCBCLK__REGISTER CYREG_CLK_DIVIDER_C00

/* I2C_scl */
#define I2C_scl__0__DM__MASK 0x07u
#define I2C_scl__0__DM__SHIFT 0
#define I2C_scl__0__DR CYREG_PRT3_DR
#define I2C_scl__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define I2C_scl__0__HSIOM_MASK 0x0000000Fu
#define I2C_scl__0__HSIOM_SHIFT 0u
#define I2C_scl__0__INTCFG CYREG_PRT3_INTCFG
#define I2C_scl__0__INTSTAT CYREG_PRT3_INTSTAT
#define I2C_scl__0__MASK 0x01u
#define I2C_scl__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define I2C_scl__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define I2C_scl__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define I2C_scl__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define I2C_scl__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define I2C_scl__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define I2C_scl__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define I2C_scl__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define I2C_scl__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define I2C_scl__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define I2C_scl__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define I2C_scl__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define I2C_scl__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define I2C_scl__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define I2C_scl__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define I2C_scl__0__PC CYREG_PRT3_PC
#define I2C_scl__0__PC2 CYREG_PRT3_PC2
#define I2C_scl__0__PORT 3u
#define I2C_scl__0__PS CYREG_PRT3_PS
#define I2C_scl__0__SHIFT 0
#define I2C_scl__DR CYREG_PRT3_DR
#define I2C_scl__INTCFG CYREG_PRT3_INTCFG
#define I2C_scl__INTSTAT CYREG_PRT3_INTSTAT
#define I2C_scl__MASK 0x01u
#define I2C_scl__PA__CFG0 CYREG_UDB_PA3_CFG0
#define I2C_scl__PA__CFG1 CYREG_UDB_PA3_CFG1
#define I2C_scl__PA__CFG10 CYREG_UDB_PA3_CFG10
#define I2C_scl__PA__CFG11 CYREG_UDB_PA3_CFG11
#define I2C_scl__PA__CFG12 CYREG_UDB_PA3_CFG12
#define I2C_scl__PA__CFG13 CYREG_UDB_PA3_CFG13
#define I2C_scl__PA__CFG14 CYREG_UDB_PA3_CFG14
#define I2C_scl__PA__CFG2 CYREG_UDB_PA3_CFG2
#define I2C_scl__PA__CFG3 CYREG_UDB_PA3_CFG3
#define I2C_scl__PA__CFG4 CYREG_UDB_PA3_CFG4
#define I2C_scl__PA__CFG5 CYREG_UDB_PA3_CFG5
#define I2C_scl__PA__CFG6 CYREG_UDB_PA3_CFG6
#define I2C_scl__PA__CFG7 CYREG_UDB_PA3_CFG7
#define I2C_scl__PA__CFG8 CYREG_UDB_PA3_CFG8
#define I2C_scl__PA__CFG9 CYREG_UDB_PA3_CFG9
#define I2C_scl__PC CYREG_PRT3_PC
#define I2C_scl__PC2 CYREG_PRT3_PC2
#define I2C_scl__PORT 3u
#define I2C_scl__PS CYREG_PRT3_PS
#define I2C_scl__SHIFT 0

/* I2C_sda */
#define I2C_sda__0__DM__MASK 0x38u
#define I2C_sda__0__DM__SHIFT 3
#define I2C_sda__0__DR CYREG_PRT3_DR
#define I2C_sda__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define I2C_sda__0__HSIOM_MASK 0x000000F0u
#define I2C_sda__0__HSIOM_SHIFT 4u
#define I2C_sda__0__INTCFG CYREG_PRT3_INTCFG
#define I2C_sda__0__INTSTAT CYREG_PRT3_INTSTAT
#define I2C_sda__0__MASK 0x02u
#define I2C_sda__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define I2C_sda__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define I2C_sda__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define I2C_sda__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define I2C_sda__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define I2C_sda__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define I2C_sda__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define I2C_sda__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define I2C_sda__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define I2C_sda__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define I2C_sda__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define I2C_sda__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define I2C_sda__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define I2C_sda__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define I2C_sda__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define I2C_sda__0__PC CYREG_PRT3_PC
#define I2C_sda__0__PC2 CYREG_PRT3_PC2
#define I2C_sda__0__PORT 3u
#define I2C_sda__0__PS CYREG_PRT3_PS
#define I2C_sda__0__SHIFT 1
#define I2C_sda__DR CYREG_PRT3_DR
#define I2C_sda__INTCFG CYREG_PRT3_INTCFG
#define I2C_sda__INTSTAT CYREG_PRT3_INTSTAT
#define I2C_sda__MASK 0x02u
#define I2C_sda__PA__CFG0 CYREG_UDB_PA3_CFG0
#define I2C_sda__PA__CFG1 CYREG_UDB_PA3_CFG1
#define I2C_sda__PA__CFG10 CYREG_UDB_PA3_CFG10
#define I2C_sda__PA__CFG11 CYREG_UDB_PA3_CFG11
#define I2C_sda__PA__CFG12 CYREG_UDB_PA3_CFG12
#define I2C_sda__PA__CFG13 CYREG_UDB_PA3_CFG13
#define I2C_sda__PA__CFG14 CYREG_UDB_PA3_CFG14
#define I2C_sda__PA__CFG2 CYREG_UDB_PA3_CFG2
#define I2C_sda__PA__CFG3 CYREG_UDB_PA3_CFG3
#define I2C_sda__PA__CFG4 CYREG_UDB_PA3_CFG4
#define I2C_sda__PA__CFG5 CYREG_UDB_PA3_CFG5
#define I2C_sda__PA__CFG6 CYREG_UDB_PA3_CFG6
#define I2C_sda__PA__CFG7 CYREG_UDB_PA3_CFG7
#define I2C_sda__PA__CFG8 CYREG_UDB_PA3_CFG8
#define I2C_sda__PA__CFG9 CYREG_UDB_PA3_CFG9
#define I2C_sda__PC CYREG_PRT3_PC
#define I2C_sda__PC2 CYREG_PRT3_PC2
#define I2C_sda__PORT 3u
#define I2C_sda__PS CYREG_PRT3_PS
#define I2C_sda__SHIFT 1

/* PWM_AB */
#define PWM_AB__0__DM__MASK 0x1C0000u
#define PWM_AB__0__DM__SHIFT 18
#define PWM_AB__0__DR CYREG_PRT2_DR
#define PWM_AB__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define PWM_AB__0__HSIOM_MASK 0x0F000000u
#define PWM_AB__0__HSIOM_SHIFT 24u
#define PWM_AB__0__INTCFG CYREG_PRT2_INTCFG
#define PWM_AB__0__INTSTAT CYREG_PRT2_INTSTAT
#define PWM_AB__0__MASK 0x40u
#define PWM_AB__0__OUT_SEL CYREG_UDB_PA2_CFG10
#define PWM_AB__0__OUT_SEL_SHIFT 12u
#define PWM_AB__0__OUT_SEL_VAL 0u
#define PWM_AB__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define PWM_AB__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define PWM_AB__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define PWM_AB__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define PWM_AB__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define PWM_AB__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define PWM_AB__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define PWM_AB__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define PWM_AB__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define PWM_AB__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define PWM_AB__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define PWM_AB__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define PWM_AB__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define PWM_AB__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define PWM_AB__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define PWM_AB__0__PC CYREG_PRT2_PC
#define PWM_AB__0__PC2 CYREG_PRT2_PC2
#define PWM_AB__0__PORT 2u
#define PWM_AB__0__PS CYREG_PRT2_PS
#define PWM_AB__0__SHIFT 6
#define PWM_AB__DR CYREG_PRT2_DR
#define PWM_AB__INTCFG CYREG_PRT2_INTCFG
#define PWM_AB__INTSTAT CYREG_PRT2_INTSTAT
#define PWM_AB__MASK 0x40u
#define PWM_AB__PA__CFG0 CYREG_UDB_PA2_CFG0
#define PWM_AB__PA__CFG1 CYREG_UDB_PA2_CFG1
#define PWM_AB__PA__CFG10 CYREG_UDB_PA2_CFG10
#define PWM_AB__PA__CFG11 CYREG_UDB_PA2_CFG11
#define PWM_AB__PA__CFG12 CYREG_UDB_PA2_CFG12
#define PWM_AB__PA__CFG13 CYREG_UDB_PA2_CFG13
#define PWM_AB__PA__CFG14 CYREG_UDB_PA2_CFG14
#define PWM_AB__PA__CFG2 CYREG_UDB_PA2_CFG2
#define PWM_AB__PA__CFG3 CYREG_UDB_PA2_CFG3
#define PWM_AB__PA__CFG4 CYREG_UDB_PA2_CFG4
#define PWM_AB__PA__CFG5 CYREG_UDB_PA2_CFG5
#define PWM_AB__PA__CFG6 CYREG_UDB_PA2_CFG6
#define PWM_AB__PA__CFG7 CYREG_UDB_PA2_CFG7
#define PWM_AB__PA__CFG8 CYREG_UDB_PA2_CFG8
#define PWM_AB__PA__CFG9 CYREG_UDB_PA2_CFG9
#define PWM_AB__PC CYREG_PRT2_PC
#define PWM_AB__PC2 CYREG_PRT2_PC2
#define PWM_AB__PORT 2u
#define PWM_AB__PS CYREG_PRT2_PS
#define PWM_AB__SHIFT 6

/* PWM_CD */
#define PWM_CD__0__DM__MASK 0xE00000u
#define PWM_CD__0__DM__SHIFT 21
#define PWM_CD__0__DR CYREG_PRT2_DR
#define PWM_CD__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define PWM_CD__0__HSIOM_MASK 0xF0000000u
#define PWM_CD__0__HSIOM_SHIFT 28u
#define PWM_CD__0__INTCFG CYREG_PRT2_INTCFG
#define PWM_CD__0__INTSTAT CYREG_PRT2_INTSTAT
#define PWM_CD__0__MASK 0x80u
#define PWM_CD__0__OUT_SEL CYREG_UDB_PA2_CFG10
#define PWM_CD__0__OUT_SEL_SHIFT 14u
#define PWM_CD__0__OUT_SEL_VAL 1u
#define PWM_CD__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define PWM_CD__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define PWM_CD__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define PWM_CD__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define PWM_CD__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define PWM_CD__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define PWM_CD__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define PWM_CD__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define PWM_CD__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define PWM_CD__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define PWM_CD__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define PWM_CD__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define PWM_CD__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define PWM_CD__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define PWM_CD__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define PWM_CD__0__PC CYREG_PRT2_PC
#define PWM_CD__0__PC2 CYREG_PRT2_PC2
#define PWM_CD__0__PORT 2u
#define PWM_CD__0__PS CYREG_PRT2_PS
#define PWM_CD__0__SHIFT 7
#define PWM_CD__DR CYREG_PRT2_DR
#define PWM_CD__INTCFG CYREG_PRT2_INTCFG
#define PWM_CD__INTSTAT CYREG_PRT2_INTSTAT
#define PWM_CD__MASK 0x80u
#define PWM_CD__PA__CFG0 CYREG_UDB_PA2_CFG0
#define PWM_CD__PA__CFG1 CYREG_UDB_PA2_CFG1
#define PWM_CD__PA__CFG10 CYREG_UDB_PA2_CFG10
#define PWM_CD__PA__CFG11 CYREG_UDB_PA2_CFG11
#define PWM_CD__PA__CFG12 CYREG_UDB_PA2_CFG12
#define PWM_CD__PA__CFG13 CYREG_UDB_PA2_CFG13
#define PWM_CD__PA__CFG14 CYREG_UDB_PA2_CFG14
#define PWM_CD__PA__CFG2 CYREG_UDB_PA2_CFG2
#define PWM_CD__PA__CFG3 CYREG_UDB_PA2_CFG3
#define PWM_CD__PA__CFG4 CYREG_UDB_PA2_CFG4
#define PWM_CD__PA__CFG5 CYREG_UDB_PA2_CFG5
#define PWM_CD__PA__CFG6 CYREG_UDB_PA2_CFG6
#define PWM_CD__PA__CFG7 CYREG_UDB_PA2_CFG7
#define PWM_CD__PA__CFG8 CYREG_UDB_PA2_CFG8
#define PWM_CD__PA__CFG9 CYREG_UDB_PA2_CFG9
#define PWM_CD__PC CYREG_PRT2_PC
#define PWM_CD__PC2 CYREG_PRT2_PC2
#define PWM_CD__PORT 2u
#define PWM_CD__PS CYREG_PRT2_PS
#define PWM_CD__SHIFT 7

/* PWM_PWMUDB */
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG CYREG_UDB_W16_ACTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG CYREG_UDB_W16_CTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG CYREG_UDB_W16_CTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG CYREG_UDB_W16_CTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG CYREG_UDB_W16_CTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG CYREG_UDB_W16_MSK_00
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG CYREG_UDB_W16_MSK_00
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG CYREG_UDB_W16_MSK_00
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG CYREG_UDB_W16_MSK_00
#define PWM_PWMUDB_genblk1_ctrlreg__32BIT_CONTROL_AUX_CTL_REG CYREG_UDB_W32_ACTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__32BIT_CONTROL_REG CYREG_UDB_W32_CTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__32BIT_COUNT_REG CYREG_UDB_W32_CTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__32BIT_PERIOD_REG CYREG_UDB_W32_MSK_00
#define PWM_PWMUDB_genblk1_ctrlreg__7__MASK 0x80u
#define PWM_PWMUDB_genblk1_ctrlreg__7__POS 7
#define PWM_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG CYREG_UDB_W8_ACTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__CONTROL_REG CYREG_UDB_W8_CTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG CYREG_UDB_CAT16_CTL_ST_00
#define PWM_PWMUDB_genblk1_ctrlreg__COUNT_REG CYREG_UDB_W8_CTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG CYREG_UDB_CAT16_CTL_ST_00
#define PWM_PWMUDB_genblk1_ctrlreg__MASK 0x80u
#define PWM_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define PWM_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define PWM_PWMUDB_genblk1_ctrlreg__PERIOD_REG CYREG_UDB_W8_MSK_00
#define PWM_PWMUDB_genblk8_stsreg__0__MASK 0x01u
#define PWM_PWMUDB_genblk8_stsreg__0__POS 0
#define PWM_PWMUDB_genblk8_stsreg__1__MASK 0x02u
#define PWM_PWMUDB_genblk8_stsreg__1__POS 1
#define PWM_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG CYREG_UDB_W16_ACTL_00
#define PWM_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG CYREG_UDB_W16_ST_00
#define PWM_PWMUDB_genblk8_stsreg__2__MASK 0x04u
#define PWM_PWMUDB_genblk8_stsreg__2__POS 2
#define PWM_PWMUDB_genblk8_stsreg__3__MASK 0x08u
#define PWM_PWMUDB_genblk8_stsreg__3__POS 3
#define PWM_PWMUDB_genblk8_stsreg__32BIT_MASK_REG CYREG_UDB_W32_MSK_00
#define PWM_PWMUDB_genblk8_stsreg__32BIT_STATUS_AUX_CTL_REG CYREG_UDB_W32_ACTL_00
#define PWM_PWMUDB_genblk8_stsreg__32BIT_STATUS_REG CYREG_UDB_W32_ST_00
#define PWM_PWMUDB_genblk8_stsreg__MASK 0x0Fu
#define PWM_PWMUDB_genblk8_stsreg__MASK_REG CYREG_UDB_W8_MSK_00
#define PWM_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define PWM_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define PWM_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL_00
#define PWM_PWMUDB_genblk8_stsreg__STATUS_CNT_REG CYREG_UDB_CAT16_CTL_ST_00
#define PWM_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG CYREG_UDB_CAT16_CTL_ST_00
#define PWM_PWMUDB_genblk8_stsreg__STATUS_REG CYREG_UDB_W8_ST_00
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG CYREG_UDB_W16_A0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG CYREG_UDB_W16_A1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG CYREG_UDB_W16_D0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG CYREG_UDB_W16_D1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG CYREG_UDB_W16_ACTL_00
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG CYREG_UDB_W16_F0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG CYREG_UDB_W16_F1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__32BIT_A0_REG CYREG_UDB_W32_A0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__32BIT_A1_REG CYREG_UDB_W32_A1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__32BIT_D0_REG CYREG_UDB_W32_D0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__32BIT_D1_REG CYREG_UDB_W32_D1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__32BIT_DP_AUX_CTL_REG CYREG_UDB_W32_ACTL_00
#define PWM_PWMUDB_sP8_pwmdp_u0__32BIT_F0_REG CYREG_UDB_W32_F0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__32BIT_F1_REG CYREG_UDB_W32_F1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__A0_A1_REG CYREG_UDB_CAT16_A_00
#define PWM_PWMUDB_sP8_pwmdp_u0__A0_REG CYREG_UDB_W8_A0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__A1_REG CYREG_UDB_W8_A1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__D0_D1_REG CYREG_UDB_CAT16_D_00
#define PWM_PWMUDB_sP8_pwmdp_u0__D0_REG CYREG_UDB_W8_D0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__D1_REG CYREG_UDB_W8_D1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_00
#define PWM_PWMUDB_sP8_pwmdp_u0__F0_F1_REG CYREG_UDB_CAT16_F_00
#define PWM_PWMUDB_sP8_pwmdp_u0__F0_REG CYREG_UDB_W8_F0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__F1_REG CYREG_UDB_W8_F1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define PWM_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00

/* UART_rx */
#define UART_rx__0__DM__MASK 0x07u
#define UART_rx__0__DM__SHIFT 0
#define UART_rx__0__DR CYREG_PRT4_DR
#define UART_rx__0__HSIOM CYREG_HSIOM_PORT_SEL4
#define UART_rx__0__HSIOM_MASK 0x0000000Fu
#define UART_rx__0__HSIOM_SHIFT 0u
#define UART_rx__0__INTCFG CYREG_PRT4_INTCFG
#define UART_rx__0__INTSTAT CYREG_PRT4_INTSTAT
#define UART_rx__0__MASK 0x01u
#define UART_rx__0__PC CYREG_PRT4_PC
#define UART_rx__0__PC2 CYREG_PRT4_PC2
#define UART_rx__0__PORT 4u
#define UART_rx__0__PS CYREG_PRT4_PS
#define UART_rx__0__SHIFT 0
#define UART_rx__DR CYREG_PRT4_DR
#define UART_rx__INTCFG CYREG_PRT4_INTCFG
#define UART_rx__INTSTAT CYREG_PRT4_INTSTAT
#define UART_rx__MASK 0x01u
#define UART_rx__PC CYREG_PRT4_PC
#define UART_rx__PC2 CYREG_PRT4_PC2
#define UART_rx__PORT 4u
#define UART_rx__PS CYREG_PRT4_PS
#define UART_rx__SHIFT 0

/* UART_SCB */
#define UART_SCB__BIST_CONTROL CYREG_SCB0_BIST_CONTROL
#define UART_SCB__BIST_DATA CYREG_SCB0_BIST_DATA
#define UART_SCB__CTRL CYREG_SCB0_CTRL
#define UART_SCB__EZ_DATA00 CYREG_SCB0_EZ_DATA00
#define UART_SCB__EZ_DATA01 CYREG_SCB0_EZ_DATA01
#define UART_SCB__EZ_DATA02 CYREG_SCB0_EZ_DATA02
#define UART_SCB__EZ_DATA03 CYREG_SCB0_EZ_DATA03
#define UART_SCB__EZ_DATA04 CYREG_SCB0_EZ_DATA04
#define UART_SCB__EZ_DATA05 CYREG_SCB0_EZ_DATA05
#define UART_SCB__EZ_DATA06 CYREG_SCB0_EZ_DATA06
#define UART_SCB__EZ_DATA07 CYREG_SCB0_EZ_DATA07
#define UART_SCB__EZ_DATA08 CYREG_SCB0_EZ_DATA08
#define UART_SCB__EZ_DATA09 CYREG_SCB0_EZ_DATA09
#define UART_SCB__EZ_DATA10 CYREG_SCB0_EZ_DATA10
#define UART_SCB__EZ_DATA11 CYREG_SCB0_EZ_DATA11
#define UART_SCB__EZ_DATA12 CYREG_SCB0_EZ_DATA12
#define UART_SCB__EZ_DATA13 CYREG_SCB0_EZ_DATA13
#define UART_SCB__EZ_DATA14 CYREG_SCB0_EZ_DATA14
#define UART_SCB__EZ_DATA15 CYREG_SCB0_EZ_DATA15
#define UART_SCB__EZ_DATA16 CYREG_SCB0_EZ_DATA16
#define UART_SCB__EZ_DATA17 CYREG_SCB0_EZ_DATA17
#define UART_SCB__EZ_DATA18 CYREG_SCB0_EZ_DATA18
#define UART_SCB__EZ_DATA19 CYREG_SCB0_EZ_DATA19
#define UART_SCB__EZ_DATA20 CYREG_SCB0_EZ_DATA20
#define UART_SCB__EZ_DATA21 CYREG_SCB0_EZ_DATA21
#define UART_SCB__EZ_DATA22 CYREG_SCB0_EZ_DATA22
#define UART_SCB__EZ_DATA23 CYREG_SCB0_EZ_DATA23
#define UART_SCB__EZ_DATA24 CYREG_SCB0_EZ_DATA24
#define UART_SCB__EZ_DATA25 CYREG_SCB0_EZ_DATA25
#define UART_SCB__EZ_DATA26 CYREG_SCB0_EZ_DATA26
#define UART_SCB__EZ_DATA27 CYREG_SCB0_EZ_DATA27
#define UART_SCB__EZ_DATA28 CYREG_SCB0_EZ_DATA28
#define UART_SCB__EZ_DATA29 CYREG_SCB0_EZ_DATA29
#define UART_SCB__EZ_DATA30 CYREG_SCB0_EZ_DATA30
#define UART_SCB__EZ_DATA31 CYREG_SCB0_EZ_DATA31
#define UART_SCB__I2C_CFG CYREG_SCB0_I2C_CFG
#define UART_SCB__I2C_CTRL CYREG_SCB0_I2C_CTRL
#define UART_SCB__I2C_M_CMD CYREG_SCB0_I2C_M_CMD
#define UART_SCB__I2C_S_CMD CYREG_SCB0_I2C_S_CMD
#define UART_SCB__I2C_STATUS CYREG_SCB0_I2C_STATUS
#define UART_SCB__INTR_CAUSE CYREG_SCB0_INTR_CAUSE
#define UART_SCB__INTR_I2C_EC CYREG_SCB0_INTR_I2C_EC
#define UART_SCB__INTR_I2C_EC_MASK CYREG_SCB0_INTR_I2C_EC_MASK
#define UART_SCB__INTR_I2C_EC_MASKED CYREG_SCB0_INTR_I2C_EC_MASKED
#define UART_SCB__INTR_M CYREG_SCB0_INTR_M
#define UART_SCB__INTR_M_MASK CYREG_SCB0_INTR_M_MASK
#define UART_SCB__INTR_M_MASKED CYREG_SCB0_INTR_M_MASKED
#define UART_SCB__INTR_M_SET CYREG_SCB0_INTR_M_SET
#define UART_SCB__INTR_RX CYREG_SCB0_INTR_RX
#define UART_SCB__INTR_RX_MASK CYREG_SCB0_INTR_RX_MASK
#define UART_SCB__INTR_RX_MASKED CYREG_SCB0_INTR_RX_MASKED
#define UART_SCB__INTR_RX_SET CYREG_SCB0_INTR_RX_SET
#define UART_SCB__INTR_S CYREG_SCB0_INTR_S
#define UART_SCB__INTR_S_MASK CYREG_SCB0_INTR_S_MASK
#define UART_SCB__INTR_S_MASKED CYREG_SCB0_INTR_S_MASKED
#define UART_SCB__INTR_S_SET CYREG_SCB0_INTR_S_SET
#define UART_SCB__INTR_SPI_EC CYREG_SCB0_INTR_SPI_EC
#define UART_SCB__INTR_SPI_EC_MASK CYREG_SCB0_INTR_SPI_EC_MASK
#define UART_SCB__INTR_SPI_EC_MASKED CYREG_SCB0_INTR_SPI_EC_MASKED
#define UART_SCB__INTR_TX CYREG_SCB0_INTR_TX
#define UART_SCB__INTR_TX_MASK CYREG_SCB0_INTR_TX_MASK
#define UART_SCB__INTR_TX_MASKED CYREG_SCB0_INTR_TX_MASKED
#define UART_SCB__INTR_TX_SET CYREG_SCB0_INTR_TX_SET
#define UART_SCB__RX_CTRL CYREG_SCB0_RX_CTRL
#define UART_SCB__RX_FIFO_CTRL CYREG_SCB0_RX_FIFO_CTRL
#define UART_SCB__RX_FIFO_RD CYREG_SCB0_RX_FIFO_RD
#define UART_SCB__RX_FIFO_RD_SILENT CYREG_SCB0_RX_FIFO_RD_SILENT
#define UART_SCB__RX_FIFO_STATUS CYREG_SCB0_RX_FIFO_STATUS
#define UART_SCB__RX_MATCH CYREG_SCB0_RX_MATCH
#define UART_SCB__SPI_CTRL CYREG_SCB0_SPI_CTRL
#define UART_SCB__SPI_STATUS CYREG_SCB0_SPI_STATUS
#define UART_SCB__SS0_POSISTION 0u
#define UART_SCB__SS1_POSISTION 1u
#define UART_SCB__SS2_POSISTION 2u
#define UART_SCB__SS3_POSISTION 3u
#define UART_SCB__STATUS CYREG_SCB0_STATUS
#define UART_SCB__TX_CTRL CYREG_SCB0_TX_CTRL
#define UART_SCB__TX_FIFO_CTRL CYREG_SCB0_TX_FIFO_CTRL
#define UART_SCB__TX_FIFO_STATUS CYREG_SCB0_TX_FIFO_STATUS
#define UART_SCB__TX_FIFO_WR CYREG_SCB0_TX_FIFO_WR
#define UART_SCB__UART_CTRL CYREG_SCB0_UART_CTRL
#define UART_SCB__UART_RX_CTRL CYREG_SCB0_UART_RX_CTRL
#define UART_SCB__UART_RX_STATUS CYREG_SCB0_UART_RX_STATUS
#define UART_SCB__UART_TX_CTRL CYREG_SCB0_UART_TX_CTRL

/* UART_SCBCLK */
#define UART_SCBCLK__DIVIDER_MASK 0x0000FFFFu
#define UART_SCBCLK__ENABLE CYREG_CLK_DIVIDER_A01
#define UART_SCBCLK__ENABLE_MASK 0x80000000u
#define UART_SCBCLK__MASK 0x80000000u
#define UART_SCBCLK__REGISTER CYREG_CLK_DIVIDER_A01

/* UART_tx */
#define UART_tx__0__DM__MASK 0x38u
#define UART_tx__0__DM__SHIFT 3
#define UART_tx__0__DR CYREG_PRT4_DR
#define UART_tx__0__HSIOM CYREG_HSIOM_PORT_SEL4
#define UART_tx__0__HSIOM_MASK 0x000000F0u
#define UART_tx__0__HSIOM_SHIFT 4u
#define UART_tx__0__INTCFG CYREG_PRT4_INTCFG
#define UART_tx__0__INTSTAT CYREG_PRT4_INTSTAT
#define UART_tx__0__MASK 0x02u
#define UART_tx__0__PC CYREG_PRT4_PC
#define UART_tx__0__PC2 CYREG_PRT4_PC2
#define UART_tx__0__PORT 4u
#define UART_tx__0__PS CYREG_PRT4_PS
#define UART_tx__0__SHIFT 1
#define UART_tx__DR CYREG_PRT4_DR
#define UART_tx__INTCFG CYREG_PRT4_INTCFG
#define UART_tx__INTSTAT CYREG_PRT4_INTSTAT
#define UART_tx__MASK 0x02u
#define UART_tx__PC CYREG_PRT4_PC
#define UART_tx__PC2 CYREG_PRT4_PC2
#define UART_tx__PORT 4u
#define UART_tx__PS CYREG_PRT4_PS
#define UART_tx__SHIFT 1

/* Clock */
#define Clock__DIVIDER_MASK 0x0000FFFFu
#define Clock__ENABLE CYREG_CLK_DIVIDER_A00
#define Clock__ENABLE_MASK 0x80000000u
#define Clock__MASK 0x80000000u
#define Clock__REGISTER CYREG_CLK_DIVIDER_A00

/* Current */
#define Current__0__DM__MASK 0x38000u
#define Current__0__DM__SHIFT 15
#define Current__0__DR CYREG_PRT2_DR
#define Current__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define Current__0__HSIOM_MASK 0x00F00000u
#define Current__0__HSIOM_SHIFT 20u
#define Current__0__INTCFG CYREG_PRT2_INTCFG
#define Current__0__INTSTAT CYREG_PRT2_INTSTAT
#define Current__0__MASK 0x20u
#define Current__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Current__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Current__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Current__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Current__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Current__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Current__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Current__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Current__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Current__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Current__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Current__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Current__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Current__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Current__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Current__0__PC CYREG_PRT2_PC
#define Current__0__PC2 CYREG_PRT2_PC2
#define Current__0__PORT 2u
#define Current__0__PS CYREG_PRT2_PS
#define Current__0__SHIFT 5
#define Current__DR CYREG_PRT2_DR
#define Current__INTCFG CYREG_PRT2_INTCFG
#define Current__INTSTAT CYREG_PRT2_INTSTAT
#define Current__MASK 0x20u
#define Current__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Current__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Current__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Current__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Current__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Current__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Current__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Current__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Current__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Current__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Current__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Current__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Current__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Current__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Current__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Current__PC CYREG_PRT2_PC
#define Current__PC2 CYREG_PRT2_PC2
#define Current__PORT 2u
#define Current__PS CYREG_PRT2_PS
#define Current__SHIFT 5

/* Miscellaneous */
#define CY_PROJECT_NAME "MotorDriver"
#define CY_VERSION "PSoC Creator  3.3 CP1"
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 18u
#define CYDEV_CHIP_DIE_PSOC4A 10u
#define CYDEV_CHIP_DIE_PSOC5LP 17u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x04C81193u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 10u
#define CYDEV_CHIP_MEMBER_4C 15u
#define CYDEV_CHIP_MEMBER_4D 6u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 11u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 9u
#define CYDEV_CHIP_MEMBER_4I 14u
#define CYDEV_CHIP_MEMBER_4J 7u
#define CYDEV_CHIP_MEMBER_4K 8u
#define CYDEV_CHIP_MEMBER_4L 13u
#define CYDEV_CHIP_MEMBER_4M 12u
#define CYDEV_CHIP_MEMBER_4N 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 17u
#define CYDEV_CHIP_MEMBER_5B 16u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4A
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
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
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 1u
#define CYDEV_DFT_SELECT_CLK1 2u
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0400
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_M0S8_CTBM_VERSION 0
#define CYIPBLOCK_m0s8cpuss_VERSION 0
#define CYIPBLOCK_m0s8csd_VERSION 0
#define CYIPBLOCK_m0s8gpio2_VERSION 0
#define CYIPBLOCK_m0s8hsiom4a_VERSION 0
#define CYIPBLOCK_m0s8lcd_VERSION 0
#define CYIPBLOCK_m0s8lpcomp_VERSION 0
#define CYIPBLOCK_m0s8pclk_VERSION 0
#define CYIPBLOCK_m0s8sar_VERSION 0
#define CYIPBLOCK_m0s8scb_VERSION 0
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 0
#define CYIPBLOCK_m0s8udbif_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 2
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
