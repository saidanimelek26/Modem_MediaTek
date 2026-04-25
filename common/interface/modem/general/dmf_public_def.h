/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * dmf_public_def.h
 *
 * Project:
 * --------
 * UMOLYA
 *
 * Description:
 * ------------
 * DM Framework public structure/enum definition
 *
 * Author:
 * -------
 * -------
 *
 *
 * ==========================================================================
 * $Log$
 *
 *
 ****************************************************************************/


#ifndef _DMF_PUBLIC_DEF_H_
#define _DMF_PUBLIC_DEF_H_

#include "ps_public_enum.h"
#include "l3_inc_enums.h"
#include "ims_interface_md.h"

#include "em_vdm_public_struct.h"
#include "em_public_struct_xl1.h"
#include "em_public_struct_xl3.h"

#if 0 // DMF porting
/* under construction !*/
/* under construction !*/
#endif

typedef enum
{
    DMF_PAGING_REASON_VOLTE,
    DMF_PAGING_REASON_SMS,
    DMF_PAGING_REASON_DETACH,
    DMF_PAGING_REASON_PAGING_FAIL,
    DMF_PAGING_REASON_UNSPECIFIED,
    DMF_PAGING_REASON_MAX,
} dmf_info_collect_paging_reason_enum;

typedef enum
{
    DMF_EMM_ATTACH_NONE,
    DMF_EMM_ATTACH_REQUEST,
    DMF_EMM_ATTACH_ACCEPT,
    DMF_EMM_ATTACH_REJECT,
    DMF_EMM_ATTACH_T3410_EXPIRY
} dmf_emm_attach_event_enum;

typedef enum
{
    DMF_EMM_ATTACH_TAU_INVALID,
    DMF_EMM_ATTACH_TYPE_EPS_ATTACH,
    DMF_EMM_ATTACH_TYPE_COMBINED_ATTACH,
    DMF_EMM_ATTACH_TYPE_EMERGENCY_ATTACH,

    DMF_EMM_TAU_TYPE_TAU,
    DMF_EMM_TAU_TYPE_COMBINED_TAU,
    DMF_EMM_TAU_TYPE_COMBINED_TAU_IMSI_ATTACH,
    DMF_EMM_TAU_TYPE_PERIODIC_TAU,
} dmf_emm_attach_tau_type_enum;

typedef enum
{
    DMF_ESM_OTA_EVENT_NONE,
    DMF_ESM_PDN_CONN_REQUEST,
    DMF_ESM_PDN_CONN_REJECT,
    DMF_ESM_PDN_DISCONN_REQUEST,
    DMF_ESM_PDN_DISCONN_REJECT,
    DMF_ESM_ACT_DEFAULT_BEARER_REQUEST,
    DMF_ESM_ACT_DEFAULT_BEARER_ACCEPT,
    DMF_ESM_ACT_DEFAULT_BEARER_REJECT,
    DMF_ESM_ACT_DEDICATED_BEARER_REQUEST,
    DMF_ESM_ACT_DEDICATED_BEARER_ACCEPT,
    DMF_ESM_ACT_DEDICATED_BEARER_REJECT,
    DMF_ESM_MODIFY_BEARER_REQUEST,
    DMF_ESM_MODIFY_BEARER_ACCEPT,
    DMF_ESM_MODIFY_BEARER_REJECT,
    DMF_ESM_DEACT_BEARER_REQUEST,
    DMF_ESM_DEACT_BEARER_ACCEPT,
    DMF_ESM_BEARER_RSC_ALLOCATE_REQUEST,
    DMF_ESM_BEARER_RSC_ALLOCATE_REJECT,
    DMF_ESM_BEARER_RSC_MODIFY_REQUEST,
    DMF_ESM_BEARER_RSC_MODIFY_REJECT,
    DMF_ESM_INFO_REQUEST,
    DMF_ESM_INFO_RESPONSE,
    DMF_ESM_NOTIFICATION,
    DMF_ESM_STATUS,
} dmf_esm_ota_event_enum;

typedef enum
{
    DMF_ESM_APP_NONE,
    DMF_ESM_APP_IMS,
    DMF_ESM_APP_EMERGENCY,
} dmf_esm_app_type_enum;

typedef enum
{
    DMF_ESM_TIMER_NONE,
    DMF_ESM_TIMER_T3480,
    DMF_ESM_TIMER_T3482,
    DMF_ESM_TIMER_T3481,
    DMF_ESM_TIMER_T3492,
} dmf_esm_timer_enum;

