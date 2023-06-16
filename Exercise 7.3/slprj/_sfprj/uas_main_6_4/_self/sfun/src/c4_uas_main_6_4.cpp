/* Include files */

#include "uas_main_6_4_sfun.h"
#include "c4_uas_main_6_4.h"
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
const int32_T CALL_EVENT = -1;

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c4_emlrtMCI = { 13, /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c4_b_emlrtMCI = { 14,/* lineNo */
  15,                                  /* colNo */
  "scalexpCheck",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpCheck.m"/* pName */
};

static emlrtMCInfo c4_c_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c4_d_emlrtMCI = { 288,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRSInfo c4_emlrtRSI = { 49, /* lineNo */
  "rotm2eul",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\rotm2eul.m"/* pathName */
};

static emlrtRSInfo c4_b_emlrtRSI = { 41,/* lineNo */
  "rotm2eul",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2eul.m"/* pathName */
};

static emlrtRSInfo c4_c_emlrtRSI = { 150,/* lineNo */
  "rotm2eul",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2eul.m"/* pathName */
};

static emlrtRSInfo c4_d_emlrtRSI = { 160,/* lineNo */
  "rotm2eul",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2eul.m"/* pathName */
};

static emlrtRSInfo c4_e_emlrtRSI = { 13,/* lineNo */
  "atan2",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elfun\\atan2.m"/* pathName */
};

static emlrtRSInfo c4_f_emlrtRSI = { 66,/* lineNo */
  "ixfun",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pathName */
};

static emlrtRSInfo c4_g_emlrtRSI = { 45,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo c4_h_emlrtRSI = { 19,/* lineNo */
  "scalexpAlloc",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pathName */
};

static emlrtRSInfo c4_i_emlrtRSI = { 43,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c4_j_emlrtRSI = { 113,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c4_k_emlrtRSI = { 9,/* lineNo */
  "quadcopter/position controller/compute_roll_pitch",/* fcnName */
  "#uas_main_6_4:970"                  /* pathName */
};

static emlrtRTEInfo c4_emlrtRTEI = { 160,/* lineNo */
  36,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c4_b_emlrtRTEI = { 160,/* lineNo */
  54,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c4_c_emlrtRTEI = { 55,/* lineNo */
  32,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c4_d_emlrtRTEI = { 20,/* lineNo */
  24,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c4_e_emlrtRTEI = { 17,/* lineNo */
  9,                                   /* colNo */
  "scalexpAlloc",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

static emlrtRTEInfo c4_f_emlrtRTEI = { 160,/* lineNo */
  30,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c4_g_emlrtRTEI = { 161,/* lineNo */
  19,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c4_h_emlrtRTEI = { 161,/* lineNo */
  37,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c4_i_emlrtRTEI = { 161,/* lineNo */
  13,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c4_j_emlrtRTEI = { 161,/* lineNo */
  56,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c4_k_emlrtRTEI = { 121,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c4_m_emlrtRTEI = { 119,/* lineNo */
  5,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c4_o_emlrtRTEI = { 128,/* lineNo */
  30,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c4_p_emlrtRTEI = { 160,/* lineNo */
  29,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c4_q_emlrtRTEI = { 234,/* lineNo */
  20,                                  /* colNo */
  "ixfun",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pName */
};

static emlrtECInfo c4_emlrtECI = { -1, /* nDims */
  160,                                 /* lineNo */
  9,                                   /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

/* Function Declarations */
static void initialize_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance);
static void initialize_params_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance);
static void mdl_start_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance);
static void mdl_terminate_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c4_uas_main_6_4
  (SFc4_uas_main_6_4InstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c4_uas_main_6_4
  (SFc4_uas_main_6_4InstanceStruct *chartInstance);
static void enable_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance);
static void disable_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance);
static void sf_gateway_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance);
static void ext_mode_exec_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance);
static void c4_update_jit_animation_c4_uas_main_6_4
  (SFc4_uas_main_6_4InstanceStruct *chartInstance);
static void c4_do_animation_call_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c4_uas_main_6_4
  (SFc4_uas_main_6_4InstanceStruct *chartInstance);
static void set_sim_state_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance, const mxArray *c4_st);
static void initSimStructsc4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance);
static void initSubchartIOPointersc4_uas_main_6_4
  (SFc4_uas_main_6_4InstanceStruct *chartInstance);
static real_T c4_function_handle_parenReference(SFc4_uas_main_6_4InstanceStruct *
  chartInstance, real_T c4_varargin_1, real_T c4_varargin_2);
static void c4_expand_atan2(SFc4_uas_main_6_4InstanceStruct *chartInstance,
  real_T c4_a_data[], int32_T c4_a_size[3], real_T c4_b_data[], int32_T
  c4_b_size[3], real_T c4_c_data[], int32_T c4_c_size[3]);
static real_T c4_emlrt_marshallIn(SFc4_uas_main_6_4InstanceStruct *chartInstance,
  const mxArray *c4_b_pitch, const char_T *c4_identifier);
static real_T c4_b_emlrt_marshallIn(SFc4_uas_main_6_4InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static uint8_T c4_c_emlrt_marshallIn(SFc4_uas_main_6_4InstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_uas_main_6_4, const char_T
  *c4_identifier);
static uint8_T c4_d_emlrt_marshallIn(SFc4_uas_main_6_4InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_slStringInitializeDynamicBuffers(SFc4_uas_main_6_4InstanceStruct *
  chartInstance);
static void c4_chart_data_browse_helper(SFc4_uas_main_6_4InstanceStruct
  *chartInstance, int32_T c4_ssIdNumber, const mxArray **c4_mxData, uint8_T
  *c4_isValueTooBig);
static void init_dsm_address_info(SFc4_uas_main_6_4InstanceStruct *chartInstance);
static void init_simulink_io_address(SFc4_uas_main_6_4InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_is_active_c4_uas_main_6_4 = 0U;
}

static void initialize_params_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance)
{
}

static void mdl_start_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance)
{
}

static void mdl_setup_runtime_resources_c4_uas_main_6_4
  (SFc4_uas_main_6_4InstanceStruct *chartInstance)
{
  static const uint32_T c4_decisionTxtEndIdx = 0U;
  static const uint32_T c4_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c4_chart_data_browse_helper);
  chartInstance->c4_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c4_RuntimeVar,
    &chartInstance->c4_IsDebuggerActive,
    &chartInstance->c4_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c4_mlFcnLineNumber, &chartInstance->c4_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c4_covrtInstance, 1U, 0U, 1U,
    28U);
  covrtChartInitFcn(chartInstance->c4_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c4_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c4_decisionTxtStartIdx, &c4_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c4_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c4_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 261);
}

static void mdl_cleanup_runtime_resources_c4_uas_main_6_4
  (SFc4_uas_main_6_4InstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c4_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c4_covrtInstance);
}

static void enable_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance)
{
  static char_T c4_cv3[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  static char_T c4_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T c4_cv2[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i', 'm',
    'a', 'g', 'r', 'e', 'e' };

  static char_T c4_cv1[4] = { 's', 'q', 'r', 't' };

  c4_cell_wrap_7 c4_reshapes[3];
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_g_st;
  emlrtStack c4_h_st;
  emlrtStack c4_i_st;
  emlrtStack c4_j_st;
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c4_b_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_o_y = NULL;
  const mxArray *c4_q_y = NULL;
  const mxArray *c4_r_y = NULL;
  const mxArray *c4_s_y = NULL;
  const mxArray *c4_t_y = NULL;
  const mxArray *c4_v_y = NULL;
  const mxArray *c4_w_y = NULL;
  real_T c4_R[9];
  real_T c4_tmp_data[3];
  real_T c4_uy[3];
  real_T c4_uyt[3];
  real_T c4_uz[3];
  real_T c4_b_uyt[2];
  real_T c4_varargin_2_data[1];
  real_T c4_varargin_3_data[1];
  real_T c4_x_data[1];
  real_T c4_y_data[1];
  real_T c4_ztemp_data[1];
  real_T c4_a;
  real_T c4_absxk;
  real_T c4_b;
  real_T c4_b_a;
  real_T c4_b_b;
  real_T c4_b_c1;
  real_T c4_b_c2;
  real_T c4_b_c3;
  real_T c4_b_r;
  real_T c4_b_x;
  real_T c4_b_yaw_d;
  real_T c4_c1;
  real_T c4_c2;
  real_T c4_c3;
  real_T c4_c_a;
  real_T c4_c_b;
  real_T c4_c_r;
  real_T c4_c_x;
  real_T c4_cy;
  real_T c4_cySq;
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d_r;
  real_T c4_d_x;
  real_T c4_d_y;
  real_T c4_e_r;
  real_T c4_e_x;
  real_T c4_f_x;
  real_T c4_g_x;
  real_T c4_g_y;
  real_T c4_h_x;
  real_T c4_h_y;
  real_T c4_i_x;
  real_T c4_i_y;
  real_T c4_j_x;
  real_T c4_j_y;
  real_T c4_k_x;
  real_T c4_k_y;
  real_T c4_m_x;
  real_T c4_numSingular;
  real_T c4_o_x;
  real_T c4_p_x;
  real_T c4_p_y;
  real_T c4_q_x;
  real_T c4_scale;
  real_T c4_t;
  real_T c4_u_x;
  real_T c4_x;
  real_T c4_y;
  real_T c4_yaw_dt;
  int32_T c4_b_csz[3];
  int32_T c4_csz[3];
  int32_T c4_e_tmp_size[3];
  int32_T c4_iv[3];
  int32_T c4_varargin_2_size[3];
  int32_T c4_x_size[3];
  int32_T c4_y_size[3];
  int32_T c4_ztemp_size[3];
  int32_T c4_b_tmp_size[2];
  int32_T c4_c_tmp_size[2];
  int32_T c4_d_tmp_size[2];
  int32_T c4_f_trueCount[1];
  int32_T c4_h_trueCount[1];
  int32_T c4_tmp_size[1];
  int32_T c4_b_c;
  int32_T c4_b_end;
  int32_T c4_b_i;
  int32_T c4_b_k;
  int32_T c4_b_loop_ub;
  int32_T c4_b_nx;
  int32_T c4_b_sak;
  int32_T c4_b_sbk;
  int32_T c4_b_trueCount;
  int32_T c4_c;
  int32_T c4_c_end;
  int32_T c4_c_k;
  int32_T c4_c_loop_ub;
  int32_T c4_c_trueCount;
  int32_T c4_d_a;
  int32_T c4_d_b;
  int32_T c4_d_end;
  int32_T c4_d_loop_ub;
  int32_T c4_d_trueCount;
  int32_T c4_e_a;
  int32_T c4_e_b;
  int32_T c4_e_end;
  int32_T c4_e_i;
  int32_T c4_e_loop_ub;
  int32_T c4_e_trueCount;
  int32_T c4_end;
  int32_T c4_expected;
  int32_T c4_f_end;
  int32_T c4_f_i;
  int32_T c4_f_loop_ub;
  int32_T c4_g_i;
  int32_T c4_g_loop_ub;
  int32_T c4_g_trueCount;
  int32_T c4_h_i;
  int32_T c4_h_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_loop_ub;
  int32_T c4_j_i;
  int32_T c4_j_loop_ub;
  int32_T c4_k;
  int32_T c4_k_loop_ub;
  int32_T c4_loop_ub;
  int32_T c4_m_loop_ub;
  int32_T c4_nz;
  int32_T c4_o_loop_ub;
  int32_T c4_result;
  int32_T c4_sak;
  int32_T c4_sbk;
  int32_T c4_trueCount;
  boolean_T c4_b_b1;
  boolean_T c4_b_p;
  boolean_T c4_c_p;
  boolean_T c4_d_p;
  boolean_T c4_e_p;
  boolean_T c4_f_b;
  boolean_T c4_p;
  boolean_T c4_r_x;
  boolean_T c4_s_x;
  boolean_T c4_samesize;
  boolean_T c4_t_x;
  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_g_st.prev = &c4_f_st;
  c4_g_st.tls = c4_f_st.tls;
  c4_h_st.prev = &c4_g_st;
  c4_h_st.tls = c4_g_st.tls;
  c4_i_st.prev = &c4_h_st;
  c4_i_st.tls = c4_h_st.tls;
  c4_j_st.prev = &c4_i_st;
  c4_j_st.tls = c4_i_st.tls;
  chartInstance->c4_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 1U,
                    *chartInstance->c4_yaw_d);
  for (c4_i = 0; c4_i < 3; c4_i++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 0U,
                      (*chartInstance->c4_F_d)[c4_i]);
  }

  chartInstance->c4_sfEvent = CALL_EVENT;
  c4_b_yaw_d = *chartInstance->c4_yaw_d;
  covrtEmlFcnEval(chartInstance->c4_covrtInstance, 4U, 0, 0);
  c4_yaw_dt = c4_b_yaw_d + 1.5707963267948966;
  c4_x = c4_yaw_dt;
  c4_b_x = c4_x;
  c4_b_x = muDoubleScalarCos(c4_b_x);
  c4_c_x = c4_yaw_dt;
  c4_d_x = c4_c_x;
  c4_d_x = muDoubleScalarSin(c4_d_x);
  c4_uyt[0] = c4_b_x;
  c4_uyt[1] = c4_d_x;
  c4_y = 0.0;
  c4_scale = 3.3121686421112381E-170;
  for (c4_k = 0; c4_k < 3; c4_k++) {
    c4_b_k = c4_k;
    c4_e_x = (*chartInstance->c4_F_d)[c4_b_k];
    c4_f_x = c4_e_x;
    c4_g_x = c4_f_x;
    c4_absxk = muDoubleScalarAbs(c4_g_x);
    if (c4_absxk > c4_scale) {
      c4_t = c4_scale / c4_absxk;
      c4_y = 1.0 + c4_y * c4_t * c4_t;
      c4_scale = c4_absxk;
    } else {
      c4_t = c4_absxk / c4_scale;
      c4_y += c4_t * c4_t;
    }
  }

  c4_y = c4_scale * muDoubleScalarSqrt(c4_y);
  for (c4_i1 = 0; c4_i1 < 3; c4_i1++) {
    c4_uz[c4_i1] = (*chartInstance->c4_F_d)[c4_i1] / c4_y;
  }

  c4_c1 = c4_uyt[1] * c4_uz[2] - 0.0 * c4_uz[1];
  c4_c2 = 0.0 * c4_uz[0] - c4_uyt[0] * c4_uz[2];
  c4_c3 = c4_uyt[0] * c4_uz[1] - c4_uz[0] * c4_uyt[1];
  c4_uyt[0] = c4_c1;
  c4_uyt[1] = c4_c2;
  c4_uyt[2] = c4_c3;
  c4_b_c1 = c4_uz[1] * c4_uyt[2] - c4_uyt[1] * c4_uz[2];
  c4_b_c2 = c4_uyt[0] * c4_uz[2] - c4_uz[0] * c4_uyt[2];
  c4_b_c3 = c4_uz[0] * c4_uyt[1] - c4_uyt[0] * c4_uz[1];
  c4_uy[0] = c4_b_c1;
  c4_uy[1] = c4_b_c2;
  c4_uy[2] = c4_b_c3;
  c4_b_st.site = &c4_k_emlrtRSI;
  for (c4_i2 = 0; c4_i2 < 3; c4_i2++) {
    c4_R[c4_i2] = c4_uyt[c4_i2];
  }

  for (c4_i3 = 0; c4_i3 < 3; c4_i3++) {
    c4_R[c4_i3 + 3] = c4_uy[c4_i3];
  }

  for (c4_i4 = 0; c4_i4 < 3; c4_i4++) {
    c4_R[c4_i4 + 6] = c4_uz[c4_i4];
  }

  c4_c_st.site = &c4_emlrtRSI;
  c4_d_st.site = &c4_b_emlrtRSI;
  c4_cySq = c4_R[0] * c4_R[0] + c4_R[1] * c4_R[1];
  c4_e_st.site = &c4_c_emlrtRSI;
  c4_h_x = c4_cySq;
  c4_cy = c4_h_x;
  c4_i_x = c4_cy;
  if (c4_i_x < 0.0) {
    c4_p = true;
  } else {
    c4_p = false;
  }

  c4_b_p = c4_p;
  if (c4_b_p) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c4_e_st, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_e_st, NULL, "message", 1U, 2U, 14, c4_e_y, 14, c4_f_y)));
  }

  c4_cy = muDoubleScalarSqrt(c4_cy);
  c4_d_y = c4_R[5];
  c4_j_x = c4_R[8];
  c4_a = c4_d_y;
  c4_b = c4_j_x;
  c4_g_y = c4_a;
  c4_k_x = c4_b;
  c4_b_r = muDoubleScalarAtan2(c4_g_y, c4_k_x);
  c4_h_y = -c4_R[2];
  c4_m_x = c4_cy;
  c4_b_a = c4_h_y;
  c4_b_b = c4_m_x;
  c4_i_y = c4_b_a;
  c4_o_x = c4_b_b;
  c4_c_r = muDoubleScalarAtan2(c4_i_y, c4_o_x);
  c4_j_y = c4_R[1];
  c4_p_x = c4_R[0];
  c4_c_a = c4_j_y;
  c4_c_b = c4_p_x;
  c4_k_y = c4_c_a;
  c4_q_x = c4_c_b;
  c4_d_r = muDoubleScalarAtan2(c4_k_y, c4_q_x);
  c4_uyt[0] = c4_b_r;
  c4_uyt[1] = c4_c_r;
  c4_uyt[2] = c4_d_r;
  c4_r_x = (c4_cySq < 2.2204460492503131E-15);
  c4_s_x = c4_r_x;
  c4_t_x = c4_s_x;
  c4_nz = static_cast<int32_T>(c4_t_x);
  c4_numSingular = static_cast<real_T>(c4_nz);
  if (c4_numSingular > 0.0) {
    c4_end = 1;
    c4_trueCount = 0;
    for (c4_b_i = 0; c4_b_i < c4_end; c4_b_i++) {
      if (c4_cySq < 2.2204460492503131E-15) {
        c4_trueCount++;
      }
    }

    c4_tmp_size[0] = c4_trueCount;
    c4_e_st.site = &c4_d_emlrtRSI;
    c4_f_st.site = &c4_d_emlrtRSI;
    c4_b_end = 1;
    c4_b_trueCount = 0;
    for (c4_e_i = 0; c4_e_i < c4_b_end; c4_e_i++) {
      if (c4_cySq < 2.2204460492503131E-15) {
        c4_b_trueCount++;
      }
    }

    c4_b_tmp_size[1] = c4_b_trueCount;
    c4_y_size[2] = c4_b_tmp_size[1];
    c4_loop_ub = c4_b_tmp_size[1] - 1;
    for (c4_i9 = 0; c4_i9 <= c4_loop_ub; c4_i9++) {
      c4_y_data[c4_i9] = -c4_R[7];
    }

    c4_c_end = 1;
    c4_c_trueCount = 0;
    for (c4_f_i = 0; c4_f_i < c4_c_end; c4_f_i++) {
      if (c4_cySq < 2.2204460492503131E-15) {
        c4_c_trueCount++;
      }
    }

    c4_c_tmp_size[1] = c4_c_trueCount;
    c4_x_size[2] = c4_c_tmp_size[1];
    c4_b_loop_ub = c4_c_tmp_size[1] - 1;
    for (c4_i10 = 0; c4_i10 <= c4_b_loop_ub; c4_i10++) {
      c4_x_data[c4_i10] = c4_R[4];
    }

    c4_g_st.site = &c4_e_emlrtRSI;
    c4_h_st.site = &c4_f_emlrtRSI;
    c4_i_st.site = &c4_g_emlrtRSI;
    c4_sak = c4_y_size[2];
    c4_sbk = c4_x_size[2];
    c4_d_a = c4_sak;
    c4_d_b = c4_sbk;
    if (c4_d_a <= c4_d_b) {
      c4_c = c4_d_a;
    } else {
      c4_c = 0;
    }

    c4_csz[2] = c4_c;
    c4_ztemp_size[0] = 1;
    c4_ztemp_size[1] = 1;
    c4_ztemp_size[2] = c4_csz[2];
    for (c4_i11 = 0; c4_i11 < 3; c4_i11++) {
      c4_csz[c4_i11] = c4_ztemp_size[c4_i11];
    }

    c4_ztemp_size[0] = c4_csz[0];
    c4_ztemp_size[1] = c4_csz[1];
    c4_ztemp_size[2] = c4_csz[2];
    for (c4_i12 = 0; c4_i12 < 3; c4_i12++) {
      c4_csz[c4_i12] = c4_ztemp_size[c4_i12];
    }

    c4_ztemp_size[2] = c4_csz[2];
    c4_j_st.site = &c4_h_emlrtRSI;
    c4_c_p = true;
    c4_d_p = true;
    if (c4_ztemp_size[2] != c4_y_size[2]) {
      c4_d_p = false;
    }

    if (c4_d_p) {
      c4_e_p = true;
      if (c4_ztemp_size[2] != c4_x_size[2]) {
        c4_e_p = false;
      }

      if (c4_e_p) {
      } else {
        c4_c_p = false;
      }
    } else {
      c4_c_p = false;
    }

    if (!c4_c_p) {
      c4_m_y = NULL;
      sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      c4_o_y = NULL;
      sf_mex_assign(&c4_o_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      sf_mex_call(&c4_j_st, &c4_b_emlrtMCI, "error", 0U, 2U, 14, c4_m_y, 14,
                  sf_mex_call(&c4_j_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_j_st, NULL, "message", 1U, 1U, 14, c4_o_y)));
    }

    c4_b_sak = c4_y_size[2];
    c4_b_sbk = c4_x_size[2];
    c4_e_a = c4_b_sak;
    c4_e_b = c4_b_sbk;
    if (c4_e_a <= c4_e_b) {
      c4_b_c = c4_e_a;
    } else {
      c4_b_c = 0;
    }

    c4_b_csz[2] = c4_b_c;
    c4_ztemp_size[0] = 1;
    c4_ztemp_size[1] = 1;
    c4_ztemp_size[2] = c4_b_csz[2];
    for (c4_i13 = 0; c4_i13 < 3; c4_i13++) {
      c4_csz[c4_i13] = c4_ztemp_size[c4_i13];
    }

    c4_ztemp_size[0] = c4_csz[0];
    c4_ztemp_size[1] = c4_csz[1];
    c4_ztemp_size[2] = c4_csz[2];
    for (c4_i14 = 0; c4_i14 < 3; c4_i14++) {
      c4_csz[c4_i14] = c4_ztemp_size[c4_i14];
    }

    c4_ztemp_size[2] = c4_csz[2];
    c4_b_nx = c4_ztemp_size[2];
    c4_i15 = static_cast<uint8_T>(c4_b_nx) - 1;
    for (c4_c_k = 0; c4_c_k <= c4_i15; c4_c_k++) {
      c4_p_y = c4_y_data[0];
      c4_u_x = c4_x_data[0];
      c4_e_r = muDoubleScalarAtan2(c4_p_y, c4_u_x);
      c4_ztemp_data[0] = c4_e_r;
    }

    c4_d_end = 1;
    c4_d_trueCount = 0;
    for (c4_g_i = 0; c4_g_i < c4_d_end; c4_g_i++) {
      if (c4_cySq < 2.2204460492503131E-15) {
        c4_d_trueCount++;
      }
    }

    c4_d_tmp_size[1] = c4_d_trueCount;
    c4_y_size[0] = 1;
    c4_y_size[1] = 1;
    c4_y_size[2] = c4_d_tmp_size[1];
    c4_c_loop_ub = c4_d_tmp_size[1] - 1;
    for (c4_i16 = 0; c4_i16 <= c4_c_loop_ub; c4_i16++) {
      c4_y_data[c4_i16] = -c4_R[2];
    }

    c4_x_size[0] = 1;
    c4_x_size[1] = 1;
    c4_e_end = 1;
    c4_e_trueCount = 0;
    for (c4_h_i = 0; c4_h_i < c4_e_end; c4_h_i++) {
      if (c4_cySq < 2.2204460492503131E-15) {
        c4_e_trueCount++;
      }
    }

    c4_f_trueCount[0] = c4_e_trueCount;
    c4_x_size[2] = c4_f_trueCount[0];
    c4_f_end = 1;
    c4_g_trueCount = 0;
    for (c4_j_i = 0; c4_j_i < c4_f_end; c4_j_i++) {
      if (c4_cySq < 2.2204460492503131E-15) {
        c4_g_trueCount++;
      }
    }

    c4_h_trueCount[0] = c4_g_trueCount;
    c4_d_loop_ub = c4_h_trueCount[0] - 1;
    for (c4_i17 = 0; c4_i17 <= c4_d_loop_ub; c4_i17++) {
      c4_x_data[c4_i17] = c4_cy;
    }

    c4_f_b = (static_cast<real_T>(c4_y_size[2]) == static_cast<real_T>
              (c4_x_size[2]));
    c4_samesize = c4_f_b;
    if (c4_samesize) {
      c4_varargin_2_size[2] = c4_y_size[2];
      c4_e_loop_ub = c4_y_size[2] - 1;
      for (c4_i18 = 0; c4_i18 <= c4_e_loop_ub; c4_i18++) {
        c4_varargin_2_data[c4_i18] = c4_function_handle_parenReference
          (chartInstance, c4_y_data[c4_i18], c4_x_data[c4_i18]);
      }
    } else {
      c4_expand_atan2(chartInstance, c4_y_data, c4_y_size, c4_x_data, c4_x_size,
                      c4_varargin_2_data, c4_varargin_2_size);
    }

    c4_varargin_3_data[0] = 0.0;
    c4_f_st.site = &c4_i_emlrtRSI;
    c4_result = c4_ztemp_size[2];
    c4_csz[2] = c4_result;
    c4_g_st.site = &c4_j_emlrtRSI;
    c4_expected = c4_csz[2];
    if (c4_ztemp_size[2] == c4_expected) {
      c4_b_b1 = true;
    } else {
      c4_b_b1 = false;
    }

    if (!c4_b_b1) {
      c4_q_y = NULL;
      sf_mex_assign(&c4_q_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 39),
                    false);
      c4_r_y = NULL;
      sf_mex_assign(&c4_r_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 39),
                    false);
      sf_mex_call(&c4_g_st, &c4_d_emlrtMCI, "error", 0U, 2U, 14, c4_q_y, 14,
                  sf_mex_call(&c4_g_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_g_st, NULL, "message", 1U, 1U, 14, c4_r_y)));
    }

    if (c4_varargin_2_size[2] == c4_expected) {
      c4_b_b1 = true;
    } else {
      c4_b_b1 = false;
    }

    if (!c4_b_b1) {
      c4_s_y = NULL;
      sf_mex_assign(&c4_s_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 39),
                    false);
      c4_t_y = NULL;
      sf_mex_assign(&c4_t_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 39),
                    false);
      sf_mex_call(&c4_g_st, &c4_d_emlrtMCI, "error", 0U, 2U, 14, c4_s_y, 14,
                  sf_mex_call(&c4_g_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_g_st, NULL, "message", 1U, 1U, 14, c4_t_y)));
    }

    if (c4_expected == 1) {
      c4_b_b1 = true;
    } else {
      c4_b_b1 = false;
    }

    if (!c4_b_b1) {
      c4_v_y = NULL;
      sf_mex_assign(&c4_v_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 39),
                    false);
      c4_w_y = NULL;
      sf_mex_assign(&c4_w_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 39),
                    false);
      sf_mex_call(&c4_g_st, &c4_d_emlrtMCI, "error", 0U, 2U, 14, c4_v_y, 14,
                  sf_mex_call(&c4_g_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_g_st, NULL, "message", 1U, 1U, 14, c4_w_y)));
    }

    c4_reshapes[0].f1.size[2] = c4_ztemp_size[2];
    c4_f_loop_ub = c4_ztemp_size[2] - 1;
    for (c4_i19 = 0; c4_i19 <= c4_f_loop_ub; c4_i19++) {
      c4_reshapes[0].f1.data[c4_i19] = c4_ztemp_data[c4_i19];
    }

    c4_reshapes[1].f1.size[2] = c4_varargin_2_size[2];
    c4_g_loop_ub = c4_varargin_2_size[2] - 1;
    for (c4_i20 = 0; c4_i20 <= c4_g_loop_ub; c4_i20++) {
      c4_reshapes[1].f1.data[c4_i20] = c4_varargin_2_data[c4_i20];
    }

    c4_ztemp_size[2] = 1;
    c4_h_loop_ub = 0;
    for (c4_i21 = 0; c4_i21 <= c4_h_loop_ub; c4_i21++) {
      c4_ztemp_data[c4_i21] = c4_varargin_3_data[c4_i21];
    }

    c4_i_loop_ub = c4_ztemp_size[2] - 1;
    for (c4_i22 = 0; c4_i22 <= c4_i_loop_ub; c4_i22++) {
      c4_reshapes[2].f1.data[c4_i22] = c4_ztemp_data[c4_i22];
    }

    c4_ztemp_size[2] = c4_reshapes[0].f1.size[2];
    c4_j_loop_ub = c4_reshapes[0].f1.size[2] - 1;
    for (c4_i23 = 0; c4_i23 <= c4_j_loop_ub; c4_i23++) {
      c4_ztemp_data[c4_i23] = c4_reshapes[0].f1.data[c4_i23];
    }

    c4_varargin_2_size[2] = c4_reshapes[1].f1.size[2];
    c4_k_loop_ub = c4_reshapes[1].f1.size[2] - 1;
    for (c4_i24 = 0; c4_i24 <= c4_k_loop_ub; c4_i24++) {
      c4_varargin_2_data[c4_i24] = c4_reshapes[1].f1.data[c4_i24];
    }

    c4_varargin_3_data[0] = c4_reshapes[2].f1.data[0];
    c4_e_tmp_size[0] = 1;
    c4_e_tmp_size[1] = 3;
    c4_e_tmp_size[2] = c4_ztemp_size[2];
    c4_m_loop_ub = c4_ztemp_size[2] - 1;
    c4_i25 = 0;
    for (c4_i26 = 0; c4_i26 <= c4_m_loop_ub; c4_i26++) {
      c4_tmp_data[c4_i25] = c4_ztemp_data[c4_i26];
      c4_i25 += 3;
    }

    c4_o_loop_ub = c4_varargin_2_size[2] - 1;
    c4_i27 = 0;
    for (c4_i28 = 0; c4_i28 <= c4_o_loop_ub; c4_i28++) {
      c4_tmp_data[c4_i27 + 1] = c4_varargin_2_data[c4_i28];
      c4_i27 += 3;
    }

    c4_tmp_data[2] = c4_varargin_3_data[0];
    c4_iv[0] = 1;
    c4_iv[1] = 3;
    c4_iv[2] = c4_tmp_size[0];
    emlrtSubAssignSizeCheckR2012b(&c4_iv[0], 3, &c4_e_tmp_size[0], 3,
      &c4_emlrtECI, &c4_d_st);
    for (c4_i29 = 0; c4_i29 < 3; c4_i29++) {
      c4_uyt[c4_i29] = c4_tmp_data[c4_i29];
    }
  }

  c4_i5 = 0;
  for (c4_i6 = 0; c4_i6 < 2; c4_i6++) {
    c4_b_uyt[c4_i6] = c4_uyt[2 - c4_i5];
    c4_i5 += 2;
  }

  c4_i7 = 0;
  for (c4_i8 = 0; c4_i8 < 2; c4_i8++) {
    c4_uyt[c4_i7] = c4_b_uyt[c4_i8];
    c4_i7 += 2;
  }

  c4_d = c4_uyt[2];
  c4_d1 = c4_uyt[1];
  *chartInstance->c4_pitch = c4_d1;
  *chartInstance->c4_roll = c4_d;
  c4_do_animation_call_c4_uas_main_6_4(chartInstance);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 2U, *chartInstance->c4_roll);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 3U,
                    *chartInstance->c4_pitch);
}

