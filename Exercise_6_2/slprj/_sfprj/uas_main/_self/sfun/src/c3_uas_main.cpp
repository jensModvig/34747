/* Include files */

#include "uas_main_sfun.h"
#include "c3_uas_main.h"
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
static emlrtMCInfo c3_emlrtMCI = { 87, /* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c3_b_emlrtMCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c3_c_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c3_d_emlrtMCI = { 14,/* lineNo */
  9,                                   /* colNo */
  "asin",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elfun\\asin.m"/* pName */
};

static emlrtRSInfo c3_emlrtRSI = { 50, /* lineNo */
  "quat2eul",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pathName */
};

static emlrtRSInfo c3_b_emlrtRSI = { 75,/* lineNo */
  "quat2eul",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pathName */
};

static emlrtRSInfo c3_c_emlrtRSI = { 76,/* lineNo */
  "quat2eul",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pathName */
};

static emlrtRSInfo c3_d_emlrtRSI = { 77,/* lineNo */
  "quat2eul",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pathName */
};

static emlrtRSInfo c3_e_emlrtRSI = { 15,/* lineNo */
  "normalizeRows",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\normalizeRows.m"/* pathName */
};

static emlrtRSInfo c3_f_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c3_g_emlrtRSI = { 3,/* lineNo */
  "quadcopter/quat 2 euler (UE)",      /* fcnName */
  "#uas_main:668"                      /* pathName */
};

static emlrtRTEInfo c3_emlrtRTEI = { 78,/* lineNo */
  30,                                  /* colNo */
  "quat2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtRTEInfo c3_b_emlrtRTEI = { 78,/* lineNo */
  62,                                  /* colNo */
  "quat2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtRTEInfo c3_c_emlrtRTEI = { 78,/* lineNo */
  74,                                  /* colNo */
  "quat2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtRTEInfo c3_d_emlrtRTEI = { 78,/* lineNo */
  56,                                  /* colNo */
  "quat2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtRTEInfo c3_e_emlrtRTEI = { 234,/* lineNo */
  20,                                  /* colNo */
  "ixfun",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pName */
};

static emlrtRTEInfo c3_f_emlrtRTEI = { 236,/* lineNo */
  26,                                  /* colNo */
  "ixfun",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pName */
};

static emlrtRTEInfo c3_g_emlrtRTEI = { 236,/* lineNo */
  5,                                   /* colNo */
  "ixfun",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pName */
};

static emlrtRTEInfo c3_h_emlrtRTEI = { 163,/* lineNo */
  14,                                  /* colNo */
  "ixfun",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pName */
};

static emlrtRTEInfo c3_i_emlrtRTEI = { 78,/* lineNo */
  24,                                  /* colNo */
  "quat2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtECInfo c3_emlrtECI = { 1,  /* nDims */
  78,                                  /* lineNo */
  24,                                  /* colNo */
  "quat2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtECInfo c3_b_emlrtECI = { -1,/* nDims */
  78,                                  /* lineNo */
  9,                                   /* colNo */
  "quat2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

/* Function Declarations */
static void initialize_c3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance);
static void initialize_params_c3_uas_main(SFc3_uas_mainInstanceStruct
  *chartInstance);
static void mdl_start_c3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance);
static void mdl_terminate_c3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c3_uas_main(SFc3_uas_mainInstanceStruct *
  chartInstance);
static void mdl_cleanup_runtime_resources_c3_uas_main
  (SFc3_uas_mainInstanceStruct *chartInstance);
static void enable_c3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance);
static void disable_c3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance);
static void sf_gateway_c3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance);
static void ext_mode_exec_c3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance);
static void c3_update_jit_animation_c3_uas_main(SFc3_uas_mainInstanceStruct
  *chartInstance);
static void c3_do_animation_call_c3_uas_main(SFc3_uas_mainInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c3_uas_main(SFc3_uas_mainInstanceStruct
  *chartInstance);
static void set_sim_state_c3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance,
  const mxArray *c3_st);
static void initSimStructsc3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance);
static void initSubchartIOPointersc3_uas_main(SFc3_uas_mainInstanceStruct
  *chartInstance);
static real_T c3_sumColumnB(SFc3_uas_mainInstanceStruct *chartInstance, real_T
  c3_x[4]);
static real_T c3_function_handle_parenReference(SFc3_uas_mainInstanceStruct
  *chartInstance, real_T c3_varargin_1, real_T c3_varargin_2);
static void c3_expand_atan2(SFc3_uas_mainInstanceStruct *chartInstance, real_T
  c3_a_data[], int32_T c3_a_size[1], real_T c3_b_data[], int32_T c3_b_size[1],
  real_T c3_c_data[], int32_T c3_c_size[1]);
static void c3_emlrt_marshallIn(SFc3_uas_mainInstanceStruct *chartInstance,
  const mxArray *c3_b_attitude, const char_T *c3_identifier, real_T c3_y[3]);
static void c3_b_emlrt_marshallIn(SFc3_uas_mainInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[3]);
static uint8_T c3_c_emlrt_marshallIn(SFc3_uas_mainInstanceStruct *chartInstance,
  const mxArray *c3_b_is_active_c3_uas_main, const char_T *c3_identifier);
static uint8_T c3_d_emlrt_marshallIn(SFc3_uas_mainInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_slStringInitializeDynamicBuffers(SFc3_uas_mainInstanceStruct
  *chartInstance);
static void c3_chart_data_browse_helper(SFc3_uas_mainInstanceStruct
  *chartInstance, int32_T c3_ssIdNumber, const mxArray **c3_mxData, uint8_T
  *c3_isValueTooBig);
static void c3_times(SFc3_uas_mainInstanceStruct *chartInstance, real_T
                     c3_in1_data[], int32_T c3_in1_size[1], real_T c3_in2_data[],
                     int32_T c3_in2_size[1]);
static void init_dsm_address_info(SFc3_uas_mainInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc3_uas_mainInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c3_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_is_active_c3_uas_main = 0U;
}

static void initialize_params_c3_uas_main(SFc3_uas_mainInstanceStruct
  *chartInstance)
{
}

static void mdl_start_c3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance)
{
}

