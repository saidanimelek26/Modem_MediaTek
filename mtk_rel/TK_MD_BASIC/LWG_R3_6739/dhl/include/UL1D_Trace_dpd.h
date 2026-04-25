#ifndef L1TRC_UL1D_DPD_DEF_H
#define L1TRC_UL1D_DPD_DEF_H

/******************************/
/* String category definition */
/******************************/
#define UL1D_TRC_STR_DPD_FAC_DBG_MSG_TYPE(v1)  (unsigned char)(v1+0)
#define UL1D_TRC_STR_DPD_FAC_DPD_GET_SET_TYPE(v1)  (unsigned char)(v1+2)
#define UL1D_TRC_STR_DPD_FAC_PA_GET_SET_TYPE(v1)  (unsigned char)(v1+6)
#define UL1D_TRC_STR_DPD_OTFC_CMIF_MEAS_STATE_E(v1)  (unsigned char)(v1+8)
#define UL1D_TRC_STR_DPD_OTFC_LISR_STATE_E(v1)  (unsigned char)(v1+13)
#define UL1D_TRC_STR_DPD_OTFC_CMIF_ABORT_STATE_E(v1)  (unsigned char)(v1+17)
#define UL1D_TRC_STR_DPD_TX_BANDS(v1)  (unsigned char)(v1+20)
#define UL1D_TRC_STR_DPD_TXDFE(v1)  (unsigned char)(v1+43)
#define UL1D_TRC_STR_DPD_OTFC_DBG_AMPM(v1)  (unsigned char)(v1+46)
#define UL1D_DPD_FOR_TPC_STARTREQUEST_ENTRY(v1)  (unsigned char)(v1+49)
#define UL1D_DPD_PA_MODE(v1)  (unsigned char)(v1+52)
#define UL1D_TRC_STR_DPD_FAC_SLOT_CTRL_TYPE(v1)  (unsigned char)(v1+56)
#define UL1D_TRC_DPD_NORMAL_MISC_TYPE(v1)  (unsigned char)(v1+60)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_FAC_DBG_MSG0(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0088,0x0088);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_DBG_MSG0(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_FAC_DBG_MSG1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0188,0x0188);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_DBG_MSG1(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_FAC_DBG_MSG2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0288,0x0288);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_DBG_MSG2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_FAC_DBG_MSG3(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0388,0x0388);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_DBG_MSG3(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_FAC_DBG_MSG4(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0488,0x0488);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_DBG_MSG4(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_OTFC_DBG_MSG0(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0588,0x0588);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_DBG_MSG0(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_OTFC_DBG_MSG1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0688,0x0688);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_DBG_MSG1(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_OTFC_DBG_MSG2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0788,0x0788);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_DBG_MSG2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_OTFC_DBG_MSG3(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0888,0x0888);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_DBG_MSG3(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_OTFC_DBG_MSG4(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0988,0x0988);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_DBG_MSG4(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_FAC_BAND_CHK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A88,0x0A88);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_BAND_CHK(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_FAC_BAND_INFO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B88,0x0B88);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_BAND_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_FAC_SUBBAND_LOOP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C88,0x0C88);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_SUBBAND_LOOP(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_FAC_GAIN_LOOP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D88,0x0D88);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_GAIN_LOOP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_FAC_PGA_SRCH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E88,0x0E88);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_PGA_SRCH(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_FAC_PARAM(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F88,0x0F88);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_PARAM(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_FAC_TPC_PARAM(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1088,0x1088);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_TPC_PARAM(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_FAC_TIME(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1188,0x1188);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_TIME(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_FAC_SW_MODE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1288,0x1288);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_SW_MODE(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_FAC_FRONT_END_CTRL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1388,0x1388);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_FRONT_END_CTRL(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_FAC_ASSERT_LOOP(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1488,0x1488);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_ASSERT_LOOP(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_FAC_PA_ASSERT_LIMIT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1588,0x1588);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_FAC_PA_ASSERT_LIMIT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_NORMAL_DBG_BOOL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1688,0x1688);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_NORMAL_DBG_BOOL(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_NORMAL_DBG_NUMBER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1788,0x1788);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_NORMAL_DBG_NUMBER(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_NORMAL_DBG_ADDR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1888,0x1888);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_NORMAL_DBG_ADDR(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_COMPEL_APT_MODE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1988,0x1988);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_COMPEL_APT_MODE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_COMPEL_APT_MODE_HIT() do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1A88,0x1A88);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_COMPEL_APT_MODE_HIT()
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_NORMAL_INIT_DONE() do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1B88,0x1B88);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_NORMAL_INIT_DONE()
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_NORMAL_MODE_FLOW_ENTRY_COND(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C88,0x1C88);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_NORMAL_MODE_FLOW_ENTRY_COND(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_NORMAL_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D88,0x1D88);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_NORMAL_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_NORMAL_TEMPERATURE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E88,0x1E88);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_NORMAL_TEMPERATURE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_NORMAL_TEMPER_ENABLE() do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1F88,0x1F88);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_NORMAL_TEMPER_ENABLE()
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_NORMAL_BYPASS_DPD() do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x2088,0x2088);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_NORMAL_BYPASS_DPD()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_NORMAL_SET_THRESHOLD(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2188,0x2188);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_NORMAL_SET_THRESHOLD(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_NORMAL_ENABLE_DPD_CONDITION(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2288,0x2288);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_NORMAL_ENABLE_DPD_CONDITION(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_NORMAL_TEMPERTURE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2388,0x2388);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_NORMAL_TEMPERTURE(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_ASSERT_BYPASS_DPD_ERR(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2488,0x2488);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_ASSERT_BYPASS_DPD_ERR(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_OTFC_ENTRY_SM_INFO(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2588,0x2588);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_ENTRY_SM_INFO(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_OTFC_LEAVE_SM_INFO(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2688,0x2688);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_LEAVE_SM_INFO(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DPD_SENT_LUT_TO_FEC(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2788,0x2788);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_SENT_LUT_TO_FEC(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DPD_OTFC_AM_CR2_TO_FEC(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2888,0x2888);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_AM_CR2_TO_FEC(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DPD_OTFC_WAIT_FEC_ALGO_PROCESS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2988,0x2988);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_WAIT_FEC_ALGO_PROCESS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DPD_OTFC_DSP_BYPASS_RESULT() do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x10);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x2A88,0x2A88);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_DSP_BYPASS_RESULT()
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_OTFC_AM_OBSERVER(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2B88,0x2B88);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_AM_OBSERVER(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_OTFC_PM_OBSERVER(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2C88,0x2C88);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_PM_OBSERVER(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_OTFC_DBG_TPC_CON(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D88,0x2D88);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_DBG_TPC_CON(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_OTFC_Delay(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E88,0x2E88);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_Delay(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_OTFC_WB_READY(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2F88,0x2F88);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_WB_READY(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_OTFC_ENTER_NSFT() do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x3088,0x3088);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_ENTER_NSFT()
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_OTFC_LEAVE_NSFT() do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x3188,0x3188);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_LEAVE_NSFT()
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_OTFC_INTERPOLATION_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3288,0x3288);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_INTERPOLATION_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_TPC_WRITE_CMIF_8LEV_CFG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3388,0x3388);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_TPC_WRITE_CMIF_8LEV_CFG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_TPC_PA_FREQ_INTERPOLATION(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3488,0x3488);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_TPC_PA_FREQ_INTERPOLATION(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_TPC_GET_PA_TEMPER_COMP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3588,0x3588);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_TPC_GET_PA_TEMPER_COMP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_TPC_UPDATE_PA_TEMPER_COMP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3688,0x3688);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_TPC_UPDATE_PA_TEMPER_COMP(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_TPC_UPDATE_PA_GAIN(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3788,0x3788);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_TPC_UPDATE_PA_GAIN(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_TPC_BEFORE_IRQA(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3888,0x3888);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_TPC_BEFORE_IRQA(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_TPC_PA_VCC_IDX_THR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3988,0x3988);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_TPC_PA_VCC_IDX_THR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_TPC_PA_8LEV_CFG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3A88,0x3A88);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_TPC_PA_8LEV_CFG(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_PA_SUBBAND_COMP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3B88,0x3B88);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_PA_SUBBAND_COMP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DPD_OTFC_TEST() do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x3C88,0x3C88);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_OTFC_TEST()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_TPC_PRF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3D88,0x3D88);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_TPC_PRF(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_TPC_GAIN_NORM(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3E88,0x3E88);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_TPC_GAIN_NORM(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_DBG_SRAM_OBSERVER(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3F88,0x3F88);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_DBG_SRAM_OBSERVER(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_DBG_ACT_BUFF_OBSERVER(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4088,0x4088);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_DBG_ACT_BUFF_OBSERVER(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_DBG_SUBBAND_GAIN(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4188,0x4188);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_DBG_SUBBAND_GAIN(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_TPC_AD_DA_TH(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4288,0x4288);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_TPC_AD_DA_TH(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_DBG_SHM_AM_LUT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4388,0x4388);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_DBG_SHM_AM_LUT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_DBG_SHM_PM_LUT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4488,0x4488);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_DBG_SHM_PM_LUT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_DBG_AM_PM_READY(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4588,0x4588);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_DBG_AM_PM_READY(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_DBG_DPD_TXDFE_GAIN_BK(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4688,0x4688);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_DBG_DPD_TXDFE_GAIN_BK(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_DBG_TXDFERF_DC(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4788,0x4788);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_DBG_TXDFERF_DC(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_DBG_TXDFERF_IQ(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4888,0x4888);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_DBG_TXDFERF_IQ(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_DELAY_GD_RESULT_DEC(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4988,0x4988);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_DELAY_GD_RESULT_DEC(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_DELAY_GD_SEARCH_RESULT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4A88,0x4A88);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_DELAY_GD_SEARCH_RESULT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_DELAY_GD_SEARCH_UPDATE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4B88,0x4B88);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_DELAY_GD_SEARCH_UPDATE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DPD_DELAY_GD_STATUS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4C88,0x4C88);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_DPD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DPD_DELAY_GD_STATUS(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, UL1D_DPD_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_UL1D_DPD_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1D_DPD()	(FILTER_CHECK(UL1D_DPD_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_H()	(ChkL1ModFltr_UL1D_DPD()&&(FILTER_CHECK(UL1D_DPD_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_M()	(ChkL1ModFltr_UL1D_DPD()&&(FILTER_CHECK(UL1D_DPD_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_L()	(ChkL1ModFltr_UL1D_DPD()&&(FILTER_CHECK(UL1D_DPD_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()	(ChkL1ModFltr_UL1D_DPD()&&(FILTER_CHECK(UL1D_DPD_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_M()	(ChkL1ModFltr_UL1D_DPD()&&(FILTER_CHECK(UL1D_DPD_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()	(ChkL1ModFltr_UL1D_DPD()&&(FILTER_CHECK(UL1D_DPD_Trace_Filter, 1, 0x20)))
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_DBG_MSG0()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_DBG_MSG1()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_DBG_MSG2()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_DBG_MSG3()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_DBG_MSG4()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_DBG_MSG0()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_DBG_MSG1()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_DBG_MSG2()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_DBG_MSG3()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_DBG_MSG4()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_BAND_CHK()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_BAND_INFO()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_SUBBAND_LOOP()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_GAIN_LOOP()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_PGA_SRCH()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_PARAM()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_TPC_PARAM()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_TIME()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_SW_MODE()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_FRONT_END_CTRL()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_ASSERT_LOOP()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_FAC_PA_ASSERT_LIMIT()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_NORMAL_DBG_BOOL()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_NORMAL_DBG_NUMBER()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_NORMAL_DBG_ADDR()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_COMPEL_APT_MODE()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_COMPEL_APT_MODE_HIT()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_NORMAL_INIT_DONE()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_NORMAL_MODE_FLOW_ENTRY_COND()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_NORMAL_INFO()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_NORMAL_TEMPERATURE()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_NORMAL_TEMPER_ENABLE()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_NORMAL_BYPASS_DPD()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_NORMAL_SET_THRESHOLD()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_NORMAL_ENABLE_DPD_CONDITION()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_NORMAL_TEMPERTURE()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_ASSERT_BYPASS_DPD_ERR()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_ENTRY_SM_INFO()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_LEAVE_SM_INFO()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_SENT_LUT_TO_FEC()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_M()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_AM_CR2_TO_FEC()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_M()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_WAIT_FEC_ALGO_PROCESS()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_M()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_DSP_BYPASS_RESULT()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_M()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_AM_OBSERVER()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_PM_OBSERVER()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_DBG_TPC_CON()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_Delay()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_WB_READY()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_ENTER_NSFT()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_LEAVE_NSFT()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_INTERPOLATION_INFO()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_TPC_WRITE_CMIF_8LEV_CFG()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_TPC_PA_FREQ_INTERPOLATION()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_TPC_GET_PA_TEMPER_COMP()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_TPC_UPDATE_PA_TEMPER_COMP()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_TPC_UPDATE_PA_GAIN()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_TPC_BEFORE_IRQA()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_TPC_PA_VCC_IDX_THR()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_TPC_PA_8LEV_CFG()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_PA_SUBBAND_COMP()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_OTFC_TEST()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_UL1D_TRC_DPD_TPC_PRF()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_TPC_GAIN_NORM()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_DBG_SRAM_OBSERVER()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_DBG_ACT_BUFF_OBSERVER()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_DBG_SUBBAND_GAIN()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_TPC_AD_DA_TH()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_DBG_SHM_AM_LUT()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_DBG_SHM_PM_LUT()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_DBG_AM_PM_READY()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_DBG_DPD_TXDFE_GAIN_BK()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_DBG_TXDFERF_DC()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_DBG_TXDFERF_IQ()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_DELAY_GD_RESULT_DEC()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_DELAY_GD_SEARCH_RESULT()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_DELAY_GD_SEARCH_UPDATE()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_L()
#define ChkL1MsgFltr_UL1D_TRC_DPD_DELAY_GD_STATUS()	ChkL1ClsFltr_UL1D_DPD_UL1D_TRC_CLS_DPD_FAC_MAIN_L()


#endif