static void ext_mode_exec_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance)
{
}

static void c4_update_jit_animation_c4_uas_main_6_4
  (SFc4_uas_main_6_4InstanceStruct *chartInstance)
{
}

static void c4_do_animation_call_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c4_uas_main_6_4
  (SFc4_uas_main_6_4InstanceStruct *chartInstance)
{
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_st;
  const mxArray *c4_y = NULL;
  c4_st = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellmatrix(3, 1), false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", chartInstance->c4_pitch, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c4_y, 0, c4_b_y);
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", chartInstance->c4_roll, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c4_y, 1, c4_d_y);
  c4_e_y = NULL;
  sf_mex_assign(&c4_e_y, sf_mex_create("y",
    &chartInstance->c4_is_active_c4_uas_main_6_4, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c4_y, 2, c4_e_y);
  sf_mex_assign(&c4_st, c4_y, false);
  return c4_st;
}

static void set_sim_state_c4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_u;
  chartInstance->c4_doneDoubleBufferReInit = true;
  c4_u = sf_mex_dup(c4_st);
  *chartInstance->c4_pitch = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 0)), "pitch");
  *chartInstance->c4_roll = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 1)), "roll");
  chartInstance->c4_is_active_c4_uas_main_6_4 = c4_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 2)),
     "is_active_c4_uas_main_6_4");
  sf_mex_destroy(&c4_u);
  sf_mex_destroy(&c4_st);
}

