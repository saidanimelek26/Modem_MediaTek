#ifndef L1TRC_UL1D_SEC_DEF_H
#define L1TRC_UL1D_SEC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define UL1D_TRC_STR_STATE_MACHINE(v1)  (unsigned char)(v1+0)
#define UL1D_TRC_STR_UL_DCH_STATE(v1)  (unsigned char)(v1+6)
#define UL1D_TRC_STR_DL_DCH_STATE(v1)  (unsigned char)(v1+10)
#define UL1D_TRC_STR_FACH_STATE(v1)  (unsigned char)(v1+17)
#define UL1D_TRC_STR_PCH_STATE(v1)  (unsigned char)(v1+20)
#define UL1D_TRC_STR_PCH_MODE(v1)  (unsigned char)(v1+24)
#define UL1D_TRC_STR_BCH_STATE(v1)  (unsigned char)(v1+28)
#define UL1D_TRC_STR_SFN_STATE(v1)  (unsigned char)(v1+33)
#define UL1D_TRC_STR_RACH_STATE(v1)  (unsigned char)(v1+41)
#define UL1D_TRC_STR_RXBRP_STATE(v1)  (unsigned char)(v1+48)
#define UL1D_TRC_STR_SFN_DECISION_METHOD(v1)  (unsigned char)(v1+51)
#define UL1D_TRC_STR_AICH_RESULT(v1)  (unsigned char)(v1+55)
#define UL1D_TRC_STR_EVAL_LIST(v1)  (unsigned char)(v1+59)
#define UL1D_TRC_STR_DPC_RECONFIG_FLAG(v1)  (unsigned char)(v1+62)
#define UL1D_TRC_STR_RACH_ACCESS_STATUS(v1)  (unsigned char)(v1+67)
#define UL1D_TRC_STR_32K_LESS_TIMING_ERROR_STATUS(v1)  (unsigned char)(v1+73)
#define UL1D_TRC_STR_LORX_DECODE(v1)  (unsigned char)(v1+76)
#define UL1D_TRC_STR_LORX_INT(v1)  (unsigned char)(v1+80)
#define UL1D_LORX_DUAL_TF_COMPARE_STAGE(v1)  (unsigned char)(v1+83)
#define UL1D_LORX_DUAL_TF_COMPARE_RESULT(v1)  (unsigned char)(v1+87)
#define UL1D_PCH_ARX_MODE(v1)  (unsigned char)(v1+92)
#define UL1D_WFEC_TPC_CLK(v1)  (unsigned char)(v1+94)
#define UL1D_WFEC_TXK_ACCESS_RIGHT(v1)  (unsigned char)(v1+96)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define UL1D_TRC_STATE_MACHINE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0082,0x0082);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_STATE_MACHINE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_STATE_MACHINE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0182,0x0182);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_STATE_MACHINE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_FORCE_NORMAL_DUMMY_TIMER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0282,0x0282);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_FORCE_NORMAL_DUMMY_TIMER(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_TM_ERROR(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0382,0x0382);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_TM_ERROR(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_TM_ADJ(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0482,0x0482);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_TM_ADJ(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_LST_FN(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0582,0x0582);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_LST_FN(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PCH_TM_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0682,0x0682);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PCH_TM_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_PHASE1_SKIP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0782,0x0782);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_PHASE1_SKIP(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_PHASE1_SKIP2(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0882,0x0882);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_PHASE1_SKIP2(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_PHASE2_SKIP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0982,0x0982);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_PHASE2_SKIP(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_PHASE1_PUT_REPORT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A82,0x0A82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_PHASE1_PUT_REPORT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RXBRP_STATE(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B82,0x0B82);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_RXBRP_STATE(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_IS_SPEECH_ONLY(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C82,0x0C82);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_IS_SPEECH_ONLY(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_STATE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D82,0x0D82);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_STATE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_TTI_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E82,0x0E82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_TTI_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_BTFD(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F82,0x0F82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_BTFD(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_PHASE1_SWITCH(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1082,0x1082);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_PHASE1_SWITCH(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_SRB_MODE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1182,0x1182);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_SRB_MODE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_PHASE2_DECISION(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v9,v9);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1282,0x1282);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_PHASE2_DECISION(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_EBD_SRB_DETAILS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1382,0x1382);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_EBD_SRB_DETAILS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_EBD_SRB_DEBUG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1482,0x1482);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_EBD_SRB_DEBUG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_M_VALUE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1582,0x1582);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_M_VALUE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_SHORT_CHANNEL_DETECTION(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1682,0x1682);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_SHORT_CHANNEL_DETECTION(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_TFCI_SRB_EXISTENCE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1782,0x1782);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_TFCI_SRB_EXISTENCE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_ENERGY_ACC(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v10,v10);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1882,0x1882);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_ENERGY_ACC(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_DECODE_RESULT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1982,0x1982);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_DECODE_RESULT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_TPC_CMD(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A82,0x1A82);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_TPC_CMD(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_INJECT_CMD(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B82,0x1B82);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_INJECT_CMD(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_STATS_TTI(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C82,0x1C82);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_STATS_TTI(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_STATS_SLOT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D82,0x1D82);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_STATS_SLOT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_STATS_REASON(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v16,v16);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v16,v16);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E82,0x1E82);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v16,v16);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_STATS_REASON(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_STATS_REASON_I(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F82,0x1F82);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_STATS_REASON_I(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LOW_POW_NVRAM(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2082,0x2082);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LOW_POW_NVRAM(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_DBG_CHECK_DUAL_TF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2182,0x2182);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_DBG_CHECK_DUAL_TF(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_DBG_RECOMMENDED_M(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2282,0x2282);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_DBG_RECOMMENDED_M(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_LORX_DBG_COMPARE_RESULT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2382,0x2382);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_LORX_DBG_COMPARE_RESULT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_UL_TGPS_INFO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2482,0x2482);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_UL_TGPS_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DL_TGPS_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2582,0x2582);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DL_TGPS_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DL_TGPS_RXCRP_INFO(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2682,0x2682);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DL_TGPS_RXCRP_INFO(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_GSR_RSC_DBG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2782,0x2782);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_GSR_RSC_DBG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RACH_PREAMBLE_PARAMETERS(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2882,0x2882);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_RACH_PREAMBLE_PARAMETERS(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RACH_INIT_POWER_PARAM(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2982,0x2982);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_RACH_INIT_POWER_PARAM(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RACH_PREAMBLE_TRANSMIT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2A82,0x2A82);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_RACH_PREAMBLE_TRANSMIT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_RACH_SEND_REPORT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2B82,0x2B82);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_RACH_SEND_REPORT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_AICH_DEBUG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2C82,0x2C82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_AICH_DEBUG(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_UPDATE_AICH_TH(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D82,0x2D82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_UPDATE_AICH_TH(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_AICH_RESULT(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E82,0x2E82);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_AICH_RESULT(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_AICH_NO_AI_INT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2F82,0x2F82);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_AICH_NO_AI_INT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_AICH_CH_ENABLE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3082,0x3082);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_AICH_CH_ENABLE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_FACH_FMO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3182,0x3182);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_FACH_FMO(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_FACH_SUSPEND_GAP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3282,0x3282);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_FACH_SUSPEND_GAP(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_FACH_FAKE_TFCI(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3382,0x3382);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_FACH_FAKE_TFCI(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_FACH_RX_SUSPEND(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3482,0x3482);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_FACH_RX_SUSPEND(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_FACH_RXCRP_DELAY_START(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3582,0x3582);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_FACH_RXCRP_DELAY_START(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_FACH_START_FOR_DEDICATED_FACH() do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x3682,0x3682);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_FACH_START_FOR_DEDICATED_FACH()
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_FACH_SET_RPT_FOR_DEDICATED_FACH() do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x3782,0x3782);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_FACH_SET_RPT_FOR_DEDICATED_FACH()
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_FACH_PCH_STATE_TRCH_NUM(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3882,0x3882);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_FACH_PCH_STATE_TRCH_NUM(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_SFN_START(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3982,0x3982);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SFN_START(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_SFN_DETECTED(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3A82,0x3A82);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SFN_DETECTED(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_SFN_TRY_CNT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3B82,0x3B82);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SFN_TRY_CNT(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_SFN_REPORT_RESULT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3C82,0x3C82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SFN_REPORT_RESULT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_SFN_DELAY_RTB_TIME(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3D82,0x3D82);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SFN_DELAY_RTB_TIME(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_BCH_START_PARAM(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3E82,0x3E82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_BCH_START_PARAM(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_BCH_MPS_TRIGGER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3F82,0x3F82);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_BCH_MPS_TRIGGER(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_BCH_STATE_INFO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4082,0x4082);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_BCH_STATE_INFO(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CMB_EN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4182,0x4182);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CMB_EN(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CODEGEN_RL0(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4282,0x4282);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CODEGEN_RL0(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_TXBRP_TF(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4382,0x4382);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_TXBRP_TF(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_TXBRP_ACTIVE_TRCH(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4482,0x4482);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_TXBRP_ACTIVE_TRCH(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_TXBRP_TTI_BUFF_ADDR(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4582,0x4582);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_TXBRP_TTI_BUFF_ADDR(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_TXBRP_ENC_TIME(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4682,0x4682);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_TXBRP_ENC_TIME(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CHEST_SPEED(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4782,0x4782);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CHEST_SPEED(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PCH_SET_RXD(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4882,0x4882);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PCH_SET_RXD(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PCH_SET_CSFB(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4982,0x4982);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PCH_SET_CSFB(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PCH_UL1C_FORCE_NORMAL_PI(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4A82,0x4A82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PCH_UL1C_FORCE_NORMAL_PI(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_SRCHR_PI_WAKEUP_STATUS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4B82,0x4B82);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SRCHR_PI_WAKEUP_STATUS(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_SRCHR_PI_FOE_RESULT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4C82,0x4C82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SRCHR_PI_FOE_RESULT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_RESULT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4D82,0x4D82);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_RESULT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_SRCHR_PICH_RESULT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4E82,0x4E82);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SRCHR_PICH_RESULT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_SRCHR_PICH_TRACKER_THR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4F82,0x4F82);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SRCHR_PICH_TRACKER_THR(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_SKIP_BY_UL1D(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5082,0x5082);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_SKIP_BY_UL1D(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_SKIP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5182,0x5182);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_SKIP(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_PI_POSITION(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5282,0x5282);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_PI_POSITION(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_SRCHR_PI_DECODE(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5382,0x5382);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SRCHR_PI_DECODE(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_SRCHR_PI_SCHEDULE(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x5482,0x5482);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SRCHR_PI_SCHEDULE(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_TWO_PHASE_PCH_RF_SETTING(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5582,0x5582);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_TWO_PHASE_PCH_RF_SETTING(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_OFFLINE_PCH_DCXO_DD(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5682,0x5682);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_OFFLINE_PCH_DCXO_DD(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_OFFLINE_PCH_DBG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5782,0x5782);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_OFFLINE_PCH_DBG(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_OFFLINE_PCH_SET(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5882,0x5882);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_OFFLINE_PCH_SET(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_PERF_STATUS(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5982,0x5982);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_PERF_STATUS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_PERF_RESULT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5A82,0x5A82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_PERF_RESULT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_I6_PLUS_STATUS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5B82,0x5B82);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_I6_PLUS_STATUS(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_I6_PLUS_ROUNDS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5C82,0x5C82);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_I6_PLUS_ROUNDS(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PICH_I6_PLUS_TEMP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5D82,0x5D82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PICH_I6_PLUS_TEMP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_I6_PLUS_TOTAL_MIC_POWER(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5E82,0x5E82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_I6_PLUS_TOTAL_MIC_POWER(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_I6_PLUS_FOE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5F82,0x5F82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_I6_PLUS_FOE(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_REPORT_FROM_MPS(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6082,0x6082);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_REPORT_FROM_MPS(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PCH_ARX_EVAL_OB(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6182,0x6182);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PCH_ARX_EVAL_OB(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PCH_ARX_EVAL_RSSI_ECIO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6282,0x6282);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PCH_ARX_EVAL_RSSI_ECIO(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PCH_ARX_MODE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x6382,0x6382);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PCH_ARX_MODE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PCH_ARX_EVAL_RF_SNR(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6482,0x6482);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PCH_ARX_EVAL_RF_SNR(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PCH_ARX_CRITERIA(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6582,0x6582);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PCH_ARX_CRITERIA(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PCH_ADAPTIVE_SW_INIT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x6682,0x6682);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PCH_ADAPTIVE_SW_INIT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PCH_ADDITIONAL_SW_INIT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6782,0x6782);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PCH_ADDITIONAL_SW_INIT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_VIDLE_LOW_PREEMPTION_MODE_DEBUG(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6882,0x6882);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_VIDLE_LOW_PREEMPTION_MODE_DEBUG(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_TFCI_STATE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6982,0x6982);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_TFCI_STATE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DMA_DONE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6A82,0x6A82);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DMA_DONE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CCTRCH_COUNTER_DBG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6B82,0x6B82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CCTRCH_COUNTER_DBG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CMB_ICHCON(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6C82,0x6C82);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CMB_ICHCON(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_SPEST_STA(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6D82,0x6D82);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SPEST_STA(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_SPEST_RESULT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6E82,0x6E82);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SPEST_RESULT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_RXBRP_TFCI_OUT_OF_RANGE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6F82,0x6F82);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_RXBRP_TFCI_OUT_OF_RANGE(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HWTPC_MAX_PWR_OFFSET(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7082,0x7082);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_MAX_PWR_OFFSET(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HWTPC_SET_MAX_POWER(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7182,0x7182);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_SET_MAX_POWER(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HWTPC_WTXUPC_ASPOW(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7282,0x7282);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_WTXUPC_ASPOW(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HWTPC_RACH_IRQ_SETUP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7382,0x7382);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_RACH_IRQ_SETUP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HWTPC_SLOTMASK(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7482,0x7482);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_SLOTMASK(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HWTPC_SLOT_FORMAT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7582,0x7582);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_SLOT_FORMAT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HWTPC_CPC_SLOT_STA(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7682,0x7682);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_CPC_SLOT_STA(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HWTPC_CPC_SLOT_STA_ILLEGAL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7782,0x7782);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_CPC_SLOT_STA_ILLEGAL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HWTPC_HS_SYM_OFFSET(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7882,0x7882);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_HS_SYM_OFFSET(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HWTPC_HS_SLOT_MASK(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7982,0x7982);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_HS_SLOT_MASK(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HWTPC_BETA_GAIN(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7A82,0x7A82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_BETA_GAIN(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_WFEC_TPC_CLK_EN(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7B82,0x7B82);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_WFEC_TPC_CLK_EN(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_WFEC_TXK_CLK_EN(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7C82,0x7C82);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_WFEC_TXK_CLK_EN(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_WFEC_UCHEN_FRM(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7D82,0x7D82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_WFEC_UCHEN_FRM(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_WFEC_TXK_ACCESS_RIGHT_SWITCH() do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x7E82,0x7E82);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_WFEC_TXK_ACCESS_RIGHT_SWITCH()
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_WFEC_TXK_ACCESS_RIGHT() do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x04);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x7F82,0x7F82);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_WFEC_TXK_ACCESS_RIGHT()
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_WFEC_TXK_ACCESS_FAIL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8082,0x8082);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_WFEC_TXK_ACCESS_FAIL(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_WFEC_FREQ_CONFIG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8182,0x8182);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_WFEC_FREQ_CONFIG(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HWTPC_INFO(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v15,v15);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8282,0x8282);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_INFO(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HWTPC_DBG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8382,0x8382);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_DBG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HWTPC_PWR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v15,v15);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8482,0x8482);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_PWR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HWTPC_PWR_RF(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v15,v15);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8582,0x8582);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_PWR_RF(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HWTPC_PWR_PD(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v15,v15);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8682,0x8682);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_PWR_PD(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HWTPC_PWR_MAX_MIN(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8782,0x8782);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_PWR_MAX_MIN(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HWTPC_PWR_AP_REP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8882,0x8882);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_PWR_AP_REP(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HWTPC_CMD(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8982,0x8982);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_CMD(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HWTPC_CMD2(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v15,v15);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8A82,0x8A82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HWTPC_CMD2(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EM_PWR_TX(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8B82,0x8B82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_EM_PWR_TX(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_ACS_START(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8C82,0x8C82);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_ACS_START(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_TIMING_ERROR_ACS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8D82,0x8D82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_TIMING_ERROR_ACS(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_32KLESS_TIMING_ERROR_VALID(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8E82,0x8E82);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_32KLESS_TIMING_ERROR_VALID(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_32KLESS_TIMING_ERROR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8F82,0x8F82);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_32KLESS_TIMING_ERROR(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_32KLESS_DIVIDER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9082,0x9082);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_32KLESS_DIVIDER(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_32KLESS_FPM_DIVIDER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9182,0x9182);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_32KLESS_FPM_DIVIDER(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_SM_FREQ_OFFSET(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9282,0x9282);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SM_FREQ_OFFSET(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RFM_CHECK_SINGLE_CELL(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9382,0x9382);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_RFM_CHECK_SINGLE_CELL(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RFM_UPDATE_TIMING_FROM_CM(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9482,0x9482);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_RFM_UPDATE_TIMING_FROM_CM(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RFM_UPDATE_TIMING_TO_MPS(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9582,0x9582);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_RFM_UPDATE_TIMING_TO_MPS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RFM_UPDATE_TIMING_GSR_UPDATE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9682,0x9682);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_RFM_UPDATE_TIMING_GSR_UPDATE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RFM_UPDATE_TIMING_FNG_DEL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9782,0x9782);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_RFM_UPDATE_TIMING_FNG_DEL(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, UL1D_SEC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_UL1D_SEC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1D_SEC()	(FILTER_CHECK(UL1D_SEC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_UL1D_SEC_SM_L()	(ChkL1ModFltr_UL1D_SEC()&&(FILTER_CHECK(UL1D_SEC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_UL1D_SEC_SM_M()	(ChkL1ModFltr_UL1D_SEC()&&(FILTER_CHECK(UL1D_SEC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_UL1D_SEC_SM_H()	(ChkL1ModFltr_UL1D_SEC()&&(FILTER_CHECK(UL1D_SEC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_UL1D_SEC_RACH_H()	(ChkL1ModFltr_UL1D_SEC()&&(FILTER_CHECK(UL1D_SEC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_UL1D_SEC_RACH_M()	(ChkL1ModFltr_UL1D_SEC()&&(FILTER_CHECK(UL1D_SEC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_UL1D_SEC_RACH_L()	(ChkL1ModFltr_UL1D_SEC()&&(FILTER_CHECK(UL1D_SEC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_UL1D_SEC_PICH_H()	(ChkL1ModFltr_UL1D_SEC()&&(FILTER_CHECK(UL1D_SEC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_UL1D_SEC_HWTPC_L()	(ChkL1ModFltr_UL1D_SEC()&&(FILTER_CHECK(UL1D_SEC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_UL1D_SEC_HWTPCBSI_L()	(ChkL1ModFltr_UL1D_SEC()&&(FILTER_CHECK(UL1D_SEC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_UL1D_SEC_HWTPC_M()	(ChkL1ModFltr_UL1D_SEC()&&(FILTER_CHECK(UL1D_SEC_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_UL1D_SEC_HWTPC_H()	(ChkL1ModFltr_UL1D_SEC()&&(FILTER_CHECK(UL1D_SEC_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_UL1D_SEC_RXBRP_L()	(ChkL1ModFltr_UL1D_SEC()&&(FILTER_CHECK(UL1D_SEC_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_UL1D_SEC_RXBRP_M()	(ChkL1ModFltr_UL1D_SEC()&&(FILTER_CHECK(UL1D_SEC_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_UL1D_SEC_RXBRP_H()	(ChkL1ModFltr_UL1D_SEC()&&(FILTER_CHECK(UL1D_SEC_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_UL1D_SEC_LORX_M()	(ChkL1ModFltr_UL1D_SEC()&&(FILTER_CHECK(UL1D_SEC_Trace_Filter, 2, 0x40)))
#define ChkL1MsgFltr_UL1D_TRC_STATE_MACHINE()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_STATE_MACHINE()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_FORCE_NORMAL_DUMMY_TIMER()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_TM_ERROR()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_TM_ADJ()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_LST_FN()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_PCH_TM_INFO()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_PHASE1_SKIP()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_PHASE1_SKIP2()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_PHASE2_SKIP()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_PHASE1_PUT_REPORT()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_RXBRP_STATE()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_LORX_IS_SPEECH_ONLY()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_STATE()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_TTI_INFO()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_BTFD()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_PHASE1_SWITCH()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_SRB_MODE()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_PHASE2_DECISION()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_EBD_SRB_DETAILS()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_EBD_SRB_DEBUG()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_M_VALUE()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_SHORT_CHANNEL_DETECTION()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_TFCI_SRB_EXISTENCE()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_ENERGY_ACC()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_DECODE_RESULT()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_TPC_CMD()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_INJECT_CMD()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_STATS_TTI()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_STATS_SLOT()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_STATS_REASON()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_STATS_REASON_I()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LOW_POW_NVRAM()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_DBG_CHECK_DUAL_TF()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_DBG_RECOMMENDED_M()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_LORX_DBG_COMPARE_RESULT()	ChkL1ClsFltr_UL1D_SEC_LORX_M()
#define ChkL1MsgFltr_UL1D_TRC_UL_TGPS_INFO()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_DL_TGPS_INFO()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_DL_TGPS_RXCRP_INFO()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_GSR_RSC_DBG()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_RACH_PREAMBLE_PARAMETERS()	ChkL1ClsFltr_UL1D_SEC_RACH_H()
#define ChkL1MsgFltr_UL1D_TRC_RACH_INIT_POWER_PARAM()	ChkL1ClsFltr_UL1D_SEC_RACH_H()
#define ChkL1MsgFltr_UL1D_TRC_RACH_PREAMBLE_TRANSMIT()	ChkL1ClsFltr_UL1D_SEC_RACH_H()
#define ChkL1MsgFltr_UL1D_TRC_RACH_SEND_REPORT()	ChkL1ClsFltr_UL1D_SEC_RACH_M()
#define ChkL1MsgFltr_UL1D_TRC_AICH_DEBUG()	ChkL1ClsFltr_UL1D_SEC_RACH_M()
#define ChkL1MsgFltr_UL1D_TRC_UPDATE_AICH_TH()	ChkL1ClsFltr_UL1D_SEC_RACH_L()
#define ChkL1MsgFltr_UL1D_TRC_AICH_RESULT()	ChkL1ClsFltr_UL1D_SEC_RACH_H()
#define ChkL1MsgFltr_UL1D_TRC_AICH_NO_AI_INT()	ChkL1ClsFltr_UL1D_SEC_RACH_H()
#define ChkL1MsgFltr_UL1D_TRC_AICH_CH_ENABLE()	ChkL1ClsFltr_UL1D_SEC_RACH_H()
#define ChkL1MsgFltr_UL1D_TRC_FACH_FMO()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_FACH_SUSPEND_GAP()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_FACH_FAKE_TFCI()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_FACH_RX_SUSPEND()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_FACH_RXCRP_DELAY_START()	ChkL1ClsFltr_UL1D_SEC_SM_M()
#define ChkL1MsgFltr_UL1D_TRC_FACH_START_FOR_DEDICATED_FACH()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_FACH_SET_RPT_FOR_DEDICATED_FACH()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_FACH_PCH_STATE_TRCH_NUM()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_SFN_START()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_SFN_DETECTED()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_SFN_TRY_CNT()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_SFN_REPORT_RESULT()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_SFN_DELAY_RTB_TIME()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_BCH_START_PARAM()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_BCH_MPS_TRIGGER()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_BCH_STATE_INFO()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_CMB_EN()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_CODEGEN_RL0()	ChkL1ClsFltr_UL1D_SEC_SM_M()
#define ChkL1MsgFltr_UL1D_TRC_TXBRP_TF()	ChkL1ClsFltr_UL1D_SEC_SM_L()
#define ChkL1MsgFltr_UL1D_TRC_TXBRP_ACTIVE_TRCH()	ChkL1ClsFltr_UL1D_SEC_SM_M()
#define ChkL1MsgFltr_UL1D_TRC_TXBRP_TTI_BUFF_ADDR()	ChkL1ClsFltr_UL1D_SEC_SM_M()
#define ChkL1MsgFltr_UL1D_TRC_TXBRP_ENC_TIME()	ChkL1ClsFltr_UL1D_SEC_SM_M()
#define ChkL1MsgFltr_UL1D_TRC_CHEST_SPEED()	ChkL1ClsFltr_UL1D_SEC_SM_M()
#define ChkL1MsgFltr_UL1D_TRC_PCH_SET_RXD()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PCH_SET_CSFB()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PCH_UL1C_FORCE_NORMAL_PI()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_SRCHR_PI_WAKEUP_STATUS()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_SRCHR_PI_FOE_RESULT()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_RESULT()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_SRCHR_PICH_RESULT()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_SRCHR_PICH_TRACKER_THR()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_SKIP_BY_UL1D()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_SKIP()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_PI_POSITION()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_SRCHR_PI_DECODE()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_SRCHR_PI_SCHEDULE()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_TWO_PHASE_PCH_RF_SETTING()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_OFFLINE_PCH_DCXO_DD()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_OFFLINE_PCH_DBG()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_OFFLINE_PCH_SET()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_PERF_STATUS()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_PERF_RESULT()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_I6_PLUS_STATUS()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_I6_PLUS_ROUNDS()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PICH_I6_PLUS_TEMP()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_I6_PLUS_TOTAL_MIC_POWER()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_I6_PLUS_FOE()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_REPORT_FROM_MPS()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PCH_ARX_EVAL_OB()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PCH_ARX_EVAL_RSSI_ECIO()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PCH_ARX_MODE()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PCH_ARX_EVAL_RF_SNR()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PCH_ARX_CRITERIA()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PCH_ADAPTIVE_SW_INIT()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_PCH_ADDITIONAL_SW_INIT()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_VIDLE_LOW_PREEMPTION_MODE_DEBUG()	ChkL1ClsFltr_UL1D_SEC_PICH_H()
#define ChkL1MsgFltr_UL1D_TRC_TFCI_STATE()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_DMA_DONE()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_CCTRCH_COUNTER_DBG()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_CMB_ICHCON()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_SPEST_STA()	ChkL1ClsFltr_UL1D_SEC_SM_M()
#define ChkL1MsgFltr_UL1D_TRC_SPEST_RESULT()	ChkL1ClsFltr_UL1D_SEC_SM_M()
#define ChkL1MsgFltr_UL1D_TRC_RXBRP_TFCI_OUT_OF_RANGE()	ChkL1ClsFltr_UL1D_SEC_RXBRP_L()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_MAX_PWR_OFFSET()	ChkL1ClsFltr_UL1D_SEC_HWTPC_H()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_SET_MAX_POWER()	ChkL1ClsFltr_UL1D_SEC_HWTPC_H()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_WTXUPC_ASPOW()	ChkL1ClsFltr_UL1D_SEC_HWTPC_H()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_RACH_IRQ_SETUP()	ChkL1ClsFltr_UL1D_SEC_HWTPC_M()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_SLOTMASK()	ChkL1ClsFltr_UL1D_SEC_HWTPC_L()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_SLOT_FORMAT()	ChkL1ClsFltr_UL1D_SEC_HWTPC_M()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_CPC_SLOT_STA()	ChkL1ClsFltr_UL1D_SEC_HWTPC_M()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_CPC_SLOT_STA_ILLEGAL()	ChkL1ClsFltr_UL1D_SEC_HWTPC_M()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_HS_SYM_OFFSET()	ChkL1ClsFltr_UL1D_SEC_HWTPC_M()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_HS_SLOT_MASK()	ChkL1ClsFltr_UL1D_SEC_HWTPC_M()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_BETA_GAIN()	ChkL1ClsFltr_UL1D_SEC_HWTPC_M()
#define ChkL1MsgFltr_UL1D_TRC_WFEC_TPC_CLK_EN()	ChkL1ClsFltr_UL1D_SEC_HWTPC_M()
#define ChkL1MsgFltr_UL1D_TRC_WFEC_TXK_CLK_EN()	ChkL1ClsFltr_UL1D_SEC_HWTPC_M()
#define ChkL1MsgFltr_UL1D_TRC_WFEC_UCHEN_FRM()	ChkL1ClsFltr_UL1D_SEC_HWTPC_M()
#define ChkL1MsgFltr_UL1D_TRC_WFEC_TXK_ACCESS_RIGHT_SWITCH()	ChkL1ClsFltr_UL1D_SEC_HWTPC_M()
#define ChkL1MsgFltr_UL1D_TRC_WFEC_TXK_ACCESS_RIGHT()	ChkL1ClsFltr_UL1D_SEC_HWTPC_H()
#define ChkL1MsgFltr_UL1D_TRC_WFEC_TXK_ACCESS_FAIL()	ChkL1ClsFltr_UL1D_SEC_HWTPC_H()
#define ChkL1MsgFltr_UL1D_TRC_WFEC_FREQ_CONFIG()	ChkL1ClsFltr_UL1D_SEC_HWTPC_H()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_INFO()	ChkL1ClsFltr_UL1D_SEC_HWTPC_L()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_DBG()	ChkL1ClsFltr_UL1D_SEC_HWTPC_L()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_PWR()	ChkL1ClsFltr_UL1D_SEC_HWTPC_L()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_PWR_RF()	ChkL1ClsFltr_UL1D_SEC_HWTPC_L()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_PWR_PD()	ChkL1ClsFltr_UL1D_SEC_HWTPC_M()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_PWR_MAX_MIN()	ChkL1ClsFltr_UL1D_SEC_HWTPC_H()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_PWR_AP_REP()	ChkL1ClsFltr_UL1D_SEC_HWTPC_L()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_CMD()	ChkL1ClsFltr_UL1D_SEC_HWTPC_H()
#define ChkL1MsgFltr_UL1D_TRC_HWTPC_CMD2()	ChkL1ClsFltr_UL1D_SEC_HWTPC_L()
#define ChkL1MsgFltr_UL1D_TRC_EM_PWR_TX()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_ACS_START()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_TIMING_ERROR_ACS()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_32KLESS_TIMING_ERROR_VALID()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_32KLESS_TIMING_ERROR()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_32KLESS_DIVIDER()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_32KLESS_FPM_DIVIDER()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_SM_FREQ_OFFSET()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_RFM_CHECK_SINGLE_CELL()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_RFM_UPDATE_TIMING_FROM_CM()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_RFM_UPDATE_TIMING_TO_MPS()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_RFM_UPDATE_TIMING_GSR_UPDATE()	ChkL1ClsFltr_UL1D_SEC_SM_H()
#define ChkL1MsgFltr_UL1D_TRC_RFM_UPDATE_TIMING_FNG_DEL()	ChkL1ClsFltr_UL1D_SEC_SM_H()


#endif
