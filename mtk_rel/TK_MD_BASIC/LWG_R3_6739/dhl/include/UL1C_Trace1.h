#ifndef L1TRC_UL1C_PRI1_DEF_H
#define L1TRC_UL1C_PRI1_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define UL1I_TRC_CM_Obsolete(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x008E,0x008E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CM_Obsolete(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PS_TASFreqScanAnt(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x018E,0x018E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PS_TASFreqScanAnt(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PS_Result(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x028E,0x028E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PS_Result(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PS_SortedFreq(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x038E,0x038E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PS_SortedFreq(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_State(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x048E,0x048E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_State(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_UL1_Suspend(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x058E,0x058E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_UL1_Suspend(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_FB_PwrScanNext(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x068E,0x068E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_FB_PwrScanNext(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_AutoGap_State(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x078E,0x078E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_AutoGap_State(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_ScanSuspend(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x088E,0x088E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_ScanSuspend(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_ProcessScanStart(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x098E,0x098E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_ProcessScanStart(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_NextFullbandAnt(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A8E,0x0A8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_NextFullbandAnt(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_SuspendFullbandScan(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B8E,0x0B8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_SuspendFullbandScan(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_SetFullbandAntenna(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C8E,0x0C8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_SetFullbandAntenna(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CSFB_SRVCC_4GInheritantena(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D8E,0x0D8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CSFB_SRVCC_4GInheritantena(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ECS_Start(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E8E,0x0E8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ECS_Start(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ECS_Stop(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F8E,0x0F8E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ECS_Stop(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ECS_InternalStop(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x108E,0x108E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ECS_InternalStop(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ECS_Status(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x118E,0x118E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ECS_Status(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ECS_Result(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x128E,0x128E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ECS_Result(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_BeforeGetPendingResult(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x138E,0x138E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_BeforeGetPendingResult(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_AfterGetPendingResult(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x148E,0x148E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_AfterGetPendingResult(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_AfterResume(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x158E,0x158E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_AfterResume(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HFS_DBG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x168E,0x168E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_HFS_DBG(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HFS_DBG2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x178E,0x178E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_HFS_DBG2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HFS_Reset(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x188E,0x188E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_HFS_Reset(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HFS_ValidFrequency(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x198E,0x198E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_HFS_ValidFrequency(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HFS_FinalFrequencyNum(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A8E,0x1A8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_HFS_FinalFrequencyNum(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Get_ULDCHData(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B8E,0x1B8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Get_ULDCHData(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Get_ULDCHTRCHData(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C8E,0x1C8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Get_ULDCHTRCHData(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_UL_Timer_TFC_CB(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D8E,0x1D8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_UL_Timer_TFC_CB(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_UL_Timer_Data_CB(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E8E,0x1E8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_UL_Timer_Data_CB(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_Report_ULCB_Data(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F8E,0x1F8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1T_TRC_Report_ULCB_Data(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_Report_ULCB_TFC(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x208E,0x208E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1T_TRC_Report_ULCB_TFC(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_StopULDCh(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x218E,0x218E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_StopULDCh(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ULDCH_next_timer_delay(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x228E,0x228E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ULDCH_next_timer_delay(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ULDCH_UL1D_Intf(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x238E,0x238E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ULDCH_UL1D_Intf(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ULDCH_Set_MAC_Event(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x248E,0x248E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ULDCH_Set_MAC_Event(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ULDCH_TxPwr_Info_DuringBHHO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x258E,0x258E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ULDCH_TxPwr_Info_DuringBHHO(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RefDCH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x268E,0x268E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_RefDCH(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RefDCHCFN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x278E,0x278E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_RefDCHCFN(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DLSync_Qin(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x288E,0x288E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DLSync_Qin(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ReconfigDCH(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x298E,0x298E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ReconfigDCH(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ReconfigDCH_ASAP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2A8E,0x2A8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ReconfigDCH_ASAP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_LoopMode2(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2B8E,0x2B8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_LoopMode2(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ASU(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2C8E,0x2C8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ASU(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DL_CRC_Value(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D8E,0x2D8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DL_CRC_Value(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DL_Sync_Type(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E8E,0x2E8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DL_Sync_Type(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DL_Sync_Info(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2F8E,0x2F8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DL_Sync_Info(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ReconfigDCH_TTI(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x308E,0x308E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ReconfigDCH_TTI(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ReconfigDCH_TGPS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x318E,0x318E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ReconfigDCH_TGPS(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ReconfigDCH_R5R6(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x328E,0x328E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ReconfigDCH_R5R6(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_Modify_Abort(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x338E,0x338E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_Modify_Abort(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_UpdateDpchRl(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x348E,0x348E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_UpdateDpchRl(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_Sec_ASU_Config(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x358E,0x358E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_Sec_ASU_Config(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Sec_DLDCH_Config(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x368E,0x368E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Sec_DLDCH_Config(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DLDCH_TriggerExtendRLF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x378E,0x378E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DLDCH_TriggerExtendRLF(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DLSync_HsStuck(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x388E,0x388E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DLSync_HsStuck(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FMO_Config(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x398E,0x398E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FMO_Config(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FACH_Data(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3A8E,0x3A8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FACH_Data(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DRX_GAP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3B8E,0x3B8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DRX_GAP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DRX_Change(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3C8E,0x3C8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DRX_Change(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_FMO_LOCK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3D8E,0x3D8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1_TRC_FMO_LOCK(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FMO_Timer_Started(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3E8E,0x3E8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FMO_Timer_Started(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SCS_State(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3F8E,0x3F8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SCS_State(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SCS_Conflict(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x408E,0x408E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SCS_Conflict(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SCS_ResourceConflict(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x418E,0x418E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SCS_ResourceConflict(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SCS_Resource(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x428E,0x428E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SCS_Resource(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SCS_Init(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x438E,0x438E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SCS_Init(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_Status(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x448E,0x448E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_Status(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_PICHOverlapFrames(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x458E,0x458E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_PICHOverlapFrames(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ReconfigPCH(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x468E,0x468E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ReconfigPCH(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TwoPhaseSrchPI_PCHType_Debug(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x478E,0x478E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_TwoPhaseSrchPI_PCHType_Debug(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TwoPhaseSrchPI_GAPType_Debug(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x488E,0x488E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_TwoPhaseSrchPI_GAPType_Debug(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Reschedule_PCH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x498E,0x498E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Reschedule_PCH(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SetType(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4A8E,0x4A8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SetType(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TwoPhaseSrchPI_GAP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4B8E,0x4B8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_TwoPhaseSrchPI_GAP(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_Frames_debug(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4C8E,0x4C8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_Frames_debug(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TwoPhaseSrchPI_Res(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4D8E,0x4D8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_TwoPhaseSrchPI_Res(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_Type(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4E8E,0x4E8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_Type(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_drx_cycle2_life(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4F8E,0x4F8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_drx_cycle2_life(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SmartPagingState(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x508E,0x508E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SmartPagingState(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SmartPagingEvaluate(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x518E,0x518E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SmartPagingEvaluate(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SmartPagingLog(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x528E,0x528E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SmartPagingLog(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SmartCSState(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x538E,0x538E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SmartCSState(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_PCH_SmartCSLog(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x548E,0x548E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_PCH_SmartCSLog(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SmartCSSkip(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x558E,0x558E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SmartCSSkip(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SmartCMBypass(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x568E,0x568E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SmartCMBypass(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SmartCMPeriodicSwitch(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x578E,0x578E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SmartCMPeriodicSwitch(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_UL1D_Start_PCH(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x588E,0x588E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_UL1D_Start_PCH(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_UL1D_Stop_PCH(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x598E,0x598E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_UL1D_Stop_PCH(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_UL1D_CheckResource(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5A8E,0x5A8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_UL1D_CheckResource(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SleepEnable(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5B8E,0x5B8E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SleepEnable(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SleepDisable(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5C8E,0x5C8E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SleepDisable(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_Start_PCHWakeup(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5D8E,0x5D8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_Start_PCHWakeup(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_ChangeTo_NormalPI(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5E8E,0x5E8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_ChangeTo_NormalPI(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_NormalPI_Period(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5F8E,0x5F8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_NormalPI_Period(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RescheduleRTBTimer(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x608E,0x608E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RescheduleRTBTimer(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RescheduleRTBTimerFlag(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x618E,0x618E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RescheduleRTBTimerFlag(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RescheduleRTBTimerImm(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x628E,0x628E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RescheduleRTBTimerImm(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_Check_MPS_Ahead_Dbg(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x638E,0x638E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_Check_MPS_Ahead_Dbg(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RxDEnSkip(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x648E,0x648E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RxDEnSkip(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RxDSwitchDelay(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x658E,0x658E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RxDSwitchDelay(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RxDEcnoRscpMain(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x668E,0x668E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RxDEcnoRscpMain(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RxDEcnoRscpDiv(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x678E,0x678E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RxDEcnoRscpDiv(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RxDServingInfo(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x688E,0x688E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RxDServingInfo(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_Test_Sim_Status(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x698E,0x698E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_Test_Sim_Status(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_TASEvaluate(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6A8E,0x6A8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_TASEvaluate(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_TASProcOngoing(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6B8E,0x6B8E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_TASProcOngoing(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_TASStartTimer(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6C8E,0x6C8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_TASStartTimer(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_TASTriggerUnsync(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6D8E,0x6D8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_TASTriggerUnsync(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_Force_Normal_Status(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6E8E,0x6E8E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_Force_Normal_Status(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RAChData(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6F8E,0x6F8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_RAChData(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RACH_ASCSetting(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x708E,0x708E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_RACH_ASCSetting(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Get_Access_Slot(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x718E,0x718E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Get_Access_Slot(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RACH_Start(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x728E,0x728E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_RACH_Start(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RACH_NextASS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x738E,0x738E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_RACH_NextASS(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DelayTxAccess_CCM(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x748E,0x748E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DelayTxAccess_CCM(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DelayTxAccess_FMO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x758E,0x758E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DelayTxAccess_FMO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_InitReport(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x768E,0x768E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1T_TRC_InitReport(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1AC_TRC_EvtReport(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x778E,0x778E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1AC_TRC_EvtReport(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_AllocDlDataReport(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x788E,0x788E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_AllocDlDataReport(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FreeDLDataReport(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x798E,0x798E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FreeDLDataReport(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1_TRC_FreeReport(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7A8E,0x7A8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1_TRC_FreeReport(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_HoldReport(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7B8E,0x7B8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1T_TRC_HoldReport(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_Dbg_AllocReport(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7C8E,0x7C8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1_TRC_Dbg_AllocReport(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_Dbg_SendReport(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7D8E,0x7D8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1_TRC_Dbg_SendReport(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_SFN_Report_Callback(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7E8E,0x7E8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1_TRC_SFN_Report_Callback(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_Dbg_AllocDataBuffer(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7F8E,0x7F8E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1_TRC_Dbg_AllocDataBuffer(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_Dbg_FreeDataBuffer(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x808E,0x808E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1_TRC_Dbg_FreeDataBuffer(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_UL1D_State_Conflict(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x818E,0x818E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_UL1D_State_Conflict(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_EM_Switch(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x828E,0x828E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1T_TRC_EM_Switch(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_EM_RL_Sync_Switch(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x838E,0x838E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1T_TRC_EM_RL_Sync_Switch(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_EM_Switch(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x848E,0x848E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_EM_Switch(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_REDUMP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x858E,0x858E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_REDUMP(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, UL1C_PRI1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_UL1C_PRI1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1C_PRI1()	(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_SCS_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_CM_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_ERROR_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_EM_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_SCS_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_CM_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_SCS_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 3, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_CM_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 3, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 3, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 4, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 4, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 4, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 4, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 4, 0x10)))
#define ChkL1MsgFltr_UL1I_TRC_CM_Obsolete()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_PS_TASFreqScanAnt()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_PS_Result()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_PS_SortedFreq()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_State()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_UL1_Suspend()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_FB_PwrScanNext()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_AutoGap_State()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_ScanSuspend()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_ProcessScanStart()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_NextFullbandAnt()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_SuspendFullbandScan()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_SetFullbandAntenna()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_CSFB_SRVCC_4GInheritantena()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1T_TRC_ECS_Start()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1T_TRC_ECS_Stop()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_ECS_InternalStop()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_ECS_Status()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_ECS_Result()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_BeforeGetPendingResult()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_AfterGetPendingResult()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_AfterResume()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_HFS_DBG()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_HFS_DBG2()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_HFS_Reset()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_HFS_ValidFrequency()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_HFS_FinalFrequencyNum()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_Get_ULDCHData()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Get_ULDCHTRCHData()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_UL_Timer_TFC_CB()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_UL_Timer_Data_CB()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_Report_ULCB_Data()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_Report_ULCB_TFC()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_StopULDCh()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_ULDCH_next_timer_delay()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_ULDCH_UL1D_Intf()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_ULDCH_Set_MAC_Event()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_ULDCH_TxPwr_Info_DuringBHHO()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_RefDCH()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_RefDCHCFN()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_DLSync_Qin()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_ReconfigDCH()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_ReconfigDCH_ASAP()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_LoopMode2()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_ASU()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_DL_CRC_Value()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_DL_Sync_Type()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_DL_Sync_Info()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_ReconfigDCH_TTI()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_ReconfigDCH_TGPS()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_ReconfigDCH_R5R6()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_Modify_Abort()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_UpdateDpchRl()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_Sec_ASU_Config()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Sec_DLDCH_Config()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_DLDCH_TriggerExtendRLF()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_DLSync_HsStuck()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_FMO_Config()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_H()
#define ChkL1MsgFltr_UL1I_TRC_FACH_Data()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_H()
#define ChkL1MsgFltr_UL1I_TRC_DRX_GAP()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_H()
#define ChkL1MsgFltr_UL1I_TRC_DRX_Change()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_H()
#define ChkL1MsgFltr_UL1_TRC_FMO_LOCK()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_H()
#define ChkL1MsgFltr_UL1I_TRC_FMO_Timer_Started()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_H()
#define ChkL1MsgFltr_UL1I_TRC_SCS_State()	ChkL1ClsFltr_UL1C_PRI1_UL1C_SCS_H()
#define ChkL1MsgFltr_UL1I_TRC_SCS_Conflict()	ChkL1ClsFltr_UL1C_PRI1_UL1C_SCS_H()
#define ChkL1MsgFltr_UL1I_TRC_SCS_ResourceConflict()	ChkL1ClsFltr_UL1C_PRI1_UL1C_SCS_H()
#define ChkL1MsgFltr_UL1I_TRC_SCS_Resource()	ChkL1ClsFltr_UL1C_PRI1_UL1C_SCS_H()
#define ChkL1MsgFltr_UL1I_TRC_SCS_Init()	ChkL1ClsFltr_UL1C_PRI1_UL1C_SCS_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_Status()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_PICHOverlapFrames()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_ReconfigPCH()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_TwoPhaseSrchPI_PCHType_Debug()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_TwoPhaseSrchPI_GAPType_Debug()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Reschedule_PCH()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SetType()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_TwoPhaseSrchPI_GAP()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_Frames_debug()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_TwoPhaseSrchPI_Res()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_Type()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_drx_cycle2_life()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SmartPagingState()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SmartPagingEvaluate()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SmartPagingLog()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SmartCSState()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1T_TRC_PCH_SmartCSLog()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SmartCSSkip()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SmartCMBypass()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SmartCMPeriodicSwitch()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_UL1D_Start_PCH()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_UL1D_Stop_PCH()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_UL1D_CheckResource()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SleepEnable()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SleepDisable()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_Start_PCHWakeup()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_ChangeTo_NormalPI()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_NormalPI_Period()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RescheduleRTBTimer()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RescheduleRTBTimerFlag()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RescheduleRTBTimerImm()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_Check_MPS_Ahead_Dbg()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RxDEnSkip()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RxDSwitchDelay()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RxDEcnoRscpMain()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RxDEcnoRscpDiv()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RxDServingInfo()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_Test_Sim_Status()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_TASEvaluate()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_TASProcOngoing()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_TASStartTimer()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_TASTriggerUnsync()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_Force_Normal_Status()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_RAChData()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_H()
#define ChkL1MsgFltr_UL1I_TRC_RACH_ASCSetting()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_H()
#define ChkL1MsgFltr_UL1I_TRC_Get_Access_Slot()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_H()
#define ChkL1MsgFltr_UL1I_TRC_RACH_Start()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_H()
#define ChkL1MsgFltr_UL1I_TRC_RACH_NextASS()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_H()
#define ChkL1MsgFltr_UL1I_TRC_DelayTxAccess_CCM()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_H()
#define ChkL1MsgFltr_UL1I_TRC_DelayTxAccess_FMO()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_H()
#define ChkL1MsgFltr_UL1T_TRC_InitReport()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_L()
#define ChkL1MsgFltr_UL1AC_TRC_EvtReport()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1I_TRC_AllocDlDataReport()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1I_TRC_FreeDLDataReport()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1_TRC_FreeReport()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_L()
#define ChkL1MsgFltr_UL1T_TRC_HoldReport()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_L()
#define ChkL1MsgFltr_UL1_TRC_Dbg_AllocReport()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1_TRC_Dbg_SendReport()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1_TRC_SFN_Report_Callback()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1_TRC_Dbg_AllocDataBuffer()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1_TRC_Dbg_FreeDataBuffer()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1I_TRC_UL1D_State_Conflict()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1T_TRC_EM_Switch()	ChkL1ClsFltr_UL1C_PRI1_UL1C_EM_L()
#define ChkL1MsgFltr_UL1T_TRC_EM_RL_Sync_Switch()	ChkL1ClsFltr_UL1C_PRI1_UL1C_EM_L()
#define ChkL1MsgFltr_UL1I_TRC_EM_Switch()	ChkL1ClsFltr_UL1C_PRI1_UL1C_EM_L()
#define ChkL1MsgFltr_UL1T_TRC_REDUMP()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ERROR_L()


#endif
