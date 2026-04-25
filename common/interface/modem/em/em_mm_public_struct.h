/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   em_mm_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_MM_PUBLIC_STRUCT_H
#define _EM_MM_PUBLIC_STRUCT_H

#include "em_public_struct.h"

/* MM Enum */

typedef enum {
    ACCESS_CLASS_NOT_BARRED      = 0,
    ACCESS_CLASS_EMERGENCY_ONLY  = 1,
    ACCESS_CLASS_ALL_BARRED      = 2,
    ACCESS_CLASS_NOT_AVAILABLE   = 3
} access_class_level_enum;


typedef enum {
    PPAC_FOR_NONE_DOMAIN = 0,
    PPAC_FOR_CS_DOMAIN = 1,
    PPAC_FOR_PS_DOMAIN = 2,
    PPAC_FOR_CS_PS_DOMAIN = 3,
    PPAC_NOT_AVAILABLE = 4
} ppac_domain_enum;


typedef enum
{
    EM_MM_AS_FAIL,
    EM_GMM_AS_FAIL
}em_as_fail_type_enum;


typedef enum
{
    EM_MM_LR_NONE = 0,
    EM_MM_LR_ONGOING,
    EM_MM_LR_SUCCESS,
    EM_MM_LR_SUCCESS_PS_ONLY,
    EM_MM_LR_FAILURE,
    EM_MM_LR_END
}em_mm_lr_status_enum;

typedef enum
{
    EM_MM_NONE = 0,
    EM_MM_REJECTED_BY_NW, //getting rejected by NW
    EM_MM_TIMER_TIME_OUT, //Guard timer timeout
    EM_MM_LOW_LAYER_FAILURE,//low layer failure
    EM_MM_ABORT,//procedure is abort
    EM_MM_AUTH_FAILURE,
    EM_MM_AUTH_REJECTED_BY_NW,
    EM_MM_END
}em_lr_failure_cause_enum;

typedef enum
{
    EM_CSFB_NONE    = 0,
    EM_CSFB_START   = 1,
    EM_CSFB_SUCCESS = 2,
    EM_CSFB_FAIL    = 3
} em_csfb_status_enum;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_bool is_mt_csfb_lu_needed;
    kal_bool is_t3240_exp;
}em_mm_mt_csfb_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    em_csfb_status_enum csfb_status;
}em_mm_csfb_status_ind_struct;

typedef enum
{
    EM_REG_TYPE_LU,
    EM_REG_TYPE_ATTACH,
    EM_REG_TYPE_RAU
}em_reg_type_enum;

typedef enum
{
    EM_MM_AUTH_REJ,
    EM_GMM_AUTH_REJ
}em_auth_rej_type_enum;

typedef enum 
{ 
    EM_MM_MTCSFB_NONE    = 0, 
    EM_MM_MTCSFB_START   = 1, 
    EM_MM_MTCSFB_SUCCESS = 2, 
    EM_MM_MTCSFB_FAIL    = 3, 
    EM_MM_MTCSFB_FAIL_PAGING_GUARD_TIMER_EXPIRED = 4, 
    EM_MM_MTCSFB_FAIL_T3240_TIMEOUT = 5, 
    EM_MM_MTCSFB_FAIL_AUTH_FAIL = 6, 
    EM_MM_MTCSFB_FAIL_CONN_EST_FAIL = 7, 
    EM_MM_MTCSFB_FAIL_LAU_REJECT = 8, 
    EM_MM_MTCSFB_FAIL_RRC_REL_IND_RECEIVED = 9, 
    EM_MM_MTCSFB_LAU_ACCEPT = 10, 
    EM_MM_MTCSFB_FAIL_PLMN_LOSS_IND_RECEIVED = 11, 
    EM_MM_MTCSFB_FAIL_SIM_ERROR_IND_RECEIVED = 12, 
    EM_MM_MTCSFB_PAGING_RESPONSE_SENT = 13,   
    EM_MM_MTCSFB_PAGING_BLOCKED_BY_ACCESS_BARRED = 14 
} em_mt_csfb_status_enum; 
 
typedef enum 
{ 
    EM_MM_MT_CS_NONE, 
	EM_MM_MT_CS_SUCCESS, 
    EM_MM_RR_REL_IND_RECEIVED , 
    EM_MM_MT_CS_FAIL_LU_ABNORMAL, 
    EM_MM_T3240_TIMEOUT, 
    EM_MM_PAGING_RESPONSE_SENT, 
    EM_MM_PAGING_BLOCKED_BY_ACCESS_BARRED, 
    EM_MM_AUTH_REJECT, 
    EM_MM_AUTH_FAIL, 
    EM_MM_PLMN_LOSS_IND_RECEIVED, 
    EM_MM_SIM_ERROR_IND_RECEIVED, 
    EM_MM_CONN_EST_FAIL    
} em_mm_mt_cs_status; 
 
typedef enum 
{ 
    EM_MM_MT_CS_CALL    = 0, 
    EM_MM_MT_CSFB_CALL  = 1, 
    EM_MM_MT_CALL_NONE  = 2 
} em_mm_mt_call_type_enum; 
 
typedef struct 
{ 
    LOCAL_PARA_HDR 
    em_info_enum em_info; 
    em_mt_csfb_status_enum mt_csfb_status; 
    em_mm_mt_call_type_enum mm_mt_call_type; 
	kal_uint8 mm_state; 
	kal_uint8 mm_cause; 
	em_mm_mt_cs_status mm_mt_cs_status; 
	kal_uint8 reserved_for_padding;  
	kal_uint8 reserved_for_padding1; 
	kal_uint8 reserved_for_padding2; 
}em_mm_mtcs_mtcsfb_status_ind_struct;  
 
#endif /* _EM_MM_PUBLIC_STRUCT_H */ 