static void mdl_setup_runtime_resources_c3_uas_main(SFc3_uas_mainInstanceStruct *
  chartInstance)
{
  static const uint32_T c3_decisionTxtEndIdx = 0U;
  static const uint32_T c3_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c3_chart_data_browse_helper);
  chartInstance->c3_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c3_RuntimeVar,
    &chartInstance->c3_IsDebuggerActive,
    &chartInstance->c3_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c3_mlFcnLineNumber, &chartInstance->c3_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c3_covrtInstance, 1U, 0U, 1U,
    19U);
  covrtChartInitFcn(chartInstance->c3_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c3_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c3_decisionTxtStartIdx, &c3_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c3_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c3_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c3_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 115);
}

static void mdl_cleanup_runtime_resources_c3_uas_main
  (SFc3_uas_mainInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c3_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c3_covrtInstance);
}

static void enable_c3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance)
{
  static char_T c3_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T c3_cv2[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T c3_cv1[4] = { 's', 'q', 'r', 't' };

  static char_T c3_cv3[4] = { 'a', 's', 'i', 'n' };

  emlrtStack c3_b_st;
  emlrtStack c3_c_st;
  emlrtStack c3_d_st;
  emlrtStack c3_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c3_d_y = NULL;
  const mxArray *c3_e_y = NULL;
  const mxArray *c3_f_y = NULL;
  const mxArray *c3_t_y = NULL;
  const mxArray *c3_v_y = NULL;
  const mxArray *c3_w_y = NULL;
  real_T c3_b_q[4];
  real_T c3_b_y[4];
  real_T c3_b_attitude[3];
  real_T c3_b_tmp_data[1];
  real_T c3_b_x_data[1];
  real_T c3_dv[1];
  real_T c3_dv1[1];
  real_T c3_x_data[1];
  real_T c3_y_data[1];
  real_T c3_a;
  real_T c3_aSinInput;
  real_T c3_ab_a;
  real_T c3_b;
  real_T c3_b_a;
  real_T c3_b_b;
  real_T c3_b_r;
  real_T c3_b_x;
  real_T c3_bb_a;
  real_T c3_c_a;
  real_T c3_c_attitude;
  real_T c3_c_b;
  real_T c3_c_x;
  real_T c3_c_y;
  real_T c3_cb_a;
  real_T c3_d_a;
  real_T c3_d_attitude;
  real_T c3_d_b;
  real_T c3_d_x;
  real_T c3_db_a;
  real_T c3_e_a;
  real_T c3_e_attitude;
  real_T c3_e_b;
  real_T c3_e_x;
  real_T c3_eb_a;
  real_T c3_f_a;
  real_T c3_f_x;
  real_T c3_fb_a;
  real_T c3_g_a;
  real_T c3_g_b;
  real_T c3_g_x;
  real_T c3_g_y;
  real_T c3_gb_a;
  real_T c3_h_a;
  real_T c3_h_x;
  real_T c3_h_y;
  real_T c3_hb_a;
  real_T c3_i_x;
  real_T c3_i_y;
  real_T c3_ib_a;
  real_T c3_j_a;
  real_T c3_j_x;
  real_T c3_j_y;
  real_T c3_jb_a;
  real_T c3_k_a;
  real_T c3_k_x;
  real_T c3_k_y;
  real_T c3_kb_a;
  real_T c3_m_a;
  real_T c3_m_x;
  real_T c3_m_y;
  real_T c3_mb_a;
  real_T c3_o_a;
  real_T c3_o_y;
  real_T c3_ob_a;
  real_T c3_p_a;
  real_T c3_p_y;
  real_T c3_q_a;
  real_T c3_qw;
  real_T c3_qx;
  real_T c3_qy;
  real_T c3_qz;
  real_T c3_r;
  real_T c3_r_a;
  real_T c3_r_y;
  real_T c3_s_a;
  real_T c3_s_y;
  real_T c3_t_a;
  real_T c3_u_a;
  real_T c3_u_y;
  real_T c3_v_a;
  real_T c3_w_a;
  real_T c3_x;
  real_T c3_x_a;
  real_T c3_x_y;
  real_T c3_y;
  real_T c3_y_a;
  int32_T c3_c_tmp_size[2];
  int32_T c3_b_tmp_size[1];
  int32_T c3_b_x_size[1];
  int32_T c3_c_tmp_data[1];
  int32_T c3_c_trueCount[1];
  int32_T c3_e_trueCount[1];
  int32_T c3_iv[1];
  int32_T c3_iv1[1];
  int32_T c3_tmp_data[1];
  int32_T c3_tmp_size[1];
  int32_T c3_x_size[1];
  int32_T c3_y_size[1];
  int32_T c3_b_end;
  int32_T c3_b_i;
  int32_T c3_b_k;
  int32_T c3_b_loop_ub;
  int32_T c3_b_nx;
  int32_T c3_b_partialTrueCount;
  int32_T c3_b_trueCount;
  int32_T c3_b_varargin_2;
  int32_T c3_c_end;
  int32_T c3_c_i;
  int32_T c3_c_k;
  int32_T c3_c_loop_ub;
  int32_T c3_c_partialTrueCount;
  int32_T c3_d_end;
  int32_T c3_d_i;
  int32_T c3_d_k;
  int32_T c3_d_loop_ub;
  int32_T c3_d_trueCount;
  int32_T c3_e_end;
  int32_T c3_e_i;
  int32_T c3_e_loop_ub;
  int32_T c3_end;
  int32_T c3_f_end;
  int32_T c3_f_i;
  int32_T c3_f_loop_ub;
  int32_T c3_f_trueCount;
  int32_T c3_g_end;
  int32_T c3_g_i;
  int32_T c3_g_loop_ub;
  int32_T c3_g_trueCount;
  int32_T c3_h_i;
  int32_T c3_h_loop_ub;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i10;
  int32_T c3_i11;
  int32_T c3_i12;
  int32_T c3_i13;
  int32_T c3_i2;
  int32_T c3_i3;
  int32_T c3_i4;
  int32_T c3_i5;
  int32_T c3_i6;
  int32_T c3_i7;
  int32_T c3_i8;
  int32_T c3_i9;
  int32_T c3_ia;
  int32_T c3_ic;
  int32_T c3_j_i;
  int32_T c3_k;
  int32_T c3_k_i;
  int32_T c3_loop_ub;
  int32_T c3_m_i;
  int32_T c3_partialTrueCount;
  int32_T c3_trueCount;
  int32_T c3_varargin_1;
  int32_T c3_varargin_2;
  int32_T c3_varargin_4;
  boolean_T c3_b_b1;
  boolean_T c3_b_p;
  boolean_T c3_c_p;
  boolean_T c3_d_p;
  boolean_T c3_e_p;
  boolean_T c3_f_b;
  boolean_T c3_mask1;
  boolean_T c3_mask2;
  boolean_T c3_p;
  boolean_T c3_samesize;
  c3_st.tls = chartInstance->c3_fEmlrtCtx;
  c3_b_st.prev = &c3_st;
  c3_b_st.tls = c3_st.tls;
  c3_c_st.prev = &c3_b_st;
  c3_c_st.tls = c3_b_st.tls;
  c3_d_st.prev = &c3_c_st;
  c3_d_st.tls = c3_c_st.tls;
  chartInstance->c3_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c3_i = 0; c3_i < 4; c3_i++) {
    covrtSigUpdateFcn(chartInstance->c3_covrtInstance, 0U, (*chartInstance->c3_q)
                      [c3_i]);
  }

  chartInstance->c3_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c3_covrtInstance, 4U, 0, 0);
  c3_b_st.site = &c3_g_emlrtRSI;
  for (c3_i1 = 0; c3_i1 < 4; c3_i1++) {
    c3_b_q[c3_i1] = (*chartInstance->c3_q)[c3_i1];
  }

  c3_c_st.site = &c3_emlrtRSI;
  for (c3_k = 0; c3_k < 4; c3_k++) {
    c3_b_k = c3_k;
    c3_a = c3_b_q[c3_b_k];
    c3_c_y = c3_a * c3_a;
    c3_b_y[c3_b_k] = c3_c_y;
  }

  c3_y = c3_sumColumnB(chartInstance, c3_b_y);
  c3_d_st.site = &c3_e_emlrtRSI;
  c3_x = c3_y;
  c3_b_x = c3_x;
  c3_c_x = c3_b_x;
  if (c3_c_x < 0.0) {
    c3_p = true;
  } else {
    c3_p = false;
  }

  c3_b_p = c3_p;
  if (c3_b_p) {
    c3_d_y = NULL;
    sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c3_e_y = NULL;
    sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c3_f_y = NULL;
    sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c3_d_st, &c3_b_emlrtMCI, "error", 0U, 2U, 14, c3_d_y, 14,
                sf_mex_call(&c3_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c3_d_st, NULL, "message", 1U, 2U, 14, c3_e_y, 14, c3_f_y)));
  }

  c3_b_x = muDoubleScalarSqrt(c3_b_x);
  c3_b = 1.0 / c3_b_x;
  for (c3_i2 = 0; c3_i2 < 4; c3_i2++) {
    c3_b_y[c3_i2] = c3_b_q[c3_i2];
  }

  c3_b_b = c3_b;
  for (c3_c_k = 0; c3_c_k < 4; c3_c_k++) {
    c3_ia = c3_c_k;
    c3_ic = c3_c_k;
    c3_c_b = c3_b_b;
    c3_varargin_1 = c3_ic + 1;
    c3_varargin_2 = c3_ia + 1;
    c3_d_b = c3_c_b;
    c3_b_varargin_2 = c3_varargin_1 - 1;
    c3_varargin_4 = c3_varargin_2 - 1;
    c3_b_q[c3_b_varargin_2] = c3_b_y[c3_varargin_4] * c3_d_b;
  }

  c3_qw = c3_b_q[0];
  c3_qx = c3_b_q[1];
  c3_qy = c3_b_q[2];
  c3_qz = c3_b_q[3];
  c3_aSinInput = -2.0 * (c3_qx * c3_qz - c3_qw * c3_qy);
  c3_mask1 = (c3_aSinInput >= 0.99999999999999778);
  c3_mask2 = (c3_aSinInput <= -0.99999999999999778);
  c3_dv[0] = c3_aSinInput;
  c3_end = 1;
  for (c3_b_i = 0; c3_b_i < c3_end; c3_b_i++) {
    if (c3_aSinInput >= 0.99999999999999778) {
      c3_dv[c3_b_i] = 1.0;
    }
  }

  c3_aSinInput = c3_dv[0];
  c3_dv1[0] = c3_aSinInput;
  c3_b_end = 1;
  for (c3_c_i = 0; c3_c_i < c3_b_end; c3_c_i++) {
    if (c3_mask2) {
      c3_dv1[c3_c_i] = -1.0;
    }
  }

  c3_aSinInput = c3_dv1[0];
  c3_c_st.site = &c3_b_emlrtRSI;
  c3_b_a = c3_qw;
  c3_d_st.site = &c3_f_emlrtRSI;
  c3_c_a = c3_b_a;
  c3_d_a = c3_c_a;
  c3_e_a = c3_d_a;
  c3_g_y = c3_e_a * c3_e_a;
  c3_c_st.site = &c3_b_emlrtRSI;
  c3_f_a = c3_qx;
  c3_d_st.site = &c3_f_emlrtRSI;
  c3_g_a = c3_f_a;
  c3_h_a = c3_g_a;
  c3_j_a = c3_h_a;
  c3_h_y = c3_j_a * c3_j_a;
  c3_c_st.site = &c3_b_emlrtRSI;
  c3_k_a = c3_qy;
  c3_d_st.site = &c3_f_emlrtRSI;
  c3_m_a = c3_k_a;
  c3_o_a = c3_m_a;
  c3_p_a = c3_o_a;
  c3_i_y = c3_p_a * c3_p_a;
  c3_c_st.site = &c3_b_emlrtRSI;
  c3_q_a = c3_qz;
  c3_d_st.site = &c3_f_emlrtRSI;
  c3_r_a = c3_q_a;
  c3_s_a = c3_r_a;
  c3_t_a = c3_s_a;
  c3_j_y = c3_t_a * c3_t_a;
  c3_c_st.site = &c3_d_emlrtRSI;
  c3_u_a = c3_qw;
  c3_d_st.site = &c3_f_emlrtRSI;
  c3_v_a = c3_u_a;
  c3_w_a = c3_v_a;
  c3_x_a = c3_w_a;
  c3_k_y = c3_x_a * c3_x_a;
  c3_c_st.site = &c3_d_emlrtRSI;
  c3_y_a = c3_qx;
  c3_d_st.site = &c3_f_emlrtRSI;
  c3_ab_a = c3_y_a;
  c3_bb_a = c3_ab_a;
  c3_cb_a = c3_bb_a;
  c3_m_y = c3_cb_a * c3_cb_a;
  c3_c_st.site = &c3_d_emlrtRSI;
  c3_db_a = c3_qy;
  c3_d_st.site = &c3_f_emlrtRSI;
  c3_eb_a = c3_db_a;
  c3_fb_a = c3_eb_a;
  c3_gb_a = c3_fb_a;
  c3_o_y = c3_gb_a * c3_gb_a;
  c3_c_st.site = &c3_d_emlrtRSI;
  c3_hb_a = c3_qz;
  c3_d_st.site = &c3_f_emlrtRSI;
  c3_ib_a = c3_hb_a;
  c3_jb_a = c3_ib_a;
  c3_kb_a = c3_jb_a;
  c3_p_y = c3_kb_a * c3_kb_a;
  c3_r_y = 2.0 * (c3_qx * c3_qy + c3_qw * c3_qz);
  c3_d_x = ((c3_g_y + c3_h_y) - c3_i_y) - c3_j_y;
  c3_mb_a = c3_r_y;
  c3_e_b = c3_d_x;
  c3_s_y = c3_mb_a;
  c3_e_x = c3_e_b;
  c3_r = muDoubleScalarAtan2(c3_s_y, c3_e_x);
  c3_c_st.site = &c3_c_emlrtRSI;
  c3_f_x = c3_aSinInput;
  c3_g_x = c3_f_x;
  c3_h_x = c3_g_x;
  c3_f_b = (c3_h_x < -1.0);
  c3_b_b1 = (c3_h_x > 1.0);
  if (c3_f_b || c3_b_b1) {
    c3_c_p = true;
  } else {
    c3_c_p = false;
  }

  c3_d_p = c3_c_p;
  if (c3_d_p) {
    c3_t_y = NULL;
    sf_mex_assign(&c3_t_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c3_v_y = NULL;
    sf_mex_assign(&c3_v_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c3_w_y = NULL;
    sf_mex_assign(&c3_w_y, sf_mex_create("y", c3_cv3, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c3_c_st, &c3_d_emlrtMCI, "error", 0U, 2U, 14, c3_t_y, 14,
                sf_mex_call(&c3_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c3_c_st, NULL, "message", 1U, 2U, 14, c3_v_y, 14, c3_w_y)));
  }

  c3_g_x = muDoubleScalarAsin(c3_g_x);
  c3_u_y = 2.0 * (c3_qy * c3_qz + c3_qw * c3_qx);
  c3_i_x = ((c3_k_y - c3_m_y) - c3_o_y) + c3_p_y;
  c3_ob_a = c3_u_y;
  c3_g_b = c3_i_x;
  c3_x_y = c3_ob_a;
  c3_j_x = c3_g_b;
  c3_b_r = muDoubleScalarAtan2(c3_x_y, c3_j_x);
  c3_b_attitude[0] = c3_r;
  c3_b_attitude[1] = c3_g_x;
  c3_b_attitude[2] = c3_b_r;
  c3_c_end = 1;
  c3_trueCount = 0;
  for (c3_d_i = 0; c3_d_i < c3_c_end; c3_d_i++) {
    if (c3_mask1 || c3_mask2) {
      c3_trueCount++;
    }
  }

  c3_tmp_size[0] = c3_trueCount;
  c3_partialTrueCount = 0;
  for (c3_e_i = 0; c3_e_i < c3_c_end; c3_e_i++) {
    if (c3_mask1 || c3_mask2) {
      c3_tmp_data[c3_partialTrueCount] = c3_e_i;
      c3_partialTrueCount++;
    }
  }

  c3_x_size[0] = c3_tmp_size[0];
  c3_loop_ub = c3_tmp_size[0] - 1;
  for (c3_i3 = 0; c3_i3 <= c3_loop_ub; c3_i3++) {
    c3_x_data[c3_i3] = c3_aSinInput;
  }

  c3_b_nx = c3_x_size[0];
  c3_i4 = static_cast<uint8_T>(c3_b_nx) - 1;
  for (c3_d_k = 0; c3_d_k <= c3_i4; c3_d_k++) {
    c3_k_x = c3_x_data[0];
    c3_m_x = c3_k_x;
    c3_m_x = muDoubleScalarSign(c3_m_x);
    c3_x_data[0] = c3_m_x;
  }

  c3_b_loop_ub = c3_x_size[0] - 1;
  for (c3_i5 = 0; c3_i5 <= c3_b_loop_ub; c3_i5++) {
    c3_x_data[c3_i5] = -c3_x_data[c3_i5] * 2.0;
  }

  c3_d_end = 1;
  c3_b_trueCount = 0;
  for (c3_f_i = 0; c3_f_i < c3_d_end; c3_f_i++) {
    if (c3_mask1 || c3_mask2) {
      c3_b_trueCount++;
    }
  }

  c3_c_trueCount[0] = c3_b_trueCount;
  c3_y_size[0] = c3_c_trueCount[0];
  c3_c_loop_ub = c3_c_trueCount[0] - 1;
  for (c3_i6 = 0; c3_i6 <= c3_c_loop_ub; c3_i6++) {
    c3_y_data[c3_i6] = c3_qx;
  }

  c3_e_end = 1;
  c3_d_trueCount = 0;
  for (c3_g_i = 0; c3_g_i < c3_e_end; c3_g_i++) {
    if (c3_mask1 || c3_mask2) {
      c3_d_trueCount++;
    }
  }

  c3_e_trueCount[0] = c3_d_trueCount;
  c3_b_x_size[0] = c3_e_trueCount[0];
  c3_d_loop_ub = c3_e_trueCount[0] - 1;
  for (c3_i7 = 0; c3_i7 <= c3_d_loop_ub; c3_i7++) {
    c3_b_x_data[c3_i7] = c3_qw;
  }

  c3_e_p = (static_cast<real_T>(c3_y_size[0]) == static_cast<real_T>
            (c3_b_x_size[0]));
  c3_samesize = c3_e_p;
  if (c3_samesize) {
    c3_b_tmp_size[0] = c3_y_size[0];
    c3_e_loop_ub = c3_y_size[0] - 1;
    for (c3_i8 = 0; c3_i8 <= c3_e_loop_ub; c3_i8++) {
      c3_b_tmp_data[c3_i8] = c3_function_handle_parenReference(chartInstance,
        c3_y_data[c3_i8], c3_b_x_data[c3_i8]);
    }
  } else {
    c3_expand_atan2(chartInstance, c3_y_data, c3_y_size, c3_b_x_data,
                    c3_b_x_size, c3_b_tmp_data, c3_b_tmp_size);
  }

  if ((c3_x_size[0] != c3_b_tmp_size[0]) && ((c3_x_size[0] != 1) &&
       (c3_b_tmp_size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(c3_x_size[0], c3_b_tmp_size[0], &c3_emlrtECI,
      &c3_b_st);
  }

  c3_f_end = 1;
  c3_f_trueCount = 0;
  for (c3_h_i = 0; c3_h_i < c3_f_end; c3_h_i++) {
    if (c3_mask1 || c3_mask2) {
      c3_f_trueCount++;
    }
  }

  c3_tmp_size[0] = c3_f_trueCount;
  c3_b_partialTrueCount = 0;
  for (c3_j_i = 0; c3_j_i < c3_f_end; c3_j_i++) {
    if (c3_mask1 || c3_mask2) {
      c3_tmp_data[c3_b_partialTrueCount] = c3_j_i;
      c3_b_partialTrueCount++;
    }
  }

  if (c3_x_size[0] == c3_b_tmp_size[0]) {
    c3_f_loop_ub = c3_x_size[0] - 1;
    for (c3_i9 = 0; c3_i9 <= c3_f_loop_ub; c3_i9++) {
      c3_x_data[c3_i9] *= c3_b_tmp_data[c3_i9];
    }
  } else {
    c3_times(chartInstance, c3_x_data, c3_x_size, c3_b_tmp_data, c3_b_tmp_size);
  }

  c3_iv[0] = c3_tmp_size[0];
  emlrtSubAssignSizeCheckR2012b(&c3_iv[0], 1, &c3_x_size[0], 1, &c3_b_emlrtECI,
    &c3_b_st);
  c3_g_loop_ub = c3_x_size[0] - 1;
  for (c3_i10 = 0; c3_i10 <= c3_g_loop_ub; c3_i10++) {
    c3_b_attitude[c3_tmp_data[c3_i10]] = c3_x_data[c3_i10];
  }

  c3_g_end = 1;
  c3_g_trueCount = 0;
  for (c3_k_i = 0; c3_k_i < c3_g_end; c3_k_i++) {
    if (c3_mask1 || c3_mask2) {
      c3_g_trueCount++;
    }
  }

  c3_c_tmp_size[1] = c3_g_trueCount;
  c3_c_partialTrueCount = 0;
  for (c3_m_i = 0; c3_m_i < c3_g_end; c3_m_i++) {
    if (c3_mask1 || c3_mask2) {
      c3_c_tmp_data[c3_c_partialTrueCount] = c3_m_i;
      c3_c_partialTrueCount++;
    }
  }

  c3_iv1[0] = c3_c_tmp_size[1];
  c3_h_loop_ub = c3_iv1[0] - 1;
  for (c3_i11 = 0; c3_i11 <= c3_h_loop_ub; c3_i11++) {
    c3_b_attitude[2 + c3_c_tmp_data[c3_i11]] = 0.0;
  }

  c3_c_attitude = c3_b_attitude[0];
  c3_d_attitude = c3_b_attitude[1];
  c3_e_attitude = c3_b_attitude[2];
  c3_b_attitude[0] = c3_c_attitude;
  c3_b_attitude[1] = c3_d_attitude;
  c3_b_attitude[2] = c3_e_attitude;
  for (c3_i12 = 0; c3_i12 < 3; c3_i12++) {
    (*chartInstance->c3_attitude)[c3_i12] = c3_b_attitude[c3_i12];
  }

  c3_do_animation_call_c3_uas_main(chartInstance);
  for (c3_i13 = 0; c3_i13 < 3; c3_i13++) {
    covrtSigUpdateFcn(chartInstance->c3_covrtInstance, 1U,
                      (*chartInstance->c3_attitude)[c3_i13]);
  }
}

static void ext_mode_exec_c3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance)
{
}

static void c3_update_jit_animation_c3_uas_main(SFc3_uas_mainInstanceStruct
  *chartInstance)
{
}

static void c3_do_animation_call_c3_uas_main(SFc3_uas_mainInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c3_uas_main(SFc3_uas_mainInstanceStruct
  *chartInstance)
{
  const mxArray *c3_b_y = NULL;
  const mxArray *c3_c_y = NULL;
  const mxArray *c3_st;
  const mxArray *c3_y = NULL;
  c3_st = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellmatrix(2, 1), false);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", *chartInstance->c3_attitude, 0, 0U,
    1U, 0U, 2, 1, 3), false);
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y",
    &chartInstance->c3_is_active_c3_uas_main, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 1, c3_c_y);
  sf_mex_assign(&c3_st, c3_y, false);
  return c3_st;
}

