/* Include files */

#include "uas_main_sfun.h"
#include "c6_uas_main.h"
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
static emlrtMCInfo c6_emlrtMCI = { 87, /* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c6_b_emlrtMCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c6_c_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c6_d_emlrtMCI = { 14,/* lineNo */
  9,                                   /* colNo */
  "asin",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elfun\\asin.m"/* pName */
};

static emlrtRSInfo c6_emlrtRSI = { 50, /* lineNo */
  "quat2eul",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pathName */
};

static emlrtRSInfo c6_b_emlrtRSI = { 75,/* lineNo */
  "quat2eul",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pathName */
};

static emlrtRSInfo c6_c_emlrtRSI = { 76,/* lineNo */
  "quat2eul",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pathName */
};

static emlrtRSInfo c6_d_emlrtRSI = { 77,/* lineNo */
  "quat2eul",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pathName */
};

static emlrtRSInfo c6_e_emlrtRSI = { 15,/* lineNo */
  "normalizeRows",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\normalizeRows.m"/* pathName */
};

static emlrtRSInfo c6_f_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c6_g_emlrtRSI = { 3,/* lineNo */
  "quadcopter/quat 2 euler (ROS)",     /* fcnName */
  "#uas_main:1564"                     /* pathName */
};

static emlrtRTEInfo c6_emlrtRTEI = { 78,/* lineNo */
  30,                                  /* colNo */
  "quat2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtRTEInfo c6_b_emlrtRTEI = { 78,/* lineNo */
  62,                                  /* colNo */
  "quat2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtRTEInfo c6_c_emlrtRTEI = { 78,/* lineNo */
  74,                                  /* colNo */
  "quat2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtRTEInfo c6_d_emlrtRTEI = { 78,/* lineNo */
  56,                                  /* colNo */
  "quat2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtRTEInfo c6_e_emlrtRTEI = { 234,/* lineNo */
  20,                                  /* colNo */
  "ixfun",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pName */
};

static emlrtRTEInfo c6_f_emlrtRTEI = { 236,/* lineNo */
  26,                                  /* colNo */
  "ixfun",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pName */
};

static emlrtRTEInfo c6_g_emlrtRTEI = { 236,/* lineNo */
  5,                                   /* colNo */
  "ixfun",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pName */
};

static emlrtRTEInfo c6_h_emlrtRTEI = { 163,/* lineNo */
  14,                                  /* colNo */
  "ixfun",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pName */
};

static emlrtRTEInfo c6_i_emlrtRTEI = { 78,/* lineNo */
  24,                                  /* colNo */
  "quat2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtECInfo c6_emlrtECI = { 1,  /* nDims */
  78,                                  /* lineNo */
  24,                                  /* colNo */
  "quat2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtECInfo c6_b_emlrtECI = { -1,/* nDims */
  78,                                  /* lineNo */
  9,                                   /* colNo */
  "quat2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

/* Function Declarations */
static void initialize_c6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance);
static void initialize_params_c6_uas_main(SFc6_uas_mainInstanceStruct
  *chartInstance);
static void mdl_start_c6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance);
static void mdl_terminate_c6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c6_uas_main(SFc6_uas_mainInstanceStruct *
  chartInstance);
static void mdl_cleanup_runtime_resources_c6_uas_main
  (SFc6_uas_mainInstanceStruct *chartInstance);
static void enable_c6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance);
static void disable_c6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance);
static void sf_gateway_c6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance);
static void ext_mode_exec_c6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance);
static void c6_update_jit_animation_c6_uas_main(SFc6_uas_mainInstanceStruct
  *chartInstance);
static void c6_do_animation_call_c6_uas_main(SFc6_uas_mainInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c6_uas_main(SFc6_uas_mainInstanceStruct
  *chartInstance);
static void set_sim_state_c6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance,
  const mxArray *c6_st);
static void initSimStructsc6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance);
static void initSubchartIOPointersc6_uas_main(SFc6_uas_mainInstanceStruct
  *chartInstance);
static real_T c6_sumColumnB(SFc6_uas_mainInstanceStruct *chartInstance, real_T
  c6_x[4]);
static real_T c6_function_handle_parenReference(SFc6_uas_mainInstanceStruct
  *chartInstance, real_T c6_varargin_1, real_T c6_varargin_2);
static void c6_expand_atan2(SFc6_uas_mainInstanceStruct *chartInstance, real_T
  c6_a_data[], int32_T c6_a_size[1], real_T c6_b_data[], int32_T c6_b_size[1],
  real_T c6_c_data[], int32_T c6_c_size[1]);
static real_T c6_emlrt_marshallIn(SFc6_uas_mainInstanceStruct *chartInstance,
  const mxArray *c6_b_pitch_rad, const char_T *c6_identifier);
