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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __MTF_NVRAM_DEF_H__
#define __MTF_NVRAM_DEF_H__

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 


#include "nvram_defs.h"
#include "nvram_enums.h"


// LID Enums
    /********************************************
     *
     *  MTF Item
     *
     **********************************************/
typedef enum
{
        NVRAM_EF_MTF_START                   = NVRAM_LID_GRP_MTF(0),
        NVRAM_EF_MTF_DMF_MISC_STATISTICS_LID  = NVRAM_EF_MTF_START,


        NVRAM_EF_MTF_LAST_LID        = NVRAM_LID_GRP_MTF(63)
}nvram_lid_mtf_enum;

// VERNO

#define NVRAM_EF_MTF_DMF_MISC_STATISTICS_LID_VERNO              "001"

// Size and Total 

typedef struct
{
    kal_uint32  lte_attach_request_count;
    kal_uint32  lte_attach_accept_count;
    kal_uint32  lte_attach_reject_count;
    kal_uint32  lte_attach_3410_expiry_count;
    kal_uint32  non_ims_pdp_request_count;
    kal_uint32  non_ims_pdp_accept_count;
    kal_uint32  non_ims_pdp_reject_count;
    kal_uint32  non_ims_pdp_t3380_expiry_count;
    kal_uint32  ims_pdp_request_count;
    kal_uint32  ims_pdp_accept_count;
    kal_uint32  ims_pdp_reject_count;
    kal_uint32  ims_pdp_t3380_expiry_count;
    kal_uint32  non_ims_pdn_request_count;
    kal_uint32  non_ims_pdn_success_count;
    kal_uint32  non_ims_pdn_reject_count;
    kal_uint32  non_ims_pdn_t3482_expiry_count;
    kal_uint32  ims_pdn_request_count;
    kal_uint32  ims_pdn_success_count;
    kal_uint32  ims_pdn_reject_count;
    kal_uint32  ims_pdn_t3482_expiry_count; 

    kal_uint32  non_data_sim_paging_count;
    kal_uint32  non_data_sim_paging_for_volte_count;
    kal_uint32  non_data_sim_paging_for_sms_count;
    kal_uint32  non_data_sim_paging_for_detach_count;
    kal_uint32  non_data_sim_paging_fail_count;
    kal_uint32  non_data_sim_paging_for_others_count; 
   
} nvram_ef_mtf_dmf_misc_statistics_struct;

#define NVRAM_EF_MTF_DMF_MISC_STATISTICS_SIZE         sizeof(nvram_ef_mtf_dmf_misc_statistics_struct) 
#define NVRAM_EF_MTF_DMF_MISC_STATISTICS_TOTAL        (1 * NVRAM_DUAL_RECORD)




#ifdef __cplusplus
}
#endif 

#endif /* __L4_NVRAM_DEF_H__ */ 
