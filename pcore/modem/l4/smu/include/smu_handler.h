/*******************************************************************************
 * Filename:
 * ---------
 *  smu_handler.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   This is the header file for SMU handlers.
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/
#ifndef _SMU_HANDLER_H
#define _SMU_HANDLER_H

#include "kal_general_types.h"
#include "kal_public_defs.h"

extern void smu_send_ilm(module_type dest_id, sap_type sap_id, kal_uint16 msg_id, void * local_param_ptr, void * peer_buf_ptr);
extern void smu_function_enter_trace(const kal_char* function_name);
extern void smu_function_leave_trace_with_bool(const kal_char* function_name, kal_uint32 line, kal_bool ret);
extern void smu_nvram_write(nvram_lid_enum file_idx, kal_uint8 access_id, kal_bool is_write_protect2);
extern kal_bool smu_sml_check_testsim(kal_uint8 *imsi);
extern void smu_send_security_cnf(smu_security_type_enum type, kal_uint32 remaining_count, kal_uint8 src_id, l4c2smu_res_enum res, kal_uint16 rmmi_error_cause);
extern void smu_send_pin_ready_to_uim();
extern void smu_mmrr_ready_ind_handler( ilm_struct *smu_ilm_ptr );
extern void smu_state_update_with_bool(kal_char* context_name, sim_interface_enum id, kal_bool old_value, kal_bool new_value);
extern void smu_state_update_with_enum(smu_trc_enum_type_enum enum_name, sim_interface_enum id, kal_uint32 old_value, kal_uint32 new_value);

extern const sml_error_cause_pack_struct sml_error_cause_pack[SML_CAT_SIZE];

extern kal_bool smu_check_if_security_cnf_delay_required(smu_security_type_enum type);
extern void smu_send_pending_security_cnf(void);

#define SMU_FUNCTION_ENTER_TRACE() smu_function_enter_trace(__FUNCTION__)

#define SMU_FUNCTION_LEAVE_TRACE_WITH_BOOL(RET) \
            smu_function_leave_trace_with_bool(__FUNCTION__, __LINE__, RET); \
            return RET

#define SMU_STATE_UPDATE_TRACE_WITH_BOOL(NAME,PTR,NEW_VAL) \
            smu_state_update_with_bool(NAME, 0xFF, *(PTR), NEW_VAL); \
            *(PTR) = NEW_VAL

#define SMU_STATE_UPDATE_TRACE_WITH_ENUM(ENUM,PTR,NEW_VAL) \
            smu_state_update_with_enum(ENUM, 0xFF, *(PTR), NEW_VAL); \
            *(PTR) = NEW_VAL

#ifdef __TFN_SIMLOCK__
extern void sml_set_tfn_simlock_data(nvram_ef_l4_tfn_simlock_struct* tfn_simlock_ptr);
extern kal_bool sml_is_tfn_efuse_on(void);

#endif

#endif /* _SMU_HANDLER_H */