static real_T c6_b_emlrt_marshallIn(SFc6_uas_mainInstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static uint8_T c6_c_emlrt_marshallIn(SFc6_uas_mainInstanceStruct *chartInstance,
  const mxArray *c6_b_is_active_c6_uas_main, const char_T *c6_identifier);
static uint8_T c6_d_emlrt_marshallIn(SFc6_uas_mainInstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_slStringInitializeDynamicBuffers(SFc6_uas_mainInstanceStruct
  *chartInstance);
static void c6_chart_data_browse_helper(SFc6_uas_mainInstanceStruct
  *chartInstance, int32_T c6_ssIdNumber, const mxArray **c6_mxData, uint8_T
  *c6_isValueTooBig);
static void c6_times(SFc6_uas_mainInstanceStruct *chartInstance, real_T
                     c6_in1_data[], int32_T c6_in1_size[1], real_T c6_in2_data[],
                     int32_T c6_in2_size[1]);
static void init_dsm_address_info(SFc6_uas_mainInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc6_uas_mainInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c6_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c6_is_active_c6_uas_main = 0U;
}

static void initialize_params_c6_uas_main(SFc6_uas_mainInstanceStruct
  *chartInstance)
{
}

static void mdl_start_c6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance)
{
}

static void mdl_setup_runtime_resources_c6_uas_main(SFc6_uas_mainInstanceStruct *
  chartInstance)
{
  static const uint32_T c6_decisionTxtEndIdx = 0U;
  static const uint32_T c6_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c6_chart_data_browse_helper);
  chartInstance->c6_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c6_RuntimeVar,
    &chartInstance->c6_IsDebuggerActive,
    &chartInstance->c6_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c6_mlFcnLineNumber, &chartInstance->c6_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c6_covrtInstance, 1U, 0U, 1U,
    28U);
  covrtChartInitFcn(chartInstance->c6_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c6_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c6_decisionTxtStartIdx, &c6_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c6_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c6_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 160);
}

static void mdl_cleanup_runtime_resources_c6_uas_main
  (SFc6_uas_mainInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c6_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c6_covrtInstance);
}

