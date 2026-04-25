#ifndef L1TRC_UL1C_PRI2_DEF_H
#define L1TRC_UL1C_PRI2_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_Next_L1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x008F,0x008F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CTCH_Next_L1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_BS_Start(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x018F,0x018F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CTCH_BS_Start(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_Rx_Status(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x028F,0x028F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CTCH_Rx_Status(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_L2_BP(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x038F,0x038F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CTCH_L2_BP(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_Reschedule(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x048F,0x048F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CTCH_Reschedule(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_Priority_Change(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x058F,0x058F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CTCH_Priority_Change(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_PCH_Type_Changed(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x068F,0x068F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CTCH_PCH_Type_Changed(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Timer(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x078F,0x078F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Timer(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_UnexpectedTimerStart(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x088F,0x088F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define UL1I_TRC_UnexpectedTimerStart(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_LeaveConfig(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x098F,0x098F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_LeaveConfig(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_EnterConfig(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A8F,0x0A8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_EnterConfig(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_AbortConfig(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B8F,0x0B8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_AbortConfig(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SuspendCNF(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C8F,0x0C8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SuspendCNF(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_BCH_CCM_SIB_STATUS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D8F,0x0D8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_BCH_CCM_SIB_STATUS(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_BCH_CCM_SFN_STATUS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E8F,0x0E8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_BCH_CCM_SFN_STATUS(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_EnterDCH(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F8F,0x0F8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_EnterDCH(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_EnterPCH(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x108F,0x108F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_EnterPCH(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_EnterFACH(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x118F,0x118F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_EnterFACH(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_EnterNull(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x128F,0x128F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_EnterNull(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CCM_SetFN(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x138F,0x138F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CCM_SetFN(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_StartDLDCH(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x148F,0x148F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_StartDLDCH(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TTI(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x158F,0x158F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_TTI(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CCM_State(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x168F,0x168F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CCM_State(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Master_CCM_State(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x178F,0x178F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Master_CCM_State(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_StopCC_Slave_CCM_State(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x188F,0x188F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_StopCC_Slave_CCM_State(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CCM_All_SIM_Stopped(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x198F,0x198F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CCM_All_SIM_Stopped(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CCM_Not_All_SIM_Stopped(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A8F,0x1A8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CCM_Not_All_SIM_Stopped(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CCM_All_SIM_Started(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B8F,0x1B8F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CCM_All_SIM_Started(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CCM_Not_All_SIM_Started(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C8F,0x1C8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CCM_Not_All_SIM_Started(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CCM_Set_Connect_SIM_Index(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D8F,0x1D8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CCM_Set_Connect_SIM_Index(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_StartDDLTimer(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E8F,0x1E8F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_StartDDLTimer(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Print_DDLFromCCM(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F8F,0x1F8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Print_DDLFromCCM(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TimingExtendCTCH(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x208F,0x208F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_TimingExtendCTCH(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TimingInfo(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x218F,0x218F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_TimingInfo(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ReportTimingDrift(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x228F,0x228F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ReportTimingDrift(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ModifyTimingDrift(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x238F,0x238F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ModifyTimingDrift(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Reschedule_Status(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x248F,0x248F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Reschedule_Status(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_Reschedule(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x258F,0x258F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_Reschedule(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_Rx(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x268F,0x268F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_Rx(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_State(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x278F,0x278F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_State(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_State_RunningSIM(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x288F,0x288F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_State_RunningSIM(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_Report(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x298F,0x298F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_Report(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_RetryAllow(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2A8F,0x2A8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_RetryAllow(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_InternalStop(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2B8F,0x2B8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_InternalStop(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_Compensation(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2C8F,0x2C8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_Compensation(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_Avail_Dec_Frms(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D8F,0x2D8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_Avail_Dec_Frms(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_AdjustProtectPriority(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E8F,0x2E8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_AdjustProtectPriority(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_ReStart(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2F8F,0x2F8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_ReStart(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_CMResult(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x308F,0x308F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_CMResult(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_CM_Result(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x318F,0x318F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_CM_Result(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_TwoStage_State(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x328F,0x328F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_TwoStage_State(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_MPS_Position(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x338F,0x338F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_MPS_Position(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_Pending_Stop_Report(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x348F,0x348F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_Pending_Stop_Report(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_Set_is_HHO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x358F,0x358F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SFN_Set_is_HHO(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Early_Sync(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x368F,0x368F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Early_Sync(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Early_Sync_traces(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x378F,0x378F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Early_Sync_traces(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SIB_Reschedule(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x388F,0x388F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SIB_Reschedule(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SIB_State(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x398F,0x398F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SIB_State(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_SIB_CM(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3A8F,0x3A8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define UL1T_TRC_SIB_CM(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_SIB_CM1(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3B8F,0x3B8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define UL1T_TRC_SIB_CM1(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SIB_AdjustProtectPriority(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3C8F,0x3C8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SIB_AdjustProtectPriority(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SIB_Ahead_MPS_Info(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3D8F,0x3D8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SIB_Ahead_MPS_Info(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SIB_PCH_Type_Changed(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3E8F,0x3E8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SIB_PCH_Type_Changed(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SIB_RR_PriorityChange(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3F8F,0x3F8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SIB_RR_PriorityChange(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1T_TRC_ConfigBAList(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 2, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x408F,0x408F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 2, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ConfigBAList(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CellInfo(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x418F,0x418F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CellInfo(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CellInfo_1(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x428F,0x428F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CellInfo_1(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ConfigDetectedCell(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x438F,0x438F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ConfigDetectedCell(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1T_TRC_BA_Mapping(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 2, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x448F,0x448F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 2, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_BA_Mapping(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_BAStatusUpdateInfo(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x458F,0x458F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_BAStatusUpdateInfo(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_Alloc_CMM_Report(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x468F,0x468F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CM_Alloc_CMM_Report(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_DCH_1st_Tick(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x478F,0x478F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CM_DCH_1st_Tick(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_Prepare_BA_status(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x488F,0x488F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CM_Prepare_BA_status(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_DeleteBA(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x498F,0x498F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CM_DeleteBA(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_Protected_in_DCH(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4A8F,0x4A8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CM_Protected_in_DCH(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_EvaluateReq(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4B8F,0x4B8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CM_EvaluateReq(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_Trigger_EnhancedCM(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4C8F,0x4C8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CM_Trigger_EnhancedCM(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_DetectedCell_InvalidTM(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4D8F,0x4D8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CM_DetectedCell_InvalidTM(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_freq_not_existed(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4E8F,0x4E8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CM_freq_not_existed(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_ConfigBA_by_CCM(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4F8F,0x4F8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CM_ConfigBA_by_CCM(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_Restore_CM_result(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x508F,0x508F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CM_Restore_CM_result(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_Compensate_CMCS(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x518F,0x518F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CM_Compensate_CMCS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_AlarmTimeoutForInterF(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x528F,0x528F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CM_AlarmTimeoutForInterF(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CM_freq_spec_compress_mode(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x538F,0x538F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CM_freq_spec_compress_mode(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CM_RptHasCleared(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x548F,0x548F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CM_RptHasCleared(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CMHalt(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x558F,0x558F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CMHalt(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ConfigCell(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x568F,0x568F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ConfigCell(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CMResult(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x578F,0x578F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CMResult(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CMResult_RXD(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x588F,0x588F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CMResult_RXD(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CMDone(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x598F,0x598F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CMDone(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CMGet_CelllistIndx(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5A8F,0x5A8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CMGet_CelllistIndx(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CMGet_BAnum(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5B8F,0x5B8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CMGet_BAnum(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMStart(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5C8F,0x5C8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CMStart(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PrioCMCS(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5D8F,0x5D8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PrioCMCS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PrioCMCS_InterF_EFACH_DRX(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5E8F,0x5E8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PrioCMCS_InterF_EFACH_DRX(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CMStart(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5F8F,0x5F8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CMStart(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CMStart_Failed(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x608F,0x608F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CMStart_Failed(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CellListNotConfig(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x618F,0x618F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CellListNotConfig(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMStop(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x628F,0x628F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CMStop(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMReportStop(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x638F,0x638F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CMReportStop(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CMStop(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x648F,0x648F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CMStop(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_CMAlphaFilter(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x658F,0x658F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CMAlphaFilter(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMReport(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x668F,0x668F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CMReport(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CM_AllocReportEnhancedCM(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x678F,0x678F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CM_AllocReportEnhancedCM(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_CMAVG_Put(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x688F,0x688F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CMAVG_Put(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_CMAVG_Apply(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x698F,0x698F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CMAVG_Apply(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_CMAVG_Apply_RXD(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6A8F,0x6A8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CMAVG_Apply_RXD(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_CMAVG_LINValue(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6B8F,0x6B8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CMAVG_LINValue(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_CMAVG_DBG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6C8F,0x6C8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CMAVG_DBG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_EnhancedCM_Params(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6D8F,0x6D8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_EnhancedCM_Params(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CellSearch_Status(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6E8F,0x6E8F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CellSearch_Status(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CMTreselection(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6F8F,0x6F8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CMTreselection(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASDisableForceTxAnt(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x708F,0x708F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASDisableForceTxAnt(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASGuardExpire(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x718F,0x718F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASGuardExpire(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASSwitchBackExpire(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x728F,0x728F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASSwitchBackExpire(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASEnterState(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x738F,0x738F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASEnterState(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASDedicateAllowed(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x748F,0x748F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASDedicateAllowed(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASPCHNotAllowed(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x758F,0x758F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASPCHNotAllowed(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASAbortSwitch(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x768F,0x768F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASAbortSwitch(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASStartSwitchBack(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x778F,0x778F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASStartSwitchBack(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASSwitchBack(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x788F,0x788F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASSwitchBack(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASType1LasConditions(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x798F,0x798F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
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
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASType1LasConditions(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASType1CasConditions(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7A8F,0x7A8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASType1CasConditions(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASType2Conditions(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7B8F,0x7B8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASType2Conditions(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASType1Evaluate(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7C8F,0x7C8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASType1Evaluate(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASType2Evaluate(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7D8F,0x7D8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASType2Evaluate(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASType1SBConditions(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7E8F,0x7E8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASType1SBConditions(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASType2SBConditions(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7F8F,0x7F8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASType2SBConditions(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TAS_FuncTest(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x808F,0x808F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TAS_FuncTest(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TAS_Floating_Threshold(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x818F,0x818F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TAS_Floating_Threshold(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASProcOngoing(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x828F,0x828F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASProcOngoing(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TAS_SetAntOnTestSIM(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x838F,0x838F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TAS_SetAntOnTestSIM(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TAS_SetAntOnRealSIM(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x848F,0x848F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TAS_SetAntOnRealSIM(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RBTestModeStatus(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x858F,0x858F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RBTestModeStatus(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TAS_SDAEnable(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x868F,0x868F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TAS_SDAEnable(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TAS_DBG_SetAntIdx_TestSIM(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x878F,0x878F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TAS_DBG_SetAntIdx_TestSIM(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_Overlap_freq(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x888F,0x888F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_Overlap_freq(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RAS_return_due2_overlap(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x898F,0x898F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RAS_return_due2_overlap(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_Set_CS_Flag(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8A8F,0x8A8F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_Set_CS_Flag(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_Set_CS_Flag_Status(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8B8F,0x8B8F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_Set_CS_Flag_Status(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RAS_start_ras_status(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8C8F,0x8C8F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RAS_start_ras_status(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RAS_avg_buff_index(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8D8F,0x8D8F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RAS_avg_buff_index(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RAS_live_sim_status(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8E8F,0x8E8F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RAS_live_sim_status(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RAS_ras_status(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8F8F,0x8F8F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RAS_ras_status(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RAS_inisde_firsttimer(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x908F,0x908F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RAS_inisde_firsttimer(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RAS_start_thresholds(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x918F,0x918F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RAS_start_thresholds(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RxD_status_inCMCS_DCH(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x928F,0x928F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RxD_status_inCMCS_DCH(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RxD_status_inCMCS_FACH(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x938F,0x938F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RxD_status_inCMCS_FACH(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_Seting_tas_type(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x948F,0x948F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_Seting_tas_type(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_get_tas_type(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x958F,0x958F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_get_tas_type(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RAS_SET_TAS_TYPE_DONE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x968F,0x968F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RAS_SET_TAS_TYPE_DONE(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RAS_Evaluate_function(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x978F,0x978F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RAS_Evaluate_function(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RAS_Evaluate_initial_status(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x988F,0x988F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RAS_Evaluate_initial_status(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RAS_Evaluate_end_status(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x998F,0x998F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RAS_Evaluate_end_status(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RAS_rscp_rssi_ecno_avg(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9A8F,0x9A8F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RAS_rscp_rssi_ecno_avg(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASSendCMReport(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9B8F,0x9B8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASSendCMReport(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASDeriveMeasSample(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9C8F,0x9C8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASDeriveMeasSample(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASDeriveMeasSample_Div(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9D8F,0x9D8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASDeriveMeasSample_Div(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASQueueMeasSample(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9E8F,0x9E8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASQueueMeasSample(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASInitDedi(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9F8F,0x9F8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASInitDedi(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASInitIdle(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xA08F,0xA08F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASInitIdle(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_ServingIdx(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xA18F,0xA18F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_ServingIdx(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_HTP_Power(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xA28F,0xA28F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_HTP_Power(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_HTP_Ratio(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xA38F,0xA38F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_HTP_Ratio(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_DPCCH_TXPWR(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xA48F,0xA48F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_DPCCH_TXPWR(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TAS_Dynamic_Barrier(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xA58F,0xA58F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TAS_Dynamic_Barrier(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TAS_Avg_Buf_idx(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xA68F,0xA68F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TAS_Avg_Buf_idx(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TAS_Floating_Thre(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xA78F,0xA78F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TAS_Floating_Thre(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TAS_Type1_NoDiv(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xA88F,0xA88F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TAS_Type1_NoDiv(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TAS_StopTimer(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xA98F,0xA98F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TAS_StopTimer(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TAS_SendTasStats(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xAA8F,0xAA8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TAS_SendTasStats(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_SendInstStats(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xAB8F,0xAB8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_SendInstStats(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RF_TUNING_State(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xAC8F,0xAC8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_RF_TUNING_State(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CSDone(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xAD8F,0xAD8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CSDone(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CSStart(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xAE8F,0xAE8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CSStart(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CS_Stop(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xAF8F,0xAF8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CS_Stop(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CS_RptHasCleared(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xB08F,0xB08F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CS_RptHasCleared(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CS_PreCSPending_Return(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xB18F,0xB18F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CS_PreCSPending_Return(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Unlock_gapStopCnf(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xB28F,0xB28F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Unlock_gapStopCnf(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_DMStopGap(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xB38F,0xB38F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1T_TRC_DMStopGap(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_DM_SetGap(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xB48F,0xB48F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1T_TRC_DM_SetGap(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_DM_DRXTick(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xB58F,0xB58F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1T_TRC_DM_DRXTick(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_CMCSTickInfo(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xB68F,0xB68F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DM_CMCSTickInfo(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_DM_SetCurrActiveMode(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xB78F,0xB78F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1T_TRC_DM_SetCurrActiveMode(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_AssignGAP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xB88F,0xB88F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DM_AssignGAP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_GapStatus(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xB98F,0xB98F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DM_GapStatus(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Start_GAP_Timer1(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xBA8F,0xBA8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Start_GAP_Timer1(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Start_GAP_Timer2(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xBB8F,0xBB8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Start_GAP_Timer2(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Start_GAP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xBC8F,0xBC8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Start_GAP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_TimeSyncStart(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xBD8F,0xBD8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DM_TimeSyncStart(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_TimeSyncReport(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xBE8F,0xBE8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DM_TimeSyncReport(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_ShowUSC(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xBF8F,0xBF8F);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DM_ShowUSC(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_DM_Cancel_ActiveGAP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xC08F,0xC08F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1T_TRC_DM_Cancel_ActiveGAP(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_Cancel_2G_GAP_Cnf(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xC18F,0xC18F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DM_Cancel_2G_GAP_Cnf(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_Query_GAP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xC28F,0xC28F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DM_Query_GAP(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_Query_GAP_SM(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xC38F,0xC38F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DM_Query_GAP_SM(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_Query_PSEUDO(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xC48F,0xC48F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DM_Query_PSEUDO(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_Sleep_Ind(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xC58F,0xC58F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DM_Sleep_Ind(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_GAP_TYPE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xC68F,0xC68F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DM_GAP_TYPE(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_DM_EFACHDRX_NeedGap(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xC78F,0xC78F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1T_TRC_DM_EFACHDRX_NeedGap(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_EFACHDRX_Disable(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xC88F,0xC88F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DM_EFACHDRX_Disable(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_EFACHDRX_SkipGap(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xC98F,0xC98F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DM_EFACHDRX_SkipGap(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_EFACHDRX_Cm_Session_Info(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xCA8F,0xCA8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DM_EFACHDRX_Cm_Session_Info(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DMA_Auto_Gap_Assign(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xCB8F,0xCB8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DMA_Auto_Gap_Assign(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DMA_Auto_Gap_Update(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xCC8F,0xCC8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DMA_Auto_Gap_Update(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DMS_Auto_Gap_State(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xCD8F,0xCD8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DMS_Auto_Gap_State(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DMS_Auto_Gap_Req(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xCE8F,0xCE8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DMS_Auto_Gap_Req(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DMS_Auto_Gap_AvailStart(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xCF8F,0xCF8F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DMS_Auto_Gap_AvailStart(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DMS_Auto_Gap_Assign(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xD08F,0xD08F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DMS_Auto_Gap_Assign(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RTB_Timer(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xD18F,0xD18F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x20);\
		}\
	} while(0)
#else
	#define UL1I_TRC_RTB_Timer(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_AGPS_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xD28F,0xD28F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_AGPS_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_ADJUSTMENT_STATUS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xD38F,0xD38F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CTCH_ADJUSTMENT_STATUS(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_ADJUSTMENT_SUSPEND(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xD48F,0xD48F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CTCH_ADJUSTMENT_SUSPEND(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_Resume(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xD58F,0xD58F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CTCH_Resume(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_Delay(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0xD68F,0xD68F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CTCH_Delay(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, UL1C_PRI2_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_UL1C_PRI2_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1C_PRI2()	(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_L()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_TIMER_L()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_L()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_L()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_L()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_L()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_L()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CS_L()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_L()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_RTB_L()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_M()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_TIMER_M()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_M()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_M()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_M()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_M()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_M()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CS_M()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_M()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_RTB_M()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_TIMER_H()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 3, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 3, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 3, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 4, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 4, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_H()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 4, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CS_H()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 4, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 4, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_RTB_H()	(ChkL1ModFltr_UL1C_PRI2()&&(FILTER_CHECK(UL1C_PRI2_Trace_Filter, 4, 0x20)))
#define ChkL1MsgFltr_UL1I_TRC_CTCH_Next_L1()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_BS_Start()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_Rx_Status()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_L2_BP()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_Reschedule()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_Priority_Change()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_PCH_Type_Changed()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Timer()	ChkL1ClsFltr_UL1C_PRI2_UL1C_TIMER_H()
#define ChkL1MsgFltr_UL1I_TRC_UnexpectedTimerStart()	ChkL1ClsFltr_UL1C_PRI2_UL1C_TIMER_H()
#define ChkL1MsgFltr_UL1I_TRC_LeaveConfig()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_EnterConfig()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_AbortConfig()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_SuspendCNF()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_BCH_CCM_SIB_STATUS()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_BCH_CCM_SFN_STATUS()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_EnterDCH()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_EnterPCH()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_EnterFACH()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_EnterNull()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_CCM_SetFN()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_StartDLDCH()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_TTI()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_CCM_State()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_Master_CCM_State()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_StopCC_Slave_CCM_State()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_CCM_All_SIM_Stopped()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_CCM_Not_All_SIM_Stopped()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_CCM_All_SIM_Started()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_CCM_Not_All_SIM_Started()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_CCM_Set_Connect_SIM_Index()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_StartDDLTimer()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_Print_DDLFromCCM()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_TimingExtendCTCH()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_TimingInfo()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_ReportTimingDrift()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_ModifyTimingDrift()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_Reschedule_Status()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_Reschedule()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_Rx()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_State()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_State_RunningSIM()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_Report()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_RetryAllow()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_InternalStop()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_Compensation()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_Avail_Dec_Frms()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_AdjustProtectPriority()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_ReStart()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_CMResult()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_CM_Result()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_TwoStage_State()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_MPS_Position()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_Pending_Stop_Report()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_Set_is_HHO()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_Early_Sync()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_Early_Sync_traces()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_SIB_Reschedule()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1I_TRC_SIB_State()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1T_TRC_SIB_CM()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1T_TRC_SIB_CM1()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1I_TRC_SIB_AdjustProtectPriority()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1I_TRC_SIB_Ahead_MPS_Info()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1I_TRC_SIB_PCH_Type_Changed()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1I_TRC_SIB_RR_PriorityChange()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1T_TRC_ConfigBAList()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_M()
#define ChkL1MsgFltr_UL1T_TRC_CellInfo()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CellInfo_1()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_ConfigDetectedCell()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_BA_Mapping()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_M()
#define ChkL1MsgFltr_UL1T_TRC_BAStatusUpdateInfo()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_Alloc_CMM_Report()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_DCH_1st_Tick()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_Prepare_BA_status()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_DeleteBA()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_Protected_in_DCH()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_EvaluateReq()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_Trigger_EnhancedCM()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_DetectedCell_InvalidTM()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_freq_not_existed()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_ConfigBA_by_CCM()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_Restore_CM_result()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_Compensate_CMCS()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_AlarmTimeoutForInterF()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CM_freq_spec_compress_mode()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CM_RptHasCleared()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CMHalt()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_ConfigCell()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CMResult()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CMResult_RXD()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CMDone()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CMGet_CelllistIndx()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CMGet_BAnum()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CMStart()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_PrioCMCS()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_PrioCMCS_InterF_EFACH_DRX()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CMStart()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CMStart_Failed()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CellListNotConfig()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CMStop()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CMReportStop()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CMStop()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CMAlphaFilter()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_L()
#define ChkL1MsgFltr_UL1T_TRC_CMReport()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CM_AllocReportEnhancedCM()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CMAVG_Put()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_L()
#define ChkL1MsgFltr_UL1I_TRC_CMAVG_Apply()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_L()
#define ChkL1MsgFltr_UL1I_TRC_CMAVG_Apply_RXD()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_L()
#define ChkL1MsgFltr_UL1T_TRC_CMAVG_LINValue()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_L()
#define ChkL1MsgFltr_UL1T_TRC_CMAVG_DBG()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_L()
#define ChkL1MsgFltr_UL1I_TRC_EnhancedCM_Params()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_H()
#define ChkL1MsgFltr_UL1I_TRC_CellSearch_Status()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_H()
#define ChkL1MsgFltr_UL1_TRC_CMTreselection()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASDisableForceTxAnt()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASGuardExpire()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASSwitchBackExpire()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASEnterState()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASDedicateAllowed()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASPCHNotAllowed()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASAbortSwitch()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASStartSwitchBack()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASSwitchBack()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASType1LasConditions()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASType1CasConditions()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASType2Conditions()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASType1Evaluate()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASType2Evaluate()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASType1SBConditions()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASType2SBConditions()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TAS_FuncTest()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TAS_Floating_Threshold()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASProcOngoing()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TAS_SetAntOnTestSIM()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TAS_SetAntOnRealSIM()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RBTestModeStatus()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TAS_SDAEnable()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TAS_DBG_SetAntIdx_TestSIM()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_Overlap_freq()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RAS_return_due2_overlap()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_Set_CS_Flag()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_Set_CS_Flag_Status()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RAS_start_ras_status()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RAS_avg_buff_index()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RAS_live_sim_status()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RAS_ras_status()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RAS_inisde_firsttimer()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RAS_start_thresholds()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RxD_status_inCMCS_DCH()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RxD_status_inCMCS_FACH()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_Seting_tas_type()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_get_tas_type()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RAS_SET_TAS_TYPE_DONE()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RAS_Evaluate_function()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RAS_Evaluate_initial_status()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RAS_Evaluate_end_status()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RAS_rscp_rssi_ecno_avg()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASSendCMReport()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASDeriveMeasSample()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASDeriveMeasSample_Div()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASQueueMeasSample()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASInitDedi()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASInitIdle()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_ServingIdx()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_HTP_Power()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_HTP_Ratio()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_DPCCH_TXPWR()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TAS_Dynamic_Barrier()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TAS_Avg_Buf_idx()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TAS_Floating_Thre()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TAS_Type1_NoDiv()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TAS_StopTimer()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TAS_SendTasStats()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_SendInstStats()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_RF_TUNING_State()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_CSDone()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CS_H()
#define ChkL1MsgFltr_UL1I_TRC_CSStart()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CS_H()
#define ChkL1MsgFltr_UL1I_TRC_CS_Stop()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CS_H()
#define ChkL1MsgFltr_UL1I_TRC_CS_RptHasCleared()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CS_H()
#define ChkL1MsgFltr_UL1I_TRC_CS_PreCSPending_Return()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CS_H()
#define ChkL1MsgFltr_UL1I_TRC_Unlock_gapStopCnf()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1T_TRC_DMStopGap()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1T_TRC_DM_SetGap()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1T_TRC_DM_DRXTick()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_CMCSTickInfo()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1T_TRC_DM_SetCurrActiveMode()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_AssignGAP()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_GapStatus()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_Start_GAP_Timer1()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_Start_GAP_Timer2()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_Start_GAP()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_TimeSyncStart()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_TimeSyncReport()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_ShowUSC()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1T_TRC_DM_Cancel_ActiveGAP()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_Cancel_2G_GAP_Cnf()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_Query_GAP()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_Query_GAP_SM()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_Query_PSEUDO()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_Sleep_Ind()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_GAP_TYPE()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1T_TRC_DM_EFACHDRX_NeedGap()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_EFACHDRX_Disable()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_EFACHDRX_SkipGap()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_EFACHDRX_Cm_Session_Info()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DMA_Auto_Gap_Assign()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DMA_Auto_Gap_Update()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DMS_Auto_Gap_State()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DMS_Auto_Gap_Req()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DMS_Auto_Gap_AvailStart()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DMS_Auto_Gap_Assign()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_RTB_Timer()	ChkL1ClsFltr_UL1C_PRI2_UL1C_RTB_H()
#define ChkL1MsgFltr_UL1I_TRC_AGPS_INFO()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_ADJUSTMENT_STATUS()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_ADJUSTMENT_SUSPEND()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_Resume()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_Delay()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()


#endif
