/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   mml1_custom_mipi.h
 *
 * Project:
 * --------
 *   MT6290 EVB
 *
 * Description:
 * ------------
 *   MT6290 EVB Multi-Mode Multi-RAT L1 constance definition
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *******************************************************************************/
#ifndef  _MML1_CUSTOM_MIPI_H_Set5_
#define  _MML1_CUSTOM_MIPI_H_Set5_

#include "mml1_mipi_public.h"

#define MIPI_USID_INIT0_Set5           0x0000
#define MIPI_USID_ASM0_Set5            0x000C //Main 3P18T(TXM)
#define MIPI_USID_ASM1_Set5            0x000A //DRX ASM DP12T(LMB)
#define MIPI_USID_ASM2_Set5            0x000B //DRX ASM SP6T(HB)
#define MIPI_USID_ASM3_Set5            0x0009 
#define MIPI_USID_PA0_Set5             0x000F //HMB PA
#define MIPI_USID_PA1_Set5             0x000D //LB PA
#define MIPI_USID_PA2_Set5             0x000E //B42 PA
#define MIPI_USID_ANT0_Set5            0x0006
#define MIPI_USID_TAS_Set5             0x0007
#define MIPI_USID_EXT_VPA_Set5         0x0005
///TODO:ELNA TBD
#define MIPI_USID_ELNA_NONE_Set5       0x0000
#define MIPI_USID_ELNA1_Set5           0x0001
#define MIPI_USID_ELNA2_Set5           0x0002
#define MIPI_USID_ELNA3_Set5           0x0003
#define MIPI_USID_ELNA4_Set5           0x0004
#define MIPI_USID_ELNA5_Set5           0x0005
#define MIPI_USID_ELNA6_Set5           0x0006
#define MIPI_USID_ELNA7_Set5           0x0007
#define MIPI_USID_ELNA8_Set5           0x0008
#define MIPI_USID_ELNA9_Set5           0x0009
#define MIPI_USID_ELNA10_Set5          0x000A
#define MIPI_USID_ELNA11_Set5          0x000B
#define MIPI_USID_ELNA12_Set5          0x000C

/* ===================================================================================== */
/*   ETM feature enable control flag                                                                                                                                                  */
/* ===================================================================================== */
#define IS_MML1_ETM_FRONT_END_ENABLE_Set5                      0   // 0: Disable ETM feature; 1:Enable ETM feature.

/* ===================================================================================== */
/*   ETM USID Value                                                                                                                                                                       */
/* ===================================================================================== */
#define MIPI_ETM0_USID_Set5                                    0x000C

/* ===================================================================================== */
/*   ETM MIPI Port Index                                                                                                                                                                 */
/* ===================================================================================== */
#define MML1_ETM0_MIPI_PORT_Set5                               MML1_MIPI_PORT3

/* ===================================================================================== */
/*   ET-DAC Index                                                                                                                                                                         */
/*                             ET_DAC_INDEX_0: if ETM is connected to ET-DAC0;                                                                                         */
/*                             ET_DAC_INDEX_1: if ETM is connected to ET-DAC1;                                                                                         */
/*                             ET_DAC_INDEX_NULL: if ETM is not connected to any ET-DAC;                                                                          */
/* ===================================================================================== */
#define MML1_ETM0_ET_DAC_INDEX_Set5                            ET_DAC_INDEX_0

#endif