static void enable_c6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance)
{
  static char_T c6_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T c6_cv2[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T c6_cv1[4] = { 's', 'q', 'r', 't' };

  static char_T c6_cv3[4] = { 'a', 's', 'i', 'n' };

  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c6_d_y = NULL;
  const mxArray *c6_e_y = NULL;
  const mxArray *c6_f_y = NULL;
  const mxArray *c6_t_y = NULL;
  const mxArray *c6_v_y = NULL;
  const mxArray *c6_w_y = NULL;
  real_T c6_b_q[4];
  real_T c6_b_y[4];
  real_T c6_attitude[3];
  real_T c6_b_tmp_data[1];
  real_T c6_b_x_data[1];
  real_T c6_dv[1];
  real_T c6_dv1[1];
  real_T c6_x_data[1];
  real_T c6_y_data[1];
  real_T c6_a;
  real_T c6_aSinInput;
  real_T c6_ab_a;
  real_T c6_b;
  real_T c6_b_a;
  real_T c6_b_b;
  real_T c6_b_d1;
  real_T c6_b_r;
  real_T c6_b_x;
  real_T c6_bb_a;
  real_T c6_c_a;
  real_T c6_c_b;
  real_T c6_c_x;
  real_T c6_c_y;
  real_T c6_cb_a;
  real_T c6_d;
  real_T c6_d2;
  real_T c6_d_a;
  real_T c6_d_b;
  real_T c6_d_x;
  real_T c6_db_a;
  real_T c6_e_a;
  real_T c6_e_b;
  real_T c6_e_x;
  real_T c6_eb_a;
  real_T c6_f_a;
  real_T c6_f_x;
  real_T c6_fb_a;
  real_T c6_g_a;
  real_T c6_g_b;
  real_T c6_g_x;
  real_T c6_g_y;
  real_T c6_gb_a;
  real_T c6_h_a;
  real_T c6_h_x;
  real_T c6_h_y;
  real_T c6_hb_a;
  real_T c6_i_x;
  real_T c6_i_y;
  real_T c6_ib_a;
  real_T c6_j_a;
  real_T c6_j_x;
  real_T c6_j_y;
  real_T c6_jb_a;
  real_T c6_k_a;
  real_T c6_k_x;
  real_T c6_k_y;
  real_T c6_kb_a;
  real_T c6_m_a;
  real_T c6_m_x;
  real_T c6_m_y;
  real_T c6_mb_a;
  real_T c6_o_a;
  real_T c6_o_y;
  real_T c6_ob_a;
  real_T c6_p_a;
  real_T c6_p_y;
  real_T c6_q_a;
  real_T c6_qw;
  real_T c6_qx;
  real_T c6_qy;
  real_T c6_qz;
  real_T c6_r;
  real_T c6_r_a;
  real_T c6_r_y;
  real_T c6_s_a;
  real_T c6_s_y;
  real_T c6_t_a;
  real_T c6_u_a;
  real_T c6_u_y;
  real_T c6_v_a;
  real_T c6_w_a;
  real_T c6_x;
  real_T c6_x_a;
  real_T c6_x_y;
  real_T c6_y;
  real_T c6_y_a;
  int32_T c6_c_tmp_size[2];
  int32_T c6_b_tmp_size[1];
  int32_T c6_b_x_size[1];
  int32_T c6_c_tmp_data[1];
  int32_T c6_c_trueCount[1];
  int32_T c6_e_trueCount[1];
  int32_T c6_iv[1];
  int32_T c6_iv1[1];
  int32_T c6_tmp_data[1];
  int32_T c6_tmp_size[1];
  int32_T c6_x_size[1];
  int32_T c6_y_size[1];
  int32_T c6_b_end;
  int32_T c6_b_i;
  int32_T c6_b_k;
  int32_T c6_b_loop_ub;
  int32_T c6_b_nx;
  int32_T c6_b_partialTrueCount;
  int32_T c6_b_trueCount;
  int32_T c6_b_varargin_2;
  int32_T c6_c_end;
  int32_T c6_c_i;
  int32_T c6_c_k;
  int32_T c6_c_loop_ub;
  int32_T c6_c_partialTrueCount;
  int32_T c6_d_end;
  int32_T c6_d_i;
  int32_T c6_d_k;
  int32_T c6_d_loop_ub;
  int32_T c6_d_trueCount;
  int32_T c6_e_end;
  int32_T c6_e_i;
  int32_T c6_e_loop_ub;
  int32_T c6_end;
  int32_T c6_f_end;
  int32_T c6_f_i;
  int32_T c6_f_loop_ub;
  int32_T c6_f_trueCount;
  int32_T c6_g_end;
  int32_T c6_g_i;
  int32_T c6_g_loop_ub;
  int32_T c6_g_trueCount;
  int32_T c6_h_i;
  int32_T c6_h_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_i8;
  int32_T c6_i9;
  int32_T c6_ia;
  int32_T c6_ic;
  int32_T c6_j_i;
  int32_T c6_k;
  int32_T c6_k_i;
  int32_T c6_loop_ub;
  int32_T c6_m_i;
  int32_T c6_partialTrueCount;
  int32_T c6_trueCount;
  int32_T c6_varargin_1;
  int32_T c6_varargin_2;
  int32_T c6_varargin_4;
  boolean_T c6_b_b1;
  boolean_T c6_b_p;
  boolean_T c6_c_p;
  boolean_T c6_d_p;
  boolean_T c6_e_p;
  boolean_T c6_f_b;
  boolean_T c6_mask1;
  boolean_T c6_mask2;
  boolean_T c6_p;
  boolean_T c6_samesize;
  c6_st.tls = chartInstance->c6_fEmlrtCtx;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  chartInstance->c6_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c6_i = 0; c6_i < 4; c6_i++) {
    covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 0U, (*chartInstance->c6_q)
                      [c6_i]);
  }

  chartInstance->c6_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c6_covrtInstance, 4U, 0, 0);
  c6_b_st.site = &c6_g_emlrtRSI;
  for (c6_i1 = 0; c6_i1 < 4; c6_i1++) {
    c6_b_q[c6_i1] = (*chartInstance->c6_q)[c6_i1];
  }

  c6_c_st.site = &c6_emlrtRSI;
  for (c6_k = 0; c6_k < 4; c6_k++) {
    c6_b_k = c6_k;
    c6_a = c6_b_q[c6_b_k];
    c6_c_y = c6_a * c6_a;
    c6_b_y[c6_b_k] = c6_c_y;
  }

  c6_y = c6_sumColumnB(chartInstance, c6_b_y);
  c6_d_st.site = &c6_e_emlrtRSI;
  c6_x = c6_y;
  c6_b_x = c6_x;
  c6_c_x = c6_b_x;
  if (c6_c_x < 0.0) {
    c6_p = true;
  } else {
    c6_p = false;
  }

  c6_b_p = c6_p;
  if (c6_b_p) {
    c6_d_y = NULL;
    sf_mex_assign(&c6_d_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c6_e_y = NULL;
    sf_mex_assign(&c6_e_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c6_f_y = NULL;
    sf_mex_assign(&c6_f_y, sf_mex_create("y", c6_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c6_d_st, &c6_b_emlrtMCI, "error", 0U, 2U, 14, c6_d_y, 14,
                sf_mex_call(&c6_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c6_d_st, NULL, "message", 1U, 2U, 14, c6_e_y, 14, c6_f_y)));
  }

  c6_b_x = muDoubleScalarSqrt(c6_b_x);
  c6_b = 1.0 / c6_b_x;
  for (c6_i2 = 0; c6_i2 < 4; c6_i2++) {
    c6_b_y[c6_i2] = c6_b_q[c6_i2];
  }

  c6_b_b = c6_b;
  for (c6_c_k = 0; c6_c_k < 4; c6_c_k++) {
    c6_ia = c6_c_k;
    c6_ic = c6_c_k;
    c6_c_b = c6_b_b;
    c6_varargin_1 = c6_ic + 1;
    c6_varargin_2 = c6_ia + 1;
    c6_d_b = c6_c_b;
    c6_b_varargin_2 = c6_varargin_1 - 1;
    c6_varargin_4 = c6_varargin_2 - 1;
    c6_b_q[c6_b_varargin_2] = c6_b_y[c6_varargin_4] * c6_d_b;
  }

  c6_qw = c6_b_q[0];
  c6_qx = c6_b_q[1];
  c6_qy = c6_b_q[2];
  c6_qz = c6_b_q[3];
  c6_aSinInput = -2.0 * (c6_qx * c6_qz - c6_qw * c6_qy);
  c6_mask1 = (c6_aSinInput >= 0.99999999999999778);
  c6_mask2 = (c6_aSinInput <= -0.99999999999999778);
  c6_dv[0] = c6_aSinInput;
  c6_end = 1;
  for (c6_b_i = 0; c6_b_i < c6_end; c6_b_i++) {
    if (c6_aSinInput >= 0.99999999999999778) {
      c6_dv[c6_b_i] = 1.0;
    }
  }

  c6_aSinInput = c6_dv[0];
  c6_dv1[0] = c6_aSinInput;
  c6_b_end = 1;
  for (c6_c_i = 0; c6_c_i < c6_b_end; c6_c_i++) {
    if (c6_mask2) {
      c6_dv1[c6_c_i] = -1.0;
    }
  }

  c6_aSinInput = c6_dv1[0];
  c6_c_st.site = &c6_b_emlrtRSI;
  c6_b_a = c6_qw;
  c6_d_st.site = &c6_f_emlrtRSI;
  c6_c_a = c6_b_a;
  c6_d_a = c6_c_a;
  c6_e_a = c6_d_a;
  c6_g_y = c6_e_a * c6_e_a;
  c6_c_st.site = &c6_b_emlrtRSI;
  c6_f_a = c6_qx;
  c6_d_st.site = &c6_f_emlrtRSI;
  c6_g_a = c6_f_a;
  c6_h_a = c6_g_a;
  c6_j_a = c6_h_a;
  c6_h_y = c6_j_a * c6_j_a;
  c6_c_st.site = &c6_b_emlrtRSI;
  c6_k_a = c6_qy;
  c6_d_st.site = &c6_f_emlrtRSI;
  c6_m_a = c6_k_a;
  c6_o_a = c6_m_a;
  c6_p_a = c6_o_a;
  c6_i_y = c6_p_a * c6_p_a;
  c6_c_st.site = &c6_b_emlrtRSI;
  c6_q_a = c6_qz;
  c6_d_st.site = &c6_f_emlrtRSI;
  c6_r_a = c6_q_a;
  c6_s_a = c6_r_a;
  c6_t_a = c6_s_a;
  c6_j_y = c6_t_a * c6_t_a;
  c6_c_st.site = &c6_d_emlrtRSI;
  c6_u_a = c6_qw;
  c6_d_st.site = &c6_f_emlrtRSI;
  c6_v_a = c6_u_a;
  c6_w_a = c6_v_a;
  c6_x_a = c6_w_a;
  c6_k_y = c6_x_a * c6_x_a;
  c6_c_st.site = &c6_d_emlrtRSI;
  c6_y_a = c6_qx;
  c6_d_st.site = &c6_f_emlrtRSI;
  c6_ab_a = c6_y_a;
  c6_bb_a = c6_ab_a;
  c6_cb_a = c6_bb_a;
  c6_m_y = c6_cb_a * c6_cb_a;
  c6_c_st.site = &c6_d_emlrtRSI;
  c6_db_a = c6_qy;
  c6_d_st.site = &c6_f_emlrtRSI;
  c6_eb_a = c6_db_a;
  c6_fb_a = c6_eb_a;
  c6_gb_a = c6_fb_a;
  c6_o_y = c6_gb_a * c6_gb_a;
  c6_c_st.site = &c6_d_emlrtRSI;
  c6_hb_a = c6_qz;
  c6_d_st.site = &c6_f_emlrtRSI;
  c6_ib_a = c6_hb_a;
  c6_jb_a = c6_ib_a;
  c6_kb_a = c6_jb_a;
  c6_p_y = c6_kb_a * c6_kb_a;
  c6_r_y = 2.0 * (c6_qx * c6_qy + c6_qw * c6_qz);
  c6_d_x = ((c6_g_y + c6_h_y) - c6_i_y) - c6_j_y;
  c6_mb_a = c6_r_y;
  c6_e_b = c6_d_x;
  c6_s_y = c6_mb_a;
  c6_e_x = c6_e_b;
  c6_r = muDoubleScalarAtan2(c6_s_y, c6_e_x);
  c6_c_st.site = &c6_c_emlrtRSI;
  c6_f_x = c6_aSinInput;
  c6_g_x = c6_f_x;
  c6_h_x = c6_g_x;
  c6_f_b = (c6_h_x < -1.0);
  c6_b_b1 = (c6_h_x > 1.0);
  if (c6_f_b || c6_b_b1) {
    c6_c_p = true;
  } else {
    c6_c_p = false;
  }

  c6_d_p = c6_c_p;
  if (c6_d_p) {
    c6_t_y = NULL;
    sf_mex_assign(&c6_t_y, sf_mex_create("y", c6_cv2, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c6_v_y = NULL;
    sf_mex_assign(&c6_v_y, sf_mex_create("y", c6_cv2, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c6_w_y = NULL;
    sf_mex_assign(&c6_w_y, sf_mex_create("y", c6_cv3, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c6_c_st, &c6_d_emlrtMCI, "error", 0U, 2U, 14, c6_t_y, 14,
                sf_mex_call(&c6_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c6_c_st, NULL, "message", 1U, 2U, 14, c6_v_y, 14, c6_w_y)));
  }

  c6_g_x = muDoubleScalarAsin(c6_g_x);
  c6_u_y = 2.0 * (c6_qy * c6_qz + c6_qw * c6_qx);
  c6_i_x = ((c6_k_y - c6_m_y) - c6_o_y) + c6_p_y;
  c6_ob_a = c6_u_y;
  c6_g_b = c6_i_x;
  c6_x_y = c6_ob_a;
  c6_j_x = c6_g_b;
  c6_b_r = muDoubleScalarAtan2(c6_x_y, c6_j_x);
  c6_attitude[0] = c6_r;
  c6_attitude[1] = c6_g_x;
  c6_attitude[2] = c6_b_r;
  c6_c_end = 1;
  c6_trueCount = 0;
  for (c6_d_i = 0; c6_d_i < c6_c_end; c6_d_i++) {
    if (c6_mask1 || c6_mask2) {
      c6_trueCount++;
    }
  }

  c6_tmp_size[0] = c6_trueCount;
  c6_partialTrueCount = 0;
  for (c6_e_i = 0; c6_e_i < c6_c_end; c6_e_i++) {
    if (c6_mask1 || c6_mask2) {
      c6_tmp_data[c6_partialTrueCount] = c6_e_i;
      c6_partialTrueCount++;
    }
  }

  c6_x_size[0] = c6_tmp_size[0];
  c6_loop_ub = c6_tmp_size[0] - 1;
  for (c6_i3 = 0; c6_i3 <= c6_loop_ub; c6_i3++) {
    c6_x_data[c6_i3] = c6_aSinInput;
  }

  c6_b_nx = c6_x_size[0];
  c6_i4 = static_cast<uint8_T>(c6_b_nx) - 1;
  for (c6_d_k = 0; c6_d_k <= c6_i4; c6_d_k++) {
    c6_k_x = c6_x_data[0];
    c6_m_x = c6_k_x;
    c6_m_x = muDoubleScalarSign(c6_m_x);
    c6_x_data[0] = c6_m_x;
  }

  c6_b_loop_ub = c6_x_size[0] - 1;
  for (c6_i5 = 0; c6_i5 <= c6_b_loop_ub; c6_i5++) {
    c6_x_data[c6_i5] = -c6_x_data[c6_i5] * 2.0;
  }

  c6_d_end = 1;
  c6_b_trueCount = 0;
  for (c6_f_i = 0; c6_f_i < c6_d_end; c6_f_i++) {
    if (c6_mask1 || c6_mask2) {
      c6_b_trueCount++;
    }
  }

  c6_c_trueCount[0] = c6_b_trueCount;
  c6_y_size[0] = c6_c_trueCount[0];
  c6_c_loop_ub = c6_c_trueCount[0] - 1;
  for (c6_i6 = 0; c6_i6 <= c6_c_loop_ub; c6_i6++) {
    c6_y_data[c6_i6] = c6_qx;
  }

  c6_e_end = 1;
  c6_d_trueCount = 0;
  for (c6_g_i = 0; c6_g_i < c6_e_end; c6_g_i++) {
    if (c6_mask1 || c6_mask2) {
      c6_d_trueCount++;
    }
  }

  c6_e_trueCount[0] = c6_d_trueCount;
  c6_b_x_size[0] = c6_e_trueCount[0];
  c6_d_loop_ub = c6_e_trueCount[0] - 1;
  for (c6_i7 = 0; c6_i7 <= c6_d_loop_ub; c6_i7++) {
    c6_b_x_data[c6_i7] = c6_qw;
  }

  c6_e_p = (static_cast<real_T>(c6_y_size[0]) == static_cast<real_T>
            (c6_b_x_size[0]));
  c6_samesize = c6_e_p;
  if (c6_samesize) {
    c6_b_tmp_size[0] = c6_y_size[0];
    c6_e_loop_ub = c6_y_size[0] - 1;
    for (c6_i8 = 0; c6_i8 <= c6_e_loop_ub; c6_i8++) {
      c6_b_tmp_data[c6_i8] = c6_function_handle_parenReference(chartInstance,
        c6_y_data[c6_i8], c6_b_x_data[c6_i8]);
    }
  } else {
    c6_expand_atan2(chartInstance, c6_y_data, c6_y_size, c6_b_x_data,
                    c6_b_x_size, c6_b_tmp_data, c6_b_tmp_size);
  }

  if ((c6_x_size[0] != c6_b_tmp_size[0]) && ((c6_x_size[0] != 1) &&
       (c6_b_tmp_size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(c6_x_size[0], c6_b_tmp_size[0], &c6_emlrtECI,
      &c6_b_st);
  }

  c6_f_end = 1;
  c6_f_trueCount = 0;
  for (c6_h_i = 0; c6_h_i < c6_f_end; c6_h_i++) {
    if (c6_mask1 || c6_mask2) {
      c6_f_trueCount++;
    }
  }

  c6_tmp_size[0] = c6_f_trueCount;
  c6_b_partialTrueCount = 0;
  for (c6_j_i = 0; c6_j_i < c6_f_end; c6_j_i++) {
    if (c6_mask1 || c6_mask2) {
      c6_tmp_data[c6_b_partialTrueCount] = c6_j_i;
      c6_b_partialTrueCount++;
    }
  }

  if (c6_x_size[0] == c6_b_tmp_size[0]) {
    c6_f_loop_ub = c6_x_size[0] - 1;
    for (c6_i9 = 0; c6_i9 <= c6_f_loop_ub; c6_i9++) {
      c6_x_data[c6_i9] *= c6_b_tmp_data[c6_i9];
    }
  } else {
    c6_times(chartInstance, c6_x_data, c6_x_size, c6_b_tmp_data, c6_b_tmp_size);
  }

  c6_iv[0] = c6_tmp_size[0];
  emlrtSubAssignSizeCheckR2012b(&c6_iv[0], 1, &c6_x_size[0], 1, &c6_b_emlrtECI,
    &c6_b_st);
  c6_g_loop_ub = c6_x_size[0] - 1;
  for (c6_i10 = 0; c6_i10 <= c6_g_loop_ub; c6_i10++) {
    c6_attitude[c6_tmp_data[c6_i10]] = c6_x_data[c6_i10];
  }

  c6_g_end = 1;
  c6_g_trueCount = 0;
  for (c6_k_i = 0; c6_k_i < c6_g_end; c6_k_i++) {
    if (c6_mask1 || c6_mask2) {
      c6_g_trueCount++;
    }
  }

  c6_c_tmp_size[1] = c6_g_trueCount;
  c6_c_partialTrueCount = 0;
  for (c6_m_i = 0; c6_m_i < c6_g_end; c6_m_i++) {
    if (c6_mask1 || c6_mask2) {
      c6_c_tmp_data[c6_c_partialTrueCount] = c6_m_i;
      c6_c_partialTrueCount++;
    }
  }

  c6_iv1[0] = c6_c_tmp_size[1];
  c6_h_loop_ub = c6_iv1[0] - 1;
  for (c6_i11 = 0; c6_i11 <= c6_h_loop_ub; c6_i11++) {
    c6_attitude[2 + c6_c_tmp_data[c6_i11]] = 0.0;
  }

  c6_d = c6_attitude[2];
  c6_b_d1 = c6_attitude[1];
  c6_d2 = c6_attitude[0];
  *chartInstance->c6_yaw_rad = c6_d2;
  *chartInstance->c6_pitch_rad = c6_b_d1;
  *chartInstance->c6_roll_rad = c6_d;
  c6_do_animation_call_c6_uas_main(chartInstance);
  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 1U,
                    *chartInstance->c6_roll_rad);
  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 2U,
                    *chartInstance->c6_pitch_rad);
  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 3U,
                    *chartInstance->c6_yaw_rad);
}

static void ext_mode_exec_c6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance)
{
}

static void c6_update_jit_animation_c6_uas_main(SFc6_uas_mainInstanceStruct
  *chartInstance)
{
}

static void c6_do_animation_call_c6_uas_main(SFc6_uas_mainInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c6_uas_main(SFc6_uas_mainInstanceStruct
  *chartInstance)
{
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  const mxArray *c6_e_y = NULL;
  const mxArray *c6_st;
  const mxArray *c6_y = NULL;
  c6_st = NULL;
  c6_st = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_createcellmatrix(4, 1), false);
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", chartInstance->c6_pitch_rad, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 0, c6_b_y);
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", chartInstance->c6_roll_rad, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 1, c6_c_y);
  c6_d_y = NULL;
  sf_mex_assign(&c6_d_y, sf_mex_create("y", chartInstance->c6_yaw_rad, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c6_y, 2, c6_d_y);
  c6_e_y = NULL;
  sf_mex_assign(&c6_e_y, sf_mex_create("y",
    &chartInstance->c6_is_active_c6_uas_main, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 3, c6_e_y);
  sf_mex_assign(&c6_st, c6_y, false);
  return c6_st;
}

static void set_sim_state_c6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance,
  const mxArray *c6_st)
{
  const mxArray *c6_u;
  chartInstance->c6_doneDoubleBufferReInit = true;
  c6_u = sf_mex_dup(c6_st);
  *chartInstance->c6_pitch_rad = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 0)), "pitch_rad");
  *chartInstance->c6_roll_rad = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 1)), "roll_rad");
  *chartInstance->c6_yaw_rad = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 2)), "yaw_rad");
  chartInstance->c6_is_active_c6_uas_main = c6_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c6_u, 3)), "is_active_c6_uas_main");
  sf_mex_destroy(&c6_u);
  sf_mex_destroy(&c6_st);
}