static void initSimStructsc4_uas_main_6_4(SFc4_uas_main_6_4InstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc4_uas_main_6_4
  (SFc4_uas_main_6_4InstanceStruct *chartInstance)
{
}

static real_T c4_function_handle_parenReference(SFc4_uas_main_6_4InstanceStruct *
  chartInstance, real_T c4_varargin_1, real_T c4_varargin_2)
{
  real_T c4_b_x;
  real_T c4_b_y;
  real_T c4_x;
  real_T c4_y;
  c4_x = c4_varargin_1;
  c4_y = c4_varargin_2;
  c4_b_y = c4_x;
  c4_b_x = c4_y;
  return muDoubleScalarAtan2(c4_b_y, c4_b_x);
}

static void c4_expand_atan2(SFc4_uas_main_6_4InstanceStruct *chartInstance,
  real_T c4_a_data[], int32_T c4_a_size[3], real_T c4_b_data[], int32_T
  c4_b_size[3], real_T c4_c_data[], int32_T c4_c_size[3])
{
  real_T c4_b_r;
  real_T c4_x;
  real_T c4_y;
  int32_T c4_csz[3];
  int32_T c4_i;
  int32_T c4_k;
  int32_T c4_sak;
  int32_T c4_sbk;
  int32_T c4_sck;
  int32_T c4_szc;
  boolean_T c4_b;
  c4_sak = c4_a_size[2];
  c4_sbk = c4_b_size[2];
  if (c4_sbk == 1) {
    c4_sck = c4_sak;
  } else {
    c4_sck = 0;
  }

  c4_csz[2] = c4_sck;
  c4_c_size[0] = 1;
  c4_c_size[1] = 1;
  c4_c_size[2] = c4_csz[2];
  c4_b = (c4_c_size[2] == 0);
  if (!c4_b) {
    c4_szc = c4_c_size[2] - 1;
    c4_i = c4_szc;
    for (c4_k = 0; c4_k <= c4_i; c4_k++) {
      c4_y = c4_a_data[0];
      c4_x = c4_b_data[0];
      c4_b_r = muDoubleScalarAtan2(c4_y, c4_x);
      c4_c_data[0] = c4_b_r;
    }
  }
}

const mxArray *sf_c4_uas_main_6_4_get_eml_resolved_functions_info()
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c4_nameCaptureInfo;
}

