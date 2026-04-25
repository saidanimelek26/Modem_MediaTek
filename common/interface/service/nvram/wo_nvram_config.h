/***********************************
 *  WO Config Macro definition
 ***********************************/

/***********************************
 *  Reset Macro
 ***********************************/
#undef WO_CFG_L0_TYPE_START
#undef WO_CFG_L0_TYPE_DCL
#undef WO_CFG_L0_TYPE_ARRAY
#undef WO_CFG_L0_TYPE_END
#undef WO_CFG_L0_ENUM_ALIAS

/****************************************
 * WO CFG Macro Structure Definition
 ****************************************/
#if __WO_CFG_ACTION__ == 1

/* ============= *
 *  Layer 0 obj  *
 * ============= */
#if __WO_CFG_LAYER__ == 0
#define WO_CFG_L0_TYPE_START(_obj0) \
    typedef struct _ ## _obj0 ## _t {
#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
        _type _name;
#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
        _type _name[_size];
#define WO_CFG_L0_TYPE_END(_obj0) \
    } _obj0 ## _t;

#endif

/****************************************
 *  WO CFG Macro DEFAULT Value Assign
 ****************************************/
#elif __WO_CFG_ACTION__ == 2

#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    (__WO_CFG_PTR__)->_name = _cfg_dflt;

#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
    kal_snprintf((kal_char *)(__WO_CFG_PTR__)->_name, _size, "%s", _cfg_dflt);

/****************************************
 *  WO CFG Macro NVRAM Value Assign
 ****************************************/
#elif __WO_CFG_ACTION__ == 3

#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    if ((__WO_NVRAM_PTR__)->_name != (_type)(UNDEF_CONFIG)) { \
        (__WO_CFG_PTR__)->_name = (__WO_NVRAM_PTR__)->_name;  \
    }

#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
    if ((__WO_NVRAM_PTR__)->_name[0] != (_type)(UNDEF_CONFIG)) { \
        kal_mem_cpy((__WO_CFG_PTR__)->_name, (__WO_NVRAM_PTR__)->_name, _size);  \
    }

/****************************************
 *  WO CFG Macro cfg_token TABLE
 ****************************************/
#elif __WO_CFG_ACTION__ == 4

#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    #_name,

#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
    #_name,

/**********************************************
 *  WO CFG Macro cfg TABLE ENUM
 **********************************************/
#elif __WO_CFG_ACTION__ == 5

#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    _enum,

#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
    _enum,

#define WO_CFG_L0_ENUM_ALIAS(_enum1, _enum2) \
    _enum1 = _enum2,

/************************************
 *  WO CFG Macro GET
 ************************************/
#elif __WO_CFG_ACTION__ == 6

#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    case _enum: { \
        ret = kal_snprintf(value, size, "%d", (__WO_CFG_PTR__)->_name); \
        break; \
    }

#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
    case _enum: { \
        ret = kal_snprintf(value, size, "%s", (kal_char *)(__WO_CFG_PTR__)->_name); \
        break; \
    }

/************************************
 *  WO CFG Macro SET
 ************************************/
#elif __WO_CFG_ACTION__ == 7

#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    case _enum: { \
        (__WO_CFG_PTR__)->_name = (_type)atol(value); \
        break; \
    }

#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
    case _enum: { \
        kal_snprintf((kal_char *)(__WO_CFG_PTR__)->_name, _size, "%s", value); \
        break; \
    }

/************************************
 *  WO CFG Macro COMPARE with default
 ************************************/
#elif __WO_CFG_ACTION__ == 8

#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    case _enum: { \
        ret = ((__WO_CFG_PTR__)->_name == _cfg_dflt); \
        break; \
    }

#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
    case _enum: { \
        ret = streq((kal_char *)(__WO_CFG_PTR__)->_name, _cfg_dflt); \
        break; \
    }

#endif