static void initSimStructsc6_uas_main(SFc6_uas_mainInstanceStruct *chartInstance)
{
}

static void initSubchartIOPointersc6_uas_main(SFc6_uas_mainInstanceStruct
  *chartInstance)
{
}

static real_T c6_sumColumnB(SFc6_uas_mainInstanceStruct *chartInstance, real_T
  c6_x[4])
{
  real_T c6_y;
  int32_T c6_b_k;
  int32_T c6_k;
  c6_y = c6_x[0];
  for (c6_k = 0; c6_k < 3; c6_k++) {
    c6_b_k = c6_k;
    c6_y += c6_x[c6_b_k + 1];
  }

  return c6_y;
}

static real_T c6_function_handle_parenReference(SFc6_uas_mainInstanceStruct
  *chartInstance, real_T c6_varargin_1, real_T c6_varargin_2)
{
  real_T c6_b_x;
  real_T c6_b_y;
  real_T c6_x;
  real_T c6_y;
  c6_x = c6_varargin_1;
  c6_y = c6_varargin_2;
  c6_b_y = c6_x;
  c6_b_x = c6_y;
  return muDoubleScalarAtan2(c6_b_y, c6_b_x);
}

static void c6_expand_atan2(SFc6_uas_mainInstanceStruct *chartInstance, real_T
  c6_a_data[], int32_T c6_a_size[1], real_T c6_b_data[], int32_T c6_b_size[1],
  real_T c6_c_data[], int32_T c6_c_size[1])
{
  real_T c6_b_c_data[1];
  real_T c6_r;
  real_T c6_x;
  real_T c6_y;
  int32_T c6_csz[2];
  int32_T c6_i;
  int32_T c6_k;
  int32_T c6_loop_ub;
  int32_T c6_sak;
  int32_T c6_sbk;
  int32_T c6_sck;
  c6_sak = c6_a_size[0];
  c6_sbk = c6_b_size[0];
  if (c6_sbk == 1) {
    c6_sck = c6_sak;
  } else {
    c6_sck = 0;
  }

  c6_csz[0] = c6_sck;
  c6_c_size[0] = c6_csz[0];
  if (c6_c_size[0] != 0) {
    c6_loop_ub = c6_c_size[0] - 1;
    for (c6_i = 0; c6_i <= c6_loop_ub; c6_i++) {
      c6_b_c_data[c6_i] = c6_c_data[c6_i];
    }

    for (c6_k = 0; c6_k < 1; c6_k++) {
      c6_y = c6_a_data[0];
      c6_x = c6_b_data[0];
      c6_r = muDoubleScalarAtan2(c6_y, c6_x);
      c6_b_c_data[0] = c6_r;
    }

    c6_c_size[0] = 1;
    c6_c_data[0] = c6_b_c_data[0];
  }
}