static real_T c4_emlrt_marshallIn(SFc4_uas_main_6_4InstanceStruct *chartInstance,
  const mxArray *c4_b_pitch, const char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y;
  c4_thisId.fIdentifier = const_cast<const char_T *>(c4_identifier);
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_pitch), &c4_thisId);
  sf_mex_destroy(&c4_b_pitch);
  return c4_y;
}

static real_T c4_b_emlrt_marshallIn(SFc4_uas_main_6_4InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_d;
  real_T c4_y;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_d, 1, 0, 0U, 0, 0U, 0);
  c4_y = c4_d;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static uint8_T c4_c_emlrt_marshallIn(SFc4_uas_main_6_4InstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_uas_main_6_4, const char_T
  *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  uint8_T c4_y;
  c4_thisId.fIdentifier = const_cast<const char_T *>(c4_identifier);
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_b_is_active_c4_uas_main_6_4), &c4_thisId);
  sf_mex_destroy(&c4_b_is_active_c4_uas_main_6_4);
  return c4_y;
}

static uint8_T c4_d_emlrt_marshallIn(SFc4_uas_main_6_4InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_b_u;
  uint8_T c4_y;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_b_u, 1, 3, 0U, 0, 0U, 0);
  c4_y = c4_b_u;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_slStringInitializeDynamicBuffers(SFc4_uas_main_6_4InstanceStruct *
  chartInstance)
{
}