typedef enum
{
    DMF_SM_PDP_NONE,
    DMF_SM_PDP_ACT_REQUEST,
    DMF_SM_PDP_ACT_ACCEPT,
    DMF_SM_PDP_ACT_REJECT,
} dmf_sm_pdp_event_enum;

#if 0 // DMF porting
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef enum
{
    DMF_ERRC_SRVCC_FAIL_MEAS_RPTE_NO_RESPONSE,
    DMF_ERRC_SRVCC_FAIL_MEAS_RPT_SEND_FAIL,
    DMF_ERRC_SRVCC_FAIL_THRESHOLD_NOT_PASS,
    DMF_ERRC_SRVCC_FAIL_TTT_RECOUNT,
    DMF_ERRC_SRVCC_FAIL_TTT_NOT_PASS,
    DMF_ERRC_SRVCC_BSIC_DECODE_FAIL,
    DMF_ERRC_NOT_IN_SRVCC_DURATION = 0xff,
} dmf_errc_srvcc_fail_type_enum;

typedef enum
{
    DMF_RAT_NONE,
    DMF_RAT_GSM,
    DMF_RAT_UMTS,
    DMF_RAT_LTE
} dmf_info_collect_rat_enum;


typedef struct
{
    kal_char plmn_id[7];
    kal_uint16 lac;
    kal_uint8 rac;
    kal_uint16 tac;
    kal_uint32 cell_id;
    dmf_info_collect_rat_enum active_rat;
    kal_uint16 band;
    kal_uint32 frequency;
    kal_int16 sig1;
    kal_int16 sig2;
} dmf_info_collect_current_serving_cell_info_struct;

typedef struct {

    kal_bool is_data_sim;
    dmf_info_collect_paging_reason_enum paging_reason;
} dmf_event_paging_info_struct;

typedef struct {
    kal_uint32 volte_rb_idx;
    kal_uint32 ims_disc_tmr_rpt;
    kal_uint32 ims_ul_disc_cnt_rpt;
    kal_uint32 ims_dl_disc_cnt_rpt;
} dmf_event_volte_pdcp_info_struct;

typedef struct {
    em_lte_rrc_state_enum errc_state;
    em_lte_rrc_cause_enum errc_cause;
} dmf_event_errc_state_struct;

typedef struct {
    kal_bool is_attach;
    dmf_emm_attach_tau_type_enum attach_tau_type;
    emm_cause_enum emm_cause;
} dmf_event_emm_reject_info_struct;

typedef struct {

    dmf_esm_ota_event_enum esm_ota_event;
    dmf_esm_app_type_enum app_type;
} dmf_event_esm_ota_struct;

typedef struct {

    dmf_esm_timer_enum timer_id;
    dmf_esm_app_type_enum app_type;
} dmf_event_esm_timer_expiry_struct;


typedef struct {

    kal_uint8 nsapi;
    kal_bool is_ms_initial;
    dmf_sm_pdp_event_enum pdp_request_event;
    kal_bool is_ims_signaling_pdp;
    kal_bool is_t3380_retry;
} dmf_event_sm_pdp_request_struct;


#if 0 // DMF porting
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#if 0 // DMF porting
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#if 0 // DMF porting
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#if 0 // DMF porting
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint32  error_cause_is_valid;
    kal_uint32  error_cause;
} dmf_event_ims_pdn_fail_cause_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint32 error_apn_is_valid;
    kal_uint8 error_apn[100];

}dmf_event_ims_pdn_fail_apn_struct;

typedef struct
{
    kal_bool is_mo_call;
    kal_uint8 call_id;
    kal_uint8 call_state;
    kal_bool is_cc_disc_cause_valid;
    kal_uint16 cc_disc_cause;
} dmf_event_cc_call_info_struct;

typedef enum
{
    DMF_CMCC_EPS_ATTACH_NONE,
    DMF_CMCC_EPS_ATTACH_REQUEST,
    DMF_CMCC_EPS_ATTACH_SUCCESS,
    DMF_CMCC_EPS_ATTACH_FAIL,
} dmf_cmcc_eps_attach_event_enum;

typedef struct
{
    dmf_cmcc_eps_attach_event_enum attach_event;
    kal_uint32 attach_reject_cause;
} dmf_event_cmcc_eps_attach_struct;

#endif // _DMF_PUBLIC_DEF_H_
