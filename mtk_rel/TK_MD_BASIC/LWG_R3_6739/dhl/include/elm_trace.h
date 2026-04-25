#ifndef L1TRC_ELM_DEF_H
#define L1TRC_ELM_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define EMI_ELM_SET_R_TH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x009E,0x009E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMI_ELM_SET_R_TH(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EMI_ELM_SET_W_TH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x019E,0x019E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMI_ELM_SET_W_TH(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define DMA_ELM_SET_R_TH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x029E,0x029E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DMA_ELM_SET_R_TH(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define DMA_ELM_SET_W_TH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x039E,0x039E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DMA_ELM_SET_W_TH(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EMI_ELM_R_LAT_WARN(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x049E,0x049E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMI_ELM_R_LAT_WARN(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define EMI_ELM_W_LAT_WARN(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x059E,0x059E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMI_ELM_W_LAT_WARN(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define DMA_ELM_R_LAT_WARN(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x069E,0x069E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DMA_ELM_R_LAT_WARN(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define DMA_ELM_W_LAT_WARN(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x079E,0x079E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DMA_ELM_W_LAT_WARN(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EMI_TXZQ_WARN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x089E,0x089E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMI_TXZQ_WARN(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EMI_AP_DVFS_WARN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x099E,0x099E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMI_AP_DVFS_WARN(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EMI_AP_DDREN_WARN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A9E,0x0A9E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(ELM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMI_AP_DDREN_WARN(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, ELM_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_ELM_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_ELM()	(FILTER_CHECK(ELM_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_ELM_ELM_Basic_Info_H()	(ChkL1ModFltr_ELM()&&(FILTER_CHECK(ELM_Trace_Filter, 1, 0x01)))
#define ChkL1MsgFltr_EMI_ELM_SET_R_TH()	ChkL1ClsFltr_ELM_ELM_Basic_Info_H()
#define ChkL1MsgFltr_EMI_ELM_SET_W_TH()	ChkL1ClsFltr_ELM_ELM_Basic_Info_H()
#define ChkL1MsgFltr_DMA_ELM_SET_R_TH()	ChkL1ClsFltr_ELM_ELM_Basic_Info_H()
#define ChkL1MsgFltr_DMA_ELM_SET_W_TH()	ChkL1ClsFltr_ELM_ELM_Basic_Info_H()
#define ChkL1MsgFltr_EMI_ELM_R_LAT_WARN()	ChkL1ClsFltr_ELM_ELM_Basic_Info_H()
#define ChkL1MsgFltr_EMI_ELM_W_LAT_WARN()	ChkL1ClsFltr_ELM_ELM_Basic_Info_H()
#define ChkL1MsgFltr_DMA_ELM_R_LAT_WARN()	ChkL1ClsFltr_ELM_ELM_Basic_Info_H()
#define ChkL1MsgFltr_DMA_ELM_W_LAT_WARN()	ChkL1ClsFltr_ELM_ELM_Basic_Info_H()
#define ChkL1MsgFltr_EMI_TXZQ_WARN()	ChkL1ClsFltr_ELM_ELM_Basic_Info_H()
#define ChkL1MsgFltr_EMI_AP_DVFS_WARN()	ChkL1ClsFltr_ELM_ELM_Basic_Info_H()
#define ChkL1MsgFltr_EMI_AP_DDREN_WARN()	ChkL1ClsFltr_ELM_ELM_Basic_Info_H()


#endif