static void c4_chart_data_browse_helper(SFc4_uas_main_6_4InstanceStruct
  *chartInstance, int32_T c4_ssIdNumber, const mxArray **c4_mxData, uint8_T
  *c4_isValueTooBig)
{
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d2;
  *c4_mxData = NULL;
  *c4_mxData = NULL;
  *c4_isValueTooBig = 0U;
  switch (c4_ssIdNumber) {
   case 4U:
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", *chartInstance->c4_F_d, 0,
      0U, 1U, 0U, 1, 3), false);
    break;

   case 5U:
    c4_d = *chartInstance->c4_roll;
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", &c4_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c4_d1 = *chartInstance->c4_yaw_d;
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", &c4_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 9U:
    c4_d2 = *chartInstance->c4_pitch;
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", &c4_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void init_dsm_address_info(SFc4_uas_main_6_4InstanceStruct *chartInstance)
{
}

static void init_simulink_io_address(SFc4_uas_main_6_4InstanceStruct
  *chartInstance)
{
  chartInstance->c4_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c4_F_d = (real_T (*)[3])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c4_roll = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c4_yaw_d = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c4_pitch = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c4_uas_main_6_4_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3645731062U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2754236649U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3952220464U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1876221334U);
}

mxArray *sf_c4_uas_main_6_4_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c4_uas_main_6_4_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_vars");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c4_uas_main_6_4_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c4_uas_main_6_4(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiA+wMTAwAakOYCYiQECWKF8RiBmhtIQcRa4uAIQl1QWpILEi4uSPVOAdF5iLpi"
    "fWFrhmZeWDzbfggFhPhsW8xmRzOeEikPAB3vK9Cs5oOtnwaKfFUm/AJRfkFmSnAENH1g4DZw/RM"
    "D+MCDgDxYUf7AwFOXn5FDH/QoOlOmH2B9AwP2SaPEA4mcWxycml2SWpcYnm8SXJhbH5yZm5sWbx"
    "ZsgmQsCALJrH3k="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_uas_main_6_4_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sne2L4StIMZd8npgx1NXH9G";
}