static void set_sim_state_c3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance,
  const mxArray *c3_st)
{
  const mxArray *c3_u;
  real_T c3_dv[3];
  int32_T c3_i;
  chartInstance->c3_doneDoubleBufferReInit = true;
  c3_u = sf_mex_dup(c3_st);
  c3_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 0)),
                      "attitude", c3_dv);
  for (c3_i = 0; c3_i < 3; c3_i++) {
    (*chartInstance->c3_attitude)[c3_i] = c3_dv[c3_i];
  }

  chartInstance->c3_is_active_c3_uas_main = c3_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 1)), "is_active_c3_uas_main");
  sf_mex_destroy(&c3_u);
  sf_mex_destroy(&c3_st);
}

static void initSimStructsc3_uas_main(SFc3_uas_mainInstanceStruct *chartInstance)
{
}

static void initSubchartIOPointersc3_uas_main(SFc3_uas_mainInstanceStruct
  *chartInstance)
{
}

static real_T c3_sumColumnB(SFc3_uas_mainInstanceStruct *chartInstance, real_T
  c3_x[4])
{
  real_T c3_y;
  int32_T c3_b_k;
  int32_T c3_k;
  c3_y = c3_x[0];
  for (c3_k = 0; c3_k < 3; c3_k++) {
    c3_b_k = c3_k;
    c3_y += c3_x[c3_b_k + 1];
  }

  return c3_y;
}