const mxArray *sf_c6_uas_main_get_eml_resolved_functions_info()
{
  const mxArray *c6_nameCaptureInfo = NULL;
  c6_nameCaptureInfo = NULL;
  sf_mex_assign(&c6_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c6_nameCaptureInfo;
}

static real_T c6_emlrt_marshallIn(SFc6_uas_mainInstanceStruct *chartInstance,
  const mxArray *c6_b_pitch_rad, const char_T *c6_identifier)
{
  emlrtMsgIdentifier c6_thisId;
  real_T c6_y;
  c6_thisId.fIdentifier = const_cast<const char_T *>(c6_identifier);
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_pitch_rad),
    &c6_thisId);
  sf_mex_destroy(&c6_b_pitch_rad);
  return c6_y;
}

static real_T c6_b_emlrt_marshallIn(SFc6_uas_mainInstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  real_T c6_d;
  real_T c6_y;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_d, 1, 0, 0U, 0, 0U, 0);
  c6_y = c6_d;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static uint8_T c6_c_emlrt_marshallIn(SFc6_uas_mainInstanceStruct *chartInstance,
  const mxArray *c6_b_is_active_c6_uas_main, const char_T *c6_identifier)
{
  emlrtMsgIdentifier c6_thisId;
  uint8_T c6_y;
  c6_thisId.fIdentifier = const_cast<const char_T *>(c6_identifier);
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c6_b_is_active_c6_uas_main), &c6_thisId);
  sf_mex_destroy(&c6_b_is_active_c6_uas_main);
  return c6_y;
}

