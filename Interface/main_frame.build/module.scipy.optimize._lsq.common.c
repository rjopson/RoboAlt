/* Generated code for Python module 'scipy.optimize._lsq.common'
 * created by Nuitka version 0.6.4
 *
 * This code is in part copyright 2019 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_scipy$optimize$_lsq$common" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_lsq$common;
PyDictObject *moduledict_scipy$optimize$_lsq$common;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_Delta;
extern PyObject *const_float_0_75;
static PyObject *const_tuple_270d21bbbd1b6e969c738b218c095378_tuple;
static PyObject *const_str_plain_Cost;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_clip;
static PyObject *const_str_digest_596588fbf4f1fd12a7b4c517b0bceaf0;
static PyObject *const_str_digest_3d5bb5c0a1b420fd81feb620351475e0;
extern PyObject *const_str_plain_array;
static PyObject *const_str_digest_7db8fad4423b7d220c8fd0a3630dedff;
extern PyObject *const_str_plain_isfinite;
extern PyObject *const_dict_43144c2738ec0a3f7e588824eaf6c6eb;
extern PyObject *const_str_plain_phi;
extern PyObject *const_float_0_001;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_inf;
static PyObject *const_tuple_7308d3b714b02824e412967d39e1e4f5_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_float_1eminus_10;
static PyObject *const_tuple_f50ff0aae51949c635e907b43e471c13_tuple;
static PyObject *const_str_digest_ee8eb97216bddd0a23dd44f09b5b25c9;
extern PyObject *const_str_plain_sum;
static PyObject *const_str_digest_d6baaffe2d8c2f0f5837aa6518e943a2;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_zeros_like;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
static PyObject *const_tuple_f21b69bb47e04dd0ccda8be710851e36_tuple;
extern PyObject *const_str_plain_x1;
extern PyObject *const_str_plain_iteration;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_ub_finite;
static PyObject *const_str_plain_left_multiply;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_dx_norm;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
static PyObject *const_str_digest_cc13b678ffed2a7e31c6132c12a42708;
static PyObject *const_str_digest_362c990e0c2f73ab96fac687afab31ff;
extern PyObject *const_int_neg_1;
static PyObject *const_tuple_0bf5f6f8bfe5519b88cf59f896140e3a_tuple;
extern PyObject *const_str_plain_extremum;
static PyObject *const_str_plain_Optimality;
static PyObject *const_str_plain_scale_inv;
extern PyObject *const_str_plain_reflective_transformation;
extern PyObject *const_str_plain_ignore;
extern PyObject *const_str_plain_mode;
static PyObject *const_tuple_str_plain_x_str_plain_J_str_plain_diag_tuple;
extern PyObject *const_str_plain_lb_finite;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_indptr;
extern PyObject *const_str_plain_minimum;
extern PyObject *const_str_plain_non_zero;
extern PyObject *const_str_plain_steps;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_intersect_trust_region;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_Js;
static PyObject *const_str_plain_dF;
extern PyObject *const_float_0_25;
extern PyObject *const_str_plain_EPS;
static PyObject *const_tuple_157b3b6e85937edbeb89548d78707361_tuple;
extern PyObject *const_str_plain_optimality;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_q;
extern PyObject *const_str_plain_astype;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain_cho_factor;
extern PyObject *const_str_plain_check_termination;
extern PyObject *const_float_0_5;
static PyObject *const_tuple_str_plain_LinearOperator_str_plain_aslinearoperator_tuple;
extern PyObject *const_str_plain_aslinearoperator;
static PyObject *const_str_digest_c1ef2a31036ff8828d031ad81cdb83f4;
extern PyObject *const_str_plain_find_active_constraints;
static PyObject *const_str_digest_3fff24f6dbddfbbbf7479c5011f63324;
extern PyObject *const_tuple_int_0_int_0_tuple;
extern PyObject *const_tuple_str_plain_copysign_tuple;
extern PyObject *const_str_plain_regularized_lsq_operator;
extern PyObject *const_str_plain_evaluate_quadratic;
static PyObject *const_str_plain_left_multiplied_operator;
static PyObject *const_tuple_str_plain_X_str_plain_J_str_plain_d_tuple;
extern PyObject *const_str_plain_nfev;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_hstack;
static PyObject *const_str_digest_66f87e9708e36320d4078dce0953d802;
static PyObject *const_str_digest_4d45fbb48b343d299c3bc3f7edd9489a;
extern PyObject *const_str_plain_eps;
extern PyObject *const_str_plain_print_header_nonlinear;
extern PyObject *const_tuple_true_tuple;
static PyObject *const_str_digest_a847d07409e36b2daf868ccfbc1dc5af;
static PyObject *const_str_digest_09a77bda8b95f71853cc0e8ac76c0fdd;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_str_plain_X_str_plain_d_str_plain_J_tuple;
extern PyObject *const_str_plain_over;
extern PyObject *const_str_plain_lower;
extern PyObject *const_dict_6ccf1996a79e7bc95b345c0d39aef510;
static PyObject *const_str_digest_d90340207941874cd37d37d278720a1b;
extern PyObject *const_str_plain___debug__;
static PyObject *const_tuple_3543c9cc1c0fdfe5fe8d5d3970ec28aa_tuple;
extern PyObject *const_str_plain_diag;
static PyObject *const_str_digest_f31daa0bf3b5293286f9dbc499a8f038;
static PyObject *const_str_digest_774ee6f4120ca8dda794a11a67014283;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_solve_lsq_trust_region;
static PyObject *const_tuple_a9bfdae9e0d4403b82514cd3b7dd2f18_tuple;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_scale_for_robust_loss_function;
extern PyObject *const_str_plain_build_quadratic_1d;
static PyObject *const_tuple_54dc634c217b9ef02db15d504f8f5f7f_tuple;
extern PyObject *const_str_plain_rtol;
static PyObject *const_str_plain_lower_active;
static PyObject *const_str_plain_step_norm;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_equal;
static PyObject *const_tuple_676f8b2dbcecf449ca685a3442c12b65_tuple;
extern PyObject *const_str_plain_lower_dist;
static PyObject *const_tuple_str_plain_J_str_plain_f_tuple;
static PyObject *const_str_digest_4274b0de225b72dd726bbf11f247f436;
extern PyObject *const_str_plain_t;
static PyObject *const_str_plain_xtol_satisfied;
extern PyObject *const_str_plain_n;
static PyObject *const_str_plain_cost_reduction;
static PyObject *const_str_digest_fe345a82e1a2299feaeb70ddcd7ea41e;
static PyObject *const_str_digest_34fe1fbaa93320b25551471d4425a8fb;
static PyObject *const_tuple_d96b0bbab1449bf0121d9dcceeb607c3_tuple;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_right_multiplied_operator;
extern PyObject *const_str_plain_J;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_g;
static PyObject *const_str_digest_18fc2df6155e6946e59573e2fc8839f0;
extern PyObject *const_float_2_0;
static PyObject *const_str_digest_8e30a20195ffc4781247326f08fc4b0e;
extern PyObject *const_str_plain_value;
static PyObject *const_str_plain_p_norm;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_min_step;
static PyObject *const_str_plain_g_negative;
extern PyObject *const_str_plain_minimize_quadratic_1d;
extern PyObject *const_str_plain_roots;
static PyObject *const_tuple_d0b627489bad8634a20c936a6b42127e_tuple;
static PyObject *const_str_digest_d2684a13400b82244dabaf9ccb0d85b7;
static PyObject *const_str_digest_104054466dcec2ccbea3ddf494fb9761;
extern PyObject *const_str_plain_compute_grad;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_Iteration;
extern PyObject *const_str_plain_alpha;
extern PyObject *const_str_plain_indices;
static PyObject *const_tuple_f7e2b4b333083173033148fef01f035c_tuple;
extern PyObject *const_str_plain_print_iteration_nonlinear;
static PyObject *const_str_digest_db2c06f934fb78be6641395104df427c;
static PyObject *const_str_plain_suf;
extern PyObject *const_str_plain_compute_jac_scale;
static PyObject *const_str_plain_right_multiply;
static PyObject *const_str_plain_upper_mask;
extern PyObject *const_str_plain_mask;
static PyObject *const_tuple_str_plain_x_str_plain_d_str_plain_J_tuple;
extern PyObject *const_str_plain_l;
static PyObject *const_str_plain_scale_inv_old;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_bound_hit;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
static PyObject *const_tuple_c44b3caf22577cf0b8589c37d4536ee9_tuple;
static PyObject *const_tuple_91c82eaa19ab3d19798468b9802d0cb5_tuple;
extern PyObject *const_str_plain_xtol;
static PyObject *const_str_plain_phi_and_derivative;
extern PyObject *const_str_plain_norm;
extern PyObject *const_dict_c18ee4cbbadb9ffc11f80b8f287d831e;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_repeat;
extern PyObject *const_str_plain_denom;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_plain_ub;
extern PyObject *const_str_plain_ftol;
static PyObject *const_str_digest_2f4103cd34946b10960acb238ee8e194;
extern PyObject *const_str_plain_power;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_t2;
extern PyObject *const_str_plain_matmat;
extern PyObject *const_str_plain_matvec;
static PyObject *const_str_digest_2cbc48ee0fc6f9f01d7dabf241dfdb6e;
extern PyObject *const_str_plain_b;
static PyObject *const_str_digest_1e2209c33e6aaf53d16d3f32fa5e4892;
static PyObject *const_tuple_186ad695899330ca4e0dd7cc64266b01_tuple;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_abs;
static PyObject *const_tuple_str_plain_J_str_plain_scale_inv_old_str_plain_scale_inv_tuple;
extern PyObject *const_str_plain_issparse;
extern PyObject *const_str_plain_nonzero;
static PyObject *const_str_plain_lower_threshold;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_argmin;
extern PyObject *const_str_plain_rstep;
static PyObject *const_str_digest_299f39952a7f02c89603912802fb5a5c;
static PyObject *const_str_digest_d172c08e1f51e6a021ad982d9b0ff10a;
extern PyObject *const_str_digest_8783708b6421c71a0892a844e756fb02;
static PyObject *const_tuple_str_plain_J_str_plain_f_str_plain_rho_str_plain_J_scale_tuple;
extern PyObject *const_str_plain_f;
static PyObject *const_tuple_6d6202c9e230d9aaef80eee8da30525d_tuple;
extern PyObject *const_str_plain_vstack;
extern PyObject *const_str_plain_CL_scaling_vector;
extern PyObject *const_str_plain_LinAlgError;
static PyObject *const_str_plain_actual_reduction;
extern PyObject *const_tuple_type_float_tuple;
extern PyObject *const_int_0;
extern PyObject *const_tuple_int_pos_1_int_pos_1_tuple;
static PyObject *const_str_digest_6bd1e59a9681647dc9d66c6a8453f97f;
extern PyObject *const_str_plain_print_header_linear;
static PyObject *const_str_plain_s_non_zero;
extern PyObject *const_str_plain_finfo;
extern PyObject *const_tuple_int_0_int_pos_1_tuple;
static PyObject *const_tuple_76be90c8c4f4235eb52903b19f15d75e_tuple;
extern PyObject *const_str_plain_dv;
extern PyObject *const_str_plain_F;
extern PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_str_digest_561159f53dd18761388a6e14bcd735a4;
extern PyObject *const_tuple_str_plain_x_str_plain_lb_str_plain_ub_tuple;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_B;
static PyObject *const_str_digest_d6403f38b204d96510293c600f184ba6;
extern PyObject *const_str_plain_ravel;
static PyObject *const_str_digest_12c946f85c92e0440d362b7772cd2112;
static PyObject *const_tuple_e3da67a4e5dbc47526dccc9049809bc0_tuple;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_digest_2d65b7d43070b1d8f8c8b80891ce3215;
static PyObject *const_str_digest_f48829830c1d98a3bad725b05ad18d55;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_c;
extern PyObject *const_tuple_type_int_tuple;
extern PyObject *const_dict_8a6ce79bb59f45c062c2a0027a3a0c33;
extern PyObject *const_str_plain_step_size_to_bound;
static PyObject *const_str_digest_18aceedca8ff3fc2b24d37854005545a;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_ones_like;
static PyObject *const_str_plain_upper_active;
static PyObject *const_str_digest_4423bcf8bed20096e55ca0349dd8bdcc;
extern PyObject *const_str_plain_print_iteration_linear;
static PyObject *const_str_plain_phi_prime;
extern PyObject *const_str_plain_empty_like;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_float_1eminus_10_tuple;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_math;
extern PyObject *const_str_plain_diff;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain_ftol_satisfied;
extern PyObject *const_str_plain_rmatvec;
extern PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
static PyObject *const_str_plain_lower_mask;
extern PyObject *const_str_plain_dot;
extern PyObject *const_float_minus_0_5;
extern PyObject *const_str_plain_nextafter;
extern PyObject *const_float_0_01;
extern PyObject *const_str_plain_take;
static PyObject *const_str_digest_b0ee25eb40ba061bda21554cd71651e4;
static PyObject *const_tuple_str_plain_x_str_plain_J_str_plain_d_tuple;
static PyObject *const_str_digest_df8c658c6e8640c1939df352ef2dc66f;
extern PyObject *const_str_plain_t1;
static PyObject *const_str_digest_55ec1537f69cd693a56bc403b5fac967;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_update_tr_radius;
static PyObject *const_str_digest_24606b70de137cacc524174e06acaf9d;
extern PyObject *const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
static PyObject *const_str_digest_8c02ebb17790bbe78b225fe85a7e01be;
static PyObject *const_str_digest_22937e8fcd08d5b4936fbb27e928ba86;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_x_norm;
static PyObject *const_str_digest_0402a6983861bab2ab470b68cca46249;
extern PyObject *const_str_plain_isreal;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_LinearOperator;
extern PyObject *const_str_plain_cost;
extern PyObject *const_str_plain_X;
extern PyObject *const_str_plain_remainder;
extern PyObject *const_str_plain_min_index;
extern PyObject *const_str_plain_maximum;
extern PyObject *const_str_plain_solve_trust_region_2d;
extern PyObject *const_dict_c4b01644824ba6bad132707fcdaa03f1;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_cho_solve;
extern PyObject *const_str_plain_errstate;
extern PyObject *const_str_plain_copysign;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_make_strictly_feasible;
static PyObject *const_tuple_f67380ef53e8a94d98804dd8fc507f2e_tuple;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_tuple_str_plain_issparse_tuple;
static PyObject *const_tuple_cc17e8f59e8ac63621455d33c73d3671_tuple;
extern PyObject *const_str_plain_newaxis;
static PyObject *const_str_digest_583a0dc42c5812da77d9c6fa3363bafc;
extern PyObject *const_str_plain_lb;
extern PyObject *const_str_plain_R;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_in_bounds;
static PyObject *const_str_plain_upper_threshold;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_active;
static PyObject *const_tuple_str_plain_J_str_plain_d_str_plain_copy_tuple;
extern PyObject *const_tuple_str_plain_norm_tuple;
extern PyObject *const_str_plain_s0;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_upper_dist;
extern PyObject *const_str_plain_x2;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_tight_bounds;
static PyObject *const_str_digest_4a2bd2e2c0cc9f9d9d0ceba8d7ef16ce;
static PyObject *const_tuple_none_float_0_01_int_pos_10_tuple;
extern PyObject *const_str_plain_format;
static PyObject *const_tuple_a4436538b33071d6823b7feaaf2f9edb_tuple;
extern PyObject *const_str_plain_ratio;
extern PyObject *const_str_plain_x_new;
static PyObject *const_str_digest_1dc58731088df41e86635dd96e1f653a;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_fill;
static PyObject *const_str_plain_predicted_reduction;
extern PyObject *const_str_plain_rho;
static PyObject *const_str_plain_J_scale;
extern PyObject *const_str_plain_coeffs;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_Delta = UNSTREAM_STRING_ASCII( &constant_bin[ 111115 ], 5, 1 );
    const_tuple_270d21bbbd1b6e969c738b218c095378_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_270d21bbbd1b6e969c738b218c095378_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_270d21bbbd1b6e969c738b218c095378_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_270d21bbbd1b6e969c738b218c095378_tuple, 2, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_270d21bbbd1b6e969c738b218c095378_tuple, 3, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    PyTuple_SET_ITEM( const_tuple_270d21bbbd1b6e969c738b218c095378_tuple, 4, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_270d21bbbd1b6e969c738b218c095378_tuple, 5, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_270d21bbbd1b6e969c738b218c095378_tuple, 6, const_str_plain_extremum ); Py_INCREF( const_str_plain_extremum );
    PyTuple_SET_ITEM( const_tuple_270d21bbbd1b6e969c738b218c095378_tuple, 7, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_270d21bbbd1b6e969c738b218c095378_tuple, 8, const_str_plain_min_index ); Py_INCREF( const_str_plain_min_index );
    const_str_plain_Cost = UNSTREAM_STRING_ASCII( &constant_bin[ 4843649 ], 4, 1 );
    const_str_digest_596588fbf4f1fd12a7b4c517b0bceaf0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4894989 ], 26, 0 );
    const_str_digest_3d5bb5c0a1b420fd81feb620351475e0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4895015 ], 41, 0 );
    const_str_digest_7db8fad4423b7d220c8fd0a3630dedff = UNSTREAM_STRING_ASCII( &constant_bin[ 4895056 ], 35, 0 );
    const_tuple_7308d3b714b02824e412967d39e1e4f5_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_7308d3b714b02824e412967d39e1e4f5_tuple, 0, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    PyTuple_SET_ITEM( const_tuple_7308d3b714b02824e412967d39e1e4f5_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_7308d3b714b02824e412967d39e1e4f5_tuple, 2, const_str_plain_matvec ); Py_INCREF( const_str_plain_matvec );
    PyTuple_SET_ITEM( const_tuple_7308d3b714b02824e412967d39e1e4f5_tuple, 3, const_str_plain_matmat ); Py_INCREF( const_str_plain_matmat );
    PyTuple_SET_ITEM( const_tuple_7308d3b714b02824e412967d39e1e4f5_tuple, 4, const_str_plain_rmatvec ); Py_INCREF( const_str_plain_rmatvec );
    const_tuple_f50ff0aae51949c635e907b43e471c13_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_f50ff0aae51949c635e907b43e471c13_tuple, 0, const_str_plain_Delta ); Py_INCREF( const_str_plain_Delta );
    const_str_plain_actual_reduction = UNSTREAM_STRING_ASCII( &constant_bin[ 4895091 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_f50ff0aae51949c635e907b43e471c13_tuple, 1, const_str_plain_actual_reduction ); Py_INCREF( const_str_plain_actual_reduction );
    const_str_plain_predicted_reduction = UNSTREAM_STRING_ASCII( &constant_bin[ 4895107 ], 19, 1 );
    PyTuple_SET_ITEM( const_tuple_f50ff0aae51949c635e907b43e471c13_tuple, 2, const_str_plain_predicted_reduction ); Py_INCREF( const_str_plain_predicted_reduction );
    const_str_plain_step_norm = UNSTREAM_STRING_ASCII( &constant_bin[ 4894779 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_f50ff0aae51949c635e907b43e471c13_tuple, 3, const_str_plain_step_norm ); Py_INCREF( const_str_plain_step_norm );
    const_str_plain_bound_hit = UNSTREAM_STRING_ASCII( &constant_bin[ 4895126 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_f50ff0aae51949c635e907b43e471c13_tuple, 4, const_str_plain_bound_hit ); Py_INCREF( const_str_plain_bound_hit );
    PyTuple_SET_ITEM( const_tuple_f50ff0aae51949c635e907b43e471c13_tuple, 5, const_str_plain_ratio ); Py_INCREF( const_str_plain_ratio );
    const_str_digest_ee8eb97216bddd0a23dd44f09b5b25c9 = UNSTREAM_STRING_ASCII( &constant_bin[ 4895135 ], 10, 0 );
    const_str_digest_d6baaffe2d8c2f0f5837aa6518e943a2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4895145 ], 168, 0 );
    const_tuple_f21b69bb47e04dd0ccda8be710851e36_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_f21b69bb47e04dd0ccda8be710851e36_tuple, 0, const_str_plain_cho_factor ); Py_INCREF( const_str_plain_cho_factor );
    PyTuple_SET_ITEM( const_tuple_f21b69bb47e04dd0ccda8be710851e36_tuple, 1, const_str_plain_cho_solve ); Py_INCREF( const_str_plain_cho_solve );
    PyTuple_SET_ITEM( const_tuple_f21b69bb47e04dd0ccda8be710851e36_tuple, 2, const_str_plain_LinAlgError ); Py_INCREF( const_str_plain_LinAlgError );
    const_str_plain_left_multiply = UNSTREAM_STRING_ASCII( &constant_bin[ 4895313 ], 13, 1 );
    const_str_digest_cc13b678ffed2a7e31c6132c12a42708 = UNSTREAM_STRING_ASCII( &constant_bin[ 4895326 ], 41, 0 );
    const_str_digest_362c990e0c2f73ab96fac687afab31ff = UNSTREAM_STRING_ASCII( &constant_bin[ 4895367 ], 100, 0 );
    const_tuple_0bf5f6f8bfe5519b88cf59f896140e3a_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_0bf5f6f8bfe5519b88cf59f896140e3a_tuple, 0, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    PyTuple_SET_ITEM( const_tuple_0bf5f6f8bfe5519b88cf59f896140e3a_tuple, 1, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    PyTuple_SET_ITEM( const_tuple_0bf5f6f8bfe5519b88cf59f896140e3a_tuple, 2, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_0bf5f6f8bfe5519b88cf59f896140e3a_tuple, 3, const_str_plain_diag ); Py_INCREF( const_str_plain_diag );
    PyTuple_SET_ITEM( const_tuple_0bf5f6f8bfe5519b88cf59f896140e3a_tuple, 4, const_str_plain_s0 ); Py_INCREF( const_str_plain_s0 );
    PyTuple_SET_ITEM( const_tuple_0bf5f6f8bfe5519b88cf59f896140e3a_tuple, 5, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_0bf5f6f8bfe5519b88cf59f896140e3a_tuple, 6, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_0bf5f6f8bfe5519b88cf59f896140e3a_tuple, 7, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_0bf5f6f8bfe5519b88cf59f896140e3a_tuple, 8, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_0bf5f6f8bfe5519b88cf59f896140e3a_tuple, 9, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    const_str_plain_Optimality = UNSTREAM_STRING_ASCII( &constant_bin[ 4895467 ], 10, 1 );
    const_str_plain_scale_inv = UNSTREAM_STRING_ASCII( &constant_bin[ 1943251 ], 9, 1 );
    const_tuple_str_plain_x_str_plain_J_str_plain_diag_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_J_str_plain_diag_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_J_str_plain_diag_tuple, 1, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_J_str_plain_diag_tuple, 2, const_str_plain_diag ); Py_INCREF( const_str_plain_diag );
    const_str_plain_Js = UNSTREAM_STRING_ASCII( &constant_bin[ 1302196 ], 2, 1 );
    const_str_plain_dF = UNSTREAM_STRING_ASCII( &constant_bin[ 95265 ], 2, 1 );
    const_tuple_157b3b6e85937edbeb89548d78707361_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_157b3b6e85937edbeb89548d78707361_tuple, 0, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_157b3b6e85937edbeb89548d78707361_tuple, 1, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    PyTuple_SET_ITEM( const_tuple_157b3b6e85937edbeb89548d78707361_tuple, 2, const_str_plain_Delta ); Py_INCREF( const_str_plain_Delta );
    PyTuple_SET_ITEM( const_tuple_157b3b6e85937edbeb89548d78707361_tuple, 3, const_str_plain_R ); Py_INCREF( const_str_plain_R );
    PyTuple_SET_ITEM( const_tuple_157b3b6e85937edbeb89548d78707361_tuple, 4, const_str_plain_lower ); Py_INCREF( const_str_plain_lower );
    PyTuple_SET_ITEM( const_tuple_157b3b6e85937edbeb89548d78707361_tuple, 5, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_157b3b6e85937edbeb89548d78707361_tuple, 6, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_157b3b6e85937edbeb89548d78707361_tuple, 7, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_157b3b6e85937edbeb89548d78707361_tuple, 8, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_157b3b6e85937edbeb89548d78707361_tuple, 9, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_157b3b6e85937edbeb89548d78707361_tuple, 10, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_157b3b6e85937edbeb89548d78707361_tuple, 11, const_str_plain_coeffs ); Py_INCREF( const_str_plain_coeffs );
    PyTuple_SET_ITEM( const_tuple_157b3b6e85937edbeb89548d78707361_tuple, 12, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_157b3b6e85937edbeb89548d78707361_tuple, 13, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_157b3b6e85937edbeb89548d78707361_tuple, 14, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_tuple_str_plain_LinearOperator_str_plain_aslinearoperator_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LinearOperator_str_plain_aslinearoperator_tuple, 0, const_str_plain_LinearOperator ); Py_INCREF( const_str_plain_LinearOperator );
    PyTuple_SET_ITEM( const_tuple_str_plain_LinearOperator_str_plain_aslinearoperator_tuple, 1, const_str_plain_aslinearoperator ); Py_INCREF( const_str_plain_aslinearoperator );
    const_str_digest_c1ef2a31036ff8828d031ad81cdb83f4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4895477 ], 108, 0 );
    const_str_digest_3fff24f6dbddfbbbf7479c5011f63324 = UNSTREAM_STRING_ASCII( &constant_bin[ 4895585 ], 40, 0 );
    const_str_plain_left_multiplied_operator = UNSTREAM_STRING_ASCII( &constant_bin[ 4895585 ], 24, 1 );
    const_tuple_str_plain_X_str_plain_J_str_plain_d_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_X_str_plain_J_str_plain_d_tuple, 0, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    PyTuple_SET_ITEM( const_tuple_str_plain_X_str_plain_J_str_plain_d_tuple, 1, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    PyTuple_SET_ITEM( const_tuple_str_plain_X_str_plain_J_str_plain_d_tuple, 2, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_str_digest_66f87e9708e36320d4078dce0953d802 = UNSTREAM_STRING_ASCII( &constant_bin[ 4895625 ], 460, 0 );
    const_str_digest_4d45fbb48b343d299c3bc3f7edd9489a = UNSTREAM_STRING_ASCII( &constant_bin[ 4896085 ], 56, 0 );
    const_str_digest_a847d07409e36b2daf868ccfbc1dc5af = UNSTREAM_STRING_ASCII( &constant_bin[ 4896141 ], 36, 0 );
    const_str_digest_09a77bda8b95f71853cc0e8ac76c0fdd = UNSTREAM_STRING_ASCII( &constant_bin[ 4896177 ], 40, 0 );
    const_tuple_str_plain_X_str_plain_d_str_plain_J_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_X_str_plain_d_str_plain_J_tuple, 0, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    PyTuple_SET_ITEM( const_tuple_str_plain_X_str_plain_d_str_plain_J_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_str_plain_X_str_plain_d_str_plain_J_tuple, 2, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    const_str_digest_d90340207941874cd37d37d278720a1b = UNSTREAM_STRING_ASCII( &constant_bin[ 13117 ], 15, 0 );
    const_tuple_3543c9cc1c0fdfe5fe8d5d3970ec28aa_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_3543c9cc1c0fdfe5fe8d5d3970ec28aa_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_3543c9cc1c0fdfe5fe8d5d3970ec28aa_tuple, 1, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    PyTuple_SET_ITEM( const_tuple_3543c9cc1c0fdfe5fe8d5d3970ec28aa_tuple, 2, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_3543c9cc1c0fdfe5fe8d5d3970ec28aa_tuple, 3, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    PyTuple_SET_ITEM( const_tuple_3543c9cc1c0fdfe5fe8d5d3970ec28aa_tuple, 4, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_3543c9cc1c0fdfe5fe8d5d3970ec28aa_tuple, 5, const_str_plain_dv ); Py_INCREF( const_str_plain_dv );
    PyTuple_SET_ITEM( const_tuple_3543c9cc1c0fdfe5fe8d5d3970ec28aa_tuple, 6, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    const_str_digest_f31daa0bf3b5293286f9dbc499a8f038 = UNSTREAM_STRING_ASCII( &constant_bin[ 4896217 ], 205, 0 );
    const_str_digest_774ee6f4120ca8dda794a11a67014283 = UNSTREAM_STRING_ASCII( &constant_bin[ 4896422 ], 41, 0 );
    const_tuple_a9bfdae9e0d4403b82514cd3b7dd2f18_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_a9bfdae9e0d4403b82514cd3b7dd2f18_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_a9bfdae9e0d4403b82514cd3b7dd2f18_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_a9bfdae9e0d4403b82514cd3b7dd2f18_tuple, 2, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_a9bfdae9e0d4403b82514cd3b7dd2f18_tuple, 3, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    PyTuple_SET_ITEM( const_tuple_a9bfdae9e0d4403b82514cd3b7dd2f18_tuple, 4, const_str_plain_non_zero ); Py_INCREF( const_str_plain_non_zero );
    const_str_plain_s_non_zero = UNSTREAM_STRING_ASCII( &constant_bin[ 2447407 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_a9bfdae9e0d4403b82514cd3b7dd2f18_tuple, 5, const_str_plain_s_non_zero ); Py_INCREF( const_str_plain_s_non_zero );
    PyTuple_SET_ITEM( const_tuple_a9bfdae9e0d4403b82514cd3b7dd2f18_tuple, 6, const_str_plain_steps ); Py_INCREF( const_str_plain_steps );
    PyTuple_SET_ITEM( const_tuple_a9bfdae9e0d4403b82514cd3b7dd2f18_tuple, 7, const_str_plain_min_step ); Py_INCREF( const_str_plain_min_step );
    const_tuple_54dc634c217b9ef02db15d504f8f5f7f_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_54dc634c217b9ef02db15d504f8f5f7f_tuple, 0, const_str_plain_alpha ); Py_INCREF( const_str_plain_alpha );
    const_str_plain_suf = UNSTREAM_STRING_ASCII( &constant_bin[ 503021 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_54dc634c217b9ef02db15d504f8f5f7f_tuple, 1, const_str_plain_suf ); Py_INCREF( const_str_plain_suf );
    PyTuple_SET_ITEM( const_tuple_54dc634c217b9ef02db15d504f8f5f7f_tuple, 2, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_54dc634c217b9ef02db15d504f8f5f7f_tuple, 3, const_str_plain_Delta ); Py_INCREF( const_str_plain_Delta );
    PyTuple_SET_ITEM( const_tuple_54dc634c217b9ef02db15d504f8f5f7f_tuple, 4, const_str_plain_denom ); Py_INCREF( const_str_plain_denom );
    const_str_plain_p_norm = UNSTREAM_STRING_ASCII( &constant_bin[ 4132897 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_54dc634c217b9ef02db15d504f8f5f7f_tuple, 5, const_str_plain_p_norm ); Py_INCREF( const_str_plain_p_norm );
    PyTuple_SET_ITEM( const_tuple_54dc634c217b9ef02db15d504f8f5f7f_tuple, 6, const_str_plain_phi ); Py_INCREF( const_str_plain_phi );
    const_str_plain_phi_prime = UNSTREAM_STRING_ASCII( &constant_bin[ 4896463 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_54dc634c217b9ef02db15d504f8f5f7f_tuple, 7, const_str_plain_phi_prime ); Py_INCREF( const_str_plain_phi_prime );
    const_str_plain_lower_active = UNSTREAM_STRING_ASCII( &constant_bin[ 4896472 ], 12, 1 );
    const_tuple_676f8b2dbcecf449ca685a3442c12b65_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_676f8b2dbcecf449ca685a3442c12b65_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_676f8b2dbcecf449ca685a3442c12b65_tuple, 1, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_676f8b2dbcecf449ca685a3442c12b65_tuple, 2, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    PyTuple_SET_ITEM( const_tuple_676f8b2dbcecf449ca685a3442c12b65_tuple, 3, const_str_plain_rtol ); Py_INCREF( const_str_plain_rtol );
    PyTuple_SET_ITEM( const_tuple_676f8b2dbcecf449ca685a3442c12b65_tuple, 4, const_str_plain_active ); Py_INCREF( const_str_plain_active );
    PyTuple_SET_ITEM( const_tuple_676f8b2dbcecf449ca685a3442c12b65_tuple, 5, const_str_plain_lower_dist ); Py_INCREF( const_str_plain_lower_dist );
    PyTuple_SET_ITEM( const_tuple_676f8b2dbcecf449ca685a3442c12b65_tuple, 6, const_str_plain_upper_dist ); Py_INCREF( const_str_plain_upper_dist );
    const_str_plain_lower_threshold = UNSTREAM_STRING_ASCII( &constant_bin[ 4896484 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_676f8b2dbcecf449ca685a3442c12b65_tuple, 7, const_str_plain_lower_threshold ); Py_INCREF( const_str_plain_lower_threshold );
    const_str_plain_upper_threshold = UNSTREAM_STRING_ASCII( &constant_bin[ 4896499 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_676f8b2dbcecf449ca685a3442c12b65_tuple, 8, const_str_plain_upper_threshold ); Py_INCREF( const_str_plain_upper_threshold );
    PyTuple_SET_ITEM( const_tuple_676f8b2dbcecf449ca685a3442c12b65_tuple, 9, const_str_plain_lower_active ); Py_INCREF( const_str_plain_lower_active );
    const_str_plain_upper_active = UNSTREAM_STRING_ASCII( &constant_bin[ 4896514 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_676f8b2dbcecf449ca685a3442c12b65_tuple, 10, const_str_plain_upper_active ); Py_INCREF( const_str_plain_upper_active );
    const_tuple_str_plain_J_str_plain_f_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_J_str_plain_f_tuple, 0, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    PyTuple_SET_ITEM( const_tuple_str_plain_J_str_plain_f_tuple, 1, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_digest_4274b0de225b72dd726bbf11f247f436 = UNSTREAM_STRING_ASCII( &constant_bin[ 4896526 ], 50, 0 );
    const_str_plain_xtol_satisfied = UNSTREAM_STRING_ASCII( &constant_bin[ 4896576 ], 14, 1 );
    const_str_plain_cost_reduction = UNSTREAM_STRING_ASCII( &constant_bin[ 4896590 ], 14, 1 );
    const_str_digest_fe345a82e1a2299feaeb70ddcd7ea41e = UNSTREAM_STRING_ASCII( &constant_bin[ 4896604 ], 40, 0 );
    const_str_digest_34fe1fbaa93320b25551471d4425a8fb = UNSTREAM_STRING_ASCII( &constant_bin[ 4896644 ], 33, 0 );
    const_tuple_d96b0bbab1449bf0121d9dcceeb607c3_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d96b0bbab1449bf0121d9dcceeb607c3_tuple, 0, const_str_plain_Iteration ); Py_INCREF( const_str_plain_Iteration );
    PyTuple_SET_ITEM( const_tuple_d96b0bbab1449bf0121d9dcceeb607c3_tuple, 1, const_str_plain_Cost ); Py_INCREF( const_str_plain_Cost );
    const_str_digest_df8c658c6e8640c1939df352ef2dc66f = UNSTREAM_STRING_ASCII( &constant_bin[ 4896677 ], 14, 0 );
    PyTuple_SET_ITEM( const_tuple_d96b0bbab1449bf0121d9dcceeb607c3_tuple, 2, const_str_digest_df8c658c6e8640c1939df352ef2dc66f ); Py_INCREF( const_str_digest_df8c658c6e8640c1939df352ef2dc66f );
    const_str_digest_d6403f38b204d96510293c600f184ba6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4896691 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_d96b0bbab1449bf0121d9dcceeb607c3_tuple, 3, const_str_digest_d6403f38b204d96510293c600f184ba6 ); Py_INCREF( const_str_digest_d6403f38b204d96510293c600f184ba6 );
    PyTuple_SET_ITEM( const_tuple_d96b0bbab1449bf0121d9dcceeb607c3_tuple, 4, const_str_plain_Optimality ); Py_INCREF( const_str_plain_Optimality );
    const_str_digest_18fc2df6155e6946e59573e2fc8839f0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4896700 ], 35, 0 );
    const_str_digest_8e30a20195ffc4781247326f08fc4b0e = UNSTREAM_STRING_ASCII( &constant_bin[ 4896735 ], 35, 0 );
    const_str_plain_g_negative = UNSTREAM_STRING_ASCII( &constant_bin[ 4896770 ], 10, 1 );
    const_tuple_d0b627489bad8634a20c936a6b42127e_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_d0b627489bad8634a20c936a6b42127e_tuple, 0, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_d0b627489bad8634a20c936a6b42127e_tuple, 1, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_d0b627489bad8634a20c936a6b42127e_tuple, 2, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    PyTuple_SET_ITEM( const_tuple_d0b627489bad8634a20c936a6b42127e_tuple, 3, const_str_plain_lb_finite ); Py_INCREF( const_str_plain_lb_finite );
    PyTuple_SET_ITEM( const_tuple_d0b627489bad8634a20c936a6b42127e_tuple, 4, const_str_plain_ub_finite ); Py_INCREF( const_str_plain_ub_finite );
    PyTuple_SET_ITEM( const_tuple_d0b627489bad8634a20c936a6b42127e_tuple, 5, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_d0b627489bad8634a20c936a6b42127e_tuple, 6, const_str_plain_g_negative ); Py_INCREF( const_str_plain_g_negative );
    PyTuple_SET_ITEM( const_tuple_d0b627489bad8634a20c936a6b42127e_tuple, 7, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_d0b627489bad8634a20c936a6b42127e_tuple, 8, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_d0b627489bad8634a20c936a6b42127e_tuple, 9, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_d0b627489bad8634a20c936a6b42127e_tuple, 10, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    const_str_digest_d2684a13400b82244dabaf9ccb0d85b7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4896780 ], 1097, 0 );
    const_str_digest_104054466dcec2ccbea3ddf494fb9761 = UNSTREAM_STRING_ASCII( &constant_bin[ 4897877 ], 108, 0 );
    const_tuple_f7e2b4b333083173033148fef01f035c_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_f7e2b4b333083173033148fef01f035c_tuple, 0, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    PyTuple_SET_ITEM( const_tuple_f7e2b4b333083173033148fef01f035c_tuple, 1, const_str_plain_diag ); Py_INCREF( const_str_plain_diag );
    PyTuple_SET_ITEM( const_tuple_f7e2b4b333083173033148fef01f035c_tuple, 2, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_f7e2b4b333083173033148fef01f035c_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_f7e2b4b333083173033148fef01f035c_tuple, 4, const_str_plain_matvec ); Py_INCREF( const_str_plain_matvec );
    PyTuple_SET_ITEM( const_tuple_f7e2b4b333083173033148fef01f035c_tuple, 5, const_str_plain_rmatvec ); Py_INCREF( const_str_plain_rmatvec );
    const_str_digest_db2c06f934fb78be6641395104df427c = UNSTREAM_STRING_ASCII( &constant_bin[ 4897985 ], 10, 0 );
    const_str_plain_right_multiply = UNSTREAM_STRING_ASCII( &constant_bin[ 4897995 ], 14, 1 );
    const_str_plain_upper_mask = UNSTREAM_STRING_ASCII( &constant_bin[ 4898009 ], 10, 1 );
    const_tuple_str_plain_x_str_plain_d_str_plain_J_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_d_str_plain_J_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_d_str_plain_J_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_d_str_plain_J_tuple, 2, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    const_str_plain_scale_inv_old = UNSTREAM_STRING_ASCII( &constant_bin[ 4898019 ], 13, 1 );
    const_tuple_c44b3caf22577cf0b8589c37d4536ee9_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_c44b3caf22577cf0b8589c37d4536ee9_tuple, 0, const_str_plain_dF ); Py_INCREF( const_str_plain_dF );
    PyTuple_SET_ITEM( const_tuple_c44b3caf22577cf0b8589c37d4536ee9_tuple, 1, const_str_plain_F ); Py_INCREF( const_str_plain_F );
    PyTuple_SET_ITEM( const_tuple_c44b3caf22577cf0b8589c37d4536ee9_tuple, 2, const_str_plain_dx_norm ); Py_INCREF( const_str_plain_dx_norm );
    PyTuple_SET_ITEM( const_tuple_c44b3caf22577cf0b8589c37d4536ee9_tuple, 3, const_str_plain_x_norm ); Py_INCREF( const_str_plain_x_norm );
    PyTuple_SET_ITEM( const_tuple_c44b3caf22577cf0b8589c37d4536ee9_tuple, 4, const_str_plain_ratio ); Py_INCREF( const_str_plain_ratio );
    PyTuple_SET_ITEM( const_tuple_c44b3caf22577cf0b8589c37d4536ee9_tuple, 5, const_str_plain_ftol ); Py_INCREF( const_str_plain_ftol );
    PyTuple_SET_ITEM( const_tuple_c44b3caf22577cf0b8589c37d4536ee9_tuple, 6, const_str_plain_xtol ); Py_INCREF( const_str_plain_xtol );
    const_str_plain_ftol_satisfied = UNSTREAM_STRING_ASCII( &constant_bin[ 4898032 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_c44b3caf22577cf0b8589c37d4536ee9_tuple, 7, const_str_plain_ftol_satisfied ); Py_INCREF( const_str_plain_ftol_satisfied );
    PyTuple_SET_ITEM( const_tuple_c44b3caf22577cf0b8589c37d4536ee9_tuple, 8, const_str_plain_xtol_satisfied ); Py_INCREF( const_str_plain_xtol_satisfied );
    const_tuple_91c82eaa19ab3d19798468b9802d0cb5_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_91c82eaa19ab3d19798468b9802d0cb5_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_91c82eaa19ab3d19798468b9802d0cb5_tuple, 1, const_str_plain_x1 ); Py_INCREF( const_str_plain_x1 );
    PyTuple_SET_ITEM( const_tuple_91c82eaa19ab3d19798468b9802d0cb5_tuple, 2, const_str_plain_x2 ); Py_INCREF( const_str_plain_x2 );
    PyTuple_SET_ITEM( const_tuple_91c82eaa19ab3d19798468b9802d0cb5_tuple, 3, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_91c82eaa19ab3d19798468b9802d0cb5_tuple, 4, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    PyTuple_SET_ITEM( const_tuple_91c82eaa19ab3d19798468b9802d0cb5_tuple, 5, const_str_plain_diag ); Py_INCREF( const_str_plain_diag );
    const_str_plain_phi_and_derivative = UNSTREAM_STRING_ASCII( &constant_bin[ 4896558 ], 18, 1 );
    const_str_digest_2f4103cd34946b10960acb238ee8e194 = UNSTREAM_STRING_ASCII( &constant_bin[ 4898046 ], 381, 0 );
    const_str_digest_2cbc48ee0fc6f9f01d7dabf241dfdb6e = UNSTREAM_STRING_ASCII( &constant_bin[ 4898427 ], 43, 0 );
    const_str_digest_1e2209c33e6aaf53d16d3f32fa5e4892 = UNSTREAM_STRING_ASCII( &constant_bin[ 4898470 ], 35, 0 );
    const_tuple_186ad695899330ca4e0dd7cc64266b01_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_186ad695899330ca4e0dd7cc64266b01_tuple, 0, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    PyTuple_SET_ITEM( const_tuple_186ad695899330ca4e0dd7cc64266b01_tuple, 1, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    PyTuple_SET_ITEM( const_tuple_186ad695899330ca4e0dd7cc64266b01_tuple, 2, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_186ad695899330ca4e0dd7cc64266b01_tuple, 3, const_str_plain_diag ); Py_INCREF( const_str_plain_diag );
    PyTuple_SET_ITEM( const_tuple_186ad695899330ca4e0dd7cc64266b01_tuple, 4, const_str_plain_Js ); Py_INCREF( const_str_plain_Js );
    PyTuple_SET_ITEM( const_tuple_186ad695899330ca4e0dd7cc64266b01_tuple, 5, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_186ad695899330ca4e0dd7cc64266b01_tuple, 6, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    const_tuple_str_plain_J_str_plain_scale_inv_old_str_plain_scale_inv_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_J_str_plain_scale_inv_old_str_plain_scale_inv_tuple, 0, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    PyTuple_SET_ITEM( const_tuple_str_plain_J_str_plain_scale_inv_old_str_plain_scale_inv_tuple, 1, const_str_plain_scale_inv_old ); Py_INCREF( const_str_plain_scale_inv_old );
    PyTuple_SET_ITEM( const_tuple_str_plain_J_str_plain_scale_inv_old_str_plain_scale_inv_tuple, 2, const_str_plain_scale_inv ); Py_INCREF( const_str_plain_scale_inv );
    const_str_digest_299f39952a7f02c89603912802fb5a5c = UNSTREAM_STRING_ASCII( &constant_bin[ 4898505 ], 52, 0 );
    const_str_digest_d172c08e1f51e6a021ad982d9b0ff10a = UNSTREAM_STRING_ASCII( &constant_bin[ 4898387 ], 35, 0 );
    const_tuple_str_plain_J_str_plain_f_str_plain_rho_str_plain_J_scale_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_J_str_plain_f_str_plain_rho_str_plain_J_scale_tuple, 0, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    PyTuple_SET_ITEM( const_tuple_str_plain_J_str_plain_f_str_plain_rho_str_plain_J_scale_tuple, 1, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_str_plain_J_str_plain_f_str_plain_rho_str_plain_J_scale_tuple, 2, const_str_plain_rho ); Py_INCREF( const_str_plain_rho );
    const_str_plain_J_scale = UNSTREAM_STRING_ASCII( &constant_bin[ 4898557 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_J_str_plain_f_str_plain_rho_str_plain_J_scale_tuple, 3, const_str_plain_J_scale ); Py_INCREF( const_str_plain_J_scale );
    const_tuple_6d6202c9e230d9aaef80eee8da30525d_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4898564 ], 166 );
    const_str_digest_6bd1e59a9681647dc9d66c6a8453f97f = UNSTREAM_STRING_ASCII( &constant_bin[ 4898730 ], 42, 0 );
    const_tuple_76be90c8c4f4235eb52903b19f15d75e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_76be90c8c4f4235eb52903b19f15d75e_tuple, 0, const_str_plain_iteration ); Py_INCREF( const_str_plain_iteration );
    PyTuple_SET_ITEM( const_tuple_76be90c8c4f4235eb52903b19f15d75e_tuple, 1, const_str_plain_cost ); Py_INCREF( const_str_plain_cost );
    PyTuple_SET_ITEM( const_tuple_76be90c8c4f4235eb52903b19f15d75e_tuple, 2, const_str_plain_cost_reduction ); Py_INCREF( const_str_plain_cost_reduction );
    PyTuple_SET_ITEM( const_tuple_76be90c8c4f4235eb52903b19f15d75e_tuple, 3, const_str_plain_step_norm ); Py_INCREF( const_str_plain_step_norm );
    PyTuple_SET_ITEM( const_tuple_76be90c8c4f4235eb52903b19f15d75e_tuple, 4, const_str_plain_optimality ); Py_INCREF( const_str_plain_optimality );
    const_str_digest_561159f53dd18761388a6e14bcd735a4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4898772 ], 53, 0 );
    const_str_digest_12c946f85c92e0440d362b7772cd2112 = UNSTREAM_STRING_ASCII( &constant_bin[ 4898825 ], 51, 0 );
    const_tuple_e3da67a4e5dbc47526dccc9049809bc0_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_e3da67a4e5dbc47526dccc9049809bc0_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_e3da67a4e5dbc47526dccc9049809bc0_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_e3da67a4e5dbc47526dccc9049809bc0_tuple, 2, const_str_plain_Delta ); Py_INCREF( const_str_plain_Delta );
    PyTuple_SET_ITEM( const_tuple_e3da67a4e5dbc47526dccc9049809bc0_tuple, 3, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_e3da67a4e5dbc47526dccc9049809bc0_tuple, 4, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_e3da67a4e5dbc47526dccc9049809bc0_tuple, 5, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_e3da67a4e5dbc47526dccc9049809bc0_tuple, 6, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_e3da67a4e5dbc47526dccc9049809bc0_tuple, 7, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_e3da67a4e5dbc47526dccc9049809bc0_tuple, 8, const_str_plain_t1 ); Py_INCREF( const_str_plain_t1 );
    PyTuple_SET_ITEM( const_tuple_e3da67a4e5dbc47526dccc9049809bc0_tuple, 9, const_str_plain_t2 ); Py_INCREF( const_str_plain_t2 );
    const_str_digest_2d65b7d43070b1d8f8c8b80891ce3215 = UNSTREAM_STRING_ASCII( &constant_bin[ 4898876 ], 40, 0 );
    const_str_digest_f48829830c1d98a3bad725b05ad18d55 = UNSTREAM_STRING_ASCII( &constant_bin[ 4898916 ], 768, 0 );
    const_str_digest_18aceedca8ff3fc2b24d37854005545a = UNSTREAM_STRING_ASCII( &constant_bin[ 4899684 ], 12, 0 );
    const_str_digest_4423bcf8bed20096e55ca0349dd8bdcc = UNSTREAM_STRING_ASCII( &constant_bin[ 4899696 ], 216, 0 );
    const_str_plain_lower_mask = UNSTREAM_STRING_ASCII( &constant_bin[ 4899912 ], 10, 1 );
    const_str_digest_b0ee25eb40ba061bda21554cd71651e4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4899922 ], 41, 0 );
    const_tuple_str_plain_x_str_plain_J_str_plain_d_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_J_str_plain_d_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_J_str_plain_d_tuple, 1, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_J_str_plain_d_tuple, 2, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_str_digest_55ec1537f69cd693a56bc403b5fac967 = UNSTREAM_STRING_ASCII( &constant_bin[ 4899963 ], 647, 0 );
    const_str_digest_24606b70de137cacc524174e06acaf9d = UNSTREAM_STRING_ASCII( &constant_bin[ 4900610 ], 42, 0 );
    const_str_digest_8c02ebb17790bbe78b225fe85a7e01be = UNSTREAM_STRING_ASCII( &constant_bin[ 4900652 ], 1745, 0 );
    const_str_digest_22937e8fcd08d5b4936fbb27e928ba86 = UNSTREAM_STRING_ASCII( &constant_bin[ 4902397 ], 227, 0 );
    const_str_digest_0402a6983861bab2ab470b68cca46249 = UNSTREAM_STRING_ASCII( &constant_bin[ 4902624 ], 517, 0 );
    const_tuple_f67380ef53e8a94d98804dd8fc507f2e_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_f67380ef53e8a94d98804dd8fc507f2e_tuple, 0, const_str_plain_Iteration ); Py_INCREF( const_str_plain_Iteration );
    PyTuple_SET_ITEM( const_tuple_f67380ef53e8a94d98804dd8fc507f2e_tuple, 1, const_str_digest_db2c06f934fb78be6641395104df427c ); Py_INCREF( const_str_digest_db2c06f934fb78be6641395104df427c );
    PyTuple_SET_ITEM( const_tuple_f67380ef53e8a94d98804dd8fc507f2e_tuple, 2, const_str_plain_Cost ); Py_INCREF( const_str_plain_Cost );
    PyTuple_SET_ITEM( const_tuple_f67380ef53e8a94d98804dd8fc507f2e_tuple, 3, const_str_digest_df8c658c6e8640c1939df352ef2dc66f ); Py_INCREF( const_str_digest_df8c658c6e8640c1939df352ef2dc66f );
    PyTuple_SET_ITEM( const_tuple_f67380ef53e8a94d98804dd8fc507f2e_tuple, 4, const_str_digest_d6403f38b204d96510293c600f184ba6 ); Py_INCREF( const_str_digest_d6403f38b204d96510293c600f184ba6 );
    PyTuple_SET_ITEM( const_tuple_f67380ef53e8a94d98804dd8fc507f2e_tuple, 5, const_str_plain_Optimality ); Py_INCREF( const_str_plain_Optimality );
    const_tuple_cc17e8f59e8ac63621455d33c73d3671_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_cc17e8f59e8ac63621455d33c73d3671_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_cc17e8f59e8ac63621455d33c73d3671_tuple, 1, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_cc17e8f59e8ac63621455d33c73d3671_tuple, 2, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    PyTuple_SET_ITEM( const_tuple_cc17e8f59e8ac63621455d33c73d3671_tuple, 3, const_str_plain_rstep ); Py_INCREF( const_str_plain_rstep );
    PyTuple_SET_ITEM( const_tuple_cc17e8f59e8ac63621455d33c73d3671_tuple, 4, const_str_plain_x_new ); Py_INCREF( const_str_plain_x_new );
    PyTuple_SET_ITEM( const_tuple_cc17e8f59e8ac63621455d33c73d3671_tuple, 5, const_str_plain_active ); Py_INCREF( const_str_plain_active );
    PyTuple_SET_ITEM( const_tuple_cc17e8f59e8ac63621455d33c73d3671_tuple, 6, const_str_plain_lower_mask ); Py_INCREF( const_str_plain_lower_mask );
    PyTuple_SET_ITEM( const_tuple_cc17e8f59e8ac63621455d33c73d3671_tuple, 7, const_str_plain_upper_mask ); Py_INCREF( const_str_plain_upper_mask );
    const_str_plain_tight_bounds = UNSTREAM_STRING_ASCII( &constant_bin[ 4903141 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_cc17e8f59e8ac63621455d33c73d3671_tuple, 8, const_str_plain_tight_bounds ); Py_INCREF( const_str_plain_tight_bounds );
    const_str_digest_583a0dc42c5812da77d9c6fa3363bafc = UNSTREAM_STRING_ASCII( &constant_bin[ 4903153 ], 29, 0 );
    const_tuple_str_plain_J_str_plain_d_str_plain_copy_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_J_str_plain_d_str_plain_copy_tuple, 0, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    PyTuple_SET_ITEM( const_tuple_str_plain_J_str_plain_d_str_plain_copy_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_str_plain_J_str_plain_d_str_plain_copy_tuple, 2, const_str_plain_copy ); Py_INCREF( const_str_plain_copy );
    const_str_digest_4a2bd2e2c0cc9f9d9d0ceba8d7ef16ce = UNSTREAM_STRING_ASCII( &constant_bin[ 4903182 ], 185, 0 );
    const_tuple_none_float_0_01_int_pos_10_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_float_0_01_int_pos_10_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_float_0_01_int_pos_10_tuple, 1, const_float_0_01 ); Py_INCREF( const_float_0_01 );
    PyTuple_SET_ITEM( const_tuple_none_float_0_01_int_pos_10_tuple, 2, const_int_pos_10 ); Py_INCREF( const_int_pos_10 );
    const_tuple_a4436538b33071d6823b7feaaf2f9edb_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_a4436538b33071d6823b7feaaf2f9edb_tuple, 0, const_str_plain_iteration ); Py_INCREF( const_str_plain_iteration );
    PyTuple_SET_ITEM( const_tuple_a4436538b33071d6823b7feaaf2f9edb_tuple, 1, const_str_plain_nfev ); Py_INCREF( const_str_plain_nfev );
    PyTuple_SET_ITEM( const_tuple_a4436538b33071d6823b7feaaf2f9edb_tuple, 2, const_str_plain_cost ); Py_INCREF( const_str_plain_cost );
    PyTuple_SET_ITEM( const_tuple_a4436538b33071d6823b7feaaf2f9edb_tuple, 3, const_str_plain_cost_reduction ); Py_INCREF( const_str_plain_cost_reduction );
    PyTuple_SET_ITEM( const_tuple_a4436538b33071d6823b7feaaf2f9edb_tuple, 4, const_str_plain_step_norm ); Py_INCREF( const_str_plain_step_norm );
    PyTuple_SET_ITEM( const_tuple_a4436538b33071d6823b7feaaf2f9edb_tuple, 5, const_str_plain_optimality ); Py_INCREF( const_str_plain_optimality );
    const_str_digest_1dc58731088df41e86635dd96e1f653a = UNSTREAM_STRING_ASCII( &constant_bin[ 4903367 ], 958, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_lsq$common( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a0ccc471d6675964e6fc44c387d6523f;
static PyCodeObject *codeobj_b23141f46338ebcf78959cdd76f58d78;
static PyCodeObject *codeobj_7b5d9bfd38fb71f60ff0a79c28847a5a;
static PyCodeObject *codeobj_6a246e883927291c02dc5c9e20c709fb;
static PyCodeObject *codeobj_6013852cdb06dbc5323ecd54e6517be3;
static PyCodeObject *codeobj_cf03693f945bcb6bf9a5c71de76d79f7;
static PyCodeObject *codeobj_0130fa4a810ed72a650d14f17e9817b7;
static PyCodeObject *codeobj_2b1335763336baee9b9c2ef5622d59f1;
static PyCodeObject *codeobj_5d5171ac1c351946f1809d4cb99776e8;
static PyCodeObject *codeobj_4e396a43842c8f0dbb0e737192217649;
static PyCodeObject *codeobj_a5fdd4b04a1fd34cf4f4eafb8a139775;
static PyCodeObject *codeobj_ac05c66635934a512c2dbcfab5adc43e;
static PyCodeObject *codeobj_5a593f77b130c8dc18d3a1ce3350c048;
static PyCodeObject *codeobj_83b0a0cce3493acfc20c018e44e2031a;
static PyCodeObject *codeobj_468357d589e999c65475fc0ebb2bda82;
static PyCodeObject *codeobj_b006435d75eb4afb1b2f6f6b9d328ddf;
static PyCodeObject *codeobj_6a0686b0c918d85a0825719ce4e5334c;
static PyCodeObject *codeobj_d8a185f5baa89605be90d126967332fa;
static PyCodeObject *codeobj_1bd72c6ac0a6196744e7a398353e487d;
static PyCodeObject *codeobj_1668123b65da9987e614fa4bf86a324f;
static PyCodeObject *codeobj_9e855997e16ec7e69a61d6e4cd93f24c;
static PyCodeObject *codeobj_caae57cfa4ba50729e7b15dc183a13cf;
static PyCodeObject *codeobj_4778e46a1508cfcb4c3bceabcf2c50dd;
static PyCodeObject *codeobj_478a47605f2685f197bae041878c7d04;
static PyCodeObject *codeobj_955d1452398963720df10ad2a9dca013;
static PyCodeObject *codeobj_525b6069b5fbb3d6122dad874c097162;
static PyCodeObject *codeobj_f772ab1d4d8a1aa125cd34609acbf1ca;
static PyCodeObject *codeobj_8ea186882a012e1f99489afa3d7ffb9b;
static PyCodeObject *codeobj_d08c197e13e2b93effd571e257201fc3;
static PyCodeObject *codeobj_b20408b6d89ece4f159debb759e19b69;
static PyCodeObject *codeobj_feee58789f5b2193312c4c55e6b6f9c4;
static PyCodeObject *codeobj_3d5b3aadb2f2b208b58406190032f72b;
static PyCodeObject *codeobj_27a8aedd6e885f0890edb2fc6820f720;
static PyCodeObject *codeobj_aa048fb6c7f7967331f855194b7d111d;
static PyCodeObject *codeobj_3146c823bc667a0abbccd256c246d884;
static PyCodeObject *codeobj_4c7ff61c5b30da96bb6cda2bc190746e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_583a0dc42c5812da77d9c6fa3363bafc );
    codeobj_a0ccc471d6675964e6fc44c387d6523f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8e30a20195ffc4781247326f08fc4b0e, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_b23141f46338ebcf78959cdd76f58d78 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CL_scaling_vector, 469, const_tuple_3543c9cc1c0fdfe5fe8d5d3970ec28aa_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7b5d9bfd38fb71f60ff0a79c28847a5a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_build_quadratic_1d, 253, const_tuple_0bf5f6f8bfe5519b88cf59f896140e3a_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6a246e883927291c02dc5c9e20c709fb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_termination, 710, const_tuple_c44b3caf22577cf0b8589c37d4536ee9_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6013852cdb06dbc5323ecd54e6517be3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_compute_grad, 595, const_tuple_str_plain_J_str_plain_f_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cf03693f945bcb6bf9a5c71de76d79f7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_compute_jac_scale, 603, const_tuple_str_plain_J_str_plain_scale_inv_old_str_plain_scale_inv_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0130fa4a810ed72a650d14f17e9817b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_evaluate_quadratic, 327, const_tuple_186ad695899330ca4e0dd7cc64266b01_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2b1335763336baee9b9c2ef5622d59f1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_find_active_constraints, 403, const_tuple_676f8b2dbcecf449ca685a3442c12b65_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5d5171ac1c351946f1809d4cb99776e8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_in_bounds, 369, const_tuple_str_plain_x_str_plain_lb_str_plain_ub_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4e396a43842c8f0dbb0e737192217649 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_intersect_trust_region, 20, const_tuple_e3da67a4e5dbc47526dccc9049809bc0_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a5fdd4b04a1fd34cf4f4eafb8a139775 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_left_multiplied_operator, 618, const_tuple_7308d3b714b02824e412967d39e1e4f5_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ac05c66635934a512c2dbcfab5adc43e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_left_multiply, 692, const_tuple_str_plain_J_str_plain_d_str_plain_copy_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5a593f77b130c8dc18d3a1ce3350c048 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_make_strictly_feasible, 442, const_tuple_cc17e8f59e8ac63621455d33c73d3671_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_83b0a0cce3493acfc20c018e44e2031a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_matmat, 625, const_tuple_str_plain_X_str_plain_d_str_plain_J_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_468357d589e999c65475fc0ebb2bda82 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_matmat, 642, const_tuple_str_plain_X_str_plain_J_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_b006435d75eb4afb1b2f6f6b9d328ddf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_matvec, 622, const_tuple_str_plain_x_str_plain_d_str_plain_J_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_6a0686b0c918d85a0825719ce4e5334c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_matvec, 639, const_tuple_str_plain_x_str_plain_J_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_d8a185f5baa89605be90d126967332fa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_matvec, 663, const_tuple_str_plain_x_str_plain_J_str_plain_diag_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_1bd72c6ac0a6196744e7a398353e487d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_minimize_quadratic_1d, 304, const_tuple_270d21bbbd1b6e969c738b218c095378_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1668123b65da9987e614fa4bf86a324f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_phi_and_derivative, 108, const_tuple_54dc634c217b9ef02db15d504f8f5f7f_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9e855997e16ec7e69a61d6e4cd93f24c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_print_header_linear, 570, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_caae57cfa4ba50729e7b15dc183a13cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_print_header_nonlinear, 547, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4778e46a1508cfcb4c3bceabcf2c50dd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_print_iteration_linear, 576, const_tuple_76be90c8c4f4235eb52903b19f15d75e_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_478a47605f2685f197bae041878c7d04 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_print_iteration_nonlinear, 553, const_tuple_a4436538b33071d6823b7feaaf2f9edb_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_955d1452398963720df10ad2a9dca013 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reflective_transformation, 513, const_tuple_d0b627489bad8634a20c936a6b42127e_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_525b6069b5fbb3d6122dad874c097162 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_regularized_lsq_operator, 652, const_tuple_f7e2b4b333083173033148fef01f035c_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f772ab1d4d8a1aa125cd34609acbf1ca = MAKE_CODEOBJ( module_filename_obj, const_str_plain_right_multiplied_operator, 635, const_tuple_7308d3b714b02824e412967d39e1e4f5_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8ea186882a012e1f99489afa3d7ffb9b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_right_multiply, 674, const_tuple_str_plain_J_str_plain_d_str_plain_copy_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d08c197e13e2b93effd571e257201fc3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rmatvec, 628, const_tuple_str_plain_x_str_plain_J_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_b20408b6d89ece4f159debb759e19b69 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rmatvec, 645, const_tuple_str_plain_x_str_plain_d_str_plain_J_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_feee58789f5b2193312c4c55e6b6f9c4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rmatvec, 666, const_tuple_91c82eaa19ab3d19798468b9802d0cb5_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_3d5b3aadb2f2b208b58406190032f72b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_scale_for_robust_loss_function, 725, const_tuple_str_plain_J_str_plain_f_str_plain_rho_str_plain_J_scale_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_27a8aedd6e885f0890edb2fc6820f720 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve_lsq_trust_region, 59, const_tuple_6d6202c9e230d9aaef80eee8da30525d_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_aa048fb6c7f7967331f855194b7d111d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve_trust_region_2d, 173, const_tuple_157b3b6e85937edbeb89548d78707361_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3146c823bc667a0abbccd256c246d884 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_step_size_to_bound, 374, const_tuple_a9bfdae9e0d4403b82514cd3b7dd2f18_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4c7ff61c5b30da96bb6cda2bc190746e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update_tr_radius, 224, const_tuple_f50ff0aae51949c635e907b43e471c13_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_10_find_active_constraints( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_11_make_strictly_feasible( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_12_CL_scaling_vector(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_13_reflective_transformation(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_14_print_header_nonlinear(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_15_print_iteration_nonlinear(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_16_print_header_linear(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_17_print_iteration_linear(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_18_compute_grad(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_19_compute_jac_scale( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_1_intersect_trust_region(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_1_matvec(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_2_matmat(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_3_rmatvec(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_1_matvec(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_2_matmat(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_3_rmatvec(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator$$$function_1_matvec(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator$$$function_2_rmatvec(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_23_right_multiply( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_24_left_multiply( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_25_check_termination(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_26_scale_for_robust_loss_function(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_2_solve_lsq_trust_region( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_2_solve_lsq_trust_region$$$function_1_phi_and_derivative(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_3_solve_trust_region_2d(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_4_update_tr_radius(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_5_build_quadratic_1d( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_6_minimize_quadratic_1d( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_7_evaluate_quadratic( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_8_in_bounds(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_9_step_size_to_bound(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$_lsq$common$$$function_1_intersect_trust_region( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_Delta = python_pars[ 2 ];
    PyObject *var_a = NULL;
    PyObject *var_b = NULL;
    PyObject *var_c = NULL;
    PyObject *var_d = NULL;
    PyObject *var_q = NULL;
    PyObject *var_t1 = NULL;
    PyObject *var_t2 = NULL;
    struct Nuitka_FrameObject *frame_4e396a43842c8f0dbb0e737192217649;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4e396a43842c8f0dbb0e737192217649 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4e396a43842c8f0dbb0e737192217649, codeobj_4e396a43842c8f0dbb0e737192217649, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4e396a43842c8f0dbb0e737192217649 = cache_frame_4e396a43842c8f0dbb0e737192217649;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4e396a43842c8f0dbb0e737192217649 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4e396a43842c8f0dbb0e737192217649 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 36;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_1 = par_s;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        frame_4e396a43842c8f0dbb0e737192217649->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_a == NULL );
        var_a = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_a );
        tmp_compexpr_left_1 = var_a;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_18aceedca8ff3fc2b24d37854005545a;
            frame_4e396a43842c8f0dbb0e737192217649->m_frame.f_lineno = 38;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 38;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_4 = par_s;
        frame_4e396a43842c8f0dbb0e737192217649->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_b == NULL );
        var_b = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 42;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_5 = par_x;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_6 = par_x;
        frame_4e396a43842c8f0dbb0e737192217649->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_Delta );
        tmp_left_name_2 = par_Delta;
        tmp_right_name_2 = const_int_pos_2;
        tmp_right_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 42;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_c == NULL );
        var_c = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_c );
        tmp_compexpr_left_2 = var_c;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_d172c08e1f51e6a021ad982d9b0ff10a;
            frame_4e396a43842c8f0dbb0e737192217649->m_frame.f_lineno = 44;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 44;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_4;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sqrt );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_b );
        tmp_left_name_4 = var_b;
        CHECK_OBJECT( var_b );
        tmp_right_name_3 = var_b;
        tmp_left_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_a );
        tmp_left_name_5 = var_a;
        CHECK_OBJECT( var_c );
        tmp_right_name_5 = var_c;
        tmp_right_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4e396a43842c8f0dbb0e737192217649->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_d == NULL );
        var_d = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( var_b );
        tmp_left_name_6 = var_b;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_copysign );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copysign );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "copysign" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_5;
        CHECK_OBJECT( var_d );
        tmp_args_element_name_8 = var_d;
        CHECK_OBJECT( var_b );
        tmp_args_element_name_9 = var_b;
        frame_4e396a43842c8f0dbb0e737192217649->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_right_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_q == NULL );
        var_q = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_q );
        tmp_left_name_7 = var_q;
        CHECK_OBJECT( var_a );
        tmp_right_name_7 = var_a;
        tmp_assign_source_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_t1 == NULL );
        var_t1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( var_c );
        tmp_left_name_8 = var_c;
        CHECK_OBJECT( var_q );
        tmp_right_name_8 = var_q;
        tmp_assign_source_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_t2 == NULL );
        var_t2 = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_t1 );
        tmp_compexpr_left_3 = var_t1;
        CHECK_OBJECT( var_t2 );
        tmp_compexpr_right_3 = var_t2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( var_t1 );
            tmp_tuple_element_1 = var_t1;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_t2 );
            tmp_tuple_element_1 = var_t2;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_tuple_element_2;
            CHECK_OBJECT( var_t2 );
            tmp_tuple_element_2 = var_t2;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_t1 );
            tmp_tuple_element_2 = var_t1;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
            goto frame_return_exit_1;
        }
        branch_end_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e396a43842c8f0dbb0e737192217649 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e396a43842c8f0dbb0e737192217649 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e396a43842c8f0dbb0e737192217649 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4e396a43842c8f0dbb0e737192217649, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4e396a43842c8f0dbb0e737192217649->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4e396a43842c8f0dbb0e737192217649, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4e396a43842c8f0dbb0e737192217649,
        type_description_1,
        par_x,
        par_s,
        par_Delta,
        var_a,
        var_b,
        var_c,
        var_d,
        var_q,
        var_t1,
        var_t2
    );


    // Release cached frame.
    if ( frame_4e396a43842c8f0dbb0e737192217649 == cache_frame_4e396a43842c8f0dbb0e737192217649 )
    {
        Py_DECREF( frame_4e396a43842c8f0dbb0e737192217649 );
    }
    cache_frame_4e396a43842c8f0dbb0e737192217649 = NULL;

    assertFrameObject( frame_4e396a43842c8f0dbb0e737192217649 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_1_intersect_trust_region );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_Delta );
    Py_DECREF( par_Delta );
    par_Delta = NULL;

    CHECK_OBJECT( (PyObject *)var_a );
    Py_DECREF( var_a );
    var_a = NULL;

    CHECK_OBJECT( (PyObject *)var_b );
    Py_DECREF( var_b );
    var_b = NULL;

    CHECK_OBJECT( (PyObject *)var_c );
    Py_DECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

    CHECK_OBJECT( (PyObject *)var_q );
    Py_DECREF( var_q );
    var_q = NULL;

    CHECK_OBJECT( (PyObject *)var_t1 );
    Py_DECREF( var_t1 );
    var_t1 = NULL;

    CHECK_OBJECT( (PyObject *)var_t2 );
    Py_DECREF( var_t2 );
    var_t2 = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_Delta );
    Py_DECREF( par_Delta );
    par_Delta = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_t1 );
    var_t1 = NULL;

    Py_XDECREF( var_t2 );
    var_t2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_1_intersect_trust_region );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_2_solve_lsq_trust_region( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_uf = python_pars[ 2 ];
    PyObject *par_s = python_pars[ 3 ];
    PyObject *par_V = python_pars[ 4 ];
    PyObject *par_Delta = python_pars[ 5 ];
    PyObject *par_initial_alpha = python_pars[ 6 ];
    PyObject *par_rtol = python_pars[ 7 ];
    PyObject *par_max_iter = python_pars[ 8 ];
    PyObject *var_phi_and_derivative = NULL;
    PyObject *var_suf = NULL;
    PyObject *var_threshold = NULL;
    PyObject *var_full_rank = NULL;
    PyObject *var_p = NULL;
    PyObject *var_alpha_upper = NULL;
    PyObject *var_phi = NULL;
    PyObject *var_phi_prime = NULL;
    PyObject *var_alpha_lower = NULL;
    PyObject *var_alpha = NULL;
    PyObject *var_it = NULL;
    PyObject *var_ratio = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_27a8aedd6e885f0890edb2fc6820f720;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_27a8aedd6e885f0890edb2fc6820f720 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_2_solve_lsq_trust_region$$$function_1_phi_and_derivative(  );



        assert( var_phi_and_derivative == NULL );
        var_phi_and_derivative = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_27a8aedd6e885f0890edb2fc6820f720, codeobj_27a8aedd6e885f0890edb2fc6820f720, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_27a8aedd6e885f0890edb2fc6820f720 = cache_frame_27a8aedd6e885f0890edb2fc6820f720;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_27a8aedd6e885f0890edb2fc6820f720 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_27a8aedd6e885f0890edb2fc6820f720 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_s );
        tmp_left_name_1 = par_s;
        CHECK_OBJECT( par_uf );
        tmp_right_name_1 = par_uf;
        tmp_assign_source_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_suf == NULL );
        var_suf = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_m );
        tmp_compexpr_left_1 = par_m;
        CHECK_OBJECT( par_n );
        tmp_compexpr_right_1 = par_n;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_right_name_3;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_EPS );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EPS );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EPS" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 124;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_3 = tmp_mvar_value_1;
            CHECK_OBJECT( par_m );
            tmp_right_name_2 = par_m;
            tmp_left_name_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_s );
            tmp_subscribed_name_1 = par_s;
            tmp_subscript_name_1 = const_int_0;
            tmp_right_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 124;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_threshold == NULL );
            var_threshold = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_s );
            tmp_subscribed_name_2 = par_s;
            tmp_subscript_name_2 = const_int_neg_1;
            tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 125;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_threshold );
            tmp_compexpr_right_2 = var_threshold;
            tmp_assign_source_4 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 125;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_full_rank == NULL );
            var_full_rank = tmp_assign_source_4;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = Py_False;
            assert( var_full_rank == NULL );
            Py_INCREF( tmp_assign_source_5 );
            var_full_rank = tmp_assign_source_5;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_full_rank );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_full_rank );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( par_V );
            tmp_source_name_1 = par_V;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dot );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 130;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_uf );
            tmp_left_name_4 = par_uf;
            CHECK_OBJECT( par_s );
            tmp_right_name_4 = par_s;
            tmp_args_element_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 130;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_27a8aedd6e885f0890edb2fc6820f720->m_frame.f_lineno = 130;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 130;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 130;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_p == NULL );
            var_p = tmp_assign_source_6;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_norm );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 131;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_p );
            tmp_args_element_name_2 = var_p;
            frame_27a8aedd6e885f0890edb2fc6820f720->m_frame.f_lineno = 131;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_compexpr_left_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_Delta );
            tmp_compexpr_right_3 = par_Delta;
            tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_tuple_element_1;
                CHECK_OBJECT( var_p );
                tmp_tuple_element_1 = var_p;
                tmp_return_value = PyTuple_New( 3 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
                tmp_tuple_element_1 = const_float_0_0;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
                tmp_tuple_element_1 = const_int_0;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
                goto frame_return_exit_1;
            }
            branch_no_3:;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_suf );
        tmp_args_element_name_3 = var_suf;
        frame_27a8aedd6e885f0890edb2fc6820f720->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_left_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_Delta );
        tmp_right_name_5 = par_Delta;
        tmp_assign_source_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_alpha_upper == NULL );
        var_alpha_upper = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_full_rank );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_full_rank );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            CHECK_OBJECT( var_phi_and_derivative );
            tmp_called_name_4 = var_phi_and_derivative;
            tmp_args_element_name_4 = const_float_0_0;
            CHECK_OBJECT( var_suf );
            tmp_args_element_name_5 = var_suf;
            CHECK_OBJECT( par_s );
            tmp_args_element_name_6 = par_s;
            CHECK_OBJECT( par_Delta );
            tmp_args_element_name_7 = par_Delta;
            frame_27a8aedd6e885f0890edb2fc6820f720->m_frame.f_lineno = 137;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_4, call_args );
            }

            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
            if ( tmp_assign_source_9 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 137;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
            if ( tmp_assign_source_10 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 137;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

            if (likely( tmp_iterator_attempt == NULL ))
            {
                PyObject *error = GET_ERROR_OCCURRED();

                if ( error != NULL )
                {
                    if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                    {
                        CLEAR_ERROR_OCCURRED();
                    }
                    else
                    {
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                        type_description_1 = "ooooooooooooooooooooo";
                        exception_lineno = 137;
                        goto try_except_handler_3;
                    }
                }
            }
            else
            {
                Py_DECREF( tmp_iterator_attempt );

                // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 137;
                goto try_except_handler_3;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
            assert( var_phi == NULL );
            Py_INCREF( tmp_assign_source_11 );
            var_phi = tmp_assign_source_11;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
            assert( var_phi_prime == NULL );
            Py_INCREF( tmp_assign_source_12 );
            var_phi_prime = tmp_assign_source_12;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_left_name_6;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( var_phi );
            tmp_operand_name_2 = var_phi;
            tmp_left_name_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_phi_prime );
            tmp_right_name_6 = var_phi_prime;
            tmp_assign_source_13 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_6 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_alpha_lower == NULL );
            var_alpha_lower = tmp_assign_source_13;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = const_float_0_0;
            assert( var_alpha_lower == NULL );
            Py_INCREF( tmp_assign_source_14 );
            var_alpha_lower = tmp_assign_source_14;
        }
        branch_end_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( par_initial_alpha );
        tmp_compexpr_left_4 = par_initial_alpha;
        tmp_compexpr_right_4 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( var_full_rank );
        tmp_operand_name_3 = var_full_rank;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT( par_initial_alpha );
        tmp_compexpr_left_5 = par_initial_alpha;
        tmp_compexpr_right_5 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_condition_result_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_5 = tmp_or_left_value_1;
        or_end_1:;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_left_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_8;
            PyObject *tmp_right_name_9;
            tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_5 != NULL );
            tmp_left_name_7 = const_float_0_001;
            CHECK_OBJECT( var_alpha_upper );
            tmp_right_name_7 = var_alpha_upper;
            tmp_args_element_name_8 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_alpha_lower );
            tmp_left_name_9 = var_alpha_lower;
            CHECK_OBJECT( var_alpha_upper );
            tmp_right_name_8 = var_alpha_upper;
            tmp_left_name_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_8 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_8 );

                exception_lineno = 143;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_9 = const_float_0_5;
            tmp_args_element_name_9 = POWER_OPERATION( tmp_left_name_8, tmp_right_name_9 );
            Py_DECREF( tmp_left_name_8 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_8 );

                exception_lineno = 143;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_27a8aedd6e885f0890edb2fc6820f720->m_frame.f_lineno = 143;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_8 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_alpha == NULL );
            var_alpha = tmp_assign_source_15;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( par_initial_alpha );
            tmp_assign_source_16 = par_initial_alpha;
            assert( var_alpha == NULL );
            Py_INCREF( tmp_assign_source_16 );
            var_alpha = tmp_assign_source_16;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( par_max_iter );
        tmp_xrange_low_1 = par_max_iter;
        tmp_iter_arg_2 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_17;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_18 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 147;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_18;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_19 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_it;
            var_it = tmp_assign_source_19;
            Py_INCREF( var_it );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( var_alpha );
        tmp_compexpr_left_6 = var_alpha;
        CHECK_OBJECT( var_alpha_lower );
        tmp_compexpr_right_6 = var_alpha_lower;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_or_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT( var_alpha );
        tmp_compexpr_left_7 = var_alpha;
        if ( var_alpha_upper == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alpha_upper" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_compexpr_right_7 = var_alpha_upper;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_6 = tmp_or_left_value_2;
        or_end_2:;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_left_name_11;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_11;
            PyObject *tmp_right_name_12;
            tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_6 != NULL );
            tmp_left_name_10 = const_float_0_001;
            if ( var_alpha_upper == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alpha_upper" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 149;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_right_name_10 = var_alpha_upper;
            tmp_args_element_name_10 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 149;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_alpha_lower );
            tmp_left_name_12 = var_alpha_lower;
            if ( var_alpha_upper == NULL )
            {
                Py_DECREF( tmp_args_element_name_10 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alpha_upper" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 149;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_right_name_11 = var_alpha_upper;
            tmp_left_name_11 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_11 );
            if ( tmp_left_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_10 );

                exception_lineno = 149;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_right_name_12 = const_float_0_5;
            tmp_args_element_name_11 = POWER_OPERATION( tmp_left_name_11, tmp_right_name_12 );
            Py_DECREF( tmp_left_name_11 );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_10 );

                exception_lineno = 149;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            frame_27a8aedd6e885f0890edb2fc6820f720->m_frame.f_lineno = 149;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 149;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = var_alpha;
                assert( old != NULL );
                var_alpha = tmp_assign_source_20;
                Py_DECREF( old );
            }

        }
        branch_no_6:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        CHECK_OBJECT( var_phi_and_derivative );
        tmp_called_name_7 = var_phi_and_derivative;
        if ( var_alpha == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alpha" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_name_12 = var_alpha;
        CHECK_OBJECT( var_suf );
        tmp_args_element_name_13 = var_suf;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_14 = par_s;
        CHECK_OBJECT( par_Delta );
        tmp_args_element_name_15 = par_Delta;
        frame_27a8aedd6e885f0890edb2fc6820f720->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_7, call_args );
        }

        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
        if ( tmp_assign_source_22 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 151;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_22;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
        if ( tmp_assign_source_23 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 151;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_23;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ooooooooooooooooooooo";
                    exception_lineno = 151;
                    goto try_except_handler_6;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 151;
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_24 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_phi;
            var_phi = tmp_assign_source_24;
            Py_INCREF( var_phi );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_25 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_phi_prime;
            var_phi_prime = tmp_assign_source_25;
            Py_INCREF( var_phi_prime );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT( var_phi );
        tmp_compexpr_left_8 = var_phi;
        tmp_compexpr_right_8 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_assign_source_26;
            if ( var_alpha == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alpha" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 154;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_assign_source_26 = var_alpha;
            {
                PyObject *old = var_alpha_upper;
                var_alpha_upper = tmp_assign_source_26;
                Py_INCREF( var_alpha_upper );
                Py_XDECREF( old );
            }

        }
        branch_no_7:;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        CHECK_OBJECT( var_phi );
        tmp_left_name_13 = var_phi;
        CHECK_OBJECT( var_phi_prime );
        tmp_right_name_13 = var_phi_prime;
        tmp_assign_source_27 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_ratio;
            var_ratio = tmp_assign_source_27;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_8 != NULL );
        CHECK_OBJECT( var_alpha_lower );
        tmp_args_element_name_16 = var_alpha_lower;
        if ( var_alpha == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alpha" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_left_name_14 = var_alpha;
        CHECK_OBJECT( var_ratio );
        tmp_right_name_14 = var_ratio;
        tmp_args_element_name_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_args_element_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_27a8aedd6e885f0890edb2fc6820f720->m_frame.f_lineno = 157;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_args_element_name_17 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_alpha_lower;
            assert( old != NULL );
            var_alpha_lower = tmp_assign_source_28;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_16;
        PyObject *tmp_right_name_17;
        PyObject *tmp_right_name_18;
        if ( var_alpha == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alpha" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_left_name_15 = var_alpha;
        CHECK_OBJECT( var_phi );
        tmp_left_name_18 = var_phi;
        CHECK_OBJECT( par_Delta );
        tmp_right_name_16 = par_Delta;
        tmp_left_name_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_16 );
        if ( tmp_left_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_ratio );
        tmp_right_name_17 = var_ratio;
        tmp_left_name_16 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_17 );
        Py_DECREF( tmp_left_name_17 );
        if ( tmp_left_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_Delta );
        tmp_right_name_18 = par_Delta;
        tmp_right_name_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_18 );
        Py_DECREF( tmp_left_name_16 );
        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_29 = tmp_left_name_15;
        var_alpha = tmp_assign_source_29;

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_1 = tmp_mvar_value_4;
        CHECK_OBJECT( var_phi );
        tmp_args_element_name_18 = var_phi;
        frame_27a8aedd6e885f0890edb2fc6820f720->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_compexpr_left_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abs, call_args );
        }

        if ( tmp_compexpr_left_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_rtol );
        tmp_left_name_19 = par_rtol;
        CHECK_OBJECT( par_Delta );
        tmp_right_name_19 = par_Delta;
        tmp_compexpr_right_9 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_19 );
        if ( tmp_compexpr_right_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_9 );

            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        Py_DECREF( tmp_compexpr_left_9 );
        Py_DECREF( tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        goto loop_end_1;
        branch_no_8:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_21;
        PyObject *tmp_right_name_22;
        CHECK_OBJECT( par_V );
        tmp_source_name_2 = par_V;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dot );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_suf );
        tmp_left_name_20 = var_suf;
        CHECK_OBJECT( par_s );
        tmp_left_name_22 = par_s;
        tmp_right_name_21 = const_int_pos_2;
        tmp_left_name_21 = POWER_OPERATION( tmp_left_name_22, tmp_right_name_21 );
        if ( tmp_left_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_alpha == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_left_name_21 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alpha" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_22 = var_alpha;
        tmp_right_name_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_21, tmp_right_name_22 );
        Py_DECREF( tmp_left_name_21 );
        if ( tmp_right_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_19 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_20 );
        Py_DECREF( tmp_right_name_20 );
        if ( tmp_args_element_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_27a8aedd6e885f0890edb2fc6820f720->m_frame.f_lineno = 163;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_19 );
        if ( tmp_operand_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_30 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_4 );
        Py_DECREF( tmp_operand_name_4 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_30;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_23;
        PyObject *tmp_left_name_24;
        PyObject *tmp_right_name_24;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT( var_p );
        tmp_left_name_23 = var_p;
        CHECK_OBJECT( par_Delta );
        tmp_left_name_24 = par_Delta;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_5;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_20 = var_p;
        frame_27a8aedd6e885f0890edb2fc6820f720->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_right_name_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        if ( tmp_right_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_23 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_24 );
        Py_DECREF( tmp_right_name_24 );
        if ( tmp_right_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_23, tmp_right_name_23 );
        Py_DECREF( tmp_right_name_23 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_31 = tmp_left_name_23;
        var_p = tmp_assign_source_31;

    }
    {
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_25;
        PyObject *tmp_right_name_25;
        CHECK_OBJECT( var_p );
        tmp_tuple_element_2 = var_p;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        if ( var_alpha == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alpha" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 170;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_alpha;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        if ( var_it == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "it" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 170;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_25 = var_it;
        tmp_right_name_25 = const_int_pos_1;
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_25, tmp_right_name_25 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 170;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_27a8aedd6e885f0890edb2fc6820f720 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_27a8aedd6e885f0890edb2fc6820f720 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_27a8aedd6e885f0890edb2fc6820f720 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_27a8aedd6e885f0890edb2fc6820f720, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_27a8aedd6e885f0890edb2fc6820f720->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_27a8aedd6e885f0890edb2fc6820f720, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_27a8aedd6e885f0890edb2fc6820f720,
        type_description_1,
        par_n,
        par_m,
        par_uf,
        par_s,
        par_V,
        par_Delta,
        par_initial_alpha,
        par_rtol,
        par_max_iter,
        var_phi_and_derivative,
        var_suf,
        var_threshold,
        var_full_rank,
        var_p,
        var_alpha_upper,
        var_phi,
        var_phi_prime,
        var_alpha_lower,
        var_alpha,
        var_it,
        var_ratio
    );


    // Release cached frame.
    if ( frame_27a8aedd6e885f0890edb2fc6820f720 == cache_frame_27a8aedd6e885f0890edb2fc6820f720 )
    {
        Py_DECREF( frame_27a8aedd6e885f0890edb2fc6820f720 );
    }
    cache_frame_27a8aedd6e885f0890edb2fc6820f720 = NULL;

    assertFrameObject( frame_27a8aedd6e885f0890edb2fc6820f720 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_2_solve_lsq_trust_region );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_uf );
    Py_DECREF( par_uf );
    par_uf = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_V );
    Py_DECREF( par_V );
    par_V = NULL;

    CHECK_OBJECT( (PyObject *)par_Delta );
    Py_DECREF( par_Delta );
    par_Delta = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_alpha );
    Py_DECREF( par_initial_alpha );
    par_initial_alpha = NULL;

    CHECK_OBJECT( (PyObject *)par_rtol );
    Py_DECREF( par_rtol );
    par_rtol = NULL;

    CHECK_OBJECT( (PyObject *)par_max_iter );
    Py_DECREF( par_max_iter );
    par_max_iter = NULL;

    CHECK_OBJECT( (PyObject *)var_phi_and_derivative );
    Py_DECREF( var_phi_and_derivative );
    var_phi_and_derivative = NULL;

    CHECK_OBJECT( (PyObject *)var_suf );
    Py_DECREF( var_suf );
    var_suf = NULL;

    Py_XDECREF( var_threshold );
    var_threshold = NULL;

    CHECK_OBJECT( (PyObject *)var_full_rank );
    Py_DECREF( var_full_rank );
    var_full_rank = NULL;

    CHECK_OBJECT( (PyObject *)var_p );
    Py_DECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_alpha_upper );
    var_alpha_upper = NULL;

    Py_XDECREF( var_phi );
    var_phi = NULL;

    Py_XDECREF( var_phi_prime );
    var_phi_prime = NULL;

    Py_XDECREF( var_alpha_lower );
    var_alpha_lower = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_it );
    var_it = NULL;

    Py_XDECREF( var_ratio );
    var_ratio = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_uf );
    Py_DECREF( par_uf );
    par_uf = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_V );
    Py_DECREF( par_V );
    par_V = NULL;

    CHECK_OBJECT( (PyObject *)par_Delta );
    Py_DECREF( par_Delta );
    par_Delta = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_alpha );
    Py_DECREF( par_initial_alpha );
    par_initial_alpha = NULL;

    CHECK_OBJECT( (PyObject *)par_rtol );
    Py_DECREF( par_rtol );
    par_rtol = NULL;

    CHECK_OBJECT( (PyObject *)par_max_iter );
    Py_DECREF( par_max_iter );
    par_max_iter = NULL;

    CHECK_OBJECT( (PyObject *)var_phi_and_derivative );
    Py_DECREF( var_phi_and_derivative );
    var_phi_and_derivative = NULL;

    Py_XDECREF( var_suf );
    var_suf = NULL;

    Py_XDECREF( var_threshold );
    var_threshold = NULL;

    Py_XDECREF( var_full_rank );
    var_full_rank = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_alpha_upper );
    var_alpha_upper = NULL;

    Py_XDECREF( var_phi );
    var_phi = NULL;

    Py_XDECREF( var_phi_prime );
    var_phi_prime = NULL;

    Py_XDECREF( var_alpha_lower );
    var_alpha_lower = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_it );
    var_it = NULL;

    Py_XDECREF( var_ratio );
    var_ratio = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_2_solve_lsq_trust_region );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_2_solve_lsq_trust_region$$$function_1_phi_and_derivative( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_alpha = python_pars[ 0 ];
    PyObject *par_suf = python_pars[ 1 ];
    PyObject *par_s = python_pars[ 2 ];
    PyObject *par_Delta = python_pars[ 3 ];
    PyObject *var_denom = NULL;
    PyObject *var_p_norm = NULL;
    PyObject *var_phi = NULL;
    PyObject *var_phi_prime = NULL;
    struct Nuitka_FrameObject *frame_1668123b65da9987e614fa4bf86a324f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1668123b65da9987e614fa4bf86a324f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1668123b65da9987e614fa4bf86a324f, codeobj_1668123b65da9987e614fa4bf86a324f, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1668123b65da9987e614fa4bf86a324f = cache_frame_1668123b65da9987e614fa4bf86a324f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1668123b65da9987e614fa4bf86a324f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1668123b65da9987e614fa4bf86a324f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_s );
        tmp_left_name_2 = par_s;
        tmp_right_name_1 = const_int_pos_2;
        tmp_left_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_alpha );
        tmp_right_name_2 = par_alpha;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_denom == NULL );
        var_denom = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 115;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_suf );
        tmp_left_name_3 = par_suf;
        CHECK_OBJECT( var_denom );
        tmp_right_name_3 = var_denom;
        tmp_args_element_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_1668123b65da9987e614fa4bf86a324f->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_p_norm == NULL );
        var_p_norm = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_p_norm );
        tmp_left_name_4 = var_p_norm;
        CHECK_OBJECT( par_Delta );
        tmp_right_name_4 = par_Delta;
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_phi == NULL );
        var_phi = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sum );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_suf );
        tmp_left_name_7 = par_suf;
        tmp_right_name_5 = const_int_pos_2;
        tmp_left_name_6 = POWER_OPERATION( tmp_left_name_7, tmp_right_name_5 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_denom );
        tmp_left_name_8 = var_denom;
        tmp_right_name_7 = const_int_pos_3;
        tmp_right_name_6 = POWER_OPERATION( tmp_left_name_8, tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_1668123b65da9987e614fa4bf86a324f->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_p_norm );
        tmp_right_name_8 = var_p_norm;
        tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_phi_prime == NULL );
        var_phi_prime = tmp_assign_source_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1668123b65da9987e614fa4bf86a324f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1668123b65da9987e614fa4bf86a324f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1668123b65da9987e614fa4bf86a324f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1668123b65da9987e614fa4bf86a324f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1668123b65da9987e614fa4bf86a324f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1668123b65da9987e614fa4bf86a324f,
        type_description_1,
        par_alpha,
        par_suf,
        par_s,
        par_Delta,
        var_denom,
        var_p_norm,
        var_phi,
        var_phi_prime
    );


    // Release cached frame.
    if ( frame_1668123b65da9987e614fa4bf86a324f == cache_frame_1668123b65da9987e614fa4bf86a324f )
    {
        Py_DECREF( frame_1668123b65da9987e614fa4bf86a324f );
    }
    cache_frame_1668123b65da9987e614fa4bf86a324f = NULL;

    assertFrameObject( frame_1668123b65da9987e614fa4bf86a324f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_phi );
        tmp_tuple_element_1 = var_phi;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_phi_prime );
        tmp_tuple_element_1 = var_phi_prime;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_2_solve_lsq_trust_region$$$function_1_phi_and_derivative );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_alpha );
    Py_DECREF( par_alpha );
    par_alpha = NULL;

    CHECK_OBJECT( (PyObject *)par_suf );
    Py_DECREF( par_suf );
    par_suf = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_Delta );
    Py_DECREF( par_Delta );
    par_Delta = NULL;

    CHECK_OBJECT( (PyObject *)var_denom );
    Py_DECREF( var_denom );
    var_denom = NULL;

    CHECK_OBJECT( (PyObject *)var_p_norm );
    Py_DECREF( var_p_norm );
    var_p_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_phi );
    Py_DECREF( var_phi );
    var_phi = NULL;

    CHECK_OBJECT( (PyObject *)var_phi_prime );
    Py_DECREF( var_phi_prime );
    var_phi_prime = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_alpha );
    Py_DECREF( par_alpha );
    par_alpha = NULL;

    CHECK_OBJECT( (PyObject *)par_suf );
    Py_DECREF( par_suf );
    par_suf = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_Delta );
    Py_DECREF( par_Delta );
    par_Delta = NULL;

    Py_XDECREF( var_denom );
    var_denom = NULL;

    Py_XDECREF( var_p_norm );
    var_p_norm = NULL;

    Py_XDECREF( var_phi );
    var_phi = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_2_solve_lsq_trust_region$$$function_1_phi_and_derivative );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_3_solve_trust_region_2d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_B = python_pars[ 0 ];
    PyObject *par_g = python_pars[ 1 ];
    PyObject *par_Delta = python_pars[ 2 ];
    PyObject *var_R = NULL;
    PyObject *var_lower = NULL;
    PyObject *var_p = NULL;
    PyObject *var_a = NULL;
    PyObject *var_b = NULL;
    PyObject *var_c = NULL;
    PyObject *var_d = NULL;
    PyObject *var_f = NULL;
    PyObject *var_coeffs = NULL;
    PyObject *var_t = NULL;
    PyObject *var_value = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_aa048fb6c7f7967331f855194b7d111d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_aa048fb6c7f7967331f855194b7d111d = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aa048fb6c7f7967331f855194b7d111d, codeobj_aa048fb6c7f7967331f855194b7d111d, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_aa048fb6c7f7967331f855194b7d111d = cache_frame_aa048fb6c7f7967331f855194b7d111d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aa048fb6c7f7967331f855194b7d111d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aa048fb6c7f7967331f855194b7d111d ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_cho_factor );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cho_factor );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cho_factor" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 197;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_B );
        tmp_args_element_name_1 = par_B;
        frame_aa048fb6c7f7967331f855194b7d111d->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 197;
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 197;
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 197;
                    goto try_except_handler_4;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 197;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( var_R == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_R = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_lower == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_lower = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_cho_solve );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cho_solve );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cho_solve" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 198;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_R );
        tmp_tuple_element_1 = var_R;
        tmp_args_element_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_lower );
        tmp_tuple_element_1 = var_lower;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_g );
        tmp_args_element_name_3 = par_g;
        frame_aa048fb6c7f7967331f855194b7d111d->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( var_p == NULL );
        var_p = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 199;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_4 = var_p;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_5 = var_p;
        frame_aa048fb6c7f7967331f855194b7d111d->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_Delta );
        tmp_left_name_1 = par_Delta;
        tmp_right_name_1 = const_int_pos_2;
        tmp_compexpr_right_1 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 199;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_tuple_element_2;
            CHECK_OBJECT( var_p );
            tmp_tuple_element_2 = var_p;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = Py_True;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_aa048fb6c7f7967331f855194b7d111d, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_aa048fb6c7f7967331f855194b7d111d, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_4;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_LinAlgError );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 201;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_4;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 196;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_aa048fb6c7f7967331f855194b7d111d->m_frame) frame_aa048fb6c7f7967331f855194b7d111d->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_5;
        branch_no_2:;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_3_solve_trust_region_2d );
    return NULL;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_B );
        tmp_subscribed_name_1 = par_B;
        tmp_subscript_name_1 = const_tuple_int_0_int_0_tuple;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_Delta );
        tmp_left_name_3 = par_Delta;
        tmp_right_name_3 = const_int_pos_2;
        tmp_right_name_2 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 204;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_a == NULL );
        var_a = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( par_B );
        tmp_subscribed_name_2 = par_B;
        tmp_subscript_name_2 = const_tuple_int_0_int_pos_1_tuple;
        tmp_left_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_Delta );
        tmp_left_name_5 = par_Delta;
        tmp_right_name_5 = const_int_pos_2;
        tmp_right_name_4 = POWER_OPERATION( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 205;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_b == NULL );
        var_b = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_6;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( par_B );
        tmp_subscribed_name_3 = par_B;
        tmp_subscript_name_3 = const_tuple_int_pos_1_int_pos_1_tuple;
        tmp_left_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_Delta );
        tmp_left_name_7 = par_Delta;
        tmp_right_name_7 = const_int_pos_2;
        tmp_right_name_6 = POWER_OPERATION( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 206;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_c == NULL );
        var_c = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_8;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( par_g );
        tmp_subscribed_name_4 = par_g;
        tmp_subscript_name_4 = const_int_0;
        tmp_left_name_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_Delta );
        tmp_right_name_8 = par_Delta;
        tmp_assign_source_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_8 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_d == NULL );
        var_d = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_9;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT( par_g );
        tmp_subscribed_name_5 = par_g;
        tmp_subscript_name_5 = const_int_pos_1;
        tmp_left_name_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 1 );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_Delta );
        tmp_right_name_9 = par_Delta;
        tmp_assign_source_11 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_9 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f == NULL );
        var_f = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_list_element_1;
        PyObject *tmp_left_name_10;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_12;
        PyObject *tmp_right_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_right_name_16;
        PyObject *tmp_right_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_right_name_18;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 211;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_5;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_b );
        tmp_operand_name_3 = var_b;
        tmp_left_name_10 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 212;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_d );
        tmp_right_name_10 = var_d;
        tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_10 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 212;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = PyList_New( 5 );
        PyList_SET_ITEM( tmp_args_element_name_6, 0, tmp_list_element_1 );
        tmp_left_name_11 = const_int_pos_2;
        CHECK_OBJECT( var_a );
        tmp_left_name_13 = var_a;
        CHECK_OBJECT( var_c );
        tmp_right_name_12 = var_c;
        tmp_left_name_12 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_12 );
        if ( tmp_left_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 212;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_f );
        tmp_right_name_13 = var_f;
        tmp_right_name_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_12 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 212;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 212;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_6, 1, tmp_list_element_1 );
        tmp_left_name_14 = const_int_pos_6;
        CHECK_OBJECT( var_b );
        tmp_right_name_14 = var_b;
        tmp_list_element_1 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 212;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_6, 2, tmp_list_element_1 );
        tmp_left_name_15 = const_int_pos_2;
        CHECK_OBJECT( var_a );
        tmp_operand_name_4 = var_a;
        tmp_left_name_17 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_4 );
        if ( tmp_left_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 212;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_c );
        tmp_right_name_16 = var_c;
        tmp_left_name_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_16 );
        Py_DECREF( tmp_left_name_17 );
        if ( tmp_left_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 212;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_f );
        tmp_right_name_17 = var_f;
        tmp_right_name_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_17 );
        Py_DECREF( tmp_left_name_16 );
        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 212;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 212;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_6, 3, tmp_list_element_1 );
        CHECK_OBJECT( var_b );
        tmp_operand_name_5 = var_b;
        tmp_left_name_18 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_5 );
        if ( tmp_left_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 212;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_d );
        tmp_right_name_18 = var_d;
        tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
        Py_DECREF( tmp_left_name_18 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 212;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_6, 4, tmp_list_element_1 );
        frame_aa048fb6c7f7967331f855194b7d111d->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_coeffs == NULL );
        var_coeffs = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 213;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_6;
        CHECK_OBJECT( var_coeffs );
        tmp_args_element_name_7 = var_coeffs;
        frame_aa048fb6c7f7967331f855194b7d111d->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_roots, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_t == NULL );
        var_t = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 214;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_7;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_real );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_t );
        tmp_subscribed_name_6 = var_t;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 214;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_8;
        CHECK_OBJECT( var_t );
        tmp_args_element_name_9 = var_t;
        frame_aa048fb6c7f7967331f855194b7d111d->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_subscript_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_isreal, call_args );
        }

        if ( tmp_subscript_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 214;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscript_name_6 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 214;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aa048fb6c7f7967331f855194b7d111d->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_t;
            assert( old != NULL );
            var_t = tmp_assign_source_14;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_left_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_20;
        PyObject *tmp_right_name_21;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_22;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_23;
        PyObject *tmp_left_name_24;
        PyObject *tmp_left_name_25;
        PyObject *tmp_right_name_24;
        PyObject *tmp_left_name_26;
        PyObject *tmp_right_name_25;
        PyObject *tmp_right_name_26;
        PyObject *tmp_left_name_27;
        PyObject *tmp_right_name_27;
        PyObject *tmp_left_name_28;
        PyObject *tmp_right_name_28;
        CHECK_OBJECT( par_Delta );
        tmp_left_name_19 = par_Delta;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_9;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_vstack );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_21 = const_int_pos_2;
        CHECK_OBJECT( var_t );
        tmp_right_name_20 = var_t;
        tmp_left_name_20 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_21, tmp_right_name_20 );
        if ( tmp_left_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_22 = const_int_pos_1;
        CHECK_OBJECT( var_t );
        tmp_left_name_23 = var_t;
        tmp_right_name_23 = const_int_pos_2;
        tmp_right_name_22 = POWER_OPERATION( tmp_left_name_23, tmp_right_name_23 );
        if ( tmp_right_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_20 );

            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_21 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_22, tmp_right_name_22 );
        Py_DECREF( tmp_right_name_22 );
        if ( tmp_right_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_20 );

            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_21 );
        Py_DECREF( tmp_left_name_20 );
        Py_DECREF( tmp_right_name_21 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_10 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_element_name_10, 0, tmp_tuple_element_3 );
        tmp_left_name_25 = const_int_pos_1;
        CHECK_OBJECT( var_t );
        tmp_left_name_26 = var_t;
        tmp_right_name_25 = const_int_pos_2;
        tmp_right_name_24 = POWER_OPERATION( tmp_left_name_26, tmp_right_name_25 );
        if ( tmp_right_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_24 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_25, tmp_right_name_24 );
        Py_DECREF( tmp_right_name_24 );
        if ( tmp_left_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_27 = const_int_pos_1;
        CHECK_OBJECT( var_t );
        tmp_left_name_28 = var_t;
        tmp_right_name_28 = const_int_pos_2;
        tmp_right_name_27 = POWER_OPERATION( tmp_left_name_28, tmp_right_name_28 );
        if ( tmp_right_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_left_name_24 );

            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_26 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_27, tmp_right_name_27 );
        Py_DECREF( tmp_right_name_27 );
        if ( tmp_right_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_left_name_24 );

            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_26 );
        Py_DECREF( tmp_left_name_24 );
        Py_DECREF( tmp_right_name_26 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_10, 1, tmp_tuple_element_3 );
        frame_aa048fb6c7f7967331f855194b7d111d->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_right_name_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_right_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_19 );
        Py_DECREF( tmp_right_name_19 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_15;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_name_29;
        PyObject *tmp_left_name_30;
        PyObject *tmp_right_name_29;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_left_name_31;
        PyObject *tmp_right_name_30;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_right_name_31;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_left_name_30 = const_float_0_5;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 217;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_10;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sum );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_p );
        tmp_left_name_31 = var_p;
        CHECK_OBJECT( par_B );
        tmp_called_instance_4 = par_B;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_11 = var_p;
        frame_aa048fb6c7f7967331f855194b7d111d->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_right_name_30 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 217;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_31, tmp_right_name_30 );
        Py_DECREF( tmp_right_name_30 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 217;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_4 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
        frame_aa048fb6c7f7967331f855194b7d111d->m_frame.f_lineno = 217;
        tmp_right_name_29 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_right_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_29 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_30, tmp_right_name_29 );
        Py_DECREF( tmp_right_name_29 );
        if ( tmp_left_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_left_name_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 217;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_11;
        CHECK_OBJECT( par_g );
        tmp_args_element_name_12 = par_g;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_13 = var_p;
        frame_aa048fb6c7f7967331f855194b7d111d->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_right_name_31 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_29 );

            exception_lineno = 217;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_29, tmp_right_name_31 );
        Py_DECREF( tmp_left_name_29 );
        Py_DECREF( tmp_right_name_31 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_value == NULL );
        var_value = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 218;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_12;
        CHECK_OBJECT( var_value );
        tmp_args_element_name_14 = var_value;
        frame_aa048fb6c7f7967331f855194b7d111d->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_argmin, call_args );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_i == NULL );
        var_i = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT( var_p );
        tmp_subscribed_name_7 = var_p;
        tmp_tuple_element_5 = const_slice_none_none_none;
        tmp_subscript_name_7 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_subscript_name_7, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_i );
        tmp_tuple_element_5 = var_i;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_subscript_name_7, 1, tmp_tuple_element_5 );
        tmp_assign_source_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        Py_DECREF( tmp_subscript_name_7 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_p;
            assert( old != NULL );
            var_p = tmp_assign_source_18;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa048fb6c7f7967331f855194b7d111d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa048fb6c7f7967331f855194b7d111d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa048fb6c7f7967331f855194b7d111d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aa048fb6c7f7967331f855194b7d111d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aa048fb6c7f7967331f855194b7d111d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aa048fb6c7f7967331f855194b7d111d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aa048fb6c7f7967331f855194b7d111d,
        type_description_1,
        par_B,
        par_g,
        par_Delta,
        var_R,
        var_lower,
        var_p,
        var_a,
        var_b,
        var_c,
        var_d,
        var_f,
        var_coeffs,
        var_t,
        var_value,
        var_i
    );


    // Release cached frame.
    if ( frame_aa048fb6c7f7967331f855194b7d111d == cache_frame_aa048fb6c7f7967331f855194b7d111d )
    {
        Py_DECREF( frame_aa048fb6c7f7967331f855194b7d111d );
    }
    cache_frame_aa048fb6c7f7967331f855194b7d111d = NULL;

    assertFrameObject( frame_aa048fb6c7f7967331f855194b7d111d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_6;
        CHECK_OBJECT( var_p );
        tmp_tuple_element_6 = var_p;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
        tmp_tuple_element_6 = Py_False;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_3_solve_trust_region_2d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_Delta );
    Py_DECREF( par_Delta );
    par_Delta = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_lower );
    var_lower = NULL;

    CHECK_OBJECT( (PyObject *)var_p );
    Py_DECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_coeffs );
    var_coeffs = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_Delta );
    Py_DECREF( par_Delta );
    par_Delta = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_lower );
    var_lower = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_coeffs );
    var_coeffs = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_3_solve_trust_region_2d );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_4_update_tr_radius( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_Delta = python_pars[ 0 ];
    PyObject *par_actual_reduction = python_pars[ 1 ];
    PyObject *par_predicted_reduction = python_pars[ 2 ];
    PyObject *par_step_norm = python_pars[ 3 ];
    PyObject *par_bound_hit = python_pars[ 4 ];
    PyObject *var_ratio = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_4c7ff61c5b30da96bb6cda2bc190746e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4c7ff61c5b30da96bb6cda2bc190746e = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4c7ff61c5b30da96bb6cda2bc190746e, codeobj_4c7ff61c5b30da96bb6cda2bc190746e, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4c7ff61c5b30da96bb6cda2bc190746e = cache_frame_4c7ff61c5b30da96bb6cda2bc190746e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4c7ff61c5b30da96bb6cda2bc190746e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4c7ff61c5b30da96bb6cda2bc190746e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_predicted_reduction );
        tmp_compexpr_left_1 = par_predicted_reduction;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_actual_reduction );
            tmp_left_name_1 = par_actual_reduction;
            CHECK_OBJECT( par_predicted_reduction );
            tmp_right_name_1 = par_predicted_reduction;
            tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 236;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_ratio == NULL );
            var_ratio = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_outline_return_value_1;
            int tmp_truth_name_1;
            {
                PyObject *tmp_assign_source_2;
                CHECK_OBJECT( par_actual_reduction );
                tmp_assign_source_2 = par_actual_reduction;
                assert( tmp_comparison_chain_1__operand_2 == NULL );
                Py_INCREF( tmp_assign_source_2 );
                tmp_comparison_chain_1__operand_2 = tmp_assign_source_2;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                CHECK_OBJECT( par_predicted_reduction );
                tmp_compexpr_left_2 = par_predicted_reduction;
                CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
                tmp_compexpr_right_2 = tmp_comparison_chain_1__operand_2;
                tmp_assign_source_3 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 237;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                assert( tmp_comparison_chain_1__comparison_result == NULL );
                tmp_comparison_chain_1__comparison_result = tmp_assign_source_3;
            }
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_operand_name_1;
                CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
                tmp_operand_name_1 = tmp_comparison_chain_1__comparison_result;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 237;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_3;
                }
                else
                {
                    goto branch_no_3;
                }
                branch_yes_3:;
                CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
                tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
                Py_INCREF( tmp_outline_return_value_1 );
                goto try_return_handler_2;
                branch_no_3:;
            }
            {
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
                tmp_compexpr_left_3 = tmp_comparison_chain_1__operand_2;
                tmp_compexpr_right_3 = const_int_0;
                tmp_outline_return_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_outline_return_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 237;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                goto try_return_handler_2;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_4_update_tr_radius );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
            Py_DECREF( tmp_comparison_chain_1__operand_2 );
            tmp_comparison_chain_1__operand_2 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
            Py_DECREF( tmp_comparison_chain_1__comparison_result );
            tmp_comparison_chain_1__comparison_result = NULL;

            goto outline_result_1;
            // Exception handler code:
            try_except_handler_2:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
            Py_DECREF( tmp_comparison_chain_1__operand_2 );
            tmp_comparison_chain_1__operand_2 = NULL;

            Py_XDECREF( tmp_comparison_chain_1__comparison_result );
            tmp_comparison_chain_1__comparison_result = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_4_update_tr_radius );
            return NULL;
            outline_result_1:;
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_outline_return_value_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_outline_return_value_1 );

                exception_lineno = 237;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_outline_return_value_1 );
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = const_int_pos_1;
                assert( var_ratio == NULL );
                Py_INCREF( tmp_assign_source_4 );
                var_ratio = tmp_assign_source_4;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_5;
                tmp_assign_source_5 = const_int_0;
                assert( var_ratio == NULL );
                Py_INCREF( tmp_assign_source_5 );
                var_ratio = tmp_assign_source_5;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        if ( var_ratio == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ratio" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 242;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = var_ratio;
        tmp_compexpr_right_4 = const_float_0_25;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            tmp_left_name_2 = const_float_0_25;
            CHECK_OBJECT( par_step_norm );
            tmp_right_name_2 = par_step_norm;
            tmp_assign_source_6 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_Delta;
                assert( old != NULL );
                par_Delta = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        goto branch_end_4;
        branch_no_4:;
        {
            nuitka_bool tmp_condition_result_5;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            int tmp_truth_name_2;
            if ( var_ratio == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ratio" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 244;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_5 = var_ratio;
            tmp_compexpr_right_5 = const_float_0_75;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 244;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_1 == 1 )
            {
                goto and_right_1;
            }
            else
            {
                goto and_left_1;
            }
            and_right_1:;
            CHECK_OBJECT( par_bound_hit );
            tmp_truth_name_2 = CHECK_IF_TRUE( par_bound_hit );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 244;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_5 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_5 = tmp_and_left_value_1;
            and_end_1:;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_5;
            }
            else
            {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                CHECK_OBJECT( par_Delta );
                tmp_left_name_3 = par_Delta;
                tmp_right_name_3 = const_float_2_0;
                tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 245;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_7 = tmp_left_name_3;
                par_Delta = tmp_assign_source_7;

            }
            branch_no_5:;
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_tuple_element_1;
        if ( par_Delta == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Delta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 247;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = par_Delta;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( var_ratio == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ratio" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 247;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_ratio;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c7ff61c5b30da96bb6cda2bc190746e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c7ff61c5b30da96bb6cda2bc190746e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c7ff61c5b30da96bb6cda2bc190746e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4c7ff61c5b30da96bb6cda2bc190746e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4c7ff61c5b30da96bb6cda2bc190746e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4c7ff61c5b30da96bb6cda2bc190746e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4c7ff61c5b30da96bb6cda2bc190746e,
        type_description_1,
        par_Delta,
        par_actual_reduction,
        par_predicted_reduction,
        par_step_norm,
        par_bound_hit,
        var_ratio
    );


    // Release cached frame.
    if ( frame_4c7ff61c5b30da96bb6cda2bc190746e == cache_frame_4c7ff61c5b30da96bb6cda2bc190746e )
    {
        Py_DECREF( frame_4c7ff61c5b30da96bb6cda2bc190746e );
    }
    cache_frame_4c7ff61c5b30da96bb6cda2bc190746e = NULL;

    assertFrameObject( frame_4c7ff61c5b30da96bb6cda2bc190746e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_4_update_tr_radius );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_Delta );
    par_Delta = NULL;

    CHECK_OBJECT( (PyObject *)par_actual_reduction );
    Py_DECREF( par_actual_reduction );
    par_actual_reduction = NULL;

    CHECK_OBJECT( (PyObject *)par_predicted_reduction );
    Py_DECREF( par_predicted_reduction );
    par_predicted_reduction = NULL;

    CHECK_OBJECT( (PyObject *)par_step_norm );
    Py_DECREF( par_step_norm );
    par_step_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_bound_hit );
    Py_DECREF( par_bound_hit );
    par_bound_hit = NULL;

    Py_XDECREF( var_ratio );
    var_ratio = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_Delta );
    par_Delta = NULL;

    CHECK_OBJECT( (PyObject *)par_actual_reduction );
    Py_DECREF( par_actual_reduction );
    par_actual_reduction = NULL;

    CHECK_OBJECT( (PyObject *)par_predicted_reduction );
    Py_DECREF( par_predicted_reduction );
    par_predicted_reduction = NULL;

    CHECK_OBJECT( (PyObject *)par_step_norm );
    Py_DECREF( par_step_norm );
    par_step_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_bound_hit );
    Py_DECREF( par_bound_hit );
    par_bound_hit = NULL;

    Py_XDECREF( var_ratio );
    var_ratio = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_4_update_tr_radius );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_5_build_quadratic_1d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_J = python_pars[ 0 ];
    PyObject *par_g = python_pars[ 1 ];
    PyObject *par_s = python_pars[ 2 ];
    PyObject *par_diag = python_pars[ 3 ];
    PyObject *par_s0 = python_pars[ 4 ];
    PyObject *var_v = NULL;
    PyObject *var_a = NULL;
    PyObject *var_b = NULL;
    PyObject *var_u = NULL;
    PyObject *var_c = NULL;
    struct Nuitka_FrameObject *frame_7b5d9bfd38fb71f60ff0a79c28847a5a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7b5d9bfd38fb71f60ff0a79c28847a5a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7b5d9bfd38fb71f60ff0a79c28847a5a, codeobj_7b5d9bfd38fb71f60ff0a79c28847a5a, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7b5d9bfd38fb71f60ff0a79c28847a5a = cache_frame_7b5d9bfd38fb71f60ff0a79c28847a5a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7b5d9bfd38fb71f60ff0a79c28847a5a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7b5d9bfd38fb71f60ff0a79c28847a5a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_J );
        tmp_called_instance_1 = par_J;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_1 = par_s;
        frame_7b5d9bfd38fb71f60ff0a79c28847a5a->m_frame.f_lineno = 284;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 285;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_v );
        tmp_args_element_name_2 = var_v;
        CHECK_OBJECT( var_v );
        tmp_args_element_name_3 = var_v;
        frame_7b5d9bfd38fb71f60ff0a79c28847a5a->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_a == NULL );
        var_a = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_diag );
        tmp_compexpr_left_1 = par_diag;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( var_a );
            tmp_left_name_1 = var_a;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 287;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dot );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 287;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_s );
            tmp_left_name_2 = par_s;
            CHECK_OBJECT( par_diag );
            tmp_right_name_2 = par_diag;
            tmp_args_element_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 287;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_s );
            tmp_args_element_name_5 = par_s;
            frame_7b5d9bfd38fb71f60ff0a79c28847a5a->m_frame.f_lineno = 287;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 287;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 287;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = tmp_left_name_1;
            var_a = tmp_assign_source_3;

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_a );
        tmp_left_name_3 = var_a;
        tmp_right_name_3 = const_float_0_5;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_left_name_3;
        var_a = tmp_assign_source_4;

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 290;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_g );
        tmp_args_element_name_6 = par_g;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_7 = par_s;
        frame_7b5d9bfd38fb71f60ff0a79c28847a5a->m_frame.f_lineno = 290;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_b == NULL );
        var_b = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_s0 );
        tmp_compexpr_left_2 = par_s0;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_8;
            CHECK_OBJECT( par_J );
            tmp_called_instance_4 = par_J;
            CHECK_OBJECT( par_s0 );
            tmp_args_element_name_8 = par_s0;
            frame_7b5d9bfd38fb71f60ff0a79c28847a5a->m_frame.f_lineno = 293;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_dot, call_args );
            }

            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 293;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_u == NULL );
            var_u = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            CHECK_OBJECT( var_b );
            tmp_left_name_4 = var_b;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 294;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_5 = tmp_mvar_value_4;
            CHECK_OBJECT( var_u );
            tmp_args_element_name_9 = var_u;
            CHECK_OBJECT( var_v );
            tmp_args_element_name_10 = var_v;
            frame_7b5d9bfd38fb71f60ff0a79c28847a5a->m_frame.f_lineno = 294;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_right_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_dot, call_args );
            }

            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 294;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 294;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = tmp_left_name_4;
            var_b = tmp_assign_source_7;

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_5;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_right_name_6;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            tmp_left_name_6 = const_float_0_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 295;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = tmp_mvar_value_5;
            CHECK_OBJECT( var_u );
            tmp_args_element_name_11 = var_u;
            CHECK_OBJECT( var_u );
            tmp_args_element_name_12 = var_u;
            frame_7b5d9bfd38fb71f60ff0a79c28847a5a->m_frame.f_lineno = 295;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_right_name_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_dot, call_args );
            }

            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_5 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_left_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 295;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_7 = tmp_mvar_value_6;
            CHECK_OBJECT( par_g );
            tmp_args_element_name_13 = par_g;
            CHECK_OBJECT( par_s0 );
            tmp_args_element_name_14 = par_s0;
            frame_7b5d9bfd38fb71f60ff0a79c28847a5a->m_frame.f_lineno = 295;
            {
                PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                tmp_right_name_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_dot, call_args );
            }

            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 295;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_c == NULL );
            var_c = tmp_assign_source_8;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_diag );
            tmp_compexpr_left_3 = par_diag;
            tmp_compexpr_right_3 = Py_None;
            tmp_condition_result_3 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_2;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_args_element_name_15;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_8;
                PyObject *tmp_args_element_name_16;
                CHECK_OBJECT( var_b );
                tmp_left_name_7 = var_b;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 297;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_2 = tmp_mvar_value_7;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dot );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 297;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_s0 );
                tmp_left_name_8 = par_s0;
                CHECK_OBJECT( par_diag );
                tmp_right_name_8 = par_diag;
                tmp_args_element_name_15 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
                if ( tmp_args_element_name_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 297;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_s );
                tmp_args_element_name_16 = par_s;
                frame_7b5d9bfd38fb71f60ff0a79c28847a5a->m_frame.f_lineno = 297;
                {
                    PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                    tmp_right_name_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_15 );
                if ( tmp_right_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 297;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
                Py_DECREF( tmp_right_name_7 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 297;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_9 = tmp_left_name_7;
                var_b = tmp_assign_source_9;

            }
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_left_name_9;
                PyObject *tmp_right_name_9;
                PyObject *tmp_left_name_10;
                PyObject *tmp_right_name_10;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_3;
                PyObject *tmp_mvar_value_8;
                PyObject *tmp_args_element_name_17;
                PyObject *tmp_left_name_11;
                PyObject *tmp_right_name_11;
                PyObject *tmp_args_element_name_18;
                CHECK_OBJECT( var_c );
                tmp_left_name_9 = var_c;
                tmp_left_name_10 = const_float_0_5;
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_8 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 298;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_3 = tmp_mvar_value_8;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dot );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 298;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_s0 );
                tmp_left_name_11 = par_s0;
                CHECK_OBJECT( par_diag );
                tmp_right_name_11 = par_diag;
                tmp_args_element_name_17 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
                if ( tmp_args_element_name_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 298;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_s0 );
                tmp_args_element_name_18 = par_s0;
                frame_7b5d9bfd38fb71f60ff0a79c28847a5a->m_frame.f_lineno = 298;
                {
                    PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
                    tmp_right_name_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_17 );
                if ( tmp_right_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 298;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_9 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
                Py_DECREF( tmp_right_name_10 );
                if ( tmp_right_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 298;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
                Py_DECREF( tmp_right_name_9 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 298;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_10 = tmp_left_name_9;
                var_c = tmp_assign_source_10;

            }
            branch_no_3:;
        }
        {
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( var_a );
            tmp_tuple_element_1 = var_a;
            tmp_return_value = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_b );
            tmp_tuple_element_1 = var_b;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_c );
            tmp_tuple_element_1 = var_c;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_tuple_element_2;
            CHECK_OBJECT( var_a );
            tmp_tuple_element_2 = var_a;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_b );
            tmp_tuple_element_2 = var_b;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
            goto frame_return_exit_1;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b5d9bfd38fb71f60ff0a79c28847a5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b5d9bfd38fb71f60ff0a79c28847a5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b5d9bfd38fb71f60ff0a79c28847a5a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7b5d9bfd38fb71f60ff0a79c28847a5a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7b5d9bfd38fb71f60ff0a79c28847a5a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7b5d9bfd38fb71f60ff0a79c28847a5a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7b5d9bfd38fb71f60ff0a79c28847a5a,
        type_description_1,
        par_J,
        par_g,
        par_s,
        par_diag,
        par_s0,
        var_v,
        var_a,
        var_b,
        var_u,
        var_c
    );


    // Release cached frame.
    if ( frame_7b5d9bfd38fb71f60ff0a79c28847a5a == cache_frame_7b5d9bfd38fb71f60ff0a79c28847a5a )
    {
        Py_DECREF( frame_7b5d9bfd38fb71f60ff0a79c28847a5a );
    }
    cache_frame_7b5d9bfd38fb71f60ff0a79c28847a5a = NULL;

    assertFrameObject( frame_7b5d9bfd38fb71f60ff0a79c28847a5a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_5_build_quadratic_1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_J );
    Py_DECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_diag );
    Py_DECREF( par_diag );
    par_diag = NULL;

    CHECK_OBJECT( (PyObject *)par_s0 );
    Py_DECREF( par_s0 );
    par_s0 = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)var_a );
    Py_DECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_J );
    Py_DECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_diag );
    Py_DECREF( par_diag );
    par_diag = NULL;

    CHECK_OBJECT( (PyObject *)par_s0 );
    Py_DECREF( par_s0 );
    par_s0 = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_5_build_quadratic_1d );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_6_minimize_quadratic_1d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_lb = python_pars[ 2 ];
    PyObject *par_ub = python_pars[ 3 ];
    PyObject *par_c = python_pars[ 4 ];
    PyObject *var_t = NULL;
    PyObject *var_extremum = NULL;
    PyObject *var_y = NULL;
    PyObject *var_min_index = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_1bd72c6ac0a6196744e7a398353e487d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1bd72c6ac0a6196744e7a398353e487d = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT( par_lb );
        tmp_list_element_1 = par_lb;
        tmp_assign_source_1 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_assign_source_1, 0, tmp_list_element_1 );
        CHECK_OBJECT( par_ub );
        tmp_list_element_1 = par_ub;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_assign_source_1, 1, tmp_list_element_1 );
        assert( var_t == NULL );
        var_t = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1bd72c6ac0a6196744e7a398353e487d, codeobj_1bd72c6ac0a6196744e7a398353e487d, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1bd72c6ac0a6196744e7a398353e487d = cache_frame_1bd72c6ac0a6196744e7a398353e487d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1bd72c6ac0a6196744e7a398353e487d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1bd72c6ac0a6196744e7a398353e487d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_a );
        tmp_compexpr_left_1 = par_a;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            tmp_left_name_2 = const_float_minus_0_5;
            CHECK_OBJECT( par_b );
            tmp_right_name_1 = par_b;
            tmp_left_name_1 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 318;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_a );
            tmp_right_name_2 = par_a;
            tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 318;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_extremum == NULL );
            var_extremum = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_outline_return_value_1;
            int tmp_truth_name_1;
            {
                PyObject *tmp_assign_source_3;
                CHECK_OBJECT( var_extremum );
                tmp_assign_source_3 = var_extremum;
                assert( tmp_comparison_chain_1__operand_2 == NULL );
                Py_INCREF( tmp_assign_source_3 );
                tmp_comparison_chain_1__operand_2 = tmp_assign_source_3;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                CHECK_OBJECT( par_lb );
                tmp_compexpr_left_2 = par_lb;
                CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
                tmp_compexpr_right_2 = tmp_comparison_chain_1__operand_2;
                tmp_assign_source_4 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 319;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                assert( tmp_comparison_chain_1__comparison_result == NULL );
                tmp_comparison_chain_1__comparison_result = tmp_assign_source_4;
            }
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_operand_name_1;
                CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
                tmp_operand_name_1 = tmp_comparison_chain_1__comparison_result;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 319;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_3;
                }
                else
                {
                    goto branch_no_3;
                }
                branch_yes_3:;
                CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
                tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
                Py_INCREF( tmp_outline_return_value_1 );
                goto try_return_handler_2;
                branch_no_3:;
            }
            {
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
                tmp_compexpr_left_3 = tmp_comparison_chain_1__operand_2;
                CHECK_OBJECT( par_ub );
                tmp_compexpr_right_3 = par_ub;
                tmp_outline_return_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_outline_return_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 319;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                goto try_return_handler_2;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_6_minimize_quadratic_1d );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
            Py_DECREF( tmp_comparison_chain_1__operand_2 );
            tmp_comparison_chain_1__operand_2 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
            Py_DECREF( tmp_comparison_chain_1__comparison_result );
            tmp_comparison_chain_1__comparison_result = NULL;

            goto outline_result_1;
            // Exception handler code:
            try_except_handler_2:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
            Py_DECREF( tmp_comparison_chain_1__operand_2 );
            tmp_comparison_chain_1__operand_2 = NULL;

            Py_XDECREF( tmp_comparison_chain_1__comparison_result );
            tmp_comparison_chain_1__comparison_result = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_6_minimize_quadratic_1d );
            return NULL;
            outline_result_1:;
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_outline_return_value_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_outline_return_value_1 );

                exception_lineno = 319;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_outline_return_value_1 );
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_called_instance_1;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                CHECK_OBJECT( var_t );
                tmp_called_instance_1 = var_t;
                CHECK_OBJECT( var_extremum );
                tmp_args_element_name_1 = var_extremum;
                frame_1bd72c6ac0a6196744e7a398353e487d->m_frame.f_lineno = 320;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 320;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 321;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_t );
        tmp_args_element_name_2 = var_t;
        frame_1bd72c6ac0a6196744e7a398353e487d->m_frame.f_lineno = 321;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_t;
            assert( old != NULL );
            var_t = tmp_assign_source_5;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_t );
        tmp_left_name_4 = var_t;
        CHECK_OBJECT( par_a );
        tmp_left_name_6 = par_a;
        CHECK_OBJECT( var_t );
        tmp_right_name_4 = var_t;
        tmp_left_name_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_4 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_right_name_5 = par_b;
        tmp_right_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c );
        tmp_right_name_6 = par_c;
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_y == NULL );
        var_y = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 323;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_3 = var_y;
        frame_1bd72c6ac0a6196744e7a398353e487d->m_frame.f_lineno = 323;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_argmin, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_min_index == NULL );
        var_min_index = tmp_assign_source_7;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_t );
        tmp_subscribed_name_1 = var_t;
        CHECK_OBJECT( var_min_index );
        tmp_subscript_name_1 = var_min_index;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_y );
        tmp_subscribed_name_2 = var_y;
        CHECK_OBJECT( var_min_index );
        tmp_subscript_name_2 = var_min_index;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 324;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1bd72c6ac0a6196744e7a398353e487d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1bd72c6ac0a6196744e7a398353e487d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1bd72c6ac0a6196744e7a398353e487d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1bd72c6ac0a6196744e7a398353e487d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1bd72c6ac0a6196744e7a398353e487d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1bd72c6ac0a6196744e7a398353e487d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1bd72c6ac0a6196744e7a398353e487d,
        type_description_1,
        par_a,
        par_b,
        par_lb,
        par_ub,
        par_c,
        var_t,
        var_extremum,
        var_y,
        var_min_index
    );


    // Release cached frame.
    if ( frame_1bd72c6ac0a6196744e7a398353e487d == cache_frame_1bd72c6ac0a6196744e7a398353e487d )
    {
        Py_DECREF( frame_1bd72c6ac0a6196744e7a398353e487d );
    }
    cache_frame_1bd72c6ac0a6196744e7a398353e487d = NULL;

    assertFrameObject( frame_1bd72c6ac0a6196744e7a398353e487d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_6_minimize_quadratic_1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)var_t );
    Py_DECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_extremum );
    var_extremum = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)var_min_index );
    Py_DECREF( var_min_index );
    var_min_index = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)var_t );
    Py_DECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_extremum );
    var_extremum = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_min_index );
    var_min_index = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_6_minimize_quadratic_1d );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_7_evaluate_quadratic( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_J = python_pars[ 0 ];
    PyObject *par_g = python_pars[ 1 ];
    PyObject *par_s = python_pars[ 2 ];
    PyObject *par_diag = python_pars[ 3 ];
    PyObject *var_Js = NULL;
    PyObject *var_q = NULL;
    PyObject *var_l = NULL;
    struct Nuitka_FrameObject *frame_0130fa4a810ed72a650d14f17e9817b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0130fa4a810ed72a650d14f17e9817b7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0130fa4a810ed72a650d14f17e9817b7, codeobj_0130fa4a810ed72a650d14f17e9817b7, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0130fa4a810ed72a650d14f17e9817b7 = cache_frame_0130fa4a810ed72a650d14f17e9817b7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0130fa4a810ed72a650d14f17e9817b7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0130fa4a810ed72a650d14f17e9817b7 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_s );
        tmp_source_name_1 = par_s;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_J );
            tmp_called_instance_1 = par_J;
            CHECK_OBJECT( par_s );
            tmp_args_element_name_1 = par_s;
            frame_0130fa4a810ed72a650d14f17e9817b7->m_frame.f_lineno = 351;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 351;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_Js == NULL );
            var_Js = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 352;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_1;
            CHECK_OBJECT( var_Js );
            tmp_args_element_name_2 = var_Js;
            CHECK_OBJECT( var_Js );
            tmp_args_element_name_3 = var_Js;
            frame_0130fa4a810ed72a650d14f17e9817b7->m_frame.f_lineno = 352;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_dot, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_q == NULL );
            var_q = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_diag );
            tmp_compexpr_left_2 = par_diag;
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_2;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_args_element_name_5;
                CHECK_OBJECT( var_q );
                tmp_left_name_1 = var_q;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 354;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_2 = tmp_mvar_value_2;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dot );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 354;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_s );
                tmp_left_name_2 = par_s;
                CHECK_OBJECT( par_diag );
                tmp_right_name_2 = par_diag;
                tmp_args_element_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 354;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_s );
                tmp_args_element_name_5 = par_s;
                frame_0130fa4a810ed72a650d14f17e9817b7->m_frame.f_lineno = 354;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 354;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 354;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_3 = tmp_left_name_1;
                var_q = tmp_assign_source_3;

            }
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_J );
            tmp_source_name_3 = par_J;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dot );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 356;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_s );
            tmp_source_name_4 = par_s;
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_T );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 356;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_0130fa4a810ed72a650d14f17e9817b7->m_frame.f_lineno = 356;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 356;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_Js == NULL );
            var_Js = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 357;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_3;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_sum );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 357;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_Js );
            tmp_left_name_3 = var_Js;
            tmp_right_name_3 = const_int_pos_2;
            tmp_tuple_element_1 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 357;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
            frame_0130fa4a810ed72a650d14f17e9817b7->m_frame.f_lineno = 357;
            tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 357;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_q == NULL );
            var_q = tmp_assign_source_5;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_diag );
            tmp_compexpr_left_3 = par_diag;
            tmp_compexpr_right_3 = Py_None;
            tmp_condition_result_3 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_kw_name_2;
                CHECK_OBJECT( var_q );
                tmp_left_name_4 = var_q;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 359;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_6 = tmp_mvar_value_4;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sum );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 359;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_diag );
                tmp_left_name_5 = par_diag;
                CHECK_OBJECT( par_s );
                tmp_left_name_6 = par_s;
                tmp_right_name_6 = const_int_pos_2;
                tmp_right_name_5 = POWER_OPERATION( tmp_left_name_6, tmp_right_name_6 );
                if ( tmp_right_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 359;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 359;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_name_2 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
                tmp_kw_name_2 = PyDict_Copy( const_dict_c4b01644824ba6bad132707fcdaa03f1 );
                frame_0130fa4a810ed72a650d14f17e9817b7->m_frame.f_lineno = 359;
                tmp_right_name_4 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_right_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 359;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 359;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_6 = tmp_left_name_4;
                var_q = tmp_assign_source_6;

            }
            branch_no_3:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 361;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_5;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_7 = par_s;
        CHECK_OBJECT( par_g );
        tmp_args_element_name_8 = par_g;
        frame_0130fa4a810ed72a650d14f17e9817b7->m_frame.f_lineno = 361;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_l == NULL );
        var_l = tmp_assign_source_7;
    }
    {
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        tmp_left_name_8 = const_float_0_5;
        if ( var_q == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "q" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 363;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_7 = var_q;
        tmp_left_name_7 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_8, tmp_right_name_7 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_l );
        tmp_right_name_8 = var_l;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0130fa4a810ed72a650d14f17e9817b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0130fa4a810ed72a650d14f17e9817b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0130fa4a810ed72a650d14f17e9817b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0130fa4a810ed72a650d14f17e9817b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0130fa4a810ed72a650d14f17e9817b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0130fa4a810ed72a650d14f17e9817b7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0130fa4a810ed72a650d14f17e9817b7,
        type_description_1,
        par_J,
        par_g,
        par_s,
        par_diag,
        var_Js,
        var_q,
        var_l
    );


    // Release cached frame.
    if ( frame_0130fa4a810ed72a650d14f17e9817b7 == cache_frame_0130fa4a810ed72a650d14f17e9817b7 )
    {
        Py_DECREF( frame_0130fa4a810ed72a650d14f17e9817b7 );
    }
    cache_frame_0130fa4a810ed72a650d14f17e9817b7 = NULL;

    assertFrameObject( frame_0130fa4a810ed72a650d14f17e9817b7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_7_evaluate_quadratic );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_J );
    Py_DECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_diag );
    Py_DECREF( par_diag );
    par_diag = NULL;

    CHECK_OBJECT( (PyObject *)var_Js );
    Py_DECREF( var_Js );
    var_Js = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    CHECK_OBJECT( (PyObject *)var_l );
    Py_DECREF( var_l );
    var_l = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_J );
    Py_DECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_diag );
    Py_DECREF( par_diag );
    par_diag = NULL;

    Py_XDECREF( var_Js );
    var_Js = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_7_evaluate_quadratic );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_8_in_bounds( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_lb = python_pars[ 1 ];
    PyObject *par_ub = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_5d5171ac1c351946f1809d4cb99776e8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5d5171ac1c351946f1809d4cb99776e8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5d5171ac1c351946f1809d4cb99776e8, codeobj_5d5171ac1c351946f1809d4cb99776e8, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5d5171ac1c351946f1809d4cb99776e8 = cache_frame_5d5171ac1c351946f1809d4cb99776e8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5d5171ac1c351946f1809d4cb99776e8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5d5171ac1c351946f1809d4cb99776e8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 371;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_all );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 371;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_compexpr_left_1 = par_x;
        CHECK_OBJECT( par_lb );
        tmp_compexpr_right_1 = par_lb;
        tmp_left_name_1 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 371;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_compexpr_left_2 = par_x;
        CHECK_OBJECT( par_ub );
        tmp_compexpr_right_2 = par_ub;
        tmp_right_name_1 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 371;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 371;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5d5171ac1c351946f1809d4cb99776e8->m_frame.f_lineno = 371;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 371;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d5171ac1c351946f1809d4cb99776e8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d5171ac1c351946f1809d4cb99776e8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d5171ac1c351946f1809d4cb99776e8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5d5171ac1c351946f1809d4cb99776e8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5d5171ac1c351946f1809d4cb99776e8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5d5171ac1c351946f1809d4cb99776e8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5d5171ac1c351946f1809d4cb99776e8,
        type_description_1,
        par_x,
        par_lb,
        par_ub
    );


    // Release cached frame.
    if ( frame_5d5171ac1c351946f1809d4cb99776e8 == cache_frame_5d5171ac1c351946f1809d4cb99776e8 )
    {
        Py_DECREF( frame_5d5171ac1c351946f1809d4cb99776e8 );
    }
    cache_frame_5d5171ac1c351946f1809d4cb99776e8 = NULL;

    assertFrameObject( frame_5d5171ac1c351946f1809d4cb99776e8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_8_in_bounds );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_8_in_bounds );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_9_step_size_to_bound( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_lb = python_pars[ 2 ];
    PyObject *par_ub = python_pars[ 3 ];
    PyObject *var_non_zero = NULL;
    PyObject *var_s_non_zero = NULL;
    PyObject *var_steps = NULL;
    PyObject *var_min_step = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_3146c823bc667a0abbccd256c246d884;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3146c823bc667a0abbccd256c246d884 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3146c823bc667a0abbccd256c246d884, codeobj_3146c823bc667a0abbccd256c246d884, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3146c823bc667a0abbccd256c246d884 = cache_frame_3146c823bc667a0abbccd256c246d884;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3146c823bc667a0abbccd256c246d884 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3146c823bc667a0abbccd256c246d884 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 392;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_1 = par_s;
        frame_3146c823bc667a0abbccd256c246d884->m_frame.f_lineno = 392;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_nonzero, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 392;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_non_zero == NULL );
        var_non_zero = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_1 = par_s;
        CHECK_OBJECT( var_non_zero );
        tmp_subscript_name_1 = var_non_zero;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_s_non_zero == NULL );
        var_s_non_zero = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 394;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_3146c823bc667a0abbccd256c246d884->m_frame.f_lineno = 394;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_empty_like, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_steps == NULL );
        var_steps = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( var_steps );
        tmp_source_name_1 = var_steps;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fill );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 395;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inf );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 395;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_3146c823bc667a0abbccd256c246d884->m_frame.f_lineno = 395;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 396;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_errstate );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_43144c2738ec0a3f7e588824eaf6c6eb );
        frame_3146c823bc667a0abbccd256c246d884->m_frame.f_lineno = 396;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_4 = tmp_with_1__source;
        tmp_called_name_3 = LOOKUP_SPECIAL( tmp_source_name_4, const_str_plain___enter__ );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_3146c823bc667a0abbccd256c246d884->m_frame.f_lineno = 396;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_5 = tmp_with_1__source;
        tmp_assign_source_6 = LOOKUP_SPECIAL( tmp_source_name_5, const_str_plain___exit__ );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_7;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 397;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }

        tmp_source_name_6 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_maximum );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_lb );
        tmp_left_name_2 = par_lb;
        CHECK_OBJECT( par_x );
        tmp_right_name_1 = par_x;
        tmp_subscribed_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 397;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_non_zero );
        tmp_subscript_name_2 = var_non_zero;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 397;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_s_non_zero );
        tmp_right_name_2 = var_s_non_zero;
        tmp_args_element_name_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 397;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_ub );
        tmp_left_name_4 = par_ub;
        CHECK_OBJECT( par_x );
        tmp_right_name_3 = par_x;
        tmp_subscribed_name_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 398;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_non_zero );
        tmp_subscript_name_3 = var_non_zero;
        tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 398;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_s_non_zero );
        tmp_right_name_4 = var_s_non_zero;
        tmp_args_element_name_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 398;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        frame_3146c823bc667a0abbccd256c246d884->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_steps );
        tmp_ass_subscribed_1 = var_steps;
        CHECK_OBJECT( var_non_zero );
        tmp_ass_subscript_1 = var_non_zero;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_3146c823bc667a0abbccd256c246d884, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_3146c823bc667a0abbccd256c246d884, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            nuitka_bool tmp_assign_source_8;
            tmp_assign_source_8 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_8;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_5 = tmp_with_1__exit;
            tmp_args_element_name_6 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_7 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_8 = EXC_TRACEBACK(PyThreadState_GET());
            frame_3146c823bc667a0abbccd256c246d884->m_frame.f_lineno = 396;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 396;
                type_description_1 = "oooooooo";
                goto try_except_handler_5;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 396;
                type_description_1 = "oooooooo";
                goto try_except_handler_5;
            }
            tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 396;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_3146c823bc667a0abbccd256c246d884->m_frame) frame_3146c823bc667a0abbccd256c246d884->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 396;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_3146c823bc667a0abbccd256c246d884->m_frame) frame_3146c823bc667a0abbccd256c246d884->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooo";
        goto try_except_handler_5;
        branch_end_1:;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_9_step_size_to_bound );
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_6 = tmp_with_1__exit;
            frame_3146c823bc667a0abbccd256c246d884->m_frame.f_lineno = 396;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_3 );
                Py_XDECREF( exception_keeper_value_3 );
                Py_XDECREF( exception_keeper_tb_3 );

                exception_lineno = 396;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_3:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_called_name_7;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_7 = tmp_with_1__exit;
            frame_3146c823bc667a0abbccd256c246d884->m_frame.f_lineno = 396;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 396;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_4:;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 399;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_6;
        CHECK_OBJECT( var_steps );
        tmp_args_element_name_9 = var_steps;
        frame_3146c823bc667a0abbccd256c246d884->m_frame.f_lineno = 399;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_min, call_args );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 399;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_min_step == NULL );
        var_min_step = tmp_assign_source_9;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( var_min_step );
        tmp_tuple_element_1 = var_min_step;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 400;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_7;
        CHECK_OBJECT( var_steps );
        tmp_args_element_name_10 = var_steps;
        CHECK_OBJECT( var_min_step );
        tmp_args_element_name_11 = var_min_step;
        frame_3146c823bc667a0abbccd256c246d884->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_left_name_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_equal, call_args );
        }

        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 400;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_left_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 400;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_8;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_12 = par_s;
        frame_3146c823bc667a0abbccd256c246d884->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_called_instance_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_sign, call_args );
        }

        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 400;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_3146c823bc667a0abbccd256c246d884->m_frame.f_lineno = 400;
        tmp_right_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_astype, &PyTuple_GET_ITEM( const_tuple_type_int_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 400;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 400;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3146c823bc667a0abbccd256c246d884 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3146c823bc667a0abbccd256c246d884 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3146c823bc667a0abbccd256c246d884 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3146c823bc667a0abbccd256c246d884, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3146c823bc667a0abbccd256c246d884->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3146c823bc667a0abbccd256c246d884, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3146c823bc667a0abbccd256c246d884,
        type_description_1,
        par_x,
        par_s,
        par_lb,
        par_ub,
        var_non_zero,
        var_s_non_zero,
        var_steps,
        var_min_step
    );


    // Release cached frame.
    if ( frame_3146c823bc667a0abbccd256c246d884 == cache_frame_3146c823bc667a0abbccd256c246d884 )
    {
        Py_DECREF( frame_3146c823bc667a0abbccd256c246d884 );
    }
    cache_frame_3146c823bc667a0abbccd256c246d884 = NULL;

    assertFrameObject( frame_3146c823bc667a0abbccd256c246d884 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_9_step_size_to_bound );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)var_non_zero );
    Py_DECREF( var_non_zero );
    var_non_zero = NULL;

    CHECK_OBJECT( (PyObject *)var_s_non_zero );
    Py_DECREF( var_s_non_zero );
    var_s_non_zero = NULL;

    CHECK_OBJECT( (PyObject *)var_steps );
    Py_DECREF( var_steps );
    var_steps = NULL;

    CHECK_OBJECT( (PyObject *)var_min_step );
    Py_DECREF( var_min_step );
    var_min_step = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    Py_XDECREF( var_non_zero );
    var_non_zero = NULL;

    Py_XDECREF( var_s_non_zero );
    var_s_non_zero = NULL;

    Py_XDECREF( var_steps );
    var_steps = NULL;

    Py_XDECREF( var_min_step );
    var_min_step = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_9_step_size_to_bound );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_10_find_active_constraints( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_lb = python_pars[ 1 ];
    PyObject *par_ub = python_pars[ 2 ];
    PyObject *par_rtol = python_pars[ 3 ];
    PyObject *var_active = NULL;
    PyObject *var_lower_dist = NULL;
    PyObject *var_upper_dist = NULL;
    PyObject *var_lower_threshold = NULL;
    PyObject *var_upper_threshold = NULL;
    PyObject *var_lower_active = NULL;
    PyObject *var_upper_active = NULL;
    struct Nuitka_FrameObject *frame_2b1335763336baee9b9c2ef5622d59f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2b1335763336baee9b9c2ef5622d59f1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2b1335763336baee9b9c2ef5622d59f1, codeobj_2b1335763336baee9b9c2ef5622d59f1, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2b1335763336baee9b9c2ef5622d59f1 = cache_frame_2b1335763336baee9b9c2ef5622d59f1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2b1335763336baee9b9c2ef5622d59f1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2b1335763336baee9b9c2ef5622d59f1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 418;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros_like );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
        frame_2b1335763336baee9b9c2ef5622d59f1->m_frame.f_lineno = 418;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_active == NULL );
        var_active = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_rtol );
        tmp_compexpr_left_1 = par_rtol;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_ass_subvalue_1 = const_int_neg_1;
            CHECK_OBJECT( var_active );
            tmp_ass_subscribed_1 = var_active;
            CHECK_OBJECT( par_x );
            tmp_compexpr_left_2 = par_x;
            CHECK_OBJECT( par_lb );
            tmp_compexpr_right_2 = par_lb;
            tmp_ass_subscript_1 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 421;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 421;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            tmp_ass_subvalue_2 = const_int_pos_1;
            CHECK_OBJECT( var_active );
            tmp_ass_subscribed_2 = var_active;
            CHECK_OBJECT( par_x );
            tmp_compexpr_left_3 = par_x;
            CHECK_OBJECT( par_ub );
            tmp_compexpr_right_3 = par_ub;
            tmp_ass_subscript_2 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_ass_subscript_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 422;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 422;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        CHECK_OBJECT( var_active );
        tmp_return_value = var_active;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_x );
        tmp_left_name_1 = par_x;
        CHECK_OBJECT( par_lb );
        tmp_right_name_1 = par_lb;
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lower_dist == NULL );
        var_lower_dist = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_ub );
        tmp_left_name_2 = par_ub;
        CHECK_OBJECT( par_x );
        tmp_right_name_2 = par_x;
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_upper_dist == NULL );
        var_upper_dist = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_rtol );
        tmp_left_name_3 = par_rtol;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 428;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_maximum );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_int_pos_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 428;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_3 = par_lb;
        frame_2b1335763336baee9b9c2ef5622d59f1->m_frame.f_lineno = 428;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abs, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 428;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b1335763336baee9b9c2ef5622d59f1->m_frame.f_lineno = 428;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lower_threshold == NULL );
        var_lower_threshold = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_rtol );
        tmp_left_name_4 = par_rtol;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 429;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_maximum );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = const_int_pos_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 429;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_5;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_6 = par_ub;
        frame_2b1335763336baee9b9c2ef5622d59f1->m_frame.f_lineno = 429;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_args_element_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_abs, call_args );
        }

        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 429;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b1335763336baee9b9c2ef5622d59f1->m_frame.f_lineno = 429;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_upper_threshold == NULL );
        var_upper_threshold = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_right_name_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 431;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_6;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_7 = par_lb;
        frame_2b1335763336baee9b9c2ef5622d59f1->m_frame.f_lineno = 431;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_left_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_isfinite, call_args );
        }

        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 431;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lower_dist );
        tmp_compexpr_left_4 = var_lower_dist;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_left_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 432;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_7;
        CHECK_OBJECT( var_upper_dist );
        tmp_args_element_name_8 = var_upper_dist;
        CHECK_OBJECT( var_lower_threshold );
        tmp_args_element_name_9 = var_lower_threshold;
        frame_2b1335763336baee9b9c2ef5622d59f1->m_frame.f_lineno = 432;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_compexpr_right_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_minimum, call_args );
        }

        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 432;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 432;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION( PyNumber_And, tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 431;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lower_active == NULL );
        var_lower_active = tmp_assign_source_6;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = const_int_neg_1;
        CHECK_OBJECT( var_active );
        tmp_ass_subscribed_3 = var_active;
        CHECK_OBJECT( var_lower_active );
        tmp_ass_subscript_3 = var_lower_active;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_6;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_right_name_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 435;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_8;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_10 = par_ub;
        frame_2b1335763336baee9b9c2ef5622d59f1->m_frame.f_lineno = 435;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_left_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_isfinite, call_args );
        }

        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_upper_dist );
        tmp_compexpr_left_5 = var_upper_dist;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_left_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 436;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_9;
        CHECK_OBJECT( var_lower_dist );
        tmp_args_element_name_11 = var_lower_dist;
        CHECK_OBJECT( var_upper_threshold );
        tmp_args_element_name_12 = var_upper_threshold;
        frame_2b1335763336baee9b9c2ef5622d59f1->m_frame.f_lineno = 436;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_compexpr_right_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_minimum, call_args );
        }

        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 436;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 436;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = BINARY_OPERATION( PyNumber_And, tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_upper_active == NULL );
        var_upper_active = tmp_assign_source_7;
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_ass_subvalue_4 = const_int_pos_1;
        CHECK_OBJECT( var_active );
        tmp_ass_subscribed_4 = var_active;
        CHECK_OBJECT( var_upper_active );
        tmp_ass_subscript_4 = var_upper_active;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b1335763336baee9b9c2ef5622d59f1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b1335763336baee9b9c2ef5622d59f1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b1335763336baee9b9c2ef5622d59f1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2b1335763336baee9b9c2ef5622d59f1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2b1335763336baee9b9c2ef5622d59f1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2b1335763336baee9b9c2ef5622d59f1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2b1335763336baee9b9c2ef5622d59f1,
        type_description_1,
        par_x,
        par_lb,
        par_ub,
        par_rtol,
        var_active,
        var_lower_dist,
        var_upper_dist,
        var_lower_threshold,
        var_upper_threshold,
        var_lower_active,
        var_upper_active
    );


    // Release cached frame.
    if ( frame_2b1335763336baee9b9c2ef5622d59f1 == cache_frame_2b1335763336baee9b9c2ef5622d59f1 )
    {
        Py_DECREF( frame_2b1335763336baee9b9c2ef5622d59f1 );
    }
    cache_frame_2b1335763336baee9b9c2ef5622d59f1 = NULL;

    assertFrameObject( frame_2b1335763336baee9b9c2ef5622d59f1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_active );
    tmp_return_value = var_active;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_10_find_active_constraints );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_rtol );
    Py_DECREF( par_rtol );
    par_rtol = NULL;

    CHECK_OBJECT( (PyObject *)var_active );
    Py_DECREF( var_active );
    var_active = NULL;

    Py_XDECREF( var_lower_dist );
    var_lower_dist = NULL;

    Py_XDECREF( var_upper_dist );
    var_upper_dist = NULL;

    Py_XDECREF( var_lower_threshold );
    var_lower_threshold = NULL;

    Py_XDECREF( var_upper_threshold );
    var_upper_threshold = NULL;

    Py_XDECREF( var_lower_active );
    var_lower_active = NULL;

    Py_XDECREF( var_upper_active );
    var_upper_active = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_rtol );
    Py_DECREF( par_rtol );
    par_rtol = NULL;

    Py_XDECREF( var_active );
    var_active = NULL;

    Py_XDECREF( var_lower_dist );
    var_lower_dist = NULL;

    Py_XDECREF( var_upper_dist );
    var_upper_dist = NULL;

    Py_XDECREF( var_lower_threshold );
    var_lower_threshold = NULL;

    Py_XDECREF( var_upper_threshold );
    var_upper_threshold = NULL;

    Py_XDECREF( var_lower_active );
    var_lower_active = NULL;

    Py_XDECREF( var_upper_active );
    var_upper_active = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_10_find_active_constraints );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_11_make_strictly_feasible( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_lb = python_pars[ 1 ];
    PyObject *par_ub = python_pars[ 2 ];
    PyObject *par_rstep = python_pars[ 3 ];
    PyObject *var_x_new = NULL;
    PyObject *var_active = NULL;
    PyObject *var_lower_mask = NULL;
    PyObject *var_upper_mask = NULL;
    PyObject *var_tight_bounds = NULL;
    struct Nuitka_FrameObject *frame_5a593f77b130c8dc18d3a1ce3350c048;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5a593f77b130c8dc18d3a1ce3350c048 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a593f77b130c8dc18d3a1ce3350c048, codeobj_5a593f77b130c8dc18d3a1ce3350c048, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5a593f77b130c8dc18d3a1ce3350c048 = cache_frame_5a593f77b130c8dc18d3a1ce3350c048;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a593f77b130c8dc18d3a1ce3350c048 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a593f77b130c8dc18d3a1ce3350c048 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_x );
        tmp_called_instance_1 = par_x;
        frame_5a593f77b130c8dc18d3a1ce3350c048->m_frame.f_lineno = 448;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x_new == NULL );
        var_x_new = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_find_active_constraints );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_find_active_constraints );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "find_active_constraints" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 450;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_2 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_3 = par_ub;
        CHECK_OBJECT( par_rstep );
        tmp_args_element_name_4 = par_rstep;
        frame_5a593f77b130c8dc18d3a1ce3350c048->m_frame.f_lineno = 450;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 450;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_active == NULL );
        var_active = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 451;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_active );
        tmp_args_element_name_5 = var_active;
        tmp_args_element_name_6 = const_int_neg_1;
        frame_5a593f77b130c8dc18d3a1ce3350c048->m_frame.f_lineno = 451;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_equal, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 451;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lower_mask == NULL );
        var_lower_mask = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 452;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_active );
        tmp_args_element_name_7 = var_active;
        tmp_args_element_name_8 = const_int_pos_1;
        frame_5a593f77b130c8dc18d3a1ce3350c048->m_frame.f_lineno = 452;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_equal, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_upper_mask == NULL );
        var_upper_mask = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_rstep );
        tmp_compexpr_left_1 = par_rstep;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 455;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_4;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nextafter );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 455;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_lb );
            tmp_subscribed_name_1 = par_lb;
            CHECK_OBJECT( var_lower_mask );
            tmp_subscript_name_1 = var_lower_mask;
            tmp_args_element_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 455;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ub );
            tmp_subscribed_name_2 = par_ub;
            CHECK_OBJECT( var_lower_mask );
            tmp_subscript_name_2 = var_lower_mask;
            tmp_args_element_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_9 );

                exception_lineno = 455;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_5a593f77b130c8dc18d3a1ce3350c048->m_frame.f_lineno = 455;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_9 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 455;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x_new );
            tmp_ass_subscribed_1 = var_x_new;
            CHECK_OBJECT( var_lower_mask );
            tmp_ass_subscript_1 = var_lower_mask;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 455;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 456;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_5;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_nextafter );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 456;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ub );
            tmp_subscribed_name_3 = par_ub;
            CHECK_OBJECT( var_upper_mask );
            tmp_subscript_name_3 = var_upper_mask;
            tmp_args_element_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 456;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_lb );
            tmp_subscribed_name_4 = par_lb;
            CHECK_OBJECT( var_upper_mask );
            tmp_subscript_name_4 = var_upper_mask;
            tmp_args_element_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_args_element_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_11 );

                exception_lineno = 456;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_5a593f77b130c8dc18d3a1ce3350c048->m_frame.f_lineno = 456;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_11 );
            Py_DECREF( tmp_args_element_name_12 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 456;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x_new );
            tmp_ass_subscribed_2 = var_x_new;
            CHECK_OBJECT( var_upper_mask );
            tmp_ass_subscript_2 = var_upper_mask;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 456;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            CHECK_OBJECT( par_lb );
            tmp_subscribed_name_5 = par_lb;
            CHECK_OBJECT( var_lower_mask );
            tmp_subscript_name_5 = var_lower_mask;
            tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_rstep );
            tmp_left_name_2 = par_rstep;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_left_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 459;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_6;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_maximum );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 459;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_13 = const_int_pos_1;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 459;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_7;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_abs );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 459;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_lb );
            tmp_subscribed_name_6 = par_lb;
            CHECK_OBJECT( var_lower_mask );
            tmp_subscript_name_6 = var_lower_mask;
            tmp_args_element_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 459;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_5a593f77b130c8dc18d3a1ce3350c048->m_frame.f_lineno = 459;
            {
                PyObject *call_args[] = { tmp_args_element_name_15 };
                tmp_args_element_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_args_element_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 459;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_5a593f77b130c8dc18d3a1ce3350c048->m_frame.f_lineno = 459;
            {
                PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_14 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 459;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 459;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subvalue_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_ass_subvalue_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x_new );
            tmp_ass_subscribed_3 = var_x_new;
            CHECK_OBJECT( var_lower_mask );
            tmp_ass_subscript_3 = var_lower_mask;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            Py_DECREF( tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_left_name_3;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            PyObject *tmp_right_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            CHECK_OBJECT( par_ub );
            tmp_subscribed_name_7 = par_ub;
            CHECK_OBJECT( var_upper_mask );
            tmp_subscript_name_7 = var_upper_mask;
            tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 460;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_rstep );
            tmp_left_name_4 = par_rstep;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_8 == NULL )
            {
                Py_DECREF( tmp_left_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 461;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_8;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_maximum );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 461;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_16 = const_int_pos_1;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_9 == NULL )
            {
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_called_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 461;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_9;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_abs );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 461;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ub );
            tmp_subscribed_name_8 = par_ub;
            CHECK_OBJECT( var_upper_mask );
            tmp_subscript_name_8 = var_upper_mask;
            tmp_args_element_name_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
            if ( tmp_args_element_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 461;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_5a593f77b130c8dc18d3a1ce3350c048->m_frame.f_lineno = 461;
            {
                PyObject *call_args[] = { tmp_args_element_name_18 };
                tmp_args_element_name_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_18 );
            if ( tmp_args_element_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 461;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_5a593f77b130c8dc18d3a1ce3350c048->m_frame.f_lineno = 461;
            {
                PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
                tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_17 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 461;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 461;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subvalue_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_ass_subvalue_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 460;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x_new );
            tmp_ass_subscribed_4 = var_x_new;
            CHECK_OBJECT( var_upper_mask );
            tmp_ass_subscript_4 = var_upper_mask;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
            Py_DECREF( tmp_ass_subvalue_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 460;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_5;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_right_name_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_x_new );
        tmp_compexpr_left_2 = var_x_new;
        CHECK_OBJECT( par_lb );
        tmp_compexpr_right_2 = par_lb;
        tmp_left_name_5 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 463;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x_new );
        tmp_compexpr_left_3 = var_x_new;
        CHECK_OBJECT( par_ub );
        tmp_compexpr_right_3 = par_ub;
        tmp_right_name_5 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 463;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 463;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_tight_bounds == NULL );
        var_tight_bounds = tmp_assign_source_5;
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_right_name_7;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        tmp_left_name_6 = const_float_0_5;
        CHECK_OBJECT( par_lb );
        tmp_subscribed_name_9 = par_lb;
        CHECK_OBJECT( var_tight_bounds );
        tmp_subscript_name_9 = var_tight_bounds;
        tmp_left_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ub );
        tmp_subscribed_name_10 = par_ub;
        CHECK_OBJECT( var_tight_bounds );
        tmp_subscript_name_10 = var_tight_bounds;
        tmp_right_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 464;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_5 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_ass_subvalue_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x_new );
        tmp_ass_subscribed_5 = var_x_new;
        CHECK_OBJECT( var_tight_bounds );
        tmp_ass_subscript_5 = var_tight_bounds;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subvalue_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a593f77b130c8dc18d3a1ce3350c048 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a593f77b130c8dc18d3a1ce3350c048 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a593f77b130c8dc18d3a1ce3350c048, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a593f77b130c8dc18d3a1ce3350c048->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a593f77b130c8dc18d3a1ce3350c048, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a593f77b130c8dc18d3a1ce3350c048,
        type_description_1,
        par_x,
        par_lb,
        par_ub,
        par_rstep,
        var_x_new,
        var_active,
        var_lower_mask,
        var_upper_mask,
        var_tight_bounds
    );


    // Release cached frame.
    if ( frame_5a593f77b130c8dc18d3a1ce3350c048 == cache_frame_5a593f77b130c8dc18d3a1ce3350c048 )
    {
        Py_DECREF( frame_5a593f77b130c8dc18d3a1ce3350c048 );
    }
    cache_frame_5a593f77b130c8dc18d3a1ce3350c048 = NULL;

    assertFrameObject( frame_5a593f77b130c8dc18d3a1ce3350c048 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_x_new );
    tmp_return_value = var_x_new;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_11_make_strictly_feasible );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_rstep );
    Py_DECREF( par_rstep );
    par_rstep = NULL;

    CHECK_OBJECT( (PyObject *)var_x_new );
    Py_DECREF( var_x_new );
    var_x_new = NULL;

    CHECK_OBJECT( (PyObject *)var_active );
    Py_DECREF( var_active );
    var_active = NULL;

    CHECK_OBJECT( (PyObject *)var_lower_mask );
    Py_DECREF( var_lower_mask );
    var_lower_mask = NULL;

    CHECK_OBJECT( (PyObject *)var_upper_mask );
    Py_DECREF( var_upper_mask );
    var_upper_mask = NULL;

    CHECK_OBJECT( (PyObject *)var_tight_bounds );
    Py_DECREF( var_tight_bounds );
    var_tight_bounds = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_rstep );
    Py_DECREF( par_rstep );
    par_rstep = NULL;

    Py_XDECREF( var_x_new );
    var_x_new = NULL;

    Py_XDECREF( var_active );
    var_active = NULL;

    Py_XDECREF( var_lower_mask );
    var_lower_mask = NULL;

    Py_XDECREF( var_upper_mask );
    var_upper_mask = NULL;

    Py_XDECREF( var_tight_bounds );
    var_tight_bounds = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_11_make_strictly_feasible );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_12_CL_scaling_vector( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_g = python_pars[ 1 ];
    PyObject *par_lb = python_pars[ 2 ];
    PyObject *par_ub = python_pars[ 3 ];
    PyObject *var_v = NULL;
    PyObject *var_dv = NULL;
    PyObject *var_mask = NULL;
    struct Nuitka_FrameObject *frame_b23141f46338ebcf78959cdd76f58d78;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b23141f46338ebcf78959cdd76f58d78 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b23141f46338ebcf78959cdd76f58d78, codeobj_b23141f46338ebcf78959cdd76f58d78, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b23141f46338ebcf78959cdd76f58d78 = cache_frame_b23141f46338ebcf78959cdd76f58d78;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b23141f46338ebcf78959cdd76f58d78 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b23141f46338ebcf78959cdd76f58d78 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 499;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_b23141f46338ebcf78959cdd76f58d78->m_frame.f_lineno = 499;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ones_like, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 499;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 500;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_b23141f46338ebcf78959cdd76f58d78->m_frame.f_lineno = 500;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_zeros_like, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 500;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dv == NULL );
        var_dv = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_g );
        tmp_compexpr_left_1 = par_g;
        tmp_compexpr_right_1 = const_int_0;
        tmp_left_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 502;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 502;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_3 = par_ub;
        frame_b23141f46338ebcf78959cdd76f58d78->m_frame.f_lineno = 502;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_isfinite, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 502;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 502;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mask == NULL );
        var_mask = tmp_assign_source_3;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_ub );
        tmp_subscribed_name_1 = par_ub;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_1 = var_mask;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 503;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_2 = par_x;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_2 = var_mask;
        tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 503;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 503;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_v );
        tmp_ass_subscribed_1 = var_v;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_1 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 503;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = const_int_neg_1;
        CHECK_OBJECT( var_dv );
        tmp_ass_subscribed_2 = var_dv;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_2 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 504;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_g );
        tmp_compexpr_left_2 = par_g;
        tmp_compexpr_right_2 = const_int_0;
        tmp_left_name_3 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 506;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 506;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_4 = par_lb;
        frame_b23141f46338ebcf78959cdd76f58d78->m_frame.f_lineno = 506;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_right_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_isfinite, call_args );
        }

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 506;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION( PyNumber_And, tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 506;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_mask;
            assert( old != NULL );
            var_mask = tmp_assign_source_4;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_3 = par_x;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_3 = var_mask;
        tmp_left_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 507;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_lb );
        tmp_subscribed_name_4 = par_lb;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_4 = var_mask;
        tmp_right_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 507;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 507;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_v );
        tmp_ass_subscribed_3 = var_v;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_3 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 507;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_ass_subvalue_4 = const_int_pos_1;
        CHECK_OBJECT( var_dv );
        tmp_ass_subscribed_4 = var_dv;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_4 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 508;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b23141f46338ebcf78959cdd76f58d78 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b23141f46338ebcf78959cdd76f58d78 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b23141f46338ebcf78959cdd76f58d78, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b23141f46338ebcf78959cdd76f58d78->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b23141f46338ebcf78959cdd76f58d78, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b23141f46338ebcf78959cdd76f58d78,
        type_description_1,
        par_x,
        par_g,
        par_lb,
        par_ub,
        var_v,
        var_dv,
        var_mask
    );


    // Release cached frame.
    if ( frame_b23141f46338ebcf78959cdd76f58d78 == cache_frame_b23141f46338ebcf78959cdd76f58d78 )
    {
        Py_DECREF( frame_b23141f46338ebcf78959cdd76f58d78 );
    }
    cache_frame_b23141f46338ebcf78959cdd76f58d78 = NULL;

    assertFrameObject( frame_b23141f46338ebcf78959cdd76f58d78 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_v );
        tmp_tuple_element_1 = var_v;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_dv );
        tmp_tuple_element_1 = var_dv;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_12_CL_scaling_vector );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)var_dv );
    Py_DECREF( var_dv );
    var_dv = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_dv );
    var_dv = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_12_CL_scaling_vector );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_13_reflective_transformation( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_y = python_pars[ 0 ];
    PyObject *par_lb = python_pars[ 1 ];
    PyObject *par_ub = python_pars[ 2 ];
    PyObject *var_lb_finite = NULL;
    PyObject *var_ub_finite = NULL;
    PyObject *var_x = NULL;
    PyObject *var_g_negative = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_d = NULL;
    PyObject *var_t = NULL;
    PyObject *var_g = NULL;
    struct Nuitka_FrameObject *frame_955d1452398963720df10ad2a9dca013;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_955d1452398963720df10ad2a9dca013 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_955d1452398963720df10ad2a9dca013, codeobj_955d1452398963720df10ad2a9dca013, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_955d1452398963720df10ad2a9dca013 = cache_frame_955d1452398963720df10ad2a9dca013;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_955d1452398963720df10ad2a9dca013 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_955d1452398963720df10ad2a9dca013 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_in_bounds );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_in_bounds );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "in_bounds" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 515;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_1 = par_y;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_2 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_3 = par_ub;
        frame_955d1452398963720df10ad2a9dca013->m_frame.f_lineno = 515;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 515;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 515;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( par_y );
            tmp_tuple_element_1 = par_y;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_return_value );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 516;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_y );
            tmp_args_element_name_4 = par_y;
            frame_955d1452398963720df10ad2a9dca013->m_frame.f_lineno = 516;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ones_like, call_args );
            }

            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 516;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 518;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_5 = par_lb;
        frame_955d1452398963720df10ad2a9dca013->m_frame.f_lineno = 518;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_isfinite, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 518;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lb_finite == NULL );
        var_lb_finite = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 519;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_6 = par_ub;
        frame_955d1452398963720df10ad2a9dca013->m_frame.f_lineno = 519;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_isfinite, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 519;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ub_finite == NULL );
        var_ub_finite = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT( par_y );
        tmp_called_instance_4 = par_y;
        frame_955d1452398963720df10ad2a9dca013->m_frame.f_lineno = 521;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_copy );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 521;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 522;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_5;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros_like );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 522;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_y );
        tmp_tuple_element_2 = par_y;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_8a6ce79bb59f45c062c2a0027a3a0c33 );
        frame_955d1452398963720df10ad2a9dca013->m_frame.f_lineno = 522;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 522;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_g_negative == NULL );
        var_g_negative = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_lb_finite );
        tmp_left_name_1 = var_lb_finite;
        CHECK_OBJECT( var_ub_finite );
        tmp_operand_name_1 = var_ub_finite;
        tmp_right_name_1 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 524;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 524;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mask == NULL );
        var_mask = tmp_assign_source_5;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 525;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_6;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_maximum );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 525;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_y );
        tmp_subscribed_name_1 = par_y;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_1 = var_mask;
        tmp_args_element_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 525;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = const_int_pos_2;
        CHECK_OBJECT( par_lb );
        tmp_subscribed_name_2 = par_lb;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_2 = var_mask;
        tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 525;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 525;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_y );
        tmp_subscribed_name_3 = par_y;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_3 = var_mask;
        tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 525;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 525;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_955d1452398963720df10ad2a9dca013->m_frame.f_lineno = 525;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 525;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_ass_subscribed_1 = var_x;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_1 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 525;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( par_y );
        tmp_subscribed_name_4 = par_y;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_4 = var_mask;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 526;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_lb );
        tmp_subscribed_name_5 = par_lb;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_5 = var_mask;
        tmp_compexpr_right_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 526;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 526;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_g_negative );
        tmp_ass_subscribed_2 = var_g_negative;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_2 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 526;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_4;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_lb_finite );
        tmp_operand_name_2 = var_lb_finite;
        tmp_left_name_4 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_2 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 528;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ub_finite );
        tmp_right_name_4 = var_ub_finite;
        tmp_assign_source_6 = BINARY_OPERATION( PyNumber_And, tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 528;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_mask;
            assert( old != NULL );
            var_mask = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_right_name_6;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 529;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_7;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_minimum );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 529;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_y );
        tmp_subscribed_name_6 = par_y;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_6 = var_mask;
        tmp_args_element_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 529;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_6 = const_int_pos_2;
        CHECK_OBJECT( par_ub );
        tmp_subscribed_name_7 = par_ub;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_7 = var_mask;
        tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_9 );

            exception_lineno = 529;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_6, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_9 );

            exception_lineno = 529;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_y );
        tmp_subscribed_name_8 = par_y;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_8 = var_mask;
        tmp_right_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_9 );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 529;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_9 );

            exception_lineno = 529;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_955d1452398963720df10ad2a9dca013->m_frame.f_lineno = 529;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_9 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 529;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_ass_subscribed_3 = var_x;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_3 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 529;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT( par_y );
        tmp_subscribed_name_9 = par_y;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_9 = var_mask;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 530;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ub );
        tmp_subscribed_name_10 = par_ub;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_10 = var_mask;
        tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 530;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_4 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 530;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_g_negative );
        tmp_ass_subscribed_4 = var_g_negative;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_4 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 530;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_lb_finite );
        tmp_left_name_7 = var_lb_finite;
        CHECK_OBJECT( var_ub_finite );
        tmp_right_name_7 = var_ub_finite;
        tmp_assign_source_7 = BINARY_OPERATION( PyNumber_And, tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 532;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_mask;
            assert( old != NULL );
            var_mask = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( par_ub );
        tmp_left_name_8 = par_ub;
        CHECK_OBJECT( par_lb );
        tmp_right_name_8 = par_lb;
        tmp_assign_source_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 533;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_d == NULL );
        var_d = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_left_name_9;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_subscript_name_11;
        PyObject *tmp_right_name_9;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_subscribed_name_13;
        PyObject *tmp_subscript_name_13;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 534;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_8;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_remainder );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 534;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_y );
        tmp_subscribed_name_11 = par_y;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_11 = var_mask;
        tmp_left_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 534;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_lb );
        tmp_subscribed_name_12 = par_lb;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_12 = var_mask;
        tmp_right_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 534;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 534;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_10 = const_int_pos_2;
        CHECK_OBJECT( var_d );
        tmp_subscribed_name_13 = var_d;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_13 = var_mask;
        tmp_right_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_11 );

            exception_lineno = 534;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_12 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_11 );

            exception_lineno = 534;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_955d1452398963720df10ad2a9dca013->m_frame.f_lineno = 534;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_11 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 534;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_t == NULL );
        var_t = tmp_assign_source_9;
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_left_name_11;
        PyObject *tmp_subscribed_name_14;
        PyObject *tmp_subscript_name_14;
        PyObject *tmp_right_name_11;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_12;
        PyObject *tmp_subscribed_name_15;
        PyObject *tmp_subscript_name_15;
        PyObject *tmp_right_name_13;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        CHECK_OBJECT( par_lb );
        tmp_subscribed_name_14 = par_lb;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_14 = var_mask;
        tmp_left_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 535;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_left_name_11 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 535;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_9;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_minimum );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 535;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_t );
        tmp_args_element_name_13 = var_t;
        tmp_left_name_13 = const_int_pos_2;
        CHECK_OBJECT( var_d );
        tmp_subscribed_name_15 = var_d;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_15 = var_mask;
        tmp_right_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 535;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_12 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_13, tmp_right_name_12 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_left_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 535;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_t );
        tmp_right_name_13 = var_t;
        tmp_args_element_name_14 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_12 );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 535;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_955d1452398963720df10ad2a9dca013->m_frame.f_lineno = 535;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_right_name_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 535;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_left_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_ass_subvalue_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 535;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_ass_subscribed_5 = var_x;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_5 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subvalue_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 535;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_subscribed_name_16;
        PyObject *tmp_subscript_name_16;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        CHECK_OBJECT( var_t );
        tmp_compexpr_left_3 = var_t;
        CHECK_OBJECT( var_d );
        tmp_subscribed_name_16 = var_d;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_16 = var_mask;
        tmp_compexpr_right_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 536;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_6 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_ass_subvalue_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 536;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_g_negative );
        tmp_ass_subscribed_6 = var_g_negative;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_6 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
        Py_DECREF( tmp_ass_subvalue_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 536;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_15;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 538;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_10;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_15 = par_y;
        frame_955d1452398963720df10ad2a9dca013->m_frame.f_lineno = 538;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_ones_like, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 538;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_g == NULL );
        var_g = tmp_assign_source_10;
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        tmp_ass_subvalue_7 = const_int_neg_1;
        CHECK_OBJECT( var_g );
        tmp_ass_subscribed_7 = var_g;
        CHECK_OBJECT( var_g_negative );
        tmp_ass_subscript_7 = var_g_negative;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 539;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_955d1452398963720df10ad2a9dca013 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_955d1452398963720df10ad2a9dca013 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_955d1452398963720df10ad2a9dca013 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_955d1452398963720df10ad2a9dca013, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_955d1452398963720df10ad2a9dca013->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_955d1452398963720df10ad2a9dca013, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_955d1452398963720df10ad2a9dca013,
        type_description_1,
        par_y,
        par_lb,
        par_ub,
        var_lb_finite,
        var_ub_finite,
        var_x,
        var_g_negative,
        var_mask,
        var_d,
        var_t,
        var_g
    );


    // Release cached frame.
    if ( frame_955d1452398963720df10ad2a9dca013 == cache_frame_955d1452398963720df10ad2a9dca013 )
    {
        Py_DECREF( frame_955d1452398963720df10ad2a9dca013 );
    }
    cache_frame_955d1452398963720df10ad2a9dca013 = NULL;

    assertFrameObject( frame_955d1452398963720df10ad2a9dca013 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( var_x );
        tmp_tuple_element_3 = var_x;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_g );
        tmp_tuple_element_3 = var_g;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_13_reflective_transformation );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    Py_XDECREF( var_lb_finite );
    var_lb_finite = NULL;

    Py_XDECREF( var_ub_finite );
    var_ub_finite = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_g_negative );
    var_g_negative = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    Py_XDECREF( var_lb_finite );
    var_lb_finite = NULL;

    Py_XDECREF( var_ub_finite );
    var_ub_finite = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_g_negative );
    var_g_negative = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_13_reflective_transformation );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_14_print_header_nonlinear( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_caae57cfa4ba50729e7b15dc183a13cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_caae57cfa4ba50729e7b15dc183a13cf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_caae57cfa4ba50729e7b15dc183a13cf, codeobj_caae57cfa4ba50729e7b15dc183a13cf, module_scipy$optimize$_lsq$common, 0 );
    frame_caae57cfa4ba50729e7b15dc183a13cf = cache_frame_caae57cfa4ba50729e7b15dc183a13cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_caae57cfa4ba50729e7b15dc183a13cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_caae57cfa4ba50729e7b15dc183a13cf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_1 != NULL );
        tmp_called_instance_1 = const_str_digest_6bd1e59a9681647dc9d66c6a8453f97f;
        frame_caae57cfa4ba50729e7b15dc183a13cf->m_frame.f_lineno = 548;
        tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS6( tmp_called_instance_1, const_str_plain_format, &PyTuple_GET_ITEM( const_tuple_f67380ef53e8a94d98804dd8fc507f2e_tuple, 0 ) );

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 548;

            goto frame_exception_exit_1;
        }
        frame_caae57cfa4ba50729e7b15dc183a13cf->m_frame.f_lineno = 548;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 548;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_caae57cfa4ba50729e7b15dc183a13cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_caae57cfa4ba50729e7b15dc183a13cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_caae57cfa4ba50729e7b15dc183a13cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_caae57cfa4ba50729e7b15dc183a13cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_caae57cfa4ba50729e7b15dc183a13cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_caae57cfa4ba50729e7b15dc183a13cf,
        type_description_1
    );


    // Release cached frame.
    if ( frame_caae57cfa4ba50729e7b15dc183a13cf == cache_frame_caae57cfa4ba50729e7b15dc183a13cf )
    {
        Py_DECREF( frame_caae57cfa4ba50729e7b15dc183a13cf );
    }
    cache_frame_caae57cfa4ba50729e7b15dc183a13cf = NULL;

    assertFrameObject( frame_caae57cfa4ba50729e7b15dc183a13cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_14_print_header_nonlinear );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_15_print_iteration_nonlinear( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_iteration = python_pars[ 0 ];
    PyObject *par_nfev = python_pars[ 1 ];
    PyObject *par_cost = python_pars[ 2 ];
    PyObject *par_cost_reduction = python_pars[ 3 ];
    PyObject *par_step_norm = python_pars[ 4 ];
    PyObject *par_optimality = python_pars[ 5 ];
    struct Nuitka_FrameObject *frame_478a47605f2685f197bae041878c7d04;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_478a47605f2685f197bae041878c7d04 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_478a47605f2685f197bae041878c7d04, codeobj_478a47605f2685f197bae041878c7d04, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_478a47605f2685f197bae041878c7d04 = cache_frame_478a47605f2685f197bae041878c7d04;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_478a47605f2685f197bae041878c7d04 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_478a47605f2685f197bae041878c7d04 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_cost_reduction );
        tmp_compexpr_left_1 = par_cost_reduction;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = const_str_digest_d90340207941874cd37d37d278720a1b;
            {
                PyObject *old = par_cost_reduction;
                assert( old != NULL );
                par_cost_reduction = tmp_assign_source_1;
                Py_INCREF( par_cost_reduction );
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_instance_1 = const_str_digest_ee8eb97216bddd0a23dd44f09b5b25c9;
            CHECK_OBJECT( par_cost_reduction );
            tmp_args_element_name_1 = par_cost_reduction;
            frame_478a47605f2685f197bae041878c7d04->m_frame.f_lineno = 558;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 558;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_cost_reduction;
                assert( old != NULL );
                par_cost_reduction = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_step_norm );
        tmp_compexpr_left_2 = par_step_norm;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_str_digest_d90340207941874cd37d37d278720a1b;
            {
                PyObject *old = par_step_norm;
                assert( old != NULL );
                par_step_norm = tmp_assign_source_3;
                Py_INCREF( par_step_norm );
                Py_DECREF( old );
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_instance_2 = const_str_digest_ee8eb97216bddd0a23dd44f09b5b25c9;
            CHECK_OBJECT( par_step_norm );
            tmp_args_element_name_2 = par_step_norm;
            frame_478a47605f2685f197bae041878c7d04->m_frame.f_lineno = 563;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_format, call_args );
            }

            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 563;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_step_norm;
                assert( old != NULL );
                par_step_norm = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_end_2:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_1 != NULL );
        tmp_called_instance_3 = const_str_digest_fe345a82e1a2299feaeb70ddcd7ea41e;
        CHECK_OBJECT( par_iteration );
        tmp_args_element_name_4 = par_iteration;
        CHECK_OBJECT( par_nfev );
        tmp_args_element_name_5 = par_nfev;
        CHECK_OBJECT( par_cost );
        tmp_args_element_name_6 = par_cost;
        CHECK_OBJECT( par_cost_reduction );
        tmp_args_element_name_7 = par_cost_reduction;
        CHECK_OBJECT( par_step_norm );
        tmp_args_element_name_8 = par_step_norm;
        CHECK_OBJECT( par_optimality );
        tmp_args_element_name_9 = par_optimality;
        frame_478a47605f2685f197bae041878c7d04->m_frame.f_lineno = 565;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS6( tmp_called_instance_3, const_str_plain_format, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 565;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_478a47605f2685f197bae041878c7d04->m_frame.f_lineno = 565;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 565;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_478a47605f2685f197bae041878c7d04 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_478a47605f2685f197bae041878c7d04 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_478a47605f2685f197bae041878c7d04, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_478a47605f2685f197bae041878c7d04->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_478a47605f2685f197bae041878c7d04, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_478a47605f2685f197bae041878c7d04,
        type_description_1,
        par_iteration,
        par_nfev,
        par_cost,
        par_cost_reduction,
        par_step_norm,
        par_optimality
    );


    // Release cached frame.
    if ( frame_478a47605f2685f197bae041878c7d04 == cache_frame_478a47605f2685f197bae041878c7d04 )
    {
        Py_DECREF( frame_478a47605f2685f197bae041878c7d04 );
    }
    cache_frame_478a47605f2685f197bae041878c7d04 = NULL;

    assertFrameObject( frame_478a47605f2685f197bae041878c7d04 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_15_print_iteration_nonlinear );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_iteration );
    Py_DECREF( par_iteration );
    par_iteration = NULL;

    CHECK_OBJECT( (PyObject *)par_nfev );
    Py_DECREF( par_nfev );
    par_nfev = NULL;

    CHECK_OBJECT( (PyObject *)par_cost );
    Py_DECREF( par_cost );
    par_cost = NULL;

    CHECK_OBJECT( (PyObject *)par_cost_reduction );
    Py_DECREF( par_cost_reduction );
    par_cost_reduction = NULL;

    CHECK_OBJECT( (PyObject *)par_step_norm );
    Py_DECREF( par_step_norm );
    par_step_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_optimality );
    Py_DECREF( par_optimality );
    par_optimality = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_iteration );
    Py_DECREF( par_iteration );
    par_iteration = NULL;

    CHECK_OBJECT( (PyObject *)par_nfev );
    Py_DECREF( par_nfev );
    par_nfev = NULL;

    CHECK_OBJECT( (PyObject *)par_cost );
    Py_DECREF( par_cost );
    par_cost = NULL;

    Py_XDECREF( par_cost_reduction );
    par_cost_reduction = NULL;

    Py_XDECREF( par_step_norm );
    par_step_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_optimality );
    Py_DECREF( par_optimality );
    par_optimality = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_15_print_iteration_nonlinear );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_16_print_header_linear( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_9e855997e16ec7e69a61d6e4cd93f24c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9e855997e16ec7e69a61d6e4cd93f24c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_9e855997e16ec7e69a61d6e4cd93f24c, codeobj_9e855997e16ec7e69a61d6e4cd93f24c, module_scipy$optimize$_lsq$common, 0 );
    frame_9e855997e16ec7e69a61d6e4cd93f24c = cache_frame_9e855997e16ec7e69a61d6e4cd93f24c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9e855997e16ec7e69a61d6e4cd93f24c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9e855997e16ec7e69a61d6e4cd93f24c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_1 != NULL );
        tmp_called_instance_1 = const_str_digest_1e2209c33e6aaf53d16d3f32fa5e4892;
        frame_9e855997e16ec7e69a61d6e4cd93f24c->m_frame.f_lineno = 571;
        tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS5( tmp_called_instance_1, const_str_plain_format, &PyTuple_GET_ITEM( const_tuple_d96b0bbab1449bf0121d9dcceeb607c3_tuple, 0 ) );

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 571;

            goto frame_exception_exit_1;
        }
        frame_9e855997e16ec7e69a61d6e4cd93f24c->m_frame.f_lineno = 571;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 571;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e855997e16ec7e69a61d6e4cd93f24c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e855997e16ec7e69a61d6e4cd93f24c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e855997e16ec7e69a61d6e4cd93f24c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e855997e16ec7e69a61d6e4cd93f24c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e855997e16ec7e69a61d6e4cd93f24c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9e855997e16ec7e69a61d6e4cd93f24c,
        type_description_1
    );


    // Release cached frame.
    if ( frame_9e855997e16ec7e69a61d6e4cd93f24c == cache_frame_9e855997e16ec7e69a61d6e4cd93f24c )
    {
        Py_DECREF( frame_9e855997e16ec7e69a61d6e4cd93f24c );
    }
    cache_frame_9e855997e16ec7e69a61d6e4cd93f24c = NULL;

    assertFrameObject( frame_9e855997e16ec7e69a61d6e4cd93f24c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_16_print_header_linear );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_17_print_iteration_linear( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_iteration = python_pars[ 0 ];
    PyObject *par_cost = python_pars[ 1 ];
    PyObject *par_cost_reduction = python_pars[ 2 ];
    PyObject *par_step_norm = python_pars[ 3 ];
    PyObject *par_optimality = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_4778e46a1508cfcb4c3bceabcf2c50dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4778e46a1508cfcb4c3bceabcf2c50dd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4778e46a1508cfcb4c3bceabcf2c50dd, codeobj_4778e46a1508cfcb4c3bceabcf2c50dd, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4778e46a1508cfcb4c3bceabcf2c50dd = cache_frame_4778e46a1508cfcb4c3bceabcf2c50dd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4778e46a1508cfcb4c3bceabcf2c50dd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4778e46a1508cfcb4c3bceabcf2c50dd ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_cost_reduction );
        tmp_compexpr_left_1 = par_cost_reduction;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = const_str_digest_d90340207941874cd37d37d278720a1b;
            {
                PyObject *old = par_cost_reduction;
                assert( old != NULL );
                par_cost_reduction = tmp_assign_source_1;
                Py_INCREF( par_cost_reduction );
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_instance_1 = const_str_digest_ee8eb97216bddd0a23dd44f09b5b25c9;
            CHECK_OBJECT( par_cost_reduction );
            tmp_args_element_name_1 = par_cost_reduction;
            frame_4778e46a1508cfcb4c3bceabcf2c50dd->m_frame.f_lineno = 581;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 581;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_cost_reduction;
                assert( old != NULL );
                par_cost_reduction = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_step_norm );
        tmp_compexpr_left_2 = par_step_norm;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_str_digest_d90340207941874cd37d37d278720a1b;
            {
                PyObject *old = par_step_norm;
                assert( old != NULL );
                par_step_norm = tmp_assign_source_3;
                Py_INCREF( par_step_norm );
                Py_DECREF( old );
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_instance_2 = const_str_digest_ee8eb97216bddd0a23dd44f09b5b25c9;
            CHECK_OBJECT( par_step_norm );
            tmp_args_element_name_2 = par_step_norm;
            frame_4778e46a1508cfcb4c3bceabcf2c50dd->m_frame.f_lineno = 586;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_format, call_args );
            }

            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 586;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_step_norm;
                assert( old != NULL );
                par_step_norm = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_end_2:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_1 != NULL );
        tmp_called_instance_3 = const_str_digest_34fe1fbaa93320b25551471d4425a8fb;
        CHECK_OBJECT( par_iteration );
        tmp_args_element_name_4 = par_iteration;
        CHECK_OBJECT( par_cost );
        tmp_args_element_name_5 = par_cost;
        CHECK_OBJECT( par_cost_reduction );
        tmp_args_element_name_6 = par_cost_reduction;
        CHECK_OBJECT( par_step_norm );
        tmp_args_element_name_7 = par_step_norm;
        CHECK_OBJECT( par_optimality );
        tmp_args_element_name_8 = par_optimality;
        frame_4778e46a1508cfcb4c3bceabcf2c50dd->m_frame.f_lineno = 588;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS5( tmp_called_instance_3, const_str_plain_format, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 588;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_4778e46a1508cfcb4c3bceabcf2c50dd->m_frame.f_lineno = 588;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 588;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4778e46a1508cfcb4c3bceabcf2c50dd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4778e46a1508cfcb4c3bceabcf2c50dd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4778e46a1508cfcb4c3bceabcf2c50dd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4778e46a1508cfcb4c3bceabcf2c50dd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4778e46a1508cfcb4c3bceabcf2c50dd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4778e46a1508cfcb4c3bceabcf2c50dd,
        type_description_1,
        par_iteration,
        par_cost,
        par_cost_reduction,
        par_step_norm,
        par_optimality
    );


    // Release cached frame.
    if ( frame_4778e46a1508cfcb4c3bceabcf2c50dd == cache_frame_4778e46a1508cfcb4c3bceabcf2c50dd )
    {
        Py_DECREF( frame_4778e46a1508cfcb4c3bceabcf2c50dd );
    }
    cache_frame_4778e46a1508cfcb4c3bceabcf2c50dd = NULL;

    assertFrameObject( frame_4778e46a1508cfcb4c3bceabcf2c50dd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_17_print_iteration_linear );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_iteration );
    Py_DECREF( par_iteration );
    par_iteration = NULL;

    CHECK_OBJECT( (PyObject *)par_cost );
    Py_DECREF( par_cost );
    par_cost = NULL;

    CHECK_OBJECT( (PyObject *)par_cost_reduction );
    Py_DECREF( par_cost_reduction );
    par_cost_reduction = NULL;

    CHECK_OBJECT( (PyObject *)par_step_norm );
    Py_DECREF( par_step_norm );
    par_step_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_optimality );
    Py_DECREF( par_optimality );
    par_optimality = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_iteration );
    Py_DECREF( par_iteration );
    par_iteration = NULL;

    CHECK_OBJECT( (PyObject *)par_cost );
    Py_DECREF( par_cost );
    par_cost = NULL;

    Py_XDECREF( par_cost_reduction );
    par_cost_reduction = NULL;

    Py_XDECREF( par_step_norm );
    par_step_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_optimality );
    Py_DECREF( par_optimality );
    par_optimality = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_17_print_iteration_linear );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_18_compute_grad( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_J = python_pars[ 0 ];
    PyObject *par_f = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_6013852cdb06dbc5323ecd54e6517be3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6013852cdb06dbc5323ecd54e6517be3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6013852cdb06dbc5323ecd54e6517be3, codeobj_6013852cdb06dbc5323ecd54e6517be3, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *) );
    frame_6013852cdb06dbc5323ecd54e6517be3 = cache_frame_6013852cdb06dbc5323ecd54e6517be3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6013852cdb06dbc5323ecd54e6517be3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6013852cdb06dbc5323ecd54e6517be3 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_J );
        tmp_isinstance_inst_1 = par_J;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_LinearOperator );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinearOperator );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinearOperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 597;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 597;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_J );
            tmp_called_instance_1 = par_J;
            CHECK_OBJECT( par_f );
            tmp_args_element_name_1 = par_f;
            frame_6013852cdb06dbc5323ecd54e6517be3->m_frame.f_lineno = 598;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_rmatvec, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 598;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_J );
            tmp_source_name_1 = par_J;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_T );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 600;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_f );
            tmp_args_element_name_2 = par_f;
            frame_6013852cdb06dbc5323ecd54e6517be3->m_frame.f_lineno = 600;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dot, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 600;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6013852cdb06dbc5323ecd54e6517be3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6013852cdb06dbc5323ecd54e6517be3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6013852cdb06dbc5323ecd54e6517be3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6013852cdb06dbc5323ecd54e6517be3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6013852cdb06dbc5323ecd54e6517be3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6013852cdb06dbc5323ecd54e6517be3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6013852cdb06dbc5323ecd54e6517be3,
        type_description_1,
        par_J,
        par_f
    );


    // Release cached frame.
    if ( frame_6013852cdb06dbc5323ecd54e6517be3 == cache_frame_6013852cdb06dbc5323ecd54e6517be3 )
    {
        Py_DECREF( frame_6013852cdb06dbc5323ecd54e6517be3 );
    }
    cache_frame_6013852cdb06dbc5323ecd54e6517be3 = NULL;

    assertFrameObject( frame_6013852cdb06dbc5323ecd54e6517be3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_18_compute_grad );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_J );
    Py_DECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_J );
    Py_DECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_18_compute_grad );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_19_compute_jac_scale( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_J = python_pars[ 0 ];
    PyObject *par_scale_inv_old = python_pars[ 1 ];
    PyObject *var_scale_inv = NULL;
    struct Nuitka_FrameObject *frame_cf03693f945bcb6bf9a5c71de76d79f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cf03693f945bcb6bf9a5c71de76d79f7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cf03693f945bcb6bf9a5c71de76d79f7, codeobj_cf03693f945bcb6bf9a5c71de76d79f7, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cf03693f945bcb6bf9a5c71de76d79f7 = cache_frame_cf03693f945bcb6bf9a5c71de76d79f7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cf03693f945bcb6bf9a5c71de76d79f7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cf03693f945bcb6bf9a5c71de76d79f7 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_issparse );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issparse );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "issparse" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 605;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_J );
        tmp_args_element_name_1 = par_J;
        frame_cf03693f945bcb6bf9a5c71de76d79f7->m_frame.f_lineno = 605;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 605;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 605;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 606;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 606;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_J );
            tmp_called_instance_2 = par_J;
            frame_cf03693f945bcb6bf9a5c71de76d79f7->m_frame.f_lineno = 606;
            tmp_source_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_power, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 606;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sum );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 606;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
            frame_cf03693f945bcb6bf9a5c71de76d79f7->m_frame.f_lineno = 606;
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 606;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_cf03693f945bcb6bf9a5c71de76d79f7->m_frame.f_lineno = 606;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 606;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_cf03693f945bcb6bf9a5c71de76d79f7->m_frame.f_lineno = 606;
            tmp_left_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ravel );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 606;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_float_0_5;
            tmp_assign_source_1 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 606;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_scale_inv == NULL );
            var_scale_inv = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_right_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 608;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_3;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sum );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 608;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_J );
            tmp_left_name_3 = par_J;
            tmp_right_name_2 = const_int_pos_2;
            tmp_tuple_element_1 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_2 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 608;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
            frame_cf03693f945bcb6bf9a5c71de76d79f7->m_frame.f_lineno = 608;
            tmp_left_name_2 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 608;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_3 = const_float_0_5;
            tmp_assign_source_2 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 608;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_scale_inv == NULL );
            var_scale_inv = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_scale_inv_old );
        tmp_compexpr_left_1 = par_scale_inv_old;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_ass_subvalue_1 = const_int_pos_1;
            CHECK_OBJECT( var_scale_inv );
            tmp_ass_subscribed_1 = var_scale_inv;
            CHECK_OBJECT( var_scale_inv );
            tmp_compexpr_left_2 = var_scale_inv;
            tmp_compexpr_right_2 = const_int_0;
            tmp_ass_subscript_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 611;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 611;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 613;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_4;
            CHECK_OBJECT( var_scale_inv );
            tmp_args_element_name_3 = var_scale_inv;
            CHECK_OBJECT( par_scale_inv_old );
            tmp_args_element_name_4 = par_scale_inv_old;
            frame_cf03693f945bcb6bf9a5c71de76d79f7->m_frame.f_lineno = 613;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_maximum, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 613;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_scale_inv;
                assert( old != NULL );
                var_scale_inv = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_end_2:;
    }
    {
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        tmp_left_name_4 = const_int_pos_1;
        if ( var_scale_inv == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale_inv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 615;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_4 = var_scale_inv;
        tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 615;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        if ( var_scale_inv == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale_inv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 615;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_scale_inv;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf03693f945bcb6bf9a5c71de76d79f7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf03693f945bcb6bf9a5c71de76d79f7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf03693f945bcb6bf9a5c71de76d79f7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cf03693f945bcb6bf9a5c71de76d79f7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cf03693f945bcb6bf9a5c71de76d79f7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cf03693f945bcb6bf9a5c71de76d79f7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cf03693f945bcb6bf9a5c71de76d79f7,
        type_description_1,
        par_J,
        par_scale_inv_old,
        var_scale_inv
    );


    // Release cached frame.
    if ( frame_cf03693f945bcb6bf9a5c71de76d79f7 == cache_frame_cf03693f945bcb6bf9a5c71de76d79f7 )
    {
        Py_DECREF( frame_cf03693f945bcb6bf9a5c71de76d79f7 );
    }
    cache_frame_cf03693f945bcb6bf9a5c71de76d79f7 = NULL;

    assertFrameObject( frame_cf03693f945bcb6bf9a5c71de76d79f7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_19_compute_jac_scale );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_J );
    Py_DECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_scale_inv_old );
    Py_DECREF( par_scale_inv_old );
    par_scale_inv_old = NULL;

    Py_XDECREF( var_scale_inv );
    var_scale_inv = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_J );
    Py_DECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_scale_inv_old );
    Py_DECREF( par_scale_inv_old );
    par_scale_inv_old = NULL;

    Py_XDECREF( var_scale_inv );
    var_scale_inv = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_19_compute_jac_scale );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_J = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_d = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *var_matvec = NULL;
    PyObject *var_matmat = NULL;
    PyObject *var_rmatvec = NULL;
    struct Nuitka_FrameObject *frame_a5fdd4b04a1fd34cf4f4eafb8a139775;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a5fdd4b04a1fd34cf4f4eafb8a139775 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a5fdd4b04a1fd34cf4f4eafb8a139775, codeobj_a5fdd4b04a1fd34cf4f4eafb8a139775, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a5fdd4b04a1fd34cf4f4eafb8a139775 = cache_frame_a5fdd4b04a1fd34cf4f4eafb8a139775;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a5fdd4b04a1fd34cf4f4eafb8a139775 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a5fdd4b04a1fd34cf4f4eafb8a139775 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_aslinearoperator );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aslinearoperator );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "aslinearoperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 620;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_J ) );
        tmp_args_element_name_1 = PyCell_GET( par_J );
        frame_a5fdd4b04a1fd34cf4f4eafb8a139775->m_frame.f_lineno = 620;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 620;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = PyCell_GET( par_J );
            PyCell_SET( par_J, tmp_assign_source_1 );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_1_matvec(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] = par_J;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] = par_d;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] );


        assert( var_matvec == NULL );
        var_matvec = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_2_matmat(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] = par_J;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] = par_d;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] );


        assert( var_matmat == NULL );
        var_matmat = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_3_rmatvec(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] = par_J;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[1] = par_d;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[1] );


        assert( var_rmatvec == NULL );
        var_rmatvec = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_LinearOperator );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinearOperator );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinearOperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 631;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( PyCell_GET( par_J ) );
        tmp_source_name_1 = PyCell_GET( par_J );
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 631;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_matvec;
        CHECK_OBJECT( var_matvec );
        tmp_dict_value_1 = var_matvec;
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_matmat;
        CHECK_OBJECT( var_matmat );
        tmp_dict_value_2 = var_matmat;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_rmatvec;
        CHECK_OBJECT( var_rmatvec );
        tmp_dict_value_3 = var_rmatvec;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_a5fdd4b04a1fd34cf4f4eafb8a139775->m_frame.f_lineno = 631;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 631;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a5fdd4b04a1fd34cf4f4eafb8a139775 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a5fdd4b04a1fd34cf4f4eafb8a139775 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a5fdd4b04a1fd34cf4f4eafb8a139775 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a5fdd4b04a1fd34cf4f4eafb8a139775, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a5fdd4b04a1fd34cf4f4eafb8a139775->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a5fdd4b04a1fd34cf4f4eafb8a139775, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a5fdd4b04a1fd34cf4f4eafb8a139775,
        type_description_1,
        par_J,
        par_d,
        var_matvec,
        var_matmat,
        var_rmatvec
    );


    // Release cached frame.
    if ( frame_a5fdd4b04a1fd34cf4f4eafb8a139775 == cache_frame_a5fdd4b04a1fd34cf4f4eafb8a139775 )
    {
        Py_DECREF( frame_a5fdd4b04a1fd34cf4f4eafb8a139775 );
    }
    cache_frame_a5fdd4b04a1fd34cf4f4eafb8a139775 = NULL;

    assertFrameObject( frame_a5fdd4b04a1fd34cf4f4eafb8a139775 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_J );
    Py_DECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)var_matvec );
    Py_DECREF( var_matvec );
    var_matvec = NULL;

    CHECK_OBJECT( (PyObject *)var_matmat );
    Py_DECREF( var_matmat );
    var_matmat = NULL;

    CHECK_OBJECT( (PyObject *)var_rmatvec );
    Py_DECREF( var_rmatvec );
    var_rmatvec = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_J );
    Py_DECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    Py_XDECREF( var_matvec );
    var_matvec = NULL;

    Py_XDECREF( var_matmat );
    var_matmat = NULL;

    Py_XDECREF( var_rmatvec );
    var_rmatvec = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_1_matvec( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_b006435d75eb4afb1b2f6f6b9d328ddf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b006435d75eb4afb1b2f6f6b9d328ddf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b006435d75eb4afb1b2f6f6b9d328ddf, codeobj_b006435d75eb4afb1b2f6f6b9d328ddf, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b006435d75eb4afb1b2f6f6b9d328ddf = cache_frame_b006435d75eb4afb1b2f6f6b9d328ddf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b006435d75eb4afb1b2f6f6b9d328ddf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b006435d75eb4afb1b2f6f6b9d328ddf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 623;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = PyCell_GET( self->m_closure[1] );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "J" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 623;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_b006435d75eb4afb1b2f6f6b9d328ddf->m_frame.f_lineno = 623;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_matvec, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 623;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 623;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b006435d75eb4afb1b2f6f6b9d328ddf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b006435d75eb4afb1b2f6f6b9d328ddf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b006435d75eb4afb1b2f6f6b9d328ddf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b006435d75eb4afb1b2f6f6b9d328ddf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b006435d75eb4afb1b2f6f6b9d328ddf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b006435d75eb4afb1b2f6f6b9d328ddf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b006435d75eb4afb1b2f6f6b9d328ddf,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_b006435d75eb4afb1b2f6f6b9d328ddf == cache_frame_b006435d75eb4afb1b2f6f6b9d328ddf )
    {
        Py_DECREF( frame_b006435d75eb4afb1b2f6f6b9d328ddf );
    }
    cache_frame_b006435d75eb4afb1b2f6f6b9d328ddf = NULL;

    assertFrameObject( frame_b006435d75eb4afb1b2f6f6b9d328ddf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_1_matvec );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_1_matvec );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_2_matmat( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_X = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_83b0a0cce3493acfc20c018e44e2031a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_83b0a0cce3493acfc20c018e44e2031a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_83b0a0cce3493acfc20c018e44e2031a, codeobj_83b0a0cce3493acfc20c018e44e2031a, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_83b0a0cce3493acfc20c018e44e2031a = cache_frame_83b0a0cce3493acfc20c018e44e2031a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_83b0a0cce3493acfc20c018e44e2031a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_83b0a0cce3493acfc20c018e44e2031a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 626;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_tuple_element_1 = const_slice_none_none_none;
        tmp_subscript_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_subscript_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 626;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_newaxis );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscript_name_1 );

            exception_lineno = 626;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_1 );
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 626;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "J" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 626;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_X );
        tmp_args_element_name_1 = par_X;
        frame_83b0a0cce3493acfc20c018e44e2031a->m_frame.f_lineno = 626;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_matmat, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 626;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 626;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83b0a0cce3493acfc20c018e44e2031a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_83b0a0cce3493acfc20c018e44e2031a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83b0a0cce3493acfc20c018e44e2031a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_83b0a0cce3493acfc20c018e44e2031a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_83b0a0cce3493acfc20c018e44e2031a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_83b0a0cce3493acfc20c018e44e2031a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_83b0a0cce3493acfc20c018e44e2031a,
        type_description_1,
        par_X,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_83b0a0cce3493acfc20c018e44e2031a == cache_frame_83b0a0cce3493acfc20c018e44e2031a )
    {
        Py_DECREF( frame_83b0a0cce3493acfc20c018e44e2031a );
    }
    cache_frame_83b0a0cce3493acfc20c018e44e2031a = NULL;

    assertFrameObject( frame_83b0a0cce3493acfc20c018e44e2031a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_2_matmat );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_2_matmat );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_3_rmatvec( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d08c197e13e2b93effd571e257201fc3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d08c197e13e2b93effd571e257201fc3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d08c197e13e2b93effd571e257201fc3, codeobj_d08c197e13e2b93effd571e257201fc3, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d08c197e13e2b93effd571e257201fc3 = cache_frame_d08c197e13e2b93effd571e257201fc3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d08c197e13e2b93effd571e257201fc3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d08c197e13e2b93effd571e257201fc3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_right_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "J" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 629;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rmatvec );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 629;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_called_instance_1 = par_x;
        frame_d08c197e13e2b93effd571e257201fc3->m_frame.f_lineno = 629;
        tmp_left_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ravel );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 629;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 629;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_args_element_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 629;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        frame_d08c197e13e2b93effd571e257201fc3->m_frame.f_lineno = 629;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 629;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d08c197e13e2b93effd571e257201fc3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d08c197e13e2b93effd571e257201fc3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d08c197e13e2b93effd571e257201fc3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d08c197e13e2b93effd571e257201fc3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d08c197e13e2b93effd571e257201fc3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d08c197e13e2b93effd571e257201fc3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d08c197e13e2b93effd571e257201fc3,
        type_description_1,
        par_x,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_d08c197e13e2b93effd571e257201fc3 == cache_frame_d08c197e13e2b93effd571e257201fc3 )
    {
        Py_DECREF( frame_d08c197e13e2b93effd571e257201fc3 );
    }
    cache_frame_d08c197e13e2b93effd571e257201fc3 = NULL;

    assertFrameObject( frame_d08c197e13e2b93effd571e257201fc3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_3_rmatvec );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_3_rmatvec );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_J = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_d = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *var_matvec = NULL;
    PyObject *var_matmat = NULL;
    PyObject *var_rmatvec = NULL;
    struct Nuitka_FrameObject *frame_f772ab1d4d8a1aa125cd34609acbf1ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f772ab1d4d8a1aa125cd34609acbf1ca = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f772ab1d4d8a1aa125cd34609acbf1ca, codeobj_f772ab1d4d8a1aa125cd34609acbf1ca, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f772ab1d4d8a1aa125cd34609acbf1ca = cache_frame_f772ab1d4d8a1aa125cd34609acbf1ca;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f772ab1d4d8a1aa125cd34609acbf1ca );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f772ab1d4d8a1aa125cd34609acbf1ca ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_aslinearoperator );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aslinearoperator );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "aslinearoperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 637;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_J ) );
        tmp_args_element_name_1 = PyCell_GET( par_J );
        frame_f772ab1d4d8a1aa125cd34609acbf1ca->m_frame.f_lineno = 637;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 637;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = PyCell_GET( par_J );
            PyCell_SET( par_J, tmp_assign_source_1 );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_1_matvec(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] = par_J;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] = par_d;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] );


        assert( var_matvec == NULL );
        var_matvec = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_2_matmat(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] = par_J;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] = par_d;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] );


        assert( var_matmat == NULL );
        var_matmat = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_3_rmatvec(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] = par_J;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[1] = par_d;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[1] );


        assert( var_rmatvec == NULL );
        var_rmatvec = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_LinearOperator );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinearOperator );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinearOperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 648;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( PyCell_GET( par_J ) );
        tmp_source_name_1 = PyCell_GET( par_J );
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 648;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_matvec;
        CHECK_OBJECT( var_matvec );
        tmp_dict_value_1 = var_matvec;
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_matmat;
        CHECK_OBJECT( var_matmat );
        tmp_dict_value_2 = var_matmat;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_rmatvec;
        CHECK_OBJECT( var_rmatvec );
        tmp_dict_value_3 = var_rmatvec;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_f772ab1d4d8a1aa125cd34609acbf1ca->m_frame.f_lineno = 648;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 648;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f772ab1d4d8a1aa125cd34609acbf1ca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f772ab1d4d8a1aa125cd34609acbf1ca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f772ab1d4d8a1aa125cd34609acbf1ca );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f772ab1d4d8a1aa125cd34609acbf1ca, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f772ab1d4d8a1aa125cd34609acbf1ca->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f772ab1d4d8a1aa125cd34609acbf1ca, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f772ab1d4d8a1aa125cd34609acbf1ca,
        type_description_1,
        par_J,
        par_d,
        var_matvec,
        var_matmat,
        var_rmatvec
    );


    // Release cached frame.
    if ( frame_f772ab1d4d8a1aa125cd34609acbf1ca == cache_frame_f772ab1d4d8a1aa125cd34609acbf1ca )
    {
        Py_DECREF( frame_f772ab1d4d8a1aa125cd34609acbf1ca );
    }
    cache_frame_f772ab1d4d8a1aa125cd34609acbf1ca = NULL;

    assertFrameObject( frame_f772ab1d4d8a1aa125cd34609acbf1ca );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_J );
    Py_DECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)var_matvec );
    Py_DECREF( var_matvec );
    var_matvec = NULL;

    CHECK_OBJECT( (PyObject *)var_matmat );
    Py_DECREF( var_matmat );
    var_matmat = NULL;

    CHECK_OBJECT( (PyObject *)var_rmatvec );
    Py_DECREF( var_rmatvec );
    var_rmatvec = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_J );
    Py_DECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    Py_XDECREF( var_matvec );
    var_matvec = NULL;

    Py_XDECREF( var_matmat );
    var_matmat = NULL;

    Py_XDECREF( var_rmatvec );
    var_rmatvec = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_1_matvec( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_6a0686b0c918d85a0825719ce4e5334c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6a0686b0c918d85a0825719ce4e5334c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6a0686b0c918d85a0825719ce4e5334c, codeobj_6a0686b0c918d85a0825719ce4e5334c, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6a0686b0c918d85a0825719ce4e5334c = cache_frame_6a0686b0c918d85a0825719ce4e5334c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6a0686b0c918d85a0825719ce4e5334c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6a0686b0c918d85a0825719ce4e5334c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "J" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 640;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_matvec );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 640;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 640;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_6a0686b0c918d85a0825719ce4e5334c->m_frame.f_lineno = 640;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ravel, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 640;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 640;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_args_element_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 640;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        frame_6a0686b0c918d85a0825719ce4e5334c->m_frame.f_lineno = 640;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 640;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a0686b0c918d85a0825719ce4e5334c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a0686b0c918d85a0825719ce4e5334c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a0686b0c918d85a0825719ce4e5334c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6a0686b0c918d85a0825719ce4e5334c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6a0686b0c918d85a0825719ce4e5334c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6a0686b0c918d85a0825719ce4e5334c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6a0686b0c918d85a0825719ce4e5334c,
        type_description_1,
        par_x,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_6a0686b0c918d85a0825719ce4e5334c == cache_frame_6a0686b0c918d85a0825719ce4e5334c )
    {
        Py_DECREF( frame_6a0686b0c918d85a0825719ce4e5334c );
    }
    cache_frame_6a0686b0c918d85a0825719ce4e5334c = NULL;

    assertFrameObject( frame_6a0686b0c918d85a0825719ce4e5334c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_1_matvec );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_1_matvec );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_2_matmat( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_X = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_468357d589e999c65475fc0ebb2bda82;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_468357d589e999c65475fc0ebb2bda82 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_468357d589e999c65475fc0ebb2bda82, codeobj_468357d589e999c65475fc0ebb2bda82, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_468357d589e999c65475fc0ebb2bda82 = cache_frame_468357d589e999c65475fc0ebb2bda82;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_468357d589e999c65475fc0ebb2bda82 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_468357d589e999c65475fc0ebb2bda82 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "J" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 643;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_matmat );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 643;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_X );
        tmp_left_name_1 = par_X;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 643;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_tuple_element_1 = const_slice_none_none_none;
        tmp_subscript_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 643;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_newaxis );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_subscript_name_1 );

            exception_lineno = 643;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_1 );
        tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 643;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 643;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        frame_468357d589e999c65475fc0ebb2bda82->m_frame.f_lineno = 643;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 643;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_468357d589e999c65475fc0ebb2bda82 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_468357d589e999c65475fc0ebb2bda82 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_468357d589e999c65475fc0ebb2bda82 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_468357d589e999c65475fc0ebb2bda82, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_468357d589e999c65475fc0ebb2bda82->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_468357d589e999c65475fc0ebb2bda82, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_468357d589e999c65475fc0ebb2bda82,
        type_description_1,
        par_X,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_468357d589e999c65475fc0ebb2bda82 == cache_frame_468357d589e999c65475fc0ebb2bda82 )
    {
        Py_DECREF( frame_468357d589e999c65475fc0ebb2bda82 );
    }
    cache_frame_468357d589e999c65475fc0ebb2bda82 = NULL;

    assertFrameObject( frame_468357d589e999c65475fc0ebb2bda82 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_2_matmat );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_2_matmat );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_3_rmatvec( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_b20408b6d89ece4f159debb759e19b69;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b20408b6d89ece4f159debb759e19b69 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b20408b6d89ece4f159debb759e19b69, codeobj_b20408b6d89ece4f159debb759e19b69, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b20408b6d89ece4f159debb759e19b69 = cache_frame_b20408b6d89ece4f159debb759e19b69;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b20408b6d89ece4f159debb759e19b69 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b20408b6d89ece4f159debb759e19b69 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 646;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = PyCell_GET( self->m_closure[1] );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "J" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 646;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_b20408b6d89ece4f159debb759e19b69->m_frame.f_lineno = 646;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_rmatvec, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 646;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 646;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b20408b6d89ece4f159debb759e19b69 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b20408b6d89ece4f159debb759e19b69 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b20408b6d89ece4f159debb759e19b69 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b20408b6d89ece4f159debb759e19b69, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b20408b6d89ece4f159debb759e19b69->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b20408b6d89ece4f159debb759e19b69, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b20408b6d89ece4f159debb759e19b69,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_b20408b6d89ece4f159debb759e19b69 == cache_frame_b20408b6d89ece4f159debb759e19b69 )
    {
        Py_DECREF( frame_b20408b6d89ece4f159debb759e19b69 );
    }
    cache_frame_b20408b6d89ece4f159debb759e19b69 = NULL;

    assertFrameObject( frame_b20408b6d89ece4f159debb759e19b69 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_3_rmatvec );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_3_rmatvec );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_J = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_diag = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *var_m = PyCell_EMPTY();
    PyObject *var_n = NULL;
    PyObject *var_matvec = NULL;
    PyObject *var_rmatvec = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_525b6069b5fbb3d6122dad874c097162;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_525b6069b5fbb3d6122dad874c097162 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_525b6069b5fbb3d6122dad874c097162, codeobj_525b6069b5fbb3d6122dad874c097162, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_525b6069b5fbb3d6122dad874c097162 = cache_frame_525b6069b5fbb3d6122dad874c097162;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_525b6069b5fbb3d6122dad874c097162 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_525b6069b5fbb3d6122dad874c097162 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_aslinearoperator );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aslinearoperator );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "aslinearoperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 660;
            type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_J ) );
        tmp_args_element_name_1 = PyCell_GET( par_J );
        frame_525b6069b5fbb3d6122dad874c097162->m_frame.f_lineno = 660;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 660;
            type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = PyCell_GET( par_J );
            PyCell_SET( par_J, tmp_assign_source_1 );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( PyCell_GET( par_J ) );
        tmp_source_name_1 = PyCell_GET( par_J );
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 661;
            type_description_1 = "cccooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 661;
            type_description_1 = "cccooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "cccooo";
            exception_lineno = 661;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "cccooo";
            exception_lineno = 661;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "cccooo";
                    exception_lineno = 661;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "cccooo";
            exception_lineno = 661;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert( PyCell_GET( var_m ) == NULL );
        Py_INCREF( tmp_assign_source_5 );
        PyCell_SET( var_m, tmp_assign_source_5 );

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_n = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator$$$function_1_matvec(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] = par_J;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[1] = par_diag;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[1] );


        assert( var_matvec == NULL );
        var_matvec = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator$$$function_2_rmatvec(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] = par_J;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[1] = par_diag;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[2] = var_m;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[2] );


        assert( var_rmatvec == NULL );
        var_rmatvec = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_LinearOperator );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinearOperator );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinearOperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 671;
            type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( PyCell_GET( var_m ) );
        tmp_left_name_1 = PyCell_GET( var_m );
        CHECK_OBJECT( var_n );
        tmp_right_name_1 = var_n;
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 671;
            type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_n );
        tmp_tuple_element_2 = var_n;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_matvec;
        CHECK_OBJECT( var_matvec );
        tmp_dict_value_1 = var_matvec;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_rmatvec;
        CHECK_OBJECT( var_rmatvec );
        tmp_dict_value_2 = var_rmatvec;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_525b6069b5fbb3d6122dad874c097162->m_frame.f_lineno = 671;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 671;
            type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_525b6069b5fbb3d6122dad874c097162 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_525b6069b5fbb3d6122dad874c097162 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_525b6069b5fbb3d6122dad874c097162 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_525b6069b5fbb3d6122dad874c097162, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_525b6069b5fbb3d6122dad874c097162->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_525b6069b5fbb3d6122dad874c097162, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_525b6069b5fbb3d6122dad874c097162,
        type_description_1,
        par_J,
        par_diag,
        var_m,
        var_n,
        var_matvec,
        var_rmatvec
    );


    // Release cached frame.
    if ( frame_525b6069b5fbb3d6122dad874c097162 == cache_frame_525b6069b5fbb3d6122dad874c097162 )
    {
        Py_DECREF( frame_525b6069b5fbb3d6122dad874c097162 );
    }
    cache_frame_525b6069b5fbb3d6122dad874c097162 = NULL;

    assertFrameObject( frame_525b6069b5fbb3d6122dad874c097162 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_J );
    Py_DECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_diag );
    Py_DECREF( par_diag );
    par_diag = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_matvec );
    Py_DECREF( var_matvec );
    var_matvec = NULL;

    CHECK_OBJECT( (PyObject *)var_rmatvec );
    Py_DECREF( var_rmatvec );
    var_rmatvec = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_J );
    Py_DECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_diag );
    Py_DECREF( par_diag );
    par_diag = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_matvec );
    var_matvec = NULL;

    Py_XDECREF( var_rmatvec );
    var_rmatvec = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator$$$function_1_matvec( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d8a185f5baa89605be90d126967332fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d8a185f5baa89605be90d126967332fa = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d8a185f5baa89605be90d126967332fa, codeobj_d8a185f5baa89605be90d126967332fa, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d8a185f5baa89605be90d126967332fa = cache_frame_d8a185f5baa89605be90d126967332fa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d8a185f5baa89605be90d126967332fa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d8a185f5baa89605be90d126967332fa ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 664;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hstack );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 664;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "J" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 664;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_d8a185f5baa89605be90d126967332fa->m_frame.f_lineno = 664;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_matvec, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 664;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "diag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 664;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( par_x );
        tmp_right_name_1 = par_x;
        tmp_tuple_element_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 664;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
        frame_d8a185f5baa89605be90d126967332fa->m_frame.f_lineno = 664;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 664;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8a185f5baa89605be90d126967332fa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8a185f5baa89605be90d126967332fa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8a185f5baa89605be90d126967332fa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d8a185f5baa89605be90d126967332fa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d8a185f5baa89605be90d126967332fa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d8a185f5baa89605be90d126967332fa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d8a185f5baa89605be90d126967332fa,
        type_description_1,
        par_x,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_d8a185f5baa89605be90d126967332fa == cache_frame_d8a185f5baa89605be90d126967332fa )
    {
        Py_DECREF( frame_d8a185f5baa89605be90d126967332fa );
    }
    cache_frame_d8a185f5baa89605be90d126967332fa = NULL;

    assertFrameObject( frame_d8a185f5baa89605be90d126967332fa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator$$$function_1_matvec );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator$$$function_1_matvec );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator$$$function_2_rmatvec( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_x1 = NULL;
    PyObject *var_x2 = NULL;
    struct Nuitka_FrameObject *frame_feee58789f5b2193312c4c55e6b6f9c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_feee58789f5b2193312c4c55e6b6f9c4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_feee58789f5b2193312c4c55e6b6f9c4, codeobj_feee58789f5b2193312c4c55e6b6f9c4, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_feee58789f5b2193312c4c55e6b6f9c4 = cache_frame_feee58789f5b2193312c4c55e6b6f9c4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_feee58789f5b2193312c4c55e6b6f9c4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_feee58789f5b2193312c4c55e6b6f9c4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_1 = par_x;
        tmp_start_name_1 = Py_None;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "m" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 667;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_stop_name_1 = PyCell_GET( self->m_closure[2] );
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 667;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        assert( var_x1 == NULL );
        var_x1 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_2 = par_x;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "m" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 668;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_start_name_2 = PyCell_GET( self->m_closure[2] );
        tmp_stop_name_2 = Py_None;
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 668;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        assert( var_x2 == NULL );
        var_x2 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "J" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 669;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( var_x1 );
        tmp_args_element_name_1 = var_x1;
        frame_feee58789f5b2193312c4c55e6b6f9c4->m_frame.f_lineno = 669;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_rmatvec, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 669;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "diag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 669;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( var_x2 );
        tmp_right_name_2 = var_x2;
        tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 669;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 669;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_feee58789f5b2193312c4c55e6b6f9c4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_feee58789f5b2193312c4c55e6b6f9c4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_feee58789f5b2193312c4c55e6b6f9c4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_feee58789f5b2193312c4c55e6b6f9c4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_feee58789f5b2193312c4c55e6b6f9c4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_feee58789f5b2193312c4c55e6b6f9c4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_feee58789f5b2193312c4c55e6b6f9c4,
        type_description_1,
        par_x,
        var_x1,
        var_x2,
        self->m_closure[2],
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_feee58789f5b2193312c4c55e6b6f9c4 == cache_frame_feee58789f5b2193312c4c55e6b6f9c4 )
    {
        Py_DECREF( frame_feee58789f5b2193312c4c55e6b6f9c4 );
    }
    cache_frame_feee58789f5b2193312c4c55e6b6f9c4 = NULL;

    assertFrameObject( frame_feee58789f5b2193312c4c55e6b6f9c4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator$$$function_2_rmatvec );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_x1 );
    Py_DECREF( var_x1 );
    var_x1 = NULL;

    CHECK_OBJECT( (PyObject *)var_x2 );
    Py_DECREF( var_x2 );
    var_x2 = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_x1 );
    var_x1 = NULL;

    Py_XDECREF( var_x2 );
    var_x2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator$$$function_2_rmatvec );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_23_right_multiply( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_J = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    PyObject *par_copy = python_pars[ 2 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_8ea186882a012e1f99489afa3d7ffb9b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8ea186882a012e1f99489afa3d7ffb9b = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8ea186882a012e1f99489afa3d7ffb9b, codeobj_8ea186882a012e1f99489afa3d7ffb9b, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8ea186882a012e1f99489afa3d7ffb9b = cache_frame_8ea186882a012e1f99489afa3d7ffb9b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8ea186882a012e1f99489afa3d7ffb9b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8ea186882a012e1f99489afa3d7ffb9b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_copy );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_copy );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 679;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT( par_J );
        tmp_isinstance_inst_1 = par_J;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_LinearOperator );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinearOperator );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinearOperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 679;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 679;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 679;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_J );
            tmp_called_instance_1 = par_J;
            frame_8ea186882a012e1f99489afa3d7ffb9b->m_frame.f_lineno = 680;
            tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 680;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_J;
                assert( old != NULL );
                par_J = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_issparse );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issparse );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "issparse" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 682;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_J );
        tmp_args_element_name_1 = par_J;
        frame_8ea186882a012e1f99489afa3d7ffb9b->m_frame.f_lineno = 682;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 682;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 682;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_J );
            tmp_source_name_1 = par_J;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_data );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 683;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_1__start == NULL );
            tmp_inplace_assign_attr_1__start = tmp_assign_source_2;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            CHECK_OBJECT( par_d );
            tmp_source_name_2 = par_d;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_take );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 683;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_J );
            tmp_source_name_3 = par_J;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_indices );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 683;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_args_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_c18ee4cbbadb9ffc11f80b8f287d831e );
            frame_8ea186882a012e1f99489afa3d7ffb9b->m_frame.f_lineno = 683;
            tmp_right_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 683;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 683;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert( tmp_inplace_assign_attr_1__end == NULL );
            tmp_inplace_assign_attr_1__end = tmp_assign_source_3;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( par_J );
            tmp_assattr_target_1 = par_J;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_data, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 683;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( par_J );
            tmp_isinstance_inst_2 = par_J;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_LinearOperator );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinearOperator );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinearOperator" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 684;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_2 = tmp_mvar_value_3;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 684;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_args_element_name_3;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_right_multiplied_operator );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_right_multiplied_operator );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "right_multiplied_operator" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 685;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_4;
                CHECK_OBJECT( par_J );
                tmp_args_element_name_2 = par_J;
                CHECK_OBJECT( par_d );
                tmp_args_element_name_3 = par_d;
                frame_8ea186882a012e1f99489afa3d7ffb9b->m_frame.f_lineno = 685;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 685;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_J;
                    assert( old != NULL );
                    par_J = tmp_assign_source_4;
                    Py_DECREF( old );
                }

            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                CHECK_OBJECT( par_J );
                tmp_left_name_2 = par_J;
                CHECK_OBJECT( par_d );
                tmp_right_name_2 = par_d;
                tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 687;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_5 = tmp_left_name_2;
                par_J = tmp_assign_source_5;

            }
            branch_end_3:;
        }
        branch_end_2:;
    }
    if ( par_J == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 689;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_J;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ea186882a012e1f99489afa3d7ffb9b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ea186882a012e1f99489afa3d7ffb9b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ea186882a012e1f99489afa3d7ffb9b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8ea186882a012e1f99489afa3d7ffb9b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8ea186882a012e1f99489afa3d7ffb9b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8ea186882a012e1f99489afa3d7ffb9b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8ea186882a012e1f99489afa3d7ffb9b,
        type_description_1,
        par_J,
        par_d,
        par_copy
    );


    // Release cached frame.
    if ( frame_8ea186882a012e1f99489afa3d7ffb9b == cache_frame_8ea186882a012e1f99489afa3d7ffb9b )
    {
        Py_DECREF( frame_8ea186882a012e1f99489afa3d7ffb9b );
    }
    cache_frame_8ea186882a012e1f99489afa3d7ffb9b = NULL;

    assertFrameObject( frame_8ea186882a012e1f99489afa3d7ffb9b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_23_right_multiply );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_23_right_multiply );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_24_left_multiply( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_J = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    PyObject *par_copy = python_pars[ 2 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_ac05c66635934a512c2dbcfab5adc43e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ac05c66635934a512c2dbcfab5adc43e = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ac05c66635934a512c2dbcfab5adc43e, codeobj_ac05c66635934a512c2dbcfab5adc43e, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ac05c66635934a512c2dbcfab5adc43e = cache_frame_ac05c66635934a512c2dbcfab5adc43e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ac05c66635934a512c2dbcfab5adc43e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ac05c66635934a512c2dbcfab5adc43e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_copy );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_copy );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 697;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT( par_J );
        tmp_isinstance_inst_1 = par_J;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_LinearOperator );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinearOperator );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinearOperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 697;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 697;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 697;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_J );
            tmp_called_instance_1 = par_J;
            frame_ac05c66635934a512c2dbcfab5adc43e->m_frame.f_lineno = 698;
            tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 698;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_J;
                assert( old != NULL );
                par_J = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_issparse );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issparse );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "issparse" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 700;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_J );
        tmp_args_element_name_1 = par_J;
        frame_ac05c66635934a512c2dbcfab5adc43e->m_frame.f_lineno = 700;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 700;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 700;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_J );
            tmp_source_name_1 = par_J;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_data );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 701;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_1__start == NULL );
            tmp_inplace_assign_attr_1__start = tmp_assign_source_2;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 701;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_repeat );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 701;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_d );
            tmp_args_element_name_2 = par_d;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 701;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_source_name_3 = tmp_mvar_value_4;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_diff );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 701;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_J );
            tmp_source_name_4 = par_J;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_indptr );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 701;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_ac05c66635934a512c2dbcfab5adc43e->m_frame.f_lineno = 701;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 701;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_ac05c66635934a512c2dbcfab5adc43e->m_frame.f_lineno = 701;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 701;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 701;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert( tmp_inplace_assign_attr_1__end == NULL );
            tmp_inplace_assign_attr_1__end = tmp_assign_source_3;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( par_J );
            tmp_assattr_target_1 = par_J;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_data, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 701;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            PyObject *tmp_mvar_value_5;
            CHECK_OBJECT( par_J );
            tmp_isinstance_inst_2 = par_J;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_LinearOperator );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinearOperator );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinearOperator" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 702;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_2 = tmp_mvar_value_5;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 702;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_left_multiplied_operator );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_left_multiplied_operator );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "left_multiplied_operator" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 703;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_6;
                CHECK_OBJECT( par_J );
                tmp_args_element_name_5 = par_J;
                CHECK_OBJECT( par_d );
                tmp_args_element_name_6 = par_d;
                frame_ac05c66635934a512c2dbcfab5adc43e->m_frame.f_lineno = 703;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                }

                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 703;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_J;
                    assert( old != NULL );
                    par_J = tmp_assign_source_4;
                    Py_DECREF( old );
                }

            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_7;
                CHECK_OBJECT( par_J );
                tmp_left_name_2 = par_J;
                CHECK_OBJECT( par_d );
                tmp_subscribed_name_1 = par_d;
                tmp_tuple_element_1 = const_slice_none_none_none;
                tmp_subscript_name_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_1 );
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_7 == NULL )
                {
                    Py_DECREF( tmp_subscript_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 705;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_5 = tmp_mvar_value_7;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_newaxis );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscript_name_1 );

                    exception_lineno = 705;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_1 );
                tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscript_name_1 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 705;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 705;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_5 = tmp_left_name_2;
                par_J = tmp_assign_source_5;

            }
            branch_end_3:;
        }
        branch_end_2:;
    }
    if ( par_J == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 707;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_J;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac05c66635934a512c2dbcfab5adc43e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac05c66635934a512c2dbcfab5adc43e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac05c66635934a512c2dbcfab5adc43e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ac05c66635934a512c2dbcfab5adc43e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ac05c66635934a512c2dbcfab5adc43e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ac05c66635934a512c2dbcfab5adc43e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ac05c66635934a512c2dbcfab5adc43e,
        type_description_1,
        par_J,
        par_d,
        par_copy
    );


    // Release cached frame.
    if ( frame_ac05c66635934a512c2dbcfab5adc43e == cache_frame_ac05c66635934a512c2dbcfab5adc43e )
    {
        Py_DECREF( frame_ac05c66635934a512c2dbcfab5adc43e );
    }
    cache_frame_ac05c66635934a512c2dbcfab5adc43e = NULL;

    assertFrameObject( frame_ac05c66635934a512c2dbcfab5adc43e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_24_left_multiply );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_24_left_multiply );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_25_check_termination( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dF = python_pars[ 0 ];
    PyObject *par_F = python_pars[ 1 ];
    PyObject *par_dx_norm = python_pars[ 2 ];
    PyObject *par_x_norm = python_pars[ 3 ];
    PyObject *par_ratio = python_pars[ 4 ];
    PyObject *par_ftol = python_pars[ 5 ];
    PyObject *par_xtol = python_pars[ 6 ];
    PyObject *var_ftol_satisfied = NULL;
    PyObject *var_xtol_satisfied = NULL;
    struct Nuitka_FrameObject *frame_6a246e883927291c02dc5c9e20c709fb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6a246e883927291c02dc5c9e20c709fb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6a246e883927291c02dc5c9e20c709fb, codeobj_6a246e883927291c02dc5c9e20c709fb, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6a246e883927291c02dc5c9e20c709fb = cache_frame_6a246e883927291c02dc5c9e20c709fb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6a246e883927291c02dc5c9e20c709fb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6a246e883927291c02dc5c9e20c709fb ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_dF );
        tmp_compexpr_left_1 = par_dF;
        CHECK_OBJECT( par_ftol );
        tmp_left_name_1 = par_ftol;
        CHECK_OBJECT( par_F );
        tmp_right_name_1 = par_F;
        tmp_compexpr_right_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 712;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_and_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 712;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_1 );

            exception_lineno = 712;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF( tmp_and_left_value_1 );
        CHECK_OBJECT( par_ratio );
        tmp_compexpr_left_2 = par_ratio;
        tmp_compexpr_right_2 = const_float_0_25;
        tmp_and_right_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_and_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 712;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assign_source_1 = tmp_and_left_value_1;
        and_end_1:;
        assert( var_ftol_satisfied == NULL );
        var_ftol_satisfied = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_dx_norm );
        tmp_compexpr_left_3 = par_dx_norm;
        CHECK_OBJECT( par_xtol );
        tmp_left_name_2 = par_xtol;
        CHECK_OBJECT( par_xtol );
        tmp_left_name_3 = par_xtol;
        CHECK_OBJECT( par_x_norm );
        tmp_right_name_3 = par_x_norm;
        tmp_right_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 713;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 713;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 713;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_xtol_satisfied == NULL );
        var_xtol_satisfied = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_ftol_satisfied );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_ftol_satisfied );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 715;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT( var_xtol_satisfied );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_xtol_satisfied );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 715;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_1 = tmp_and_left_value_2;
        and_end_2:;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = const_int_pos_4;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_3;
            CHECK_OBJECT( var_ftol_satisfied );
            tmp_truth_name_3 = CHECK_IF_TRUE( var_ftol_satisfied );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 717;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            tmp_return_value = const_int_pos_2;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                int tmp_truth_name_4;
                CHECK_OBJECT( var_xtol_satisfied );
                tmp_truth_name_4 = CHECK_IF_TRUE( var_xtol_satisfied );
                if ( tmp_truth_name_4 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 719;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_3 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_3;
                }
                else
                {
                    goto branch_no_3;
                }
                branch_yes_3:;
                tmp_return_value = const_int_pos_3;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
                goto branch_end_3;
                branch_no_3:;
                tmp_return_value = Py_None;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a246e883927291c02dc5c9e20c709fb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a246e883927291c02dc5c9e20c709fb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a246e883927291c02dc5c9e20c709fb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6a246e883927291c02dc5c9e20c709fb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6a246e883927291c02dc5c9e20c709fb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6a246e883927291c02dc5c9e20c709fb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6a246e883927291c02dc5c9e20c709fb,
        type_description_1,
        par_dF,
        par_F,
        par_dx_norm,
        par_x_norm,
        par_ratio,
        par_ftol,
        par_xtol,
        var_ftol_satisfied,
        var_xtol_satisfied
    );


    // Release cached frame.
    if ( frame_6a246e883927291c02dc5c9e20c709fb == cache_frame_6a246e883927291c02dc5c9e20c709fb )
    {
        Py_DECREF( frame_6a246e883927291c02dc5c9e20c709fb );
    }
    cache_frame_6a246e883927291c02dc5c9e20c709fb = NULL;

    assertFrameObject( frame_6a246e883927291c02dc5c9e20c709fb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_25_check_termination );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_dF );
    Py_DECREF( par_dF );
    par_dF = NULL;

    CHECK_OBJECT( (PyObject *)par_F );
    Py_DECREF( par_F );
    par_F = NULL;

    CHECK_OBJECT( (PyObject *)par_dx_norm );
    Py_DECREF( par_dx_norm );
    par_dx_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_x_norm );
    Py_DECREF( par_x_norm );
    par_x_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_ratio );
    Py_DECREF( par_ratio );
    par_ratio = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)var_ftol_satisfied );
    Py_DECREF( var_ftol_satisfied );
    var_ftol_satisfied = NULL;

    CHECK_OBJECT( (PyObject *)var_xtol_satisfied );
    Py_DECREF( var_xtol_satisfied );
    var_xtol_satisfied = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_dF );
    Py_DECREF( par_dF );
    par_dF = NULL;

    CHECK_OBJECT( (PyObject *)par_F );
    Py_DECREF( par_F );
    par_F = NULL;

    CHECK_OBJECT( (PyObject *)par_dx_norm );
    Py_DECREF( par_dx_norm );
    par_dx_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_x_norm );
    Py_DECREF( par_x_norm );
    par_x_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_ratio );
    Py_DECREF( par_ratio );
    par_ratio = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    Py_XDECREF( var_ftol_satisfied );
    var_ftol_satisfied = NULL;

    Py_XDECREF( var_xtol_satisfied );
    var_xtol_satisfied = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_25_check_termination );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$common$$$function_26_scale_for_robust_loss_function( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_J = python_pars[ 0 ];
    PyObject *par_f = python_pars[ 1 ];
    PyObject *par_rho = python_pars[ 2 ];
    PyObject *var_J_scale = NULL;
    struct Nuitka_FrameObject *frame_3d5b3aadb2f2b208b58406190032f72b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3d5b3aadb2f2b208b58406190032f72b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3d5b3aadb2f2b208b58406190032f72b, codeobj_3d5b3aadb2f2b208b58406190032f72b, module_scipy$optimize$_lsq$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3d5b3aadb2f2b208b58406190032f72b = cache_frame_3d5b3aadb2f2b208b58406190032f72b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3d5b3aadb2f2b208b58406190032f72b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3d5b3aadb2f2b208b58406190032f72b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_rho );
        tmp_subscribed_name_1 = par_rho;
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 730;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = const_int_pos_2;
        CHECK_OBJECT( par_rho );
        tmp_subscribed_name_2 = par_rho;
        tmp_subscript_name_2 = const_int_pos_2;
        tmp_right_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 2 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 730;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 730;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_f );
        tmp_left_name_4 = par_f;
        tmp_right_name_4 = const_int_pos_2;
        tmp_right_name_3 = POWER_OPERATION( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 730;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 730;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 730;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_J_scale == NULL );
        var_J_scale = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_EPS );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EPS );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EPS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 731;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_J_scale );
        tmp_ass_subscribed_1 = var_J_scale;
        CHECK_OBJECT( var_J_scale );
        tmp_compexpr_left_1 = var_J_scale;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_EPS );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EPS );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EPS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 731;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_ass_subscript_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 731;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 731;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( var_J_scale );
        tmp_left_name_5 = var_J_scale;
        tmp_right_name_5 = const_float_0_5;
        tmp_result = POWER_OPERATION_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 732;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_left_name_5;
        var_J_scale = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( par_f );
        tmp_left_name_6 = par_f;
        CHECK_OBJECT( par_rho );
        tmp_subscribed_name_3 = par_rho;
        tmp_subscript_name_3 = const_int_pos_1;
        tmp_left_name_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 734;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_J_scale );
        tmp_right_name_7 = var_J_scale;
        tmp_right_name_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 734;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 734;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_left_name_6;
        par_f = tmp_assign_source_3;

    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_left_multiply );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_left_multiply );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "left_multiply" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 736;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_J );
        tmp_tuple_element_2 = par_J;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_J_scale );
        tmp_tuple_element_2 = var_J_scale;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
        frame_3d5b3aadb2f2b208b58406190032f72b->m_frame.f_lineno = 736;
        tmp_tuple_element_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 736;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_f );
        tmp_tuple_element_1 = par_f;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d5b3aadb2f2b208b58406190032f72b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d5b3aadb2f2b208b58406190032f72b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d5b3aadb2f2b208b58406190032f72b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3d5b3aadb2f2b208b58406190032f72b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3d5b3aadb2f2b208b58406190032f72b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3d5b3aadb2f2b208b58406190032f72b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3d5b3aadb2f2b208b58406190032f72b,
        type_description_1,
        par_J,
        par_f,
        par_rho,
        var_J_scale
    );


    // Release cached frame.
    if ( frame_3d5b3aadb2f2b208b58406190032f72b == cache_frame_3d5b3aadb2f2b208b58406190032f72b )
    {
        Py_DECREF( frame_3d5b3aadb2f2b208b58406190032f72b );
    }
    cache_frame_3d5b3aadb2f2b208b58406190032f72b = NULL;

    assertFrameObject( frame_3d5b3aadb2f2b208b58406190032f72b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_26_scale_for_robust_loss_function );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_J );
    Py_DECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)par_rho );
    Py_DECREF( par_rho );
    par_rho = NULL;

    CHECK_OBJECT( (PyObject *)var_J_scale );
    Py_DECREF( var_J_scale );
    var_J_scale = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_J );
    Py_DECREF( par_J );
    par_J = NULL;

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)par_rho );
    Py_DECREF( par_rho );
    par_rho = NULL;

    Py_XDECREF( var_J_scale );
    var_J_scale = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$common$$$function_26_scale_for_robust_loss_function );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_10_find_active_constraints( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_10_find_active_constraints,
        const_str_plain_find_active_constraints,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2b1335763336baee9b9c2ef5622d59f1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_66f87e9708e36320d4078dce0953d802,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_11_make_strictly_feasible( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_11_make_strictly_feasible,
        const_str_plain_make_strictly_feasible,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5a593f77b130c8dc18d3a1ce3350c048,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_4423bcf8bed20096e55ca0349dd8bdcc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_12_CL_scaling_vector(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_12_CL_scaling_vector,
        const_str_plain_CL_scaling_vector,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b23141f46338ebcf78959cdd76f58d78,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_d2684a13400b82244dabaf9ccb0d85b7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_13_reflective_transformation(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_13_reflective_transformation,
        const_str_plain_reflective_transformation,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_955d1452398963720df10ad2a9dca013,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_12c946f85c92e0440d362b7772cd2112,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_14_print_header_nonlinear(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_14_print_header_nonlinear,
        const_str_plain_print_header_nonlinear,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_caae57cfa4ba50729e7b15dc183a13cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_15_print_iteration_nonlinear(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_15_print_iteration_nonlinear,
        const_str_plain_print_iteration_nonlinear,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_478a47605f2685f197bae041878c7d04,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_16_print_header_linear(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_16_print_header_linear,
        const_str_plain_print_header_linear,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9e855997e16ec7e69a61d6e4cd93f24c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_17_print_iteration_linear(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_17_print_iteration_linear,
        const_str_plain_print_iteration_linear,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4778e46a1508cfcb4c3bceabcf2c50dd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_18_compute_grad(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_18_compute_grad,
        const_str_plain_compute_grad,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6013852cdb06dbc5323ecd54e6517be3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_299f39952a7f02c89603912802fb5a5c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_19_compute_jac_scale( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_19_compute_jac_scale,
        const_str_plain_compute_jac_scale,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cf03693f945bcb6bf9a5c71de76d79f7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_561159f53dd18761388a6e14bcd735a4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_1_intersect_trust_region(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_1_intersect_trust_region,
        const_str_plain_intersect_trust_region,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4e396a43842c8f0dbb0e737192217649,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_2f4103cd34946b10960acb238ee8e194,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator,
        const_str_plain_left_multiplied_operator,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a5fdd4b04a1fd34cf4f4eafb8a139775,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_7db8fad4423b7d220c8fd0a3630dedff,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_1_matvec(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_1_matvec,
        const_str_plain_matvec,
#if PYTHON_VERSION >= 300
        const_str_digest_3fff24f6dbddfbbbf7479c5011f63324,
#endif
        codeobj_b006435d75eb4afb1b2f6f6b9d328ddf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_2_matmat(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_2_matmat,
        const_str_plain_matmat,
#if PYTHON_VERSION >= 300
        const_str_digest_09a77bda8b95f71853cc0e8ac76c0fdd,
#endif
        codeobj_83b0a0cce3493acfc20c018e44e2031a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_3_rmatvec(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator$$$function_3_rmatvec,
        const_str_plain_rmatvec,
#if PYTHON_VERSION >= 300
        const_str_digest_774ee6f4120ca8dda794a11a67014283,
#endif
        codeobj_d08c197e13e2b93effd571e257201fc3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator,
        const_str_plain_right_multiplied_operator,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f772ab1d4d8a1aa125cd34609acbf1ca,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_18fc2df6155e6946e59573e2fc8839f0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_1_matvec(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_1_matvec,
        const_str_plain_matvec,
#if PYTHON_VERSION >= 300
        const_str_digest_b0ee25eb40ba061bda21554cd71651e4,
#endif
        codeobj_6a0686b0c918d85a0825719ce4e5334c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_2_matmat(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_2_matmat,
        const_str_plain_matmat,
#if PYTHON_VERSION >= 300
        const_str_digest_cc13b678ffed2a7e31c6132c12a42708,
#endif
        codeobj_468357d589e999c65475fc0ebb2bda82,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_3_rmatvec(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator$$$function_3_rmatvec,
        const_str_plain_rmatvec,
#if PYTHON_VERSION >= 300
        const_str_digest_24606b70de137cacc524174e06acaf9d,
#endif
        codeobj_b20408b6d89ece4f159debb759e19b69,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator,
        const_str_plain_regularized_lsq_operator,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_525b6069b5fbb3d6122dad874c097162,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_4a2bd2e2c0cc9f9d9d0ceba8d7ef16ce,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator$$$function_1_matvec(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator$$$function_1_matvec,
        const_str_plain_matvec,
#if PYTHON_VERSION >= 300
        const_str_digest_2d65b7d43070b1d8f8c8b80891ce3215,
#endif
        codeobj_d8a185f5baa89605be90d126967332fa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator$$$function_2_rmatvec(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator$$$function_2_rmatvec,
        const_str_plain_rmatvec,
#if PYTHON_VERSION >= 300
        const_str_digest_3d5bb5c0a1b420fd81feb620351475e0,
#endif
        codeobj_feee58789f5b2193312c4c55e6b6f9c4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_23_right_multiply( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_23_right_multiply,
        const_str_plain_right_multiply,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8ea186882a012e1f99489afa3d7ffb9b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_104054466dcec2ccbea3ddf494fb9761,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_24_left_multiply( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_24_left_multiply,
        const_str_plain_left_multiply,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ac05c66635934a512c2dbcfab5adc43e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_c1ef2a31036ff8828d031ad81cdb83f4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_25_check_termination(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_25_check_termination,
        const_str_plain_check_termination,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6a246e883927291c02dc5c9e20c709fb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_4d45fbb48b343d299c3bc3f7edd9489a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_26_scale_for_robust_loss_function(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_26_scale_for_robust_loss_function,
        const_str_plain_scale_for_robust_loss_function,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3d5b3aadb2f2b208b58406190032f72b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_362c990e0c2f73ab96fac687afab31ff,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_2_solve_lsq_trust_region( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_2_solve_lsq_trust_region,
        const_str_plain_solve_lsq_trust_region,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_27a8aedd6e885f0890edb2fc6820f720,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_8c02ebb17790bbe78b225fe85a7e01be,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_2_solve_lsq_trust_region$$$function_1_phi_and_derivative(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_2_solve_lsq_trust_region$$$function_1_phi_and_derivative,
        const_str_plain_phi_and_derivative,
#if PYTHON_VERSION >= 300
        const_str_digest_4274b0de225b72dd726bbf11f247f436,
#endif
        codeobj_1668123b65da9987e614fa4bf86a324f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_d6baaffe2d8c2f0f5837aa6518e943a2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_3_solve_trust_region_2d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_3_solve_trust_region_2d,
        const_str_plain_solve_trust_region_2d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_aa048fb6c7f7967331f855194b7d111d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_55ec1537f69cd693a56bc403b5fac967,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_4_update_tr_radius(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_4_update_tr_radius,
        const_str_plain_update_tr_radius,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4c7ff61c5b30da96bb6cda2bc190746e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_f31daa0bf3b5293286f9dbc499a8f038,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_5_build_quadratic_1d( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_5_build_quadratic_1d,
        const_str_plain_build_quadratic_1d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7b5d9bfd38fb71f60ff0a79c28847a5a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_1dc58731088df41e86635dd96e1f653a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_6_minimize_quadratic_1d( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_6_minimize_quadratic_1d,
        const_str_plain_minimize_quadratic_1d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1bd72c6ac0a6196744e7a398353e487d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_22937e8fcd08d5b4936fbb27e928ba86,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_7_evaluate_quadratic( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_7_evaluate_quadratic,
        const_str_plain_evaluate_quadratic,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0130fa4a810ed72a650d14f17e9817b7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_f48829830c1d98a3bad725b05ad18d55,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_8_in_bounds(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_8_in_bounds,
        const_str_plain_in_bounds,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5d5171ac1c351946f1809d4cb99776e8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_a847d07409e36b2daf868ccfbc1dc5af,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_9_step_size_to_bound(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$common$$$function_9_step_size_to_bound,
        const_str_plain_step_size_to_bound,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3146c823bc667a0abbccd256c246d884,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$common,
        const_str_digest_0402a6983861bab2ab470b68cca46249,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_lsq$common =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._lsq.common",
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( scipy$optimize$_lsq$common )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_lsq$common );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._lsq.common: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._lsq.common: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._lsq.common: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_lsq$common" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_lsq$common = Py_InitModule4(
        "scipy.optimize._lsq.common",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_lsq$common = PyModule_Create( &mdef_scipy$optimize$_lsq$common );
#endif

    moduledict_scipy$optimize$_lsq$common = MODULE_DICT( module_scipy$optimize$_lsq$common );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_lsq$common,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_lsq$common,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_lsq$common,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_lsq$common,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_lsq$common );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_596588fbf4f1fd12a7b4c517b0bceaf0, module_scipy$optimize$_lsq$common );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain___name__ ),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF( module_spec_class );

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT( spec_value );

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_a0ccc471d6675964e6fc44c387d6523f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_2cbc48ee0fc6f9f01d7dabf241dfdb6e;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_a0ccc471d6675964e6fc44c387d6523f = MAKE_MODULE_FRAME( codeobj_a0ccc471d6675964e6fc44c387d6523f, module_scipy$optimize$_lsq$common );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a0ccc471d6675964e6fc44c387d6523f );
    assert( Py_REFCNT( frame_a0ccc471d6675964e6fc44c387d6523f ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain___spec__ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__ );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_origin, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain___spec__ );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__ );
        }

        CHECK_OBJECT( tmp_mvar_value_2 );
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_a0ccc471d6675964e6fc44c387d6523f->m_frame.f_lineno = 2;
        tmp_assign_source_4 = PyImport_ImportModule("__future__");
        assert( !(tmp_assign_source_4 == NULL) );
        assert( tmp_import_from_1__module == NULL );
        Py_INCREF( tmp_assign_source_4 );
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_math;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_lsq$common;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_copysign_tuple;
        tmp_level_name_1 = const_int_0;
        frame_a0ccc471d6675964e6fc44c387d6523f->m_frame.f_lineno = 4;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_import_name_from_4 == NULL) );
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_copysign );
        Py_DECREF( tmp_import_name_from_4 );
        assert( !(tmp_assign_source_8 == NULL) );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_copysign, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_lsq$common;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_a0ccc471d6675964e6fc44c387d6523f->m_frame.f_lineno = 6;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_lsq$common;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_norm_tuple;
        tmp_level_name_3 = const_int_0;
        frame_a0ccc471d6675964e6fc44c387d6523f->m_frame.f_lineno = 7;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_norm );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$_lsq$common;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_f21b69bb47e04dd0ccda8be710851e36_tuple;
        tmp_level_name_4 = const_int_0;
        frame_a0ccc471d6675964e6fc44c387d6523f->m_frame.f_lineno = 9;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_cho_factor );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_cho_factor, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_cho_solve );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_cho_solve, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_LinAlgError );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_LinAlgError, tmp_assign_source_14 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$optimize$_lsq$common;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_issparse_tuple;
        tmp_level_name_5 = const_int_0;
        frame_a0ccc471d6675964e6fc44c387d6523f->m_frame.f_lineno = 10;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_issparse );
        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_issparse, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_8783708b6421c71a0892a844e756fb02;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$optimize$_lsq$common;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_LinearOperator_str_plain_aslinearoperator_tuple;
        tmp_level_name_6 = const_int_0;
        frame_a0ccc471d6675964e6fc44c387d6523f->m_frame.f_lineno = 11;
        tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_10 = tmp_import_from_3__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_LinearOperator );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_LinearOperator, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_11 = tmp_import_from_3__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_aslinearoperator );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_aslinearoperator, tmp_assign_source_18 );
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 14;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        frame_a0ccc471d6675964e6fc44c387d6523f->m_frame.f_lineno = 14;
        tmp_source_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_finfo, &PyTuple_GET_ITEM( const_tuple_type_float_tuple, 0 ) );

        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_eps );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_EPS, tmp_assign_source_19 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0ccc471d6675964e6fc44c387d6523f );
#endif
    popFrameStack();

    assertFrameObject( frame_a0ccc471d6675964e6fc44c387d6523f );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0ccc471d6675964e6fc44c387d6523f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a0ccc471d6675964e6fc44c387d6523f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a0ccc471d6675964e6fc44c387d6523f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a0ccc471d6675964e6fc44c387d6523f, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_1_intersect_trust_region(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_intersect_trust_region, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_float_0_01_int_pos_10_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_21 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_2_solve_lsq_trust_region( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_solve_lsq_trust_region, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_3_solve_trust_region_2d(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_solve_trust_region_2d, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_4_update_tr_radius(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_update_tr_radius, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_24 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_5_build_quadratic_1d( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_build_quadratic_1d, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_int_0_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_25 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_6_minimize_quadratic_1d( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_minimize_quadratic_1d, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_26 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_7_evaluate_quadratic( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_evaluate_quadratic, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_8_in_bounds(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_in_bounds, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_9_step_size_to_bound(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_step_size_to_bound, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = const_tuple_float_1eminus_10_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_assign_source_29 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_10_find_active_constraints( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_find_active_constraints, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = const_tuple_float_1eminus_10_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_assign_source_30 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_11_make_strictly_feasible( tmp_defaults_6 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_make_strictly_feasible, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_12_CL_scaling_vector(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_CL_scaling_vector, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_13_reflective_transformation(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_reflective_transformation, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_14_print_header_nonlinear(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_print_header_nonlinear, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_15_print_iteration_nonlinear(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_print_iteration_nonlinear, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_16_print_header_linear(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_print_header_linear, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_17_print_iteration_linear(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_print_iteration_linear, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_18_compute_grad(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_compute_grad, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_defaults_7;
        tmp_defaults_7 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_7 );
        tmp_assign_source_38 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_19_compute_jac_scale( tmp_defaults_7 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_compute_jac_scale, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_20_left_multiplied_operator(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_left_multiplied_operator, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_21_right_multiplied_operator(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_right_multiplied_operator, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_22_regularized_lsq_operator(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_regularized_lsq_operator, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_defaults_8;
        tmp_defaults_8 = const_tuple_true_tuple;
        Py_INCREF( tmp_defaults_8 );
        tmp_assign_source_42 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_23_right_multiply( tmp_defaults_8 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_right_multiply, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_defaults_9;
        tmp_defaults_9 = const_tuple_true_tuple;
        Py_INCREF( tmp_defaults_9 );
        tmp_assign_source_43 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_24_left_multiply( tmp_defaults_9 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_left_multiply, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_25_check_termination(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_check_termination, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_FUNCTION_scipy$optimize$_lsq$common$$$function_26_scale_for_robust_loss_function(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain_scale_for_robust_loss_function, tmp_assign_source_45 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$common, (Nuitka_StringObject *)const_str_plain___path__ );

        if (path_value && PyList_CheckExact(path_value) && PyList_Size(path_value) > 0)
        {
            PyObject *path_element = PyList_GetItem( path_value, 0 );

            PyObject *path_importer_cache = PySys_GetObject((char *)"path_importer_cache");
            CHECK_OBJECT( path_importer_cache );

            int res = PyDict_SetItem( path_importer_cache, path_element, (PyObject *)&Nuitka_Loader_Type );
            assert( res == 0 );
        }
    }
#endif
#endif

    return MOD_RETURN_VALUE( module_scipy$optimize$_lsq$common );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