static real_T c3_function_handle_parenReference(SFc3_uas_mainInstanceStruct
  *chartInstance, real_T c3_varargin_1, real_T c3_varargin_2)
{
  real_T c3_b_x;
  real_T c3_b_y;
  real_T c3_x;
  real_T c3_y;
  c3_x = c3_varargin_1;
  c3_y = c3_varargin_2;
  c3_b_y = c3_x;
  c3_b_x = c3_y;
  return muDoubleScalarAtan2(c3_b_y, c3_b_x);
}

static void c3_expand_atan2(SFc3_uas_mainInstanceStruct *chartInstance, real_T
  c3_a_data[], int32_T c3_a_size[1], real_T c3_b_data[], int32_T c3_b_size[1],
  real_T c3_c_data[], int32_T c3_c_size[1])
{
  real_T c3_b_c_data[1];
  real_T c3_r;
  real_T c3_x;
  real_T c3_y;
  int32_T c3_csz[2];
  int32_T c3_i;
  int32_T c3_k;
  int32_T c3_loop_ub;
  int32_T c3_sak;
  int32_T c3_sbk;
  int32_T c3_sck;
  c3_sak = c3_a_size[0];
  c3_sbk = c3_b_size[0];
  if (c3_sbk == 1) {
    c3_sck = c3_sak;
  } else {
    c3_sck = 0;
  }

  c3_csz[0] = c3_sck;
  c3_c_size[0] = c3_csz[0];
  if (c3_c_size[0] != 0) {
    c3_loop_ub = c3_c_size[0] - 1;
    for (c3_i = 0; c3_i <= c3_loop_ub; c3_i++) {
      c3_b_c_data[c3_i] = c3_c_data[c3_i];
    }

    for (c3_k = 0; c3_k < 1; c3_k++) {
      c3_y = c3_a_data[0];
      c3_x = c3_b_data[0];
      c3_r = muDoubleScalarAtan2(c3_y, c3_x);
      c3_b_c_data[0] = c3_r;
    }

    c3_c_size[0] = 1;
    c3_c_data[0] = c3_b_c_data[0];
  }
}

