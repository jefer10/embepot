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

/* DMA */
#define DMA__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define DMA__DRQ_NUMBER 0u
#define DMA__NUMBEROF_TDS 0u
#define DMA__PRIORITY 2u
#define DMA__TERMIN_EN 0u
#define DMA__TERMIN_SEL 0u
#define DMA__TERMOUT0_EN 0u
#define DMA__TERMOUT0_SEL 0u
#define DMA__TERMOUT1_EN 0u
#define DMA__TERMOUT1_SEL 0u
#define DMA_CHANNELS_USED__MASK0 0x00000001u

/* VOUT */
#define VOUT__0__INTTYPE CYREG_PICU3_INTTYPE5
#define VOUT__0__MASK 0x20u
#define VOUT__0__PC CYREG_PRT3_PC5
#define VOUT__0__PORT 3u
#define VOUT__0__SHIFT 5u
#define VOUT__AG CYREG_PRT3_AG
#define VOUT__AMUX CYREG_PRT3_AMUX
#define VOUT__BIE CYREG_PRT3_BIE
#define VOUT__BIT_MASK CYREG_PRT3_BIT_MASK
#define VOUT__BYP CYREG_PRT3_BYP
#define VOUT__CTL CYREG_PRT3_CTL
#define VOUT__DM0 CYREG_PRT3_DM0
#define VOUT__DM1 CYREG_PRT3_DM1
#define VOUT__DM2 CYREG_PRT3_DM2
#define VOUT__DR CYREG_PRT3_DR
#define VOUT__INP_DIS CYREG_PRT3_INP_DIS
#define VOUT__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define VOUT__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define VOUT__LCD_EN CYREG_PRT3_LCD_EN
#define VOUT__MASK 0x20u
#define VOUT__PORT 3u
#define VOUT__PRT CYREG_PRT3_PRT
#define VOUT__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define VOUT__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define VOUT__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define VOUT__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define VOUT__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define VOUT__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define VOUT__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define VOUT__PS CYREG_PRT3_PS
#define VOUT__SHIFT 5u
#define VOUT__SLW CYREG_PRT3_SLW

/* Clock_3 */
#define Clock_3__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define Clock_3__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define Clock_3__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define Clock_3__CFG2_SRC_SEL_MASK 0x07u
#define Clock_3__INDEX 0x00u
#define Clock_3__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_3__PM_ACT_MSK 0x01u
#define Clock_3__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_3__PM_STBY_MSK 0x01u

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "claseDAC-DMA"
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
#define CYDEV_INTR_RISING 0x00000000u
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
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