/* If macro not used, define as empty */
#ifndef WO_CFG_L0_TYPE_START
#define WO_CFG_L0_TYPE_START(...)
#endif
#ifndef WO_CFG_L0_TYPE_DCL
#define WO_CFG_L0_TYPE_DCL(...)
#endif
#ifndef WO_CFG_L0_TYPE_ARRAY
#define WO_CFG_L0_TYPE_ARRAY(...)
#endif
#ifndef WO_CFG_L0_TYPE_END
#define WO_CFG_L0_TYPE_END(...)
#endif
#ifndef WO_CFG_L0_ENUM_ALIAS
#define WO_CFG_L0_ENUM_ALIAS(...)
#endif

/*
 * WO Configs
 */
WO_CFG_L0_TYPE_START(wo_cfg)
WO_CFG_L0_TYPE_ARRAY(wo_cfg, kal_uint8, WO_CFG_EPDG_FQDN,                   epdg_fqdn,            256,            "",  UNDEF_CONFIG_8)
WO_CFG_L0_ENUM_ALIAS(WO_CFG_START, WO_CFG_EPDG_FQDN)
WO_CFG_L0_TYPE_ARRAY(wo_cfg, kal_uint8, WO_CFG_IKE_INTERFACE,               ikev2if,               16,       "wlan0",  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_ARRAY(wo_cfg, kal_uint8, WO_CFG_SELECT_INFO,                 select_info,          256,            "",  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_ARRAY(wo_cfg, kal_uint8, WO_CFG_EPDG_IDENTIFIER,             epdg_identifier,      256,            "",  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_ARRAY(wo_cfg, kal_uint8, WO_CFG_RETRY_VECTOR,                retry_vector,         256,            "",  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_ARRAY(wo_cfg, kal_uint8, WO_CFG_IKE_ALGO,                    ike_algo,             256,            "",  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_ARRAY(wo_cfg, kal_uint8, WO_CFG_ESP_ALGO,                    esp_algo,             256,            "",  UNDEF_CONFIG_8)
WO_CFG_L0_ENUM_ALIAS(WO_CFG_STR_TYPE_END, WO_CFG_ESP_ALGO)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_IKE_REKEY_TIMER,             ike_rekey_timer,                   81000,  UNDEF_CONFIG_32)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_ESP_REKEY_TIMER,             esp_rekey_timer,                   81000,  UNDEF_CONFIG_32)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_REKEY_MARGIN,                rekey_margin,                      32400,  UNDEF_CONFIG_32)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_DPD_TIMER,                   dpd_timer,                           120,  UNDEF_CONFIG_32)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_KEEP_ALIVE_TIMER,            keep_timer,                           20,  UNDEF_CONFIG_32)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_TUNNEL_SETUP_TIMER,          esp_setup_time,                       15,  UNDEF_CONFIG_32)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_PDN_SETUP_TIMER,             pdn_setup_time,                      295,  UNDEF_CONFIG_32)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_CERT_REQ,                    cert_used,                             1,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_CERT_HASHANDURL,             urlcert,                               0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_CERT_OCSP,                   ocsp,                                  0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_SERVER_NO_CERT,              nocert,                                1,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_SKIP_CHECK_CERT,             skip_check_cert,                       0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_SKIP_CHECK_ID,               noid,                                  1,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_FORCE_TSI_64,                force_tsi_64,                          1,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_FORCE_TSI_FULL,              force_tsi_full,                        1,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_USE_CFG_VIP,                 use_cfg_vip,                           0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_ADDR_CHANGE_REAUTH,          reauth_addr,                           0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_DPD_NO_REPLY,                dpd_no_reply,                          0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_PRE_POST_PING,               pre_post_ping,                         0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_LOG_LEVEL,                   log_level,                             1,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_WIFI_DRIVER_KEEP_ALIVE,      wdrv_keep_alive,                       1,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IKE_FRAGMENTATION,           fragment,                              0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_MOBIKE,                      mobike,                                0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_OUT_OF_SERVICE_TIMER,        oos,                                   7,  UNDEF_CONFIG_32)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_IKE_RETRAN_TO,               retrans_to,                            2,  UNDEF_CONFIG_32)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IKE_RETRAN_TRIES,            retrans_tries,                         4,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IKE_RETRAN_BASE,             retrans_base,                          1,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_TUNNEL_MTU,                  mtu,                                1280,  UNDEF_CONFIG_16)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_TUNNEL_MSS4_OFFSET,          mss4_off,                             68,  UNDEF_CONFIG_16)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_TUNNEL_MSS6_OFFSET,          mss6_off,                             88,  UNDEF_CONFIG_16)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_CUST_PCSCF_IP4_CP,           cust_pcscf_4,                         20,  UNDEF_CONFIG_16)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_CUST_PCSCF_IP6_CP,           cust_pcscf_6,                         21,  UNDEF_CONFIG_16)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_CUST_IMEI_CP,                cust_imei_cp,                          0,  UNDEF_CONFIG_16)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_IKE_PORT,                    port,                              10500,  UNDEF_CONFIG_16)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_IKE_PORT_NATT,               port_natt,                         14500,  UNDEF_CONFIG_16)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_IKE_CPA_NM_NUM,              cpa_nm,                                0,  UNDEF_CONFIG_16)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_IKE_CPA_DNS4_NUM,            cpa_dns4,                              1,  UNDEF_CONFIG_16)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_IKE_CPA_DNS6_NUM,            cpa_dns6,                              1,  UNDEF_CONFIG_16)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IKE_NO_INIT_CONTACT,         no_ic,                                 0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IKE_NO_EAPONLY,              no_eap,                                0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IKE_DSCP,                    ike_dscp,                              0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IKE_IDI,                     IDi,                     IDI_RFC822_ADDR,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IKE_IDR,                     IDr,                            IDR_FQDN,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_LEFT_AUTH_TYPE,              leftauth,                       AUTH_EAP,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_EAP_TYPE,                    eap,                             EAP_AKA,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_FAST_REAUTH,                 fastreauth,                            0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_DNS_QUERY_TIMER,             dns_timer,                             0,  UNDEF_CONFIG_32)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_DNS_TYPE,                    dns_type,                  DNS_ADDR_V6V4,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_DNS_MAX_COUNT,               dns_max_count,                       254,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_DNS_CACHE,                   dns_cache,                             1,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_REDIRECT,                    redirect,                              0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_MAX_REDIRECTS,               max_redirects,                         5,  UNDEF_CONFIG_16)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_REDIRECT_LOOP_DETECT,        redirect_loop_detect,                300,  UNDEF_CONFIG_16)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_DETACH_SOFT_TIMER,           detach_soft_timer,                     3,  UNDEF_CONFIG_16)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_DETACH_HARD_TIMER,           detach_hard_timer,                   300,  UNDEF_CONFIG_16)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_FORCE_DPD_RETRAN_TO,         fdpd_retrans_to,                       1,  UNDEF_CONFIG_32)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_FORCE_DPD_RETRAN_TRIES,      fdpd_retrans_tries,                    2,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_FORCE_DPD_RETRAN_BASE,       fdpd_retrans_base,                     1,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_CERTREQ_CRITICAL,            certreq_critical,                      0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_PCSCF_RESTORE,               pcscf_restore,                         0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_LIVENESS_CHECK,              liveness_check,                        0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_DEVICE_IDENTITY,             device_identity,                       0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_ABORT_BLOCKING_MODE,         abort_mode,                            0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_HO_IP_DISCONTINUITY,         ho_ip_disc,                            0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_EMERGENCY_EPDG,              emerg_epdg,       EMERG_EPDG_SELECT_NONE,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_TRY_EPDG_POLICY,             try_epdg_policy,         TRY_ALL_EPDG_IP,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IMEI_FORMAT,                 imei_format,                    IMEI_BCD,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_LEAVE_STANDBY_DPD,           leave_standby_dpd,                     0,  UNDEF_CONFIG_8)
WO_CFG_L0_TYPE_END(wo_cfg)