const mxArray *sf_c3_uas_main_get_eml_resolved_functions_info()
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c3_nameCaptureInfo;
}

static void c3_emlrt_marshallIn(SFc3_uas_mainInstanceStruct *chartInstance,
  const mxArray *c3_b_attitude, const char_T *c3_identifier, real_T c3_y[3])
{
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = const_cast<const char_T *>(c3_identifier);
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_attitude), &c3_thisId,
                        c3_y);
  sf_mex_destroy(&c3_b_attitude);
}

static void c3_b_emlrt_marshallIn(SFc3_uas_mainInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[3])
{
  real_T c3_dv[3];
  int32_T c3_i;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_dv, 1, 0, 0U, 1, 0U, 2, 1, 3);
  for (c3_i = 0; c3_i < 3; c3_i++) {
    c3_y[c3_i] = c3_dv[c3_i];
  }

  sf_mex_destroy(&c3_u);
}

static uint8_T c3_c_emlrt_marshallIn(SFc3_uas_mainInstanceStruct *chartInstance,
  const mxArray *c3_b_is_active_c3_uas_main, const char_T *c3_identifier)
{
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y;
  c3_thisId.fIdentifier = const_cast<const char_T *>(c3_identifier);
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_is_active_c3_uas_main), &c3_thisId);
  sf_mex_destroy(&c3_b_is_active_c3_uas_main);
  return c3_y;
}