static void sf_opaque_initialize_c4_uas_main_6_4(void *chartInstanceVar)
{
  initialize_params_c4_uas_main_6_4((SFc4_uas_main_6_4InstanceStruct*)
    chartInstanceVar);
  initialize_c4_uas_main_6_4((SFc4_uas_main_6_4InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c4_uas_main_6_4(void *chartInstanceVar)
{
  enable_c4_uas_main_6_4((SFc4_uas_main_6_4InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c4_uas_main_6_4(void *chartInstanceVar)
{
  disable_c4_uas_main_6_4((SFc4_uas_main_6_4InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c4_uas_main_6_4(void *chartInstanceVar)
{
  sf_gateway_c4_uas_main_6_4((SFc4_uas_main_6_4InstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c4_uas_main_6_4(SimStruct* S)
{
  return get_sim_state_c4_uas_main_6_4((SFc4_uas_main_6_4InstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_uas_main_6_4(SimStruct* S, const mxArray *
  st)
{
  set_sim_state_c4_uas_main_6_4((SFc4_uas_main_6_4InstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c4_uas_main_6_4(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_uas_main_6_4InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_uas_main_6_4_optimization_info();
    }

    mdl_cleanup_runtime_resources_c4_uas_main_6_4
      ((SFc4_uas_main_6_4InstanceStruct*) chartInstanceVar);
    ((SFc4_uas_main_6_4InstanceStruct*) chartInstanceVar)->
      ~SFc4_uas_main_6_4InstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c4_uas_main_6_4(void *chartInstanceVar)
{
  mdl_start_c4_uas_main_6_4((SFc4_uas_main_6_4InstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc4_uas_main_6_4InstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c4_uas_main_6_4(void *chartInstanceVar)
{
  mdl_terminate_c4_uas_main_6_4((SFc4_uas_main_6_4InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_uas_main_6_4(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_uas_main_6_4((SFc4_uas_main_6_4InstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc4_uas_main_6_4((SFc4_uas_main_6_4InstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c4_uas_main_6_4_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWNtuG0UYHrtpREVpe4GEipCokJB6g0RDQK2EShIfWktOE1gnoN5Yk93f3pFnZ7ZzsGPEQyD",
    "xIrwAEk+BEE/BJZf8s1677trYOw6kLepG683s7vef5j8uqbQOCR438Dx+n5BtvL6FZ5VMjqv5uj",
    "J3Tu5vkS/z9Q9vExLKCPogAtvrsXPidwibHFNFE038D0ET+Aa05NYwKVqiJ8tjmeiBAhEigVQq4",
    "8VXs8RyJgZNK0LHWX8bszAOYml5dIAEaXQk+Pif+KbWHCPHOlMQmiZAZGIlbT9uctpfbQVlRrUY",
    "woG2ibetNJjApk5VfWi5YSmHxjmELaENRSvoNfoGhhqomXM/Izt9dTBFyyTljIryto6pDiBF7zB",
    "wkkb4e2QNWq8UNoypMgcQ0yHoNhtk3KWAUtyZxrfPmKBGKkZ5I+E1R62kvsccdTzEkOC+e4T6Hi",
    "igg1QyYTwDImiinRuCnnGow5nte/IN4Jl10XDKYATKb397NTkERftwJPxkzvaocZ455SyWSmINS",
    "+CUqv0QfVdD5Jc3MOh0QNEdoYNkvLCQmbilO4oN0Td8c13Lhf9Guc4mE+/XG2Ezvo0hePvVjG8z",
    "FDXKufbDdmTahiHwjH+dGroBdsLfA6w1izoSvcNlG8+MZQXDSMixNSkiVt4rhwVUVtieYJEqAWe",
    "JCwOI0Mwz0WeE1sWR1UYmNUw59Xa7JL9FbEsYUD0aQukaoyjTgAJnfuXJN2LaBRKi0Uom07I0hU",
    "kMbgQlumdFfSTVAG3sW8ye28pFgh8aoj4mZgNZkmugd59SbkvKnOg+xg+6x4nGLOvHF7EufjYCh",
    "zSMIXKVk3E4xDyLBMpusXYlfx+1HTIzroMOFUvLRpLFhI5F11mpM07hRAyEHImmkkmQd14r/AoA",
    "swZVgon+AZZwNW6i8OWkVvCsk2V33ybH2ZkaTs+cbzwCgdXQ6eq6BhpiVDUEtsgo0EWwAfsemxi",
    "hmTZYqMeTUj+pe65/3yPP+/etJf37zbn+/Va+Dne7lupuQpnoftHdzeh8Okfneok5YMp/FY4s4M",
    "gMN73encNXlvAlc9civ2vVF9+vFvhV8a9SWbTTOwU+WwXcdm6rPz7++kHlx5/uPvwt/uXnm7X2O",
    "v6VBf6V7H+HS6/4zVk38vUH035plp2HCwnMvft4jR+8V/ADt9YCdtq7gWkdPo3ui7R/fu/Jd48f",
    "PMro/VpdLe+VgrzT+3dcj4bBm+UCFbaifF5za2onc4Sjf39O3u019rg250+E/PnVxfAf7RXxy+x",
    "1tWAvt06ZCeOC/748Pd7dK/rjMj22XtBjiyjJ+b8j/529i+Hz7w9r5L9d2Ifb2ezRpa7CQLeYyR",
    "bzy6bx6osjl4x7XeR8Y5f/Xr8y9bp6yThyybiL6ufbh7zu76+qG6Tw/q1XWI9V+d6nH33V9Pqd+",
    "PWLH+brh7PvILWY8WjJJJY/xmGpt+zp/8S///K037Q/bjj75R/Mn362Lygf4+g1GW3z28fKffec",
    "PVJA9fL59mXUk7Jz4fVCfLv1iIlIjvQn93Y+37lIffobaHMb+A==",
    ""
  };

  static char newstr [1553] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c4_uas_main_6_4(SimStruct *S)
{
  const char* newstr = sf_c4_uas_main_6_4_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(961619418U));
  ssSetChecksum1(S,(680759297U));
  ssSetChecksum2(S,(3177764414U));
  ssSetChecksum3(S,(1279463344U));
}

static void mdlRTW_c4_uas_main_6_4(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c4_uas_main_6_4(SimStruct *S)
{
  SFc4_uas_main_6_4InstanceStruct *chartInstance;
  chartInstance = (SFc4_uas_main_6_4InstanceStruct *)utMalloc(sizeof
    (SFc4_uas_main_6_4InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc4_uas_main_6_4InstanceStruct));
  chartInstance = new (chartInstance) SFc4_uas_main_6_4InstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c4_uas_main_6_4;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_uas_main_6_4;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c4_uas_main_6_4;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c4_uas_main_6_4;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c4_uas_main_6_4;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c4_uas_main_6_4;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c4_uas_main_6_4;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c4_uas_main_6_4;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c4_uas_main_6_4;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_uas_main_6_4;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_uas_main_6_4;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c4_uas_main_6_4;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c4_JITStateAnimation,
    chartInstance->c4_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c4_uas_main_6_4(chartInstance);
}

void c4_uas_main_6_4_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c4_uas_main_6_4(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_uas_main_6_4(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_uas_main_6_4(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_uas_main_6_4_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