static uint8_T c6_d_emlrt_marshallIn(SFc6_uas_mainInstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint8_T c6_b_u;
  uint8_T c6_y;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_b_u, 1, 3, 0U, 0, 0U, 0);
  c6_y = c6_b_u;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_slStringInitializeDynamicBuffers(SFc6_uas_mainInstanceStruct
  *chartInstance)
{
}

static void c6_chart_data_browse_helper(SFc6_uas_mainInstanceStruct
  *chartInstance, int32_T c6_ssIdNumber, const mxArray **c6_mxData, uint8_T
  *c6_isValueTooBig)
{
  real_T c6_b_d1;
  real_T c6_d;
  real_T c6_d2;
  *c6_mxData = NULL;
  *c6_mxData = NULL;
  *c6_isValueTooBig = 0U;
  switch (c6_ssIdNumber) {
   case 4U:
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", *chartInstance->c6_q, 0, 0U,
      1U, 0U, 2, 1, 4), false);
    break;

   case 5U:
    c6_d = *chartInstance->c6_roll_rad;
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", &c6_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c6_b_d1 = *chartInstance->c6_pitch_rad;
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", &c6_b_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 9U:
    c6_d2 = *chartInstance->c6_yaw_rad;
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", &c6_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void c6_times(SFc6_uas_mainInstanceStruct *chartInstance, real_T
                     c6_in1_data[], int32_T c6_in1_size[1], real_T c6_in2_data[],
                     int32_T c6_in2_size[1])
{
  real_T c6_b_in1_data[1];
  int32_T c6_b_in1_size[1];
  int32_T c6_aux_0_0;
  int32_T c6_aux_1_0;
  int32_T c6_b_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_loop_ub;
  int32_T c6_stride_0_0;
  int32_T c6_stride_1_0;
  if (c6_in2_size[0] == 1) {
    c6_b_in1_size[0] = c6_in1_size[0];
  } else {
    c6_b_in1_size[0] = c6_in2_size[0];
  }

  c6_stride_0_0 = static_cast<int32_T>(c6_in1_size[0] != 1);
  c6_stride_1_0 = static_cast<int32_T>(c6_in2_size[0] != 1);
  c6_aux_0_0 = 0;
  c6_aux_1_0 = 0;
  if (c6_in2_size[0] == 1) {
    c6_i = c6_in1_size[0];
  } else {
    c6_i = c6_in2_size[0];
  }

  c6_loop_ub = c6_i - 1;
  for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
    c6_b_in1_data[c6_i1] = c6_in1_data[c6_aux_0_0] * c6_in2_data[c6_aux_1_0];
    c6_aux_1_0 += c6_stride_1_0;
    c6_aux_0_0 += c6_stride_0_0;
  }

  c6_in1_size[0] = c6_b_in1_size[0];
  c6_b_loop_ub = c6_b_in1_size[0] - 1;
  for (c6_i2 = 0; c6_i2 <= c6_b_loop_ub; c6_i2++) {
    c6_in1_data[c6_i2] = c6_b_in1_data[c6_i2];
  }
}