static uint8_T c3_d_emlrt_marshallIn(SFc3_uas_mainInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_b_u;
  uint8_T c3_y;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b_u, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_b_u;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_slStringInitializeDynamicBuffers(SFc3_uas_mainInstanceStruct
  *chartInstance)
{
}

static void c3_chart_data_browse_helper(SFc3_uas_mainInstanceStruct
  *chartInstance, int32_T c3_ssIdNumber, const mxArray **c3_mxData, uint8_T
  *c3_isValueTooBig)
{
  *c3_mxData = NULL;
  *c3_mxData = NULL;
  *c3_isValueTooBig = 0U;
  switch (c3_ssIdNumber) {
   case 4U:
    sf_mex_assign(c3_mxData, sf_mex_create("mxData", *chartInstance->c3_q, 0, 0U,
      1U, 0U, 2, 1, 4), false);
    break;

   case 5U:
    sf_mex_assign(c3_mxData, sf_mex_create("mxData", *chartInstance->c3_attitude,
      0, 0U, 1U, 0U, 2, 1, 3), false);
    break;
  }
}

static void c3_times(SFc3_uas_mainInstanceStruct *chartInstance, real_T
                     c3_in1_data[], int32_T c3_in1_size[1], real_T c3_in2_data[],
                     int32_T c3_in2_size[1])
{
  real_T c3_b_in1_data[1];
  int32_T c3_b_in1_size[1];
  int32_T c3_aux_0_0;
  int32_T c3_aux_1_0;
  int32_T c3_b_loop_ub;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_loop_ub;
  int32_T c3_stride_0_0;
  int32_T c3_stride_1_0;
  if (c3_in2_size[0] == 1) {
    c3_b_in1_size[0] = c3_in1_size[0];
  } else {
    c3_b_in1_size[0] = c3_in2_size[0];
  }

  c3_stride_0_0 = static_cast<int32_T>(c3_in1_size[0] != 1);
  c3_stride_1_0 = static_cast<int32_T>(c3_in2_size[0] != 1);
  c3_aux_0_0 = 0;
  c3_aux_1_0 = 0;
  if (c3_in2_size[0] == 1) {
    c3_i = c3_in1_size[0];
  } else {
    c3_i = c3_in2_size[0];
  }

  c3_loop_ub = c3_i - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_b_in1_data[c3_i1] = c3_in1_data[c3_aux_0_0] * c3_in2_data[c3_aux_1_0];
    c3_aux_1_0 += c3_stride_1_0;
    c3_aux_0_0 += c3_stride_0_0;
  }

  c3_in1_size[0] = c3_b_in1_size[0];
  c3_b_loop_ub = c3_b_in1_size[0] - 1;
  for (c3_i2 = 0; c3_i2 <= c3_b_loop_ub; c3_i2++) {
    c3_in1_data[c3_i2] = c3_b_in1_data[c3_i2];
  }
}

static void init_dsm_address_info(SFc3_uas_mainInstanceStruct *chartInstance)
{
}

static void init_simulink_io_address(SFc3_uas_mainInstanceStruct *chartInstance)
{
  chartInstance->c3_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c3_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c3_q = (real_T (*)[4])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c3_attitude = (real_T (*)[3])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c3_uas_main_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3543309986U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(887049467U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2747718699U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(146571081U);
}

mxArray *sf_c3_uas_main_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c3_uas_main_jit_fallback_info(void)
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

mxArray *sf_c3_uas_main_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c3_uas_main(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wcjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig7o+lmw6OdA0i8A5SeWlGSWlKak8kHFKXOHgg"
    "Nl+iH2exDwhyiaP0D8zOL4xOSSzLLU+GTj+NLE4vjcxMw8qHkgAAB6ChsD"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_uas_main_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sEC4Tl1YVWrc2F0pAWDnSoF";
}

static void sf_opaque_initialize_c3_uas_main(void *chartInstanceVar)
{
  initialize_params_c3_uas_main((SFc3_uas_mainInstanceStruct*) chartInstanceVar);
  initialize_c3_uas_main((SFc3_uas_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c3_uas_main(void *chartInstanceVar)
{
  enable_c3_uas_main((SFc3_uas_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_uas_main(void *chartInstanceVar)
{
  disable_c3_uas_main((SFc3_uas_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_uas_main(void *chartInstanceVar)
{
  sf_gateway_c3_uas_main((SFc3_uas_mainInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c3_uas_main(SimStruct* S)
{
  return get_sim_state_c3_uas_main((SFc3_uas_mainInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c3_uas_main(SimStruct* S, const mxArray *st)
{
  set_sim_state_c3_uas_main((SFc3_uas_mainInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c3_uas_main(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_uas_mainInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_uas_main_optimization_info();
    }

    mdl_cleanup_runtime_resources_c3_uas_main((SFc3_uas_mainInstanceStruct*)
      chartInstanceVar);
    ((SFc3_uas_mainInstanceStruct*) chartInstanceVar)->
      ~SFc3_uas_mainInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c3_uas_main(void *chartInstanceVar)
{
  mdl_start_c3_uas_main((SFc3_uas_mainInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc3_uas_mainInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c3_uas_main(void *chartInstanceVar)
{
  mdl_terminate_c3_uas_main((SFc3_uas_mainInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_uas_main(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_uas_main((SFc3_uas_mainInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc3_uas_main((SFc3_uas_mainInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c3_uas_main_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWE1vG0UYHkchatUS9UCFkJDogQMXpDQFCSEESfwBlhISuk6icokmu6+9I8/ObOfDjhE3Lpy",
    "58gf4MQhxgwPi1B/AsUfeWa9dszHOjA2hRV1psxnvPu/Hs+/XLKm1Dwgem3h++wYhG3i9gecaGR",
    "+vlOvazDn+fZ18VK6/vkVILBPogYhst8suSNghbHZEFc00CT8EzeAhaMmtYVK0RVf6Y5noggIRo",
    "4BcKhOkV7PMcib6LStip1mfpixOo1RanuyhQJocCj76O725NUeoscEUxKYFkJhUSdtLW5z2FrOg",
    "zLCeQtzXNgvmSoOJbO5c1QeWG5ZzaF5A3BbaUGRBX+FvZKiBurkII9n5q6MJWmY5Z1T4c51SHUG",
    "O0WHgOE/w76E1yJ4XNk6pMnuQ0gHofdYvtEsBXtqZxqfPmaBGKkZ5M+N1J83T3yOOPh5gSvDQd4",
    "T+7img/VwyYQITImohz01Bzzk04Nz2AvVG8Ni6bDhhMAQV9n67dTkARXtwKMJsLt5R86IIymkue",
    "WINy+CEqt0YY1dDElY3MOl0RDEcoYNigrBQUNzWHcUGGBuhta7t0n+pWmezcfTrpbCF3uYAguNq",
    "qrcVizrlXIdhOzLfhwHwQn+DGroEdqw/AKw1SzoSo8NVm8CKZQXDTCixdSkS5h+VgwqqaGyfY5P",
    "ygLPMpQEkSPPU9Kmgq/LIaiOzOpacxv6+p77L2LYwoLo0Bu8eoyjTgAYXcRWoN2HaJRKikSVTeO",
    "ktYZyDS0GJ7lrRGErVR45Dm9kzrlwmhKEh6WFhNlAUuSZG9wnl1tPmTPcwfzA8jjVW2TC9iHX5s",
    "xQ4pnEKieucjMMB1lkU4PuKtWv5u+jtgJlRA3SsWO6bSRYLOjZdx1JnlMOx6As5FC0ls6icvBbE",
    "FQBWDaoEE709bOFq1ELj/axW8LhTVPfQIcfxTA2n5y42PgWB3dD56qYGGmNWNQWOyGjQKtiIfYV",
    "DjNBMG2zUo3GrH/c9N7/vkGfz+/qc+f3WzPx+p1zHD84s1WcZZWIqZ2tGzm2PfYAPjlzCkSlucn",
    "1nBl+bo5fMXKv6bq4ttnMN/6vN4enVip71Cm6j5OqbXx7+/OTJ9z9+8d3bvz/67acPV9H/w1rYP",
    "muzXL85mZem1XlwqYC5Zz+7Ig5er8SBW+tm/b0Ov//o5FTF262tfPe0ISLZKuQ9rS22d61i7+T3",
    "e25Gw+QtaoGK20m5X3Nrasf7CCf/gxl7N67g4+ZMPBHyxyer4V/bqeLn8XWjwpdbU4NdxyYwG7/",
    "L23FvZzW833u/W/HjbjG7n1FXoeHsr5Vg8x/Is1AcuWbci2LnS17+ff98+tx148g141b1L7R/v+",
    "jPby2ot6Ty/J3n2A+yoN6HzHHPm1+/krA5661y/fH0+0E9ZTyZs4Mpb+Mmozvv7v8kvp8G8jeZK",
    "5uOv/JD85cPdgXlI9yyjLeE5c9Hyn0vnN5SQPX8feF/0U9891O3K/nt1kMmEjnU797ffn97lf70",
    "JwmVGec=",
    ""
  };

  static char newstr [1509] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c3_uas_main(SimStruct *S)
{
  const char* newstr = sf_c3_uas_main_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3495090051U));
  ssSetChecksum1(S,(3432768740U));
  ssSetChecksum2(S,(3726938705U));
  ssSetChecksum3(S,(986635353U));
}

static void mdlRTW_c3_uas_main(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c3_uas_main(SimStruct *S)
{
  SFc3_uas_mainInstanceStruct *chartInstance;
  chartInstance = (SFc3_uas_mainInstanceStruct *)utMalloc(sizeof
    (SFc3_uas_mainInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc3_uas_mainInstanceStruct));
  chartInstance = new (chartInstance) SFc3_uas_mainInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c3_uas_main;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c3_uas_main;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c3_uas_main;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c3_uas_main;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c3_uas_main;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c3_uas_main;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c3_uas_main;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c3_uas_main;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c3_uas_main;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c3_uas_main;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_uas_main;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c3_uas_main;
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
    chartInstance->c3_JITStateAnimation,
    chartInstance->c3_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c3_uas_main(chartInstance);
}

void c3_uas_main_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c3_uas_main(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_uas_main(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_uas_main(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_uas_main_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