static void init_dsm_address_info(SFc6_uas_mainInstanceStruct *chartInstance)
{
}

static void init_simulink_io_address(SFc6_uas_mainInstanceStruct *chartInstance)
{
  chartInstance->c6_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c6_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c6_q = (real_T (*)[4])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c6_roll_rad = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c6_pitch_rad = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c6_yaw_rad = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c6_uas_main_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1114269548U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2723541660U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1539248182U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3895068555U);
}

mxArray *sf_c6_uas_main_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c6_uas_main_jit_fallback_info(void)
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

mxArray *sf_c6_uas_main_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c6_uas_main(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiCewMzAwAakOYCYiQECWKF8RiBmgdIQcRa4uAIQl1QWpILEi4uSPVOAdF5iLpi"
    "fWFrhmZeWDzbfggFhPhsW8xmRzOeEikPAB3vK9Cs4gPQ7IOlnwaKfE0m/AJRfkFmSnBFflJgCFe"
    "dDogfOPyIO6Pqx+YcDzT8gflF+Tg7IO4PDH0pE+YMdzR8gfmViOThWqOMPBQfK9EPs9yDgD1E0f"
    "4D4mcXxicklmWWp8clm8aWJxfG5iZl5SOkMAAsDJ2A="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c6_uas_main_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sXTsUgqMMBRU6cN1EJBl4HF";
}

static void sf_opaque_initialize_c6_uas_main(void *chartInstanceVar)
{
  initialize_params_c6_uas_main((SFc6_uas_mainInstanceStruct*) chartInstanceVar);
  initialize_c6_uas_main((SFc6_uas_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c6_uas_main(void *chartInstanceVar)
{
  enable_c6_uas_main((SFc6_uas_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c6_uas_main(void *chartInstanceVar)
{
  disable_c6_uas_main((SFc6_uas_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c6_uas_main(void *chartInstanceVar)
{
  sf_gateway_c6_uas_main((SFc6_uas_mainInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c6_uas_main(SimStruct* S)
{
  return get_sim_state_c6_uas_main((SFc6_uas_mainInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c6_uas_main(SimStruct* S, const mxArray *st)
{
  set_sim_state_c6_uas_main((SFc6_uas_mainInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c6_uas_main(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc6_uas_mainInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_uas_main_optimization_info();
    }

    mdl_cleanup_runtime_resources_c6_uas_main((SFc6_uas_mainInstanceStruct*)
      chartInstanceVar);
    ((SFc6_uas_mainInstanceStruct*) chartInstanceVar)->
      ~SFc6_uas_mainInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c6_uas_main(void *chartInstanceVar)
{
  mdl_start_c6_uas_main((SFc6_uas_mainInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc6_uas_mainInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c6_uas_main(void *chartInstanceVar)
{
  mdl_terminate_c6_uas_main((SFc6_uas_mainInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c6_uas_main(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c6_uas_main((SFc6_uas_mainInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc6_uas_main((SFc6_uas_mainInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c6_uas_main_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWdtuG0UYnqQhNGqJekEFEkhEXCEhpLZA4QJB4hM1ipuo6wTEjTXZ/e0deXZ2Mwc7RjxEH4N",
    "7noAn4JYb3oHLcsHhn/XaNRvjzNgpTStW2qx/737/af+jQ9aaLYLHNp47bxGyidfreK6T8fFKQa",
    "/NnOPvN8hnBf39DULCNIIeiMB0u+yM+B3CJIdU0kQR/0PQBB6BSrnRLBVN0U3dsUx0QYIIkUGWS",
    "u0lV7HEcCb6DSNCK1l9HbMwDuLU8KiCDGl0IPjo3+RmRh+ixBqTEOoGQKRjmZpe3OC0t9gLUg+r",
    "MYR9ZRJvXynQgcmsqapluGYZh/oZhE2hNEUvqAvsDTTVUNVnfk629qpggk6TjDMq3H0dUxVAhtG",
    "h4SiL8O+B0eg9J2wYU6krENMBqH3Wz6WnApykM4VPnzBBdSoZ5fWEVy03R3sPOdrYwpTgvu8I7a",
    "1IoP0sZUJ7JkTQQD/XBT3hUIMT0/OUG8CpsdlwzGAI0u/9dqvpACTtwYHw0zl/R/WzPCinueSI1",
    "SyBYyr3QoxdBZFf3cCkUwHFcIQ2svHCQu7ipmpLNsDY8K11TZv+S9U6k4yjXy2FzeXWB+AdV1O5",
    "jVBUKefKD9tOs30YAM/l16imS2DH8j3ASrGonWJ02GrjWbGMYJgJBbaaioi5R+WghMob20NsUg5",
    "wltg0gAjdPFV9yuiiPDJKp0kVS05tf99R3nlsU2iQXRqCc4+RlClAhfO48pQbMWUTCdHoJZ1b6c",
    "xhnINLQYnqGlEbprKPPvZtZk99ZTPBDw1RDwuzhrzI1TG6jyk3jjonqof5g+FxpLDK+slFrM2fp",
    "cAhDWOIbOdkHFpYZ5GB6ytWtuXvobUDpkc1UKFkmWsmGSzo2HStl9qjDI5EX6RD0ZBpEhST14K4",
    "AsCqQaVgolfBFi5HDVTeTWsJp+28uvsOOdbPVHN6YmPjSxDYDa2tdmqgIWZVXeCIjAqtgg3Ydzj",
    "ECMWUxkY9Grf6cd+z8/sueTq/b8yZ32/MzO+3Cjq83zFUdRLKxJTPnRk+Nx32ABccOYcjU9zk+t",
    "4Mfm2OXDJzLcvbWl+s5zp+Wpvjp9dKcjZKuM3CV7/+8eSTHw7+fPzjmz9nf73/0+8ryd/w27O2C",
    "/rtybw0rc6DcwXMPvvggjh4oxQHllbftNVR77TVqjw6uh8+vFv/qsI/etDI+T2+tljfjZK+k+93",
    "7IyGyZvXAhk2o2JfszQ14z3C8v90Rt/NC/yxNRNPhPz2xWr4nV2XvNkq+cvSGdNh3JE0mhPHz8+",
    "e13fL+Hn2XC/ZY2mZcm7NuRp2vOtkx6slOyw9osP8rVyOHTu7q+Hd8vF2yY7b+U7VobZzQuefFX",
    "r7EuqfL478x7gXRc///fLs7XOZP5bFXXuG885l4la1z3euetGfv7Og3pLS87eusB1kQb33ma+vm",
    "l2/EL/5952C/nz6u041Zjyas1kWt3H56867+5LE9xNP/03m/br1X/EPgG8/3BOUj3CVHK/qxdeH",
    "0v6OO70lgar5+/rz6Ceue+7NUn5beshElA7VB3fvfXxvlf70NwWBJiI=",
    ""
  };

  static char newstr [1557] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c6_uas_main(SimStruct *S)
{
  const char* newstr = sf_c6_uas_main_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(939064797U));
  ssSetChecksum1(S,(2432585640U));
  ssSetChecksum2(S,(1892620467U));
  ssSetChecksum3(S,(4190186495U));
}

static void mdlRTW_c6_uas_main(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c6_uas_main(SimStruct *S)
{
  SFc6_uas_mainInstanceStruct *chartInstance;
  chartInstance = (SFc6_uas_mainInstanceStruct *)utMalloc(sizeof
    (SFc6_uas_mainInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc6_uas_mainInstanceStruct));
  chartInstance = new (chartInstance) SFc6_uas_mainInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c6_uas_main;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c6_uas_main;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c6_uas_main;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c6_uas_main;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c6_uas_main;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c6_uas_main;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c6_uas_main;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c6_uas_main;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c6_uas_main;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c6_uas_main;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c6_uas_main;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c6_uas_main;
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
    chartInstance->c6_JITStateAnimation,
    chartInstance->c6_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c6_uas_main(chartInstance);
}

void c6_uas_main_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c6_uas_main(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c6_uas_main(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c6_uas_main(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c6_uas_main_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
