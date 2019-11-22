/* Generated code for Python module 'scipy.optimize._lsq.least_squares'
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

/* The "_module_scipy$optimize$_lsq$least_squares" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_lsq$least_squares;
PyDictObject *moduledict_scipy$optimize$_lsq$least_squares;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_group_columns;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_ndarray;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_e109dc4c8b347810123465123da753a3;
static PyObject *const_str_digest_facb4996b1c5b89ddd9f820bb369646e;
static PyObject *const_tuple_ad619c9da61b202abcaf31e78f0d0c30_tuple;
extern PyObject *const_str_plain_isfinite;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_OptimizeResult;
static PyObject *const_str_digest_a3813c0754508b8fc913831f06b16766;
extern PyObject *const_str_plain_cost_only;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_zeros_like;
extern PyObject *const_dict_9e1b4601096819506f8f581e889fa028;
extern PyObject *const_str_plain_cs;
extern PyObject *const_str_digest_99b0f2800a158b791fce03480ec7ee9d;
extern PyObject *const_str_plain_njev;
extern PyObject *const_float_minus_1_5;
extern PyObject *const_str_plain_empty;
static PyObject *const_str_digest_478b589a04759e0a7a9facbe8cce89c4;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_jac;
static PyObject *const_tuple_str_plain_njev_none_tuple;
extern PyObject *const_str_plain_ndim;
static PyObject *const_str_digest_83dd5a41d8353dcb46e73f5d7763ed77;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_fun_wrapped;
extern PyObject *const_str_plain__lmdif;
static PyObject *const_str_digest_1ba0397762df6f39e8bf0a3fb138f87c;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_m;
static PyObject *const_str_digest_c52c71dbf0e5cbd14f73b01e40b4f07a;
extern PyObject *const_list_ae465a354ba6c7d92d0e589be105d5b9_list;
static PyObject *const_str_digest_0ba5160fd19f4d5ab5056de35950d4cd;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_0ab2aee1e99743ee9b8d63af812fc7da;
extern PyObject *const_str_digest_7ed2d7464dffc2d1979b421c2e211f39;
extern PyObject *const_str_plain_dogbox;
extern PyObject *const_str_plain_EPS;
extern PyObject *const_str_plain_optimality;
extern PyObject *const_str_plain_astype;
static PyObject *const_str_digest_3d8b0328a14288b97cc9d290dce120ec;
extern PyObject *const_str_plain_callable;
extern PyObject *const_int_pos_5;
extern PyObject *const_float_0_5;
extern PyObject *const_str_plain_rel_step;
static PyObject *const_str_plain_soft_l1;
static PyObject *const_tuple_str_plain_ftol_str_plain_xtol_str_plain_gtol_str_plain_check_tuple;
extern PyObject *const_str_plain_nfev;
static PyObject *const_str_digest_6fe9111c5a4ffc1a9a823ed297606580;
extern PyObject *const_str_digest_1ee27a5ab623d3ef0007e49d2ec50770;
extern PyObject *const_tuple_type_ValueError_type_TypeError_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_dict_6ccf1996a79e7bc95b345c0d39aef510;
extern PyObject *const_str_digest_9bca7c4227b5a1da023f6724018a8c27;
static PyObject *const_tuple_str_plain_dogbox_tuple;
static PyObject *const_str_digest_63b50f97ffa5798e27f0da8eb133eab8;
static PyObject *const_str_digest_2d8985d092817a0a004af31ad610342d;
static PyObject *const_tuple_str_plain_x_scale_str_plain_x0_str_plain_valid_tuple;
extern PyObject *const_str_plain_prepare_bounds;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_digest_c88389693d9d476899c1c6e170568469;
static PyObject *const_str_digest_84dd8506281fc19c002bd9bb0a01d08f;
extern PyObject *const_str_plain_jac_sparsity;
extern PyObject *const_str_plain__lmder;
extern PyObject *const_list_int_0_int_pos_1_int_pos_2_list;
extern PyObject *const_str_digest_72ce099ec2f29c3cb22d16d0b274b03b;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain_x_scale;
extern PyObject *const_str_plain_t;
static PyObject *const_tuple_str_plain_x_str_plain_fun_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_int_neg_2;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_J;
extern PyObject *const_str_plain_cauchy;
extern PyObject *const_str_plain_regularize;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_check;
static PyObject *const_str_digest_13b4df20aebf3df01867586921fa7023;
extern PyObject *const_str_plain_string_types;
extern PyObject *const_str_plain_arctan;
extern PyObject *const_str_plain_int;
static PyObject *const_str_digest_38ee9aa82e524c9b1010d7459b9e9474;
static PyObject *const_str_digest_69e9d5f6e79983292a6555b20c9df195;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_sparsity;
static PyObject *const_str_digest_f647c29946908668ec9870543a22acb7;
extern PyObject *const_str_plain_x0;
static PyObject *const_str_plain_check_jac_sparsity;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_valid;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_digest_fabd69e76a13164769e3db03bb850531;
static PyObject *const_str_digest_2e81f1ba9a35c95acb2a9779f7e25676;
extern PyObject *const_float_1eminus_08;
extern PyObject *const_str_plain_keys;
static PyObject *const_str_digest_a338d619a23dd5786604ca78bcb844bc;
extern PyObject *const_str_plain_mask;
extern PyObject *const_str_plain_approx_derivative;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_xtol;
static PyObject *const_str_digest_20a1b3b2cab9da24c0b666013c289515;
static PyObject *const_list_str_plain_trf_str_plain_dogbox_str_plain_lm_list;
extern PyObject *const_str_plain_fun;
extern PyObject *const_float_100_0;
static PyObject *const_str_plain_call_minpack;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_linear;
static PyObject *const_tuple_ef0a4c673b3edb723ae7ec664d9c66cf_tuple;
static PyObject *const_str_digest_3a476b76cb906612e968afe41300622c;
static PyObject *const_str_digest_57948e197b05ae296ef9866599bc4484;
static PyObject *const_str_digest_424e8e62fde6aa814436aec14edf90e5;
extern PyObject *const_str_plain_ub;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_ftol;
static PyObject *const_tuple_17c5e0793f08f1dc57e73412bb5eef1a_tuple;
extern PyObject *const_list_none_str_plain_exact_str_plain_lsmr_list;
static PyObject *const_dict_66e66c9245ecdba441cd4411258bf6ca;
static PyObject *const_str_digest_2573cbcd9e95781aa7d8aa6f04c2c285;
extern PyObject *const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_gtol;
extern PyObject *const_str_plain_loss_function;
extern PyObject *const_str_plain_issparse;
static PyObject *const_str_digest_e6cab37898fb1cdc0c0031bacdb6e70d;
extern PyObject *const_str_plain_jac_wrapped;
extern PyObject *const_str_plain_lsmr;
static PyObject *const_str_digest_e2b975b53f9f053950e1ed89ef6ee5be;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_digest_8783708b6421c71a0892a844e756fb02;
extern PyObject *const_str_plain_log1p;
static PyObject *const_str_plain_f_scale;
extern PyObject *const_str_plain_f;
extern PyObject *const_tuple_str_plain_bounds_str_plain_n_str_plain_lb_str_plain_ub_tuple;
static PyObject *const_str_plain_IMPLEMENTED_LOSSES;
static PyObject *const_str_digest_d5813a50aed75fb1183fba9378a26f0e;
static PyObject *const_str_digest_da7bad76b5b2cca94c6eb655d8db169d;
extern PyObject *const_str_digest_52d7d48bcb5881cf5fb85bf73f99ad81;
extern PyObject *const_str_plain_grad;
extern PyObject *const_str_plain_atleast_2d;
extern PyObject *const_str_plain_active_mask;
extern PyObject *const_tuple_type_float_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ord;
static PyObject *const_str_digest_f73f470d3db54ccb2a030b6fa968a4b6;
extern PyObject *const_str_digest_9f4f109ca6c92d8deac2299e7d5a86c7;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_3ec9d7f296bdd644d9eacc6673f9ded8;
extern PyObject *const_str_plain_TERMINATION_MESSAGES;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_str_plain_string_types_tuple;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_atleast_1d;
static PyObject *const_str_digest_9f40dca4074a986201906a0e6161e5c6;
static PyObject *const_str_plain_huber;
static PyObject *const_str_digest_4c82984292ac2902da573c77a8fbfab6;
extern PyObject *const_str_plain_f0;
static PyObject *const_tuple_d716dd168d004349634da1ffa518ae68_tuple;
static PyObject *const_str_plain_FROM_MINPACK_TO_COMMON;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_trf;
extern PyObject *const_tuple_str_plain_approx_derivative_str_plain_group_columns_tuple;
extern PyObject *const_str_plain_least_squares;
extern PyObject *const_str_plain_exact;
static PyObject *const_str_digest_0a5e5ea72e84ec56cb59e49497a3a4ea;
static PyObject *const_str_digest_0ed3932f28b4561ff03dcc48e6a7a0e1;
static PyObject *const_tuple_29d04d42c4fee4a8044e8bf21579401e_tuple;
static PyObject *const_tuple_str_plain_z_str_plain_rho_str_plain_cost_only_str_plain_t_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain__;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_tuple_7e00292f9021ff5eb8f0d3eab73eaf83_tuple;
extern PyObject *const_str_plain_dot;
extern PyObject *const_float_minus_0_5;
extern PyObject *const_str_plain_z;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
static PyObject *const_dict_361a049f0818f817e86d06b1318256a5;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_LinearOperator;
extern PyObject *const_str_plain_cost;
extern PyObject *const_str_plain_iscomplexobj;
extern PyObject *const_tuple_str_plain_LinearOperator_tuple;
static PyObject *const_tuple_str_plain_z_str_plain_rho_str_plain_cost_only_str_plain_mask_tuple;
static PyObject *const_tuple_str_plain_jac_sparsity_str_plain_m_str_plain_n_tuple;
extern PyObject *const_str_plain_make_strictly_feasible;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_print;
static PyObject *const_str_digest_4f6482504b2750b5a8b714e25f7ccbdc;
extern PyObject *const_tuple_str_plain_b_tuple;
static PyObject *const_str_plain_check_tolerance;
extern PyObject *const_str_digest_402cb6c6f6e609cdac72fc0009ef2885;
static PyObject *const_str_plain_construct_loss_function;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_lb;
static PyObject *const_str_plain_loss;
extern PyObject *const_str_plain_fvec;
extern PyObject *const_str_plain_in_bounds;
extern PyObject *const_tuple_str_plain_warn_tuple;
static PyObject *const_str_digest_ebb81d0fad1ee3691b0f03b1d0327926;
extern PyObject *const_tuple_str_plain_issparse_str_plain_csr_matrix_tuple;
static PyObject *const_tuple_str_plain__minpack_str_plain_OptimizeResult_tuple;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_lm;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain_csr_matrix;
extern PyObject *const_tuple_str_plain_norm_tuple;
static PyObject *const_str_digest_828a49a47e18251ddfb642044793cc78;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_digest_8a056a5cca3b2add6f03cf365a565c24;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_bounds;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain__minpack;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_str_plain_trf_tuple;
extern PyObject *const_str_digest_a0dfa9cb56b41095d297f9de64891d65;
static PyObject *const_tuple_str_plain_tol_str_plain_name_tuple;
extern PyObject *const_str_plain_resize;
extern PyObject *const_str_plain_format;
static PyObject *const_str_plain_check_x_scale;
static PyObject *const_tuple_5ec540c205a37da9539a52450e818eca_tuple;
extern PyObject *const_str_plain_common;
extern PyObject *const_str_plain_rho;
static PyObject *const_tuple_str_digest_4c82984292ac2902da573c77a8fbfab6_tuple;
extern PyObject *const_int_pos_100;
static PyObject *const_tuple_9c8ddc8ea791e1f80ab5e01e7570e31e_tuple;
static PyObject *const_str_plain_diff_step;
extern PyObject *const_str_plain_success;
extern PyObject *const_str_digest_caaf3fa400764a871c9fd9a69e283cce;
extern PyObject *const_str_digest_70f4af817780313fe8de57ed26a98782;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_e109dc4c8b347810123465123da753a3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4908728 ], 56, 0 );
    const_str_digest_facb4996b1c5b89ddd9f820bb369646e = UNSTREAM_STRING_ASCII( &constant_bin[ 4908784 ], 44, 0 );
    const_tuple_ad619c9da61b202abcaf31e78f0d0c30_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_ad619c9da61b202abcaf31e78f0d0c30_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_ad619c9da61b202abcaf31e78f0d0c30_tuple, 1, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_ad619c9da61b202abcaf31e78f0d0c30_tuple, 2, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    PyTuple_SET_ITEM( const_tuple_ad619c9da61b202abcaf31e78f0d0c30_tuple, 3, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    const_str_plain_diff_step = UNSTREAM_STRING_ASCII( &constant_bin[ 4908828 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_ad619c9da61b202abcaf31e78f0d0c30_tuple, 4, const_str_plain_diff_step ); Py_INCREF( const_str_plain_diff_step );
    PyTuple_SET_ITEM( const_tuple_ad619c9da61b202abcaf31e78f0d0c30_tuple, 5, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_ad619c9da61b202abcaf31e78f0d0c30_tuple, 6, const_str_plain_bounds ); Py_INCREF( const_str_plain_bounds );
    PyTuple_SET_ITEM( const_tuple_ad619c9da61b202abcaf31e78f0d0c30_tuple, 7, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_ad619c9da61b202abcaf31e78f0d0c30_tuple, 8, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_ad619c9da61b202abcaf31e78f0d0c30_tuple, 9, const_str_plain_jac_sparsity ); Py_INCREF( const_str_plain_jac_sparsity );
    const_str_digest_a3813c0754508b8fc913831f06b16766 = UNSTREAM_STRING_ASCII( &constant_bin[ 4908837 ], 46, 0 );
    const_str_digest_478b589a04759e0a7a9facbe8cce89c4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4908883 ], 18, 0 );
    const_tuple_str_plain_njev_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_njev_none_tuple, 0, const_str_plain_njev ); Py_INCREF( const_str_plain_njev );
    PyTuple_SET_ITEM( const_tuple_str_plain_njev_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_83dd5a41d8353dcb46e73f5d7763ed77 = UNSTREAM_STRING_ASCII( &constant_bin[ 4908901 ], 68, 0 );
    const_str_digest_1ba0397762df6f39e8bf0a3fb138f87c = UNSTREAM_STRING_ASCII( &constant_bin[ 4908969 ], 24698, 0 );
    const_str_digest_c52c71dbf0e5cbd14f73b01e40b4f07a = UNSTREAM_STRING_ASCII( &constant_bin[ 4933667 ], 30, 0 );
    const_str_digest_0ba5160fd19f4d5ab5056de35950d4cd = UNSTREAM_STRING_ASCII( &constant_bin[ 4933697 ], 42, 0 );
    const_str_digest_0ab2aee1e99743ee9b8d63af812fc7da = UNSTREAM_STRING_ASCII( &constant_bin[ 4933705 ], 33, 0 );
    const_str_digest_3d8b0328a14288b97cc9d290dce120ec = UNSTREAM_STRING_ASCII( &constant_bin[ 4933739 ], 58, 0 );
    const_str_plain_soft_l1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4914967 ], 7, 1 );
    const_tuple_str_plain_ftol_str_plain_xtol_str_plain_gtol_str_plain_check_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ftol_str_plain_xtol_str_plain_gtol_str_plain_check_tuple, 0, const_str_plain_ftol ); Py_INCREF( const_str_plain_ftol );
    PyTuple_SET_ITEM( const_tuple_str_plain_ftol_str_plain_xtol_str_plain_gtol_str_plain_check_tuple, 1, const_str_plain_xtol ); Py_INCREF( const_str_plain_xtol );
    PyTuple_SET_ITEM( const_tuple_str_plain_ftol_str_plain_xtol_str_plain_gtol_str_plain_check_tuple, 2, const_str_plain_gtol ); Py_INCREF( const_str_plain_gtol );
    PyTuple_SET_ITEM( const_tuple_str_plain_ftol_str_plain_xtol_str_plain_gtol_str_plain_check_tuple, 3, const_str_plain_check ); Py_INCREF( const_str_plain_check );
    const_str_digest_6fe9111c5a4ffc1a9a823ed297606580 = UNSTREAM_STRING_ASCII( &constant_bin[ 4933797 ], 54, 0 );
    const_tuple_str_plain_dogbox_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_dogbox_tuple, 0, const_str_plain_dogbox ); Py_INCREF( const_str_plain_dogbox );
    const_str_digest_63b50f97ffa5798e27f0da8eb133eab8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4933851 ], 31, 0 );
    const_str_digest_2d8985d092817a0a004af31ad610342d = UNSTREAM_STRING_ASCII( &constant_bin[ 4933882 ], 76, 0 );
    const_tuple_str_plain_x_scale_str_plain_x0_str_plain_valid_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_scale_str_plain_x0_str_plain_valid_tuple, 0, const_str_plain_x_scale ); Py_INCREF( const_str_plain_x_scale );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_scale_str_plain_x0_str_plain_valid_tuple, 1, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_scale_str_plain_x0_str_plain_valid_tuple, 2, const_str_plain_valid ); Py_INCREF( const_str_plain_valid );
    const_str_digest_84dd8506281fc19c002bd9bb0a01d08f = UNSTREAM_STRING_ASCII( &constant_bin[ 4933958 ], 109, 0 );
    const_tuple_str_plain_x_str_plain_fun_str_plain_args_str_plain_kwargs_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_fun_str_plain_args_str_plain_kwargs_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_fun_str_plain_args_str_plain_kwargs_tuple, 1, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_fun_str_plain_args_str_plain_kwargs_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_fun_str_plain_args_str_plain_kwargs_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_13b4df20aebf3df01867586921fa7023 = UNSTREAM_STRING_ASCII( &constant_bin[ 4934067 ], 60, 0 );
    const_str_digest_38ee9aa82e524c9b1010d7459b9e9474 = UNSTREAM_STRING_ASCII( &constant_bin[ 4934127 ], 44, 0 );
    const_str_digest_69e9d5f6e79983292a6555b20c9df195 = UNSTREAM_STRING_ASCII( &constant_bin[ 4921496 ], 42, 0 );
    const_str_digest_f647c29946908668ec9870543a22acb7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4934171 ], 53, 0 );
    const_str_plain_check_jac_sparsity = UNSTREAM_STRING_ASCII( &constant_bin[ 4934224 ], 18, 1 );
    const_str_digest_2e81f1ba9a35c95acb2a9779f7e25676 = UNSTREAM_STRING_ASCII( &constant_bin[ 4934242 ], 46, 0 );
    const_str_digest_a338d619a23dd5786604ca78bcb844bc = UNSTREAM_STRING_ASCII( &constant_bin[ 4934288 ], 36, 0 );
    const_str_digest_20a1b3b2cab9da24c0b666013c289515 = UNSTREAM_STRING_ASCII( &constant_bin[ 4934324 ], 58, 0 );
    const_list_str_plain_trf_str_plain_dogbox_str_plain_lm_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_trf_str_plain_dogbox_str_plain_lm_list, 0, const_str_plain_trf ); Py_INCREF( const_str_plain_trf );
    PyList_SET_ITEM( const_list_str_plain_trf_str_plain_dogbox_str_plain_lm_list, 1, const_str_plain_dogbox ); Py_INCREF( const_str_plain_dogbox );
    PyList_SET_ITEM( const_list_str_plain_trf_str_plain_dogbox_str_plain_lm_list, 2, const_str_plain_lm ); Py_INCREF( const_str_plain_lm );
    const_str_plain_call_minpack = UNSTREAM_STRING_ASCII( &constant_bin[ 4934382 ], 12, 1 );
    const_tuple_ef0a4c673b3edb723ae7ec664d9c66cf_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_ef0a4c673b3edb723ae7ec664d9c66cf_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_ef0a4c673b3edb723ae7ec664d9c66cf_tuple, 1, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_ef0a4c673b3edb723ae7ec664d9c66cf_tuple, 2, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_ef0a4c673b3edb723ae7ec664d9c66cf_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_ef0a4c673b3edb723ae7ec664d9c66cf_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_3a476b76cb906612e968afe41300622c = UNSTREAM_STRING_ASCII( &constant_bin[ 4921620 ], 60, 0 );
    const_str_digest_57948e197b05ae296ef9866599bc4484 = UNSTREAM_STRING_ASCII( &constant_bin[ 4934394 ], 19, 0 );
    const_str_digest_424e8e62fde6aa814436aec14edf90e5 = UNSTREAM_STRING_ASCII( &constant_bin[ 4934413 ], 91, 0 );
    const_tuple_17c5e0793f08f1dc57e73412bb5eef1a_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_17c5e0793f08f1dc57e73412bb5eef1a_tuple, 0, const_str_plain_EPS ); Py_INCREF( const_str_plain_EPS );
    PyTuple_SET_ITEM( const_tuple_17c5e0793f08f1dc57e73412bb5eef1a_tuple, 1, const_str_plain_in_bounds ); Py_INCREF( const_str_plain_in_bounds );
    PyTuple_SET_ITEM( const_tuple_17c5e0793f08f1dc57e73412bb5eef1a_tuple, 2, const_str_plain_make_strictly_feasible ); Py_INCREF( const_str_plain_make_strictly_feasible );
    const_dict_66e66c9245ecdba441cd4411258bf6ca = _PyDict_NewPresized( 6 );
    PyDict_SetItem( const_dict_66e66c9245ecdba441cd4411258bf6ca, const_int_neg_1, const_str_digest_e109dc4c8b347810123465123da753a3 );
    PyDict_SetItem( const_dict_66e66c9245ecdba441cd4411258bf6ca, const_int_0, const_str_digest_7ed2d7464dffc2d1979b421c2e211f39 );
    PyDict_SetItem( const_dict_66e66c9245ecdba441cd4411258bf6ca, const_int_pos_1, const_str_digest_fabd69e76a13164769e3db03bb850531 );
    PyDict_SetItem( const_dict_66e66c9245ecdba441cd4411258bf6ca, const_int_pos_2, const_str_digest_69e9d5f6e79983292a6555b20c9df195 );
    PyDict_SetItem( const_dict_66e66c9245ecdba441cd4411258bf6ca, const_int_pos_3, const_str_digest_70f4af817780313fe8de57ed26a98782 );
    PyDict_SetItem( const_dict_66e66c9245ecdba441cd4411258bf6ca, const_int_pos_4, const_str_digest_3a476b76cb906612e968afe41300622c );
    assert( PyDict_Size( const_dict_66e66c9245ecdba441cd4411258bf6ca ) == 6 );
    const_str_digest_2573cbcd9e95781aa7d8aa6f04c2c285 = UNSTREAM_STRING_ASCII( &constant_bin[ 4934504 ], 99, 0 );
    const_str_digest_e6cab37898fb1cdc0c0031bacdb6e70d = UNSTREAM_STRING_ASCII( &constant_bin[ 4934603 ], 52, 0 );
    const_str_digest_e2b975b53f9f053950e1ed89ef6ee5be = UNSTREAM_STRING_ASCII( &constant_bin[ 4934655 ], 41, 0 );
    const_str_plain_f_scale = UNSTREAM_STRING_ASCII( &constant_bin[ 4915834 ], 7, 1 );
    const_str_plain_IMPLEMENTED_LOSSES = UNSTREAM_STRING_ASCII( &constant_bin[ 4934696 ], 18, 1 );
    const_str_digest_d5813a50aed75fb1183fba9378a26f0e = UNSTREAM_STRING_ASCII( &constant_bin[ 4934714 ], 48, 0 );
    const_str_digest_da7bad76b5b2cca94c6eb655d8db169d = UNSTREAM_STRING_ASCII( &constant_bin[ 4934762 ], 47, 0 );
    const_str_digest_f73f470d3db54ccb2a030b6fa968a4b6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4934809 ], 52, 0 );
    const_str_digest_3ec9d7f296bdd644d9eacc6673f9ded8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4934861 ], 44, 0 );
    const_str_digest_9f40dca4074a986201906a0e6161e5c6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4934905 ], 40, 0 );
    const_str_plain_huber = UNSTREAM_STRING_ASCII( &constant_bin[ 4915160 ], 5, 1 );
    const_str_digest_4c82984292ac2902da573c77a8fbfab6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4934945 ], 77, 0 );
    const_tuple_d716dd168d004349634da1ffa518ae68_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d716dd168d004349634da1ffa518ae68_tuple, 0, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_str_plain_loss = UNSTREAM_STRING_ASCII( &constant_bin[ 78949 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_d716dd168d004349634da1ffa518ae68_tuple, 1, const_str_plain_loss ); Py_INCREF( const_str_plain_loss );
    PyTuple_SET_ITEM( const_tuple_d716dd168d004349634da1ffa518ae68_tuple, 2, const_str_plain_f_scale ); Py_INCREF( const_str_plain_f_scale );
    PyTuple_SET_ITEM( const_tuple_d716dd168d004349634da1ffa518ae68_tuple, 3, const_str_plain_rho ); Py_INCREF( const_str_plain_rho );
    PyTuple_SET_ITEM( const_tuple_d716dd168d004349634da1ffa518ae68_tuple, 4, const_str_plain_loss_function ); Py_INCREF( const_str_plain_loss_function );
    const_str_plain_FROM_MINPACK_TO_COMMON = UNSTREAM_STRING_ASCII( &constant_bin[ 4935022 ], 22, 1 );
    const_str_digest_0a5e5ea72e84ec56cb59e49497a3a4ea = UNSTREAM_STRING_ASCII( &constant_bin[ 4935044 ], 62, 0 );
    const_str_digest_0ed3932f28b4561ff03dcc48e6a7a0e1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4935106 ], 49, 0 );
    const_tuple_29d04d42c4fee4a8044e8bf21579401e_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_29d04d42c4fee4a8044e8bf21579401e_tuple, 0, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_29d04d42c4fee4a8044e8bf21579401e_tuple, 1, const_str_plain_cost_only ); Py_INCREF( const_str_plain_cost_only );
    PyTuple_SET_ITEM( const_tuple_29d04d42c4fee4a8044e8bf21579401e_tuple, 2, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_29d04d42c4fee4a8044e8bf21579401e_tuple, 3, const_str_plain_rho ); Py_INCREF( const_str_plain_rho );
    PyTuple_SET_ITEM( const_tuple_29d04d42c4fee4a8044e8bf21579401e_tuple, 4, const_str_plain_f_scale ); Py_INCREF( const_str_plain_f_scale );
    PyTuple_SET_ITEM( const_tuple_29d04d42c4fee4a8044e8bf21579401e_tuple, 5, const_str_plain_loss ); Py_INCREF( const_str_plain_loss );
    const_tuple_str_plain_z_str_plain_rho_str_plain_cost_only_str_plain_t_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_z_str_plain_rho_str_plain_cost_only_str_plain_t_tuple, 0, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_str_plain_z_str_plain_rho_str_plain_cost_only_str_plain_t_tuple, 1, const_str_plain_rho ); Py_INCREF( const_str_plain_rho );
    PyTuple_SET_ITEM( const_tuple_str_plain_z_str_plain_rho_str_plain_cost_only_str_plain_t_tuple, 2, const_str_plain_cost_only ); Py_INCREF( const_str_plain_cost_only );
    PyTuple_SET_ITEM( const_tuple_str_plain_z_str_plain_rho_str_plain_cost_only_str_plain_t_tuple, 3, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_tuple_7e00292f9021ff5eb8f0d3eab73eaf83_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_7e00292f9021ff5eb8f0d3eab73eaf83_tuple, 0, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_7e00292f9021ff5eb8f0d3eab73eaf83_tuple, 1, const_str_plain_cost_only ); Py_INCREF( const_str_plain_cost_only );
    PyTuple_SET_ITEM( const_tuple_7e00292f9021ff5eb8f0d3eab73eaf83_tuple, 2, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_7e00292f9021ff5eb8f0d3eab73eaf83_tuple, 3, const_str_plain_f_scale ); Py_INCREF( const_str_plain_f_scale );
    PyTuple_SET_ITEM( const_tuple_7e00292f9021ff5eb8f0d3eab73eaf83_tuple, 4, const_str_plain_loss ); Py_INCREF( const_str_plain_loss );
    PyTuple_SET_ITEM( const_tuple_7e00292f9021ff5eb8f0d3eab73eaf83_tuple, 5, const_str_plain_rho ); Py_INCREF( const_str_plain_rho );
    const_dict_361a049f0818f817e86d06b1318256a5 = _PyDict_NewPresized( 6 );
    PyDict_SetItem( const_dict_361a049f0818f817e86d06b1318256a5, const_int_0, const_int_neg_1 );
    PyDict_SetItem( const_dict_361a049f0818f817e86d06b1318256a5, const_int_pos_1, const_int_pos_2 );
    PyDict_SetItem( const_dict_361a049f0818f817e86d06b1318256a5, const_int_pos_2, const_int_pos_3 );
    PyDict_SetItem( const_dict_361a049f0818f817e86d06b1318256a5, const_int_pos_3, const_int_pos_4 );
    PyDict_SetItem( const_dict_361a049f0818f817e86d06b1318256a5, const_int_pos_4, const_int_pos_1 );
    PyDict_SetItem( const_dict_361a049f0818f817e86d06b1318256a5, const_int_pos_5, const_int_0 );
    assert( PyDict_Size( const_dict_361a049f0818f817e86d06b1318256a5 ) == 6 );
    const_tuple_str_plain_z_str_plain_rho_str_plain_cost_only_str_plain_mask_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_z_str_plain_rho_str_plain_cost_only_str_plain_mask_tuple, 0, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_str_plain_z_str_plain_rho_str_plain_cost_only_str_plain_mask_tuple, 1, const_str_plain_rho ); Py_INCREF( const_str_plain_rho );
    PyTuple_SET_ITEM( const_tuple_str_plain_z_str_plain_rho_str_plain_cost_only_str_plain_mask_tuple, 2, const_str_plain_cost_only ); Py_INCREF( const_str_plain_cost_only );
    PyTuple_SET_ITEM( const_tuple_str_plain_z_str_plain_rho_str_plain_cost_only_str_plain_mask_tuple, 3, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    const_tuple_str_plain_jac_sparsity_str_plain_m_str_plain_n_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_jac_sparsity_str_plain_m_str_plain_n_tuple, 0, const_str_plain_jac_sparsity ); Py_INCREF( const_str_plain_jac_sparsity );
    PyTuple_SET_ITEM( const_tuple_str_plain_jac_sparsity_str_plain_m_str_plain_n_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_str_plain_jac_sparsity_str_plain_m_str_plain_n_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_digest_4f6482504b2750b5a8b714e25f7ccbdc = UNSTREAM_STRING_ASCII( &constant_bin[ 4935155 ], 34, 0 );
    const_str_plain_check_tolerance = UNSTREAM_STRING_ASCII( &constant_bin[ 4933667 ], 15, 1 );
    const_str_plain_construct_loss_function = UNSTREAM_STRING_ASCII( &constant_bin[ 4908837 ], 23, 1 );
    const_str_digest_ebb81d0fad1ee3691b0f03b1d0327926 = UNSTREAM_STRING_ASCII( &constant_bin[ 4935189 ], 41, 0 );
    const_tuple_str_plain__minpack_str_plain_OptimizeResult_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain__minpack_str_plain_OptimizeResult_tuple, 0, const_str_plain__minpack ); Py_INCREF( const_str_plain__minpack );
    PyTuple_SET_ITEM( const_tuple_str_plain__minpack_str_plain_OptimizeResult_tuple, 1, const_str_plain_OptimizeResult ); Py_INCREF( const_str_plain_OptimizeResult );
    const_str_digest_828a49a47e18251ddfb642044793cc78 = UNSTREAM_STRING_ASCII( &constant_bin[ 4935230 ], 35, 0 );
    const_str_digest_8a056a5cca3b2add6f03cf365a565c24 = UNSTREAM_STRING_ASCII( &constant_bin[ 4935265 ], 34, 0 );
    const_tuple_str_plain_trf_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_trf_tuple, 0, const_str_plain_trf ); Py_INCREF( const_str_plain_trf );
    const_tuple_str_plain_tol_str_plain_name_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_tol_str_plain_name_tuple, 0, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_str_plain_tol_str_plain_name_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_plain_check_x_scale = UNSTREAM_STRING_ASCII( &constant_bin[ 4935299 ], 13, 1 );
    const_tuple_5ec540c205a37da9539a52450e818eca_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4935312 ], 256 );
    const_tuple_str_digest_4c82984292ac2902da573c77a8fbfab6_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_4c82984292ac2902da573c77a8fbfab6_tuple, 0, const_str_digest_4c82984292ac2902da573c77a8fbfab6 ); Py_INCREF( const_str_digest_4c82984292ac2902da573c77a8fbfab6 );
    const_tuple_9c8ddc8ea791e1f80ab5e01e7570e31e_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4935568 ], 178 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_lsq$least_squares( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_cd1386fb643288446acbffb4057179f9;
static PyCodeObject *codeobj_e36b3df559ec5a9b45cda450f417f019;
static PyCodeObject *codeobj_e2e304cbebe6b06894f391a2113d7003;
static PyCodeObject *codeobj_1bce61bf942476c113a746c18866e257;
static PyCodeObject *codeobj_6593425e21415fde7d46a253b101635a;
static PyCodeObject *codeobj_6652e219ccfc5d3f3688b73ce0c108d9;
static PyCodeObject *codeobj_67415de0f87415d662a89efc1a6e0cb0;
static PyCodeObject *codeobj_4d29dc151a3f030d03c51729f7de9925;
static PyCodeObject *codeobj_f0af4f4aebe3010bbff9a024e8bc21a9;
static PyCodeObject *codeobj_6ce40c2810dd94893a1b25dcaf3d4e50;
static PyCodeObject *codeobj_57d92758b9e4145020c1ef73a7c186dc;
static PyCodeObject *codeobj_d1dc46ce1f36799974c7e7e9c239304d;
static PyCodeObject *codeobj_9241510db2e575e350b31dd1a73b156c;
static PyCodeObject *codeobj_0445efd918bc4f5834d97a20b0324527;
static PyCodeObject *codeobj_6fb0c30d4a15aff49c2d990e38954b89;
static PyCodeObject *codeobj_dd5bd972f6865eca2efd6568aeef2c67;
static PyCodeObject *codeobj_669a61b265de2f1b22e9ae7144c18fd2;
static PyCodeObject *codeobj_da3e36f245e424dd1180e8da0ea37780;
static PyCodeObject *codeobj_abe2bbfb69a3cc8546975f35a0de7449;
static PyCodeObject *codeobj_c44124407d821733fff6f0118fd547fd;
static PyCodeObject *codeobj_5c9fa8c70cf2e2ae2360ee0100ca13c6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_a338d619a23dd5786604ca78bcb844bc );
    codeobj_cd1386fb643288446acbffb4057179f9 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 98, const_tuple_str_plain_b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e36b3df559ec5a9b45cda450f417f019 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0ba5160fd19f4d5ab5056de35950d4cd, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e2e304cbebe6b06894f391a2113d7003 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_arctan, 198, const_tuple_str_plain_z_str_plain_rho_str_plain_cost_only_str_plain_t_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1bce61bf942476c113a746c18866e257 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_call_minpack, 42, const_tuple_9c8ddc8ea791e1f80ab5e01e7570e31e_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6593425e21415fde7d46a253b101635a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cauchy, 189, const_tuple_str_plain_z_str_plain_rho_str_plain_cost_only_str_plain_t_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6652e219ccfc5d3f3688b73ce0c108d9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check, 109, const_tuple_str_plain_tol_str_plain_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_67415de0f87415d662a89efc1a6e0cb0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_jac_sparsity, 152, const_tuple_str_plain_jac_sparsity_str_plain_m_str_plain_n_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4d29dc151a3f030d03c51729f7de9925 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_tolerance, 108, const_tuple_str_plain_ftol_str_plain_xtol_str_plain_gtol_str_plain_check_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f0af4f4aebe3010bbff9a024e8bc21a9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_x_scale, 129, const_tuple_str_plain_x_scale_str_plain_x0_str_plain_valid_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6ce40c2810dd94893a1b25dcaf3d4e50 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_construct_loss_function, 211, const_tuple_d716dd168d004349634da1ffa518ae68_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_57d92758b9e4145020c1ef73a7c186dc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fun_wrapped, 801, const_tuple_str_plain_x_str_plain_fun_str_plain_args_str_plain_kwargs_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_d1dc46ce1f36799974c7e7e9c239304d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_huber, 168, const_tuple_str_plain_z_str_plain_rho_str_plain_cost_only_str_plain_mask_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9241510db2e575e350b31dd1a73b156c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac_wrapped, 840, const_tuple_ef0a4c673b3edb723ae7ec664d9c66cf_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_0445efd918bc4f5834d97a20b0324527 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac_wrapped, 844, const_tuple_ef0a4c673b3edb723ae7ec664d9c66cf_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_6fb0c30d4a15aff49c2d990e38954b89 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac_wrapped, 850, const_tuple_ef0a4c673b3edb723ae7ec664d9c66cf_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_dd5bd972f6865eca2efd6568aeef2c67 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac_wrapped, 871, const_tuple_ad619c9da61b202abcaf31e78f0d0c30_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_669a61b265de2f1b22e9ae7144c18fd2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_least_squares, 240, const_tuple_5ec540c205a37da9539a52450e818eca_tuple, 19, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_da3e36f245e424dd1180e8da0ea37780 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loss_function, 219, const_tuple_7e00292f9021ff5eb8f0d3eab73eaf83_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_abe2bbfb69a3cc8546975f35a0de7449 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loss_function, 228, const_tuple_29d04d42c4fee4a8044e8bf21579401e_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_c44124407d821733fff6f0118fd547fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_prepare_bounds, 97, const_tuple_str_plain_bounds_str_plain_n_str_plain_lb_str_plain_ub_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5c9fa8c70cf2e2ae2360ee0100ca13c6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_soft_l1, 180, const_tuple_str_plain_z_str_plain_rho_str_plain_cost_only_str_plain_t_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function$$$function_1_loss_function( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function$$$function_2_loss_function( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_1_fun_wrapped(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_2_jac_wrapped( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_3_jac_wrapped( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_4_jac_wrapped( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_5_jac_wrapped(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_1_call_minpack(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_2_prepare_bounds(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_3_check_tolerance(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_3_check_tolerance$$$function_1_check(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_4_check_x_scale(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_5_check_jac_sparsity(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_6_huber(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_7_soft_l1(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_8_cauchy(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_9_arctan(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_1_call_minpack( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *par_jac = python_pars[ 2 ];
    PyObject *par_ftol = python_pars[ 3 ];
    PyObject *par_xtol = python_pars[ 4 ];
    PyObject *par_gtol = python_pars[ 5 ];
    PyObject *par_max_nfev = python_pars[ 6 ];
    PyObject *par_x_scale = python_pars[ 7 ];
    PyObject *par_diff_step = python_pars[ 8 ];
    PyObject *var_n = NULL;
    PyObject *var_epsfcn = NULL;
    PyObject *var_diag = NULL;
    PyObject *var_x = NULL;
    PyObject *var_info = NULL;
    PyObject *var_status = NULL;
    PyObject *var_f = NULL;
    PyObject *var_J = NULL;
    PyObject *var_cost = NULL;
    PyObject *var_g = NULL;
    PyObject *var_g_norm = NULL;
    PyObject *var_nfev = NULL;
    PyObject *var_njev = NULL;
    PyObject *var_active_mask = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1bce61bf942476c113a746c18866e257;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1bce61bf942476c113a746c18866e257 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1bce61bf942476c113a746c18866e257, codeobj_1bce61bf942476c113a746c18866e257, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1bce61bf942476c113a746c18866e257 = cache_frame_1bce61bf942476c113a746c18866e257;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1bce61bf942476c113a746c18866e257 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1bce61bf942476c113a746c18866e257 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_x0 );
        tmp_source_name_1 = par_x0;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_diff_step );
        tmp_compexpr_left_1 = par_diff_step;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_EPS );

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

                exception_lineno = 46;
                type_description_1 = "ooooooooooooNNNooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_assign_source_2 = tmp_mvar_value_1;
            assert( var_epsfcn == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_epsfcn = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_diff_step );
            tmp_left_name_1 = par_diff_step;
            tmp_right_name_1 = const_int_pos_2;
            tmp_assign_source_3 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 48;
                type_description_1 = "ooooooooooooNNNooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_epsfcn == NULL );
            var_epsfcn = tmp_assign_source_3;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_x_scale );
        tmp_isinstance_inst_1 = par_x_scale;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_string_types );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_string_types );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "string_types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_2;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooooooooooooNNNooooooooooo";
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
        CHECK_OBJECT( par_x_scale );
        tmp_compexpr_left_2 = par_x_scale;
        tmp_compexpr_right_2 = const_str_plain_jac;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
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
            tmp_assign_source_4 = Py_None;
            assert( var_diag == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_diag = tmp_assign_source_4;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            tmp_left_name_2 = const_int_pos_1;
            CHECK_OBJECT( par_x_scale );
            tmp_right_name_2 = par_x_scale;
            tmp_assign_source_5 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "ooooooooooooNNNooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_diag == NULL );
            var_diag = tmp_assign_source_5;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_jac );
        tmp_compexpr_left_3 = par_jac;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( par_max_nfev );
            tmp_compexpr_left_4 = par_max_nfev;
            tmp_compexpr_right_4 = Py_None;
            tmp_condition_result_4 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_left_name_3;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_3;
                PyObject *tmp_right_name_4;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                tmp_left_name_4 = const_int_pos_100;
                CHECK_OBJECT( var_n );
                tmp_right_name_3 = var_n;
                tmp_left_name_3 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_4, tmp_right_name_3 );
                if ( tmp_left_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;
                    type_description_1 = "ooooooooooooNNNooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_n );
                tmp_left_name_5 = var_n;
                tmp_right_name_5 = const_int_pos_1;
                tmp_right_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
                if ( tmp_right_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_3 );

                    exception_lineno = 64;
                    type_description_1 = "ooooooooooooNNNooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_assign_source_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;
                    type_description_1 = "ooooooooooooNNNooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_max_nfev;
                    assert( old != NULL );
                    par_max_nfev = tmp_assign_source_6;
                    Py_DECREF( old );
                }

            }
            branch_no_4:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain__minpack );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minpack );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minpack" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 65;
                type_description_1 = "ooooooooooooNNNooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_fun );
            tmp_args_element_name_1 = par_fun;
            CHECK_OBJECT( par_x0 );
            tmp_args_element_name_2 = par_x0;
            tmp_args_element_name_3 = const_tuple_empty;
            tmp_args_element_name_4 = Py_True;
            CHECK_OBJECT( par_ftol );
            tmp_args_element_name_5 = par_ftol;
            CHECK_OBJECT( par_xtol );
            tmp_args_element_name_6 = par_xtol;
            CHECK_OBJECT( par_gtol );
            tmp_args_element_name_7 = par_gtol;
            CHECK_OBJECT( par_max_nfev );
            tmp_args_element_name_8 = par_max_nfev;
            CHECK_OBJECT( var_epsfcn );
            tmp_args_element_name_9 = var_epsfcn;
            tmp_args_element_name_10 = const_float_100_0;
            CHECK_OBJECT( var_diag );
            tmp_args_element_name_11 = var_diag;
            frame_1bce61bf942476c113a746c18866e257->m_frame.f_lineno = 65;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS11( tmp_called_instance_1, const_str_plain__lmdif, call_args );
            }

            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;
                type_description_1 = "ooooooooooooNNNooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;
                type_description_1 = "ooooooooooooNNNooooooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
            if ( tmp_assign_source_8 == NULL )
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


                type_description_1 = "ooooooooooooNNNooooooooooo";
                exception_lineno = 65;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


                type_description_1 = "ooooooooooooNNNooooooooooo";
                exception_lineno = 65;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


                type_description_1 = "ooooooooooooNNNooooooooooo";
                exception_lineno = 65;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_3 == NULL );
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_10;
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

                        type_description_1 = "ooooooooooooNNNooooooooooo";
                        exception_lineno = 65;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooNNNooooooooooo";
                exception_lineno = 65;
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

        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

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
            assert( var_x == NULL );
            Py_INCREF( tmp_assign_source_11 );
            var_x = tmp_assign_source_11;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
            assert( var_info == NULL );
            Py_INCREF( tmp_assign_source_12 );
            var_info = tmp_assign_source_12;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
            tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;
            assert( var_status == NULL );
            Py_INCREF( tmp_assign_source_13 );
            var_status = tmp_assign_source_13;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( par_max_nfev );
            tmp_compexpr_left_5 = par_max_nfev;
            tmp_compexpr_right_5 = Py_None;
            tmp_condition_result_5 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_14;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                tmp_left_name_6 = const_int_pos_100;
                CHECK_OBJECT( var_n );
                tmp_right_name_6 = var_n;
                tmp_assign_source_14 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_6, tmp_right_name_6 );
                if ( tmp_assign_source_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 70;
                    type_description_1 = "ooooooooooooNNNooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_max_nfev;
                    assert( old != NULL );
                    par_max_nfev = tmp_assign_source_14;
                    Py_DECREF( old );
                }

            }
            branch_no_5:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_args_element_name_23;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain__minpack );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minpack );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minpack" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 71;
                type_description_1 = "ooooooooooooNNNooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_instance_2 = tmp_mvar_value_4;
            CHECK_OBJECT( par_fun );
            tmp_args_element_name_12 = par_fun;
            CHECK_OBJECT( par_jac );
            tmp_args_element_name_13 = par_jac;
            CHECK_OBJECT( par_x0 );
            tmp_args_element_name_14 = par_x0;
            tmp_args_element_name_15 = const_tuple_empty;
            tmp_args_element_name_16 = Py_True;
            tmp_args_element_name_17 = Py_False;
            CHECK_OBJECT( par_ftol );
            tmp_args_element_name_18 = par_ftol;
            CHECK_OBJECT( par_xtol );
            tmp_args_element_name_19 = par_xtol;
            CHECK_OBJECT( par_gtol );
            tmp_args_element_name_20 = par_gtol;
            CHECK_OBJECT( par_max_nfev );
            tmp_args_element_name_21 = par_max_nfev;
            tmp_args_element_name_22 = const_float_100_0;
            CHECK_OBJECT( var_diag );
            tmp_args_element_name_23 = var_diag;
            frame_1bce61bf942476c113a746c18866e257->m_frame.f_lineno = 71;
            {
                PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23 };
                tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS12( tmp_called_instance_2, const_str_plain__lmder, call_args );
            }

            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "ooooooooooooNNNooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "ooooooooooooNNNooooooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_15;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_4, 0, 3 );
            if ( tmp_assign_source_16 == NULL )
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


                type_description_1 = "ooooooooooooNNNooooooooooo";
                exception_lineno = 71;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_16;
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_5, 1, 3 );
            if ( tmp_assign_source_17 == NULL )
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


                type_description_1 = "ooooooooooooNNNooooooooooo";
                exception_lineno = 71;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_17;
        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_6, 2, 3 );
            if ( tmp_assign_source_18 == NULL )
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


                type_description_1 = "ooooooooooooNNNooooooooooo";
                exception_lineno = 71;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_3 == NULL );
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_18;
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

                        type_description_1 = "ooooooooooooNNNooooooooooo";
                        exception_lineno = 71;
                        goto try_except_handler_5;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooNNNooooooooooo";
                exception_lineno = 71;
                goto try_except_handler_5;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_5:;
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

        goto try_except_handler_4;
        // End of try:
        try_end_3:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_4:;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_19 = tmp_tuple_unpack_2__element_1;
            assert( var_x == NULL );
            Py_INCREF( tmp_assign_source_19 );
            var_x = tmp_assign_source_19;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_20 = tmp_tuple_unpack_2__element_2;
            assert( var_info == NULL );
            Py_INCREF( tmp_assign_source_20 );
            var_info = tmp_assign_source_20;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
            tmp_assign_source_21 = tmp_tuple_unpack_2__element_3;
            assert( var_status == NULL );
            Py_INCREF( tmp_assign_source_21 );
            var_status = tmp_assign_source_21;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_info );
        tmp_subscribed_name_1 = var_info;
        tmp_subscript_name_1 = const_str_plain_fvec;
        tmp_assign_source_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f == NULL );
        var_f = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_24;
        int tmp_truth_name_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_callable );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( par_jac );
        tmp_args_element_name_24 = par_jac;
        frame_1bce61bf942476c113a746c18866e257->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 77;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_25;
            CHECK_OBJECT( par_jac );
            tmp_called_name_2 = par_jac;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_25 = var_x;
            frame_1bce61bf942476c113a746c18866e257->m_frame.f_lineno = 78;
            {
                PyObject *call_args[] = { tmp_args_element_name_25 };
                tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;
                type_description_1 = "ooooooooooooNNNooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_J == NULL );
            var_J = tmp_assign_source_23;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_args_element_name_28;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 80;
                type_description_1 = "ooooooooooooNNNooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_5;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_atleast_2d );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                type_description_1 = "ooooooooooooNNNooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_approx_derivative );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_approx_derivative );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "approx_derivative" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 80;
                type_description_1 = "ooooooooooooNNNooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_6;
            CHECK_OBJECT( par_fun );
            tmp_args_element_name_27 = par_fun;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_28 = var_x;
            frame_1bce61bf942476c113a746c18866e257->m_frame.f_lineno = 80;
            {
                PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28 };
                tmp_args_element_name_26 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            if ( tmp_args_element_name_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 80;
                type_description_1 = "ooooooooooooNNNooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_1bce61bf942476c113a746c18866e257->m_frame.f_lineno = 80;
            {
                PyObject *call_args[] = { tmp_args_element_name_26 };
                tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_26 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                type_description_1 = "ooooooooooooNNNooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_J == NULL );
            var_J = tmp_assign_source_24;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_args_element_name_30;
        tmp_left_name_7 = const_float_0_5;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 82;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_7;
        CHECK_OBJECT( var_f );
        tmp_args_element_name_29 = var_f;
        CHECK_OBJECT( var_f );
        tmp_args_element_name_30 = var_f;
        frame_1bce61bf942476c113a746c18866e257->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30 };
            tmp_right_name_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cost == NULL );
        var_cost = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_31;
        CHECK_OBJECT( var_J );
        tmp_source_name_3 = var_J;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_T );
        if ( tmp_called_instance_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_f );
        tmp_args_element_name_31 = var_f;
        frame_1bce61bf942476c113a746c18866e257->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = { tmp_args_element_name_31 };
            tmp_assign_source_26 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_4 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_g == NULL );
        var_g = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 84;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_8;
        CHECK_OBJECT( var_g );
        tmp_tuple_element_1 = var_g;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_ord;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 84;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_9;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_inf );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 84;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_1bce61bf942476c113a746c18866e257->m_frame.f_lineno = 84;
        tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_g_norm == NULL );
        var_g_norm = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_info );
        tmp_subscribed_name_2 = var_info;
        tmp_subscript_name_2 = const_str_plain_nfev;
        tmp_assign_source_28 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nfev == NULL );
        var_nfev = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT( var_info );
        tmp_called_instance_5 = var_info;
        frame_1bce61bf942476c113a746c18866e257->m_frame.f_lineno = 87;
        tmp_assign_source_29 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_njev_none_tuple, 0 ) );

        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_njev == NULL );
        var_njev = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_subscript_name_3;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_FROM_MINPACK_TO_COMMON );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FROM_MINPACK_TO_COMMON );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FROM_MINPACK_TO_COMMON" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 89;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_3 = tmp_mvar_value_10;
        CHECK_OBJECT( var_status );
        tmp_subscript_name_3 = var_status;
        tmp_assign_source_30 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_status;
            assert( old != NULL );
            var_status = tmp_assign_source_30;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 90;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_11;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_zeros_like );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x0 );
        tmp_tuple_element_2 = par_x0;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
        frame_1bce61bf942476c113a746c18866e257->m_frame.f_lineno = 90;
        tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_active_mask == NULL );
        var_active_mask = tmp_assign_source_31;
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_OptimizeResult );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeResult );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_12;
        tmp_dict_key_2 = const_str_plain_x;
        CHECK_OBJECT( var_x );
        tmp_dict_value_2 = var_x;
        tmp_kw_name_3 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_cost;
        CHECK_OBJECT( var_cost );
        tmp_dict_value_3 = var_cost;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_fun;
        CHECK_OBJECT( var_f );
        tmp_dict_value_4 = var_f;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_jac;
        CHECK_OBJECT( var_J );
        tmp_dict_value_5 = var_J;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_grad;
        CHECK_OBJECT( var_g );
        tmp_dict_value_6 = var_g;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_optimality;
        CHECK_OBJECT( var_g_norm );
        tmp_dict_value_7 = var_g_norm;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_active_mask;
        CHECK_OBJECT( var_active_mask );
        tmp_dict_value_8 = var_active_mask;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_nfev;
        CHECK_OBJECT( var_nfev );
        tmp_dict_value_9 = var_nfev;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_njev;
        CHECK_OBJECT( var_njev );
        tmp_dict_value_10 = var_njev;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_10, tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_11 = const_str_plain_status;
        CHECK_OBJECT( var_status );
        tmp_dict_value_11 = var_status;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        frame_1bce61bf942476c113a746c18866e257->m_frame.f_lineno = 92;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1bce61bf942476c113a746c18866e257 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1bce61bf942476c113a746c18866e257 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1bce61bf942476c113a746c18866e257 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1bce61bf942476c113a746c18866e257, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1bce61bf942476c113a746c18866e257->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1bce61bf942476c113a746c18866e257, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1bce61bf942476c113a746c18866e257,
        type_description_1,
        par_fun,
        par_x0,
        par_jac,
        par_ftol,
        par_xtol,
        par_gtol,
        par_max_nfev,
        par_x_scale,
        par_diff_step,
        var_n,
        var_epsfcn,
        var_diag,
        NULL,
        NULL,
        NULL,
        var_x,
        var_info,
        var_status,
        var_f,
        var_J,
        var_cost,
        var_g,
        var_g_norm,
        var_nfev,
        var_njev,
        var_active_mask
    );


    // Release cached frame.
    if ( frame_1bce61bf942476c113a746c18866e257 == cache_frame_1bce61bf942476c113a746c18866e257 )
    {
        Py_DECREF( frame_1bce61bf942476c113a746c18866e257 );
    }
    cache_frame_1bce61bf942476c113a746c18866e257 = NULL;

    assertFrameObject( frame_1bce61bf942476c113a746c18866e257 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_1_call_minpack );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_gtol );
    Py_DECREF( par_gtol );
    par_gtol = NULL;

    Py_XDECREF( par_max_nfev );
    par_max_nfev = NULL;

    CHECK_OBJECT( (PyObject *)par_x_scale );
    Py_DECREF( par_x_scale );
    par_x_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_diff_step );
    Py_DECREF( par_diff_step );
    par_diff_step = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_epsfcn );
    Py_DECREF( var_epsfcn );
    var_epsfcn = NULL;

    CHECK_OBJECT( (PyObject *)var_diag );
    Py_DECREF( var_diag );
    var_diag = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_info );
    Py_DECREF( var_info );
    var_info = NULL;

    CHECK_OBJECT( (PyObject *)var_status );
    Py_DECREF( var_status );
    var_status = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

    CHECK_OBJECT( (PyObject *)var_J );
    Py_DECREF( var_J );
    var_J = NULL;

    CHECK_OBJECT( (PyObject *)var_cost );
    Py_DECREF( var_cost );
    var_cost = NULL;

    CHECK_OBJECT( (PyObject *)var_g );
    Py_DECREF( var_g );
    var_g = NULL;

    CHECK_OBJECT( (PyObject *)var_g_norm );
    Py_DECREF( var_g_norm );
    var_g_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_nfev );
    Py_DECREF( var_nfev );
    var_nfev = NULL;

    CHECK_OBJECT( (PyObject *)var_njev );
    Py_DECREF( var_njev );
    var_njev = NULL;

    CHECK_OBJECT( (PyObject *)var_active_mask );
    Py_DECREF( var_active_mask );
    var_active_mask = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_gtol );
    Py_DECREF( par_gtol );
    par_gtol = NULL;

    Py_XDECREF( par_max_nfev );
    par_max_nfev = NULL;

    CHECK_OBJECT( (PyObject *)par_x_scale );
    Py_DECREF( par_x_scale );
    par_x_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_diff_step );
    Py_DECREF( par_diff_step );
    par_diff_step = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_epsfcn );
    var_epsfcn = NULL;

    Py_XDECREF( var_diag );
    var_diag = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_g_norm );
    var_g_norm = NULL;

    Py_XDECREF( var_nfev );
    var_nfev = NULL;

    Py_XDECREF( var_njev );
    var_njev = NULL;

    Py_XDECREF( var_active_mask );
    var_active_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_1_call_minpack );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_2_prepare_bounds( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_bounds = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *var_lb = NULL;
    PyObject *var_ub = NULL;
    PyObject *outline_0_var_b = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c44124407d821733fff6f0118fd547fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_cd1386fb643288446acbffb4057179f9_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_cd1386fb643288446acbffb4057179f9_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_c44124407d821733fff6f0118fd547fd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c44124407d821733fff6f0118fd547fd, codeobj_c44124407d821733fff6f0118fd547fd, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c44124407d821733fff6f0118fd547fd = cache_frame_c44124407d821733fff6f0118fd547fd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c44124407d821733fff6f0118fd547fd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c44124407d821733fff6f0118fd547fd ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( par_bounds );
            tmp_iter_arg_2 = par_bounds;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_cd1386fb643288446acbffb4057179f9_2, codeobj_cd1386fb643288446acbffb4057179f9, module_scipy$optimize$_lsq$least_squares, sizeof(void *) );
        frame_cd1386fb643288446acbffb4057179f9_2 = cache_frame_cd1386fb643288446acbffb4057179f9_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_cd1386fb643288446acbffb4057179f9_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_cd1386fb643288446acbffb4057179f9_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 98;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_b;
                outline_0_var_b = tmp_assign_source_5;
                Py_INCREF( outline_0_var_b );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 98;
                type_description_2 = "o";
                goto try_except_handler_4;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( outline_0_var_b );
            tmp_tuple_element_1 = outline_0_var_b;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
            frame_cd1386fb643288446acbffb4057179f9_2->m_frame.f_lineno = 98;
            tmp_append_value_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_iter_arg_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_iter_arg_1 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_2_prepare_bounds );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        goto frame_return_exit_1;
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

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_cd1386fb643288446acbffb4057179f9_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_cd1386fb643288446acbffb4057179f9_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_3;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_cd1386fb643288446acbffb4057179f9_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_cd1386fb643288446acbffb4057179f9_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_cd1386fb643288446acbffb4057179f9_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_cd1386fb643288446acbffb4057179f9_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_cd1386fb643288446acbffb4057179f9_2,
            type_description_2,
            outline_0_var_b
        );


        // Release cached frame.
        if ( frame_cd1386fb643288446acbffb4057179f9_2 == cache_frame_cd1386fb643288446acbffb4057179f9_2 )
        {
            Py_DECREF( frame_cd1386fb643288446acbffb4057179f9_2 );
        }
        cache_frame_cd1386fb643288446acbffb4057179f9_2 = NULL;

        assertFrameObject( frame_cd1386fb643288446acbffb4057179f9_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_2_prepare_bounds );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF( outline_0_var_b );
        outline_0_var_b = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_b );
        outline_0_var_b = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_2_prepare_bounds );
        return NULL;
        outline_exception_1:;
        exception_lineno = 98;
        goto try_except_handler_2;
        outline_result_1:;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_6 == NULL )
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


            type_description_1 = "oooo";
            exception_lineno = 98;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_7 == NULL )
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


            type_description_1 = "oooo";
            exception_lineno = 98;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "oooo";
                    exception_lineno = 98;
                    goto try_except_handler_5;
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

            type_description_1 = "oooo";
            exception_lineno = 98;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert( var_lb == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_lb = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert( var_ub == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_ub = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_lb );
        tmp_source_name_2 = var_lb;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooo";
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
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 100;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( var_lb );
            tmp_args_element_name_1 = var_lb;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_2 = par_n;
            frame_c44124407d821733fff6f0118fd547fd->m_frame.f_lineno = 100;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_resize, call_args );
            }

            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_lb;
                assert( old != NULL );
                var_lb = tmp_assign_source_10;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( var_ub );
        tmp_source_name_3 = var_ub;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "oooo";
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
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 103;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_3;
            CHECK_OBJECT( var_ub );
            tmp_args_element_name_3 = var_ub;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_4 = par_n;
            frame_c44124407d821733fff6f0118fd547fd->m_frame.f_lineno = 103;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_assign_source_11 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_resize, call_args );
            }

            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_ub;
                assert( old != NULL );
                var_ub = tmp_assign_source_11;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c44124407d821733fff6f0118fd547fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c44124407d821733fff6f0118fd547fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c44124407d821733fff6f0118fd547fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c44124407d821733fff6f0118fd547fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c44124407d821733fff6f0118fd547fd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c44124407d821733fff6f0118fd547fd,
        type_description_1,
        par_bounds,
        par_n,
        var_lb,
        var_ub
    );


    // Release cached frame.
    if ( frame_c44124407d821733fff6f0118fd547fd == cache_frame_c44124407d821733fff6f0118fd547fd )
    {
        Py_DECREF( frame_c44124407d821733fff6f0118fd547fd );
    }
    cache_frame_c44124407d821733fff6f0118fd547fd = NULL;

    assertFrameObject( frame_c44124407d821733fff6f0118fd547fd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( var_lb );
        tmp_tuple_element_2 = var_lb;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_ub );
        tmp_tuple_element_2 = var_ub;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_2_prepare_bounds );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)var_lb );
    Py_DECREF( var_lb );
    var_lb = NULL;

    CHECK_OBJECT( (PyObject *)var_ub );
    Py_DECREF( var_ub );
    var_ub = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_lb );
    var_lb = NULL;

    Py_XDECREF( var_ub );
    var_ub = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_2_prepare_bounds );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_3_check_tolerance( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ftol = python_pars[ 0 ];
    PyObject *par_xtol = python_pars[ 1 ];
    PyObject *par_gtol = python_pars[ 2 ];
    PyObject *var_check = NULL;
    struct Nuitka_FrameObject *frame_4d29dc151a3f030d03c51729f7de9925;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4d29dc151a3f030d03c51729f7de9925 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_3_check_tolerance$$$function_1_check(  );



        assert( var_check == NULL );
        var_check = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4d29dc151a3f030d03c51729f7de9925, codeobj_4d29dc151a3f030d03c51729f7de9925, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4d29dc151a3f030d03c51729f7de9925 = cache_frame_4d29dc151a3f030d03c51729f7de9925;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4d29dc151a3f030d03c51729f7de9925 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4d29dc151a3f030d03c51729f7de9925 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_check );
        tmp_called_name_1 = var_check;
        CHECK_OBJECT( par_ftol );
        tmp_args_element_name_1 = par_ftol;
        tmp_args_element_name_2 = const_str_plain_ftol;
        frame_4d29dc151a3f030d03c51729f7de9925->m_frame.f_lineno = 118;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ftol;
            assert( old != NULL );
            par_ftol = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( var_check );
        tmp_called_name_2 = var_check;
        CHECK_OBJECT( par_xtol );
        tmp_args_element_name_3 = par_xtol;
        tmp_args_element_name_4 = const_str_plain_xtol;
        frame_4d29dc151a3f030d03c51729f7de9925->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_xtol;
            assert( old != NULL );
            par_xtol = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( var_check );
        tmp_called_name_3 = var_check;
        CHECK_OBJECT( par_gtol );
        tmp_args_element_name_5 = par_gtol;
        tmp_args_element_name_6 = const_str_plain_gtol;
        frame_4d29dc151a3f030d03c51729f7de9925->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_gtol;
            assert( old != NULL );
            par_gtol = tmp_assign_source_4;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( par_ftol );
        tmp_compexpr_left_1 = par_ftol;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_EPS );

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

            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oooo";
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
        CHECK_OBJECT( par_xtol );
        tmp_compexpr_left_2 = par_xtol;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_EPS );

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

            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_gtol );
        tmp_compexpr_left_3 = par_gtol;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_EPS );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EPS );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EPS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_3 = tmp_mvar_value_3;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_mvar_value_4;
            tmp_source_name_1 = const_str_digest_2d8985d092817a0a004af31ad610342d;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
            assert( !(tmp_called_name_4 == NULL) );
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_EPS );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EPS );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EPS" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 124;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_7 = tmp_mvar_value_4;
            frame_4d29dc151a3f030d03c51729f7de9925->m_frame.f_lineno = 123;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_4d29dc151a3f030d03c51729f7de9925->m_frame.f_lineno = 123;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 123;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d29dc151a3f030d03c51729f7de9925 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d29dc151a3f030d03c51729f7de9925 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4d29dc151a3f030d03c51729f7de9925, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4d29dc151a3f030d03c51729f7de9925->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4d29dc151a3f030d03c51729f7de9925, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4d29dc151a3f030d03c51729f7de9925,
        type_description_1,
        par_ftol,
        par_xtol,
        par_gtol,
        var_check
    );


    // Release cached frame.
    if ( frame_4d29dc151a3f030d03c51729f7de9925 == cache_frame_4d29dc151a3f030d03c51729f7de9925 )
    {
        Py_DECREF( frame_4d29dc151a3f030d03c51729f7de9925 );
    }
    cache_frame_4d29dc151a3f030d03c51729f7de9925 = NULL;

    assertFrameObject( frame_4d29dc151a3f030d03c51729f7de9925 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_ftol );
        tmp_tuple_element_1 = par_ftol;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_xtol );
        tmp_tuple_element_1 = par_xtol;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_gtol );
        tmp_tuple_element_1 = par_gtol;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_3_check_tolerance );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_gtol );
    Py_DECREF( par_gtol );
    par_gtol = NULL;

    CHECK_OBJECT( (PyObject *)var_check );
    Py_DECREF( var_check );
    var_check = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_gtol );
    Py_DECREF( par_gtol );
    par_gtol = NULL;

    CHECK_OBJECT( (PyObject *)var_check );
    Py_DECREF( var_check );
    var_check = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_3_check_tolerance );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_3_check_tolerance$$$function_1_check( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tol = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_6652e219ccfc5d3f3688b73ce0c108d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6652e219ccfc5d3f3688b73ce0c108d9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6652e219ccfc5d3f3688b73ce0c108d9, codeobj_6652e219ccfc5d3f3688b73ce0c108d9, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *) );
    frame_6652e219ccfc5d3f3688b73ce0c108d9 = cache_frame_6652e219ccfc5d3f3688b73ce0c108d9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6652e219ccfc5d3f3688b73ce0c108d9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6652e219ccfc5d3f3688b73ce0c108d9 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_left_1 = par_tol;
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
            tmp_assign_source_1 = const_int_0;
            {
                PyObject *old = par_tol;
                assert( old != NULL );
                par_tol = tmp_assign_source_1;
                Py_INCREF( par_tol );
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_mvar_value_1;
            CHECK_OBJECT( par_tol );
            tmp_compexpr_left_2 = par_tol;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_EPS );

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

                exception_lineno = 112;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_2 = tmp_mvar_value_1;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;
                type_description_1 = "oo";
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_1;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_mvar_value_3;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_warn );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 113;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_2;
                tmp_source_name_1 = const_str_digest_84dd8506281fc19c002bd9bb0a01d08f;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
                assert( !(tmp_called_name_2 == NULL) );
                CHECK_OBJECT( par_name );
                tmp_args_element_name_2 = par_name;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_EPS );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EPS );
                }

                if ( tmp_mvar_value_3 == NULL )
                {
                    Py_DECREF( tmp_called_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EPS" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 115;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_3 = tmp_mvar_value_3;
                frame_6652e219ccfc5d3f3688b73ce0c108d9->m_frame.f_lineno = 113;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                    tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 113;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                frame_6652e219ccfc5d3f3688b73ce0c108d9->m_frame.f_lineno = 113;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 113;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            branch_no_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6652e219ccfc5d3f3688b73ce0c108d9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6652e219ccfc5d3f3688b73ce0c108d9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6652e219ccfc5d3f3688b73ce0c108d9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6652e219ccfc5d3f3688b73ce0c108d9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6652e219ccfc5d3f3688b73ce0c108d9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6652e219ccfc5d3f3688b73ce0c108d9,
        type_description_1,
        par_tol,
        par_name
    );


    // Release cached frame.
    if ( frame_6652e219ccfc5d3f3688b73ce0c108d9 == cache_frame_6652e219ccfc5d3f3688b73ce0c108d9 )
    {
        Py_DECREF( frame_6652e219ccfc5d3f3688b73ce0c108d9 );
    }
    cache_frame_6652e219ccfc5d3f3688b73ce0c108d9 = NULL;

    assertFrameObject( frame_6652e219ccfc5d3f3688b73ce0c108d9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_tol );
    tmp_return_value = par_tol;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_3_check_tolerance$$$function_1_check );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_3_check_tolerance$$$function_1_check );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_4_check_x_scale( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x_scale = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *var_valid = NULL;
    struct Nuitka_FrameObject *frame_f0af4f4aebe3010bbff9a024e8bc21a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_f0af4f4aebe3010bbff9a024e8bc21a9 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f0af4f4aebe3010bbff9a024e8bc21a9, codeobj_f0af4f4aebe3010bbff9a024e8bc21a9, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f0af4f4aebe3010bbff9a024e8bc21a9 = cache_frame_f0af4f4aebe3010bbff9a024e8bc21a9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f0af4f4aebe3010bbff9a024e8bc21a9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f0af4f4aebe3010bbff9a024e8bc21a9 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_x_scale );
        tmp_isinstance_inst_1 = par_x_scale;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_string_types );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_string_types );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "string_types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooo";
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
        CHECK_OBJECT( par_x_scale );
        tmp_compexpr_left_1 = par_x_scale;
        tmp_compexpr_right_1 = const_str_plain_jac;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_x_scale );
        tmp_return_value = par_x_scale;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 134;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_x_scale );
        tmp_tuple_element_1 = par_x_scale;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
        frame_f0af4f4aebe3010bbff9a024e8bc21a9->m_frame.f_lineno = 134;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_x_scale;
            assert( old != NULL );
            par_x_scale = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_all );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_4;
        CHECK_OBJECT( par_x_scale );
        tmp_args_element_name_2 = par_x_scale;
        frame_f0af4f4aebe3010bbff9a024e8bc21a9->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isfinite, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_f0af4f4aebe3010bbff9a024e8bc21a9->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_and_left_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_and_left_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
        if ( tmp_and_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_2 );

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF( tmp_and_left_value_2 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_source_name_3 = tmp_mvar_value_5;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_all );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_x_scale );
        tmp_compexpr_left_2 = par_x_scale;
        tmp_compexpr_right_2 = const_int_0;
        tmp_args_element_name_3 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_f0af4f4aebe3010bbff9a024e8bc21a9->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_and_right_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_and_right_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_assign_source_2 = tmp_and_left_value_2;
        and_end_2:;
        assert( var_valid == NULL );
        var_valid = tmp_assign_source_2;
    }
    goto try_end_1;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_f0af4f4aebe3010bbff9a024e8bc21a9, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_f0af4f4aebe3010bbff9a024e8bc21a9, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = const_tuple_type_ValueError_type_TypeError_tuple;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooo";
            goto try_except_handler_3;
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
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = Py_False;
            assert( var_valid == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_valid = tmp_assign_source_3;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 133;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_f0af4f4aebe3010bbff9a024e8bc21a9->m_frame) frame_f0af4f4aebe3010bbff9a024e8bc21a9->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto try_except_handler_3;
        branch_end_2:;
    }
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_4_check_x_scale );
    return NULL;
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        if ( var_valid == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "valid" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 139;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_1 = var_valid;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
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
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_13b4df20aebf3df01867586921fa7023;
            frame_f0af4f4aebe3010bbff9a024e8bc21a9->m_frame.f_lineno = 140;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 140;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_4;
        if ( par_x_scale == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x_scale" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = par_x_scale;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ndim );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooo";
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 144;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_6;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_resize );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 144;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            if ( par_x_scale == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x_scale" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 144;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_4 = par_x_scale;
            CHECK_OBJECT( par_x0 );
            tmp_source_name_6 = par_x0;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 144;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_f0af4f4aebe3010bbff9a024e8bc21a9->m_frame.f_lineno = 144;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 144;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x_scale;
                par_x_scale = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        if ( par_x_scale == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x_scale" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = par_x_scale;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x0 );
        tmp_source_name_8 = par_x0;
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_5 );

            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_da7bad76b5b2cca94c6eb655d8db169d;
            frame_f0af4f4aebe3010bbff9a024e8bc21a9->m_frame.f_lineno = 147;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 147;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }
    if ( par_x_scale == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x_scale" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_x_scale;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f0af4f4aebe3010bbff9a024e8bc21a9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f0af4f4aebe3010bbff9a024e8bc21a9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f0af4f4aebe3010bbff9a024e8bc21a9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f0af4f4aebe3010bbff9a024e8bc21a9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f0af4f4aebe3010bbff9a024e8bc21a9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f0af4f4aebe3010bbff9a024e8bc21a9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f0af4f4aebe3010bbff9a024e8bc21a9,
        type_description_1,
        par_x_scale,
        par_x0,
        var_valid
    );


    // Release cached frame.
    if ( frame_f0af4f4aebe3010bbff9a024e8bc21a9 == cache_frame_f0af4f4aebe3010bbff9a024e8bc21a9 )
    {
        Py_DECREF( frame_f0af4f4aebe3010bbff9a024e8bc21a9 );
    }
    cache_frame_f0af4f4aebe3010bbff9a024e8bc21a9 = NULL;

    assertFrameObject( frame_f0af4f4aebe3010bbff9a024e8bc21a9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_4_check_x_scale );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x_scale );
    par_x_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    Py_XDECREF( var_valid );
    var_valid = NULL;

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

    Py_XDECREF( par_x_scale );
    par_x_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    Py_XDECREF( var_valid );
    var_valid = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_4_check_x_scale );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_5_check_jac_sparsity( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_jac_sparsity = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_n = python_pars[ 2 ];
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_67415de0f87415d662a89efc1a6e0cb0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_67415de0f87415d662a89efc1a6e0cb0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_jac_sparsity );
        tmp_compexpr_left_1 = par_jac_sparsity;
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_1;
        branch_no_1:;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_67415de0f87415d662a89efc1a6e0cb0, codeobj_67415de0f87415d662a89efc1a6e0cb0, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_67415de0f87415d662a89efc1a6e0cb0 = cache_frame_67415de0f87415d662a89efc1a6e0cb0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_67415de0f87415d662a89efc1a6e0cb0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_67415de0f87415d662a89efc1a6e0cb0 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_issparse );

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

            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_jac_sparsity );
        tmp_args_element_name_1 = par_jac_sparsity;
        frame_67415de0f87415d662a89efc1a6e0cb0->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
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
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 157;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_jac_sparsity );
            tmp_args_element_name_2 = par_jac_sparsity;
            frame_67415de0f87415d662a89efc1a6e0cb0->m_frame.f_lineno = 157;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_atleast_2d, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_jac_sparsity;
                assert( old != NULL );
                par_jac_sparsity = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_jac_sparsity );
        tmp_source_name_1 = par_jac_sparsity;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_m );
        tmp_tuple_element_1 = par_m;
        tmp_compexpr_right_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_n );
        tmp_tuple_element_1 = par_n;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_2, 1, tmp_tuple_element_1 );
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_63b50f97ffa5798e27f0da8eb133eab8;
            frame_67415de0f87415d662a89efc1a6e0cb0->m_frame.f_lineno = 160;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 160;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_jac_sparsity );
        tmp_tuple_element_2 = par_jac_sparsity;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_group_columns );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_group_columns );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "group_columns" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 162;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_jac_sparsity );
        tmp_args_element_name_3 = par_jac_sparsity;
        frame_67415de0f87415d662a89efc1a6e0cb0->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 162;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67415de0f87415d662a89efc1a6e0cb0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_67415de0f87415d662a89efc1a6e0cb0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67415de0f87415d662a89efc1a6e0cb0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_67415de0f87415d662a89efc1a6e0cb0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_67415de0f87415d662a89efc1a6e0cb0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_67415de0f87415d662a89efc1a6e0cb0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_67415de0f87415d662a89efc1a6e0cb0,
        type_description_1,
        par_jac_sparsity,
        par_m,
        par_n
    );


    // Release cached frame.
    if ( frame_67415de0f87415d662a89efc1a6e0cb0 == cache_frame_67415de0f87415d662a89efc1a6e0cb0 )
    {
        Py_DECREF( frame_67415de0f87415d662a89efc1a6e0cb0 );
    }
    cache_frame_67415de0f87415d662a89efc1a6e0cb0 = NULL;

    assertFrameObject( frame_67415de0f87415d662a89efc1a6e0cb0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_5_check_jac_sparsity );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_jac_sparsity );
    par_jac_sparsity = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

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

    Py_XDECREF( par_jac_sparsity );
    par_jac_sparsity = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_5_check_jac_sparsity );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_6_huber( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_z = python_pars[ 0 ];
    PyObject *par_rho = python_pars[ 1 ];
    PyObject *par_cost_only = python_pars[ 2 ];
    PyObject *var_mask = NULL;
    struct Nuitka_FrameObject *frame_d1dc46ce1f36799974c7e7e9c239304d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d1dc46ce1f36799974c7e7e9c239304d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d1dc46ce1f36799974c7e7e9c239304d, codeobj_d1dc46ce1f36799974c7e7e9c239304d, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d1dc46ce1f36799974c7e7e9c239304d = cache_frame_d1dc46ce1f36799974c7e7e9c239304d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d1dc46ce1f36799974c7e7e9c239304d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d1dc46ce1f36799974c7e7e9c239304d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_z );
        tmp_compexpr_left_1 = par_z;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_assign_source_1 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_mask == NULL );
        var_mask = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_z );
        tmp_subscribed_name_1 = par_z;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_1 = var_mask;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rho );
        tmp_ass_subscribed_1 = par_rho;
        tmp_tuple_element_1 = const_int_0;
        tmp_ass_subscript_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_mask );
        tmp_tuple_element_1 = var_mask;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_1 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_operand_name_2;
        tmp_left_name_2 = const_int_pos_2;
        CHECK_OBJECT( par_z );
        tmp_subscribed_name_2 = par_z;
        CHECK_OBJECT( var_mask );
        tmp_operand_name_1 = var_mask;
        tmp_subscript_name_2 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_1 );
        if ( tmp_subscript_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_float_0_5;
        tmp_right_name_1 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_int_pos_1;
        tmp_ass_subvalue_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rho );
        tmp_ass_subscribed_2 = par_rho;
        tmp_tuple_element_2 = const_int_0;
        tmp_ass_subscript_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_mask );
        tmp_operand_name_2 = var_mask;
        tmp_tuple_element_2 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_2 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );

            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_ass_subscript_2, 1, tmp_tuple_element_2 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscript_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_cost_only );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_cost_only );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_tuple_element_3;
        tmp_ass_subvalue_3 = const_int_pos_1;
        CHECK_OBJECT( par_rho );
        tmp_ass_subscribed_3 = par_rho;
        tmp_tuple_element_3 = const_int_pos_1;
        tmp_ass_subscript_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_ass_subscript_3, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_mask );
        tmp_tuple_element_3 = var_mask;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_ass_subscript_3, 1, tmp_tuple_element_3 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscript_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_operand_name_4;
        CHECK_OBJECT( par_z );
        tmp_subscribed_name_3 = par_z;
        CHECK_OBJECT( var_mask );
        tmp_operand_name_3 = var_mask;
        tmp_subscript_name_3 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_3 );
        if ( tmp_subscript_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_float_minus_0_5;
        tmp_ass_subvalue_4 = POWER_OPERATION( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rho );
        tmp_ass_subscribed_4 = par_rho;
        tmp_tuple_element_4 = const_int_pos_1;
        tmp_ass_subscript_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_ass_subscript_4, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_mask );
        tmp_operand_name_4 = var_mask;
        tmp_tuple_element_4 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_4 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_4 );
            Py_DECREF( tmp_ass_subscript_4 );

            exception_lineno = 175;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_ass_subscript_4, 1, tmp_tuple_element_4 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subscript_4 );
        Py_DECREF( tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        PyObject *tmp_tuple_element_5;
        tmp_ass_subvalue_5 = const_int_0;
        CHECK_OBJECT( par_rho );
        tmp_ass_subscribed_5 = par_rho;
        tmp_tuple_element_5 = const_int_pos_2;
        tmp_ass_subscript_5 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_ass_subscript_5, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_mask );
        tmp_tuple_element_5 = var_mask;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_ass_subscript_5, 1, tmp_tuple_element_5 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subscript_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_operand_name_6;
        tmp_left_name_5 = const_float_minus_0_5;
        CHECK_OBJECT( par_z );
        tmp_subscribed_name_4 = par_z;
        CHECK_OBJECT( var_mask );
        tmp_operand_name_5 = var_mask;
        tmp_subscript_name_4 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_5 );
        if ( tmp_subscript_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = const_float_minus_1_5;
        tmp_right_name_5 = POWER_OPERATION( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_6 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_ass_subvalue_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rho );
        tmp_ass_subscribed_6 = par_rho;
        tmp_tuple_element_6 = const_int_pos_2;
        tmp_ass_subscript_6 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_ass_subscript_6, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_mask );
        tmp_operand_name_6 = var_mask;
        tmp_tuple_element_6 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_6 );
        if ( tmp_tuple_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_6 );
            Py_DECREF( tmp_ass_subscript_6 );

            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_ass_subscript_6, 1, tmp_tuple_element_6 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
        Py_DECREF( tmp_ass_subscript_6 );
        Py_DECREF( tmp_ass_subvalue_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d1dc46ce1f36799974c7e7e9c239304d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d1dc46ce1f36799974c7e7e9c239304d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d1dc46ce1f36799974c7e7e9c239304d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d1dc46ce1f36799974c7e7e9c239304d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d1dc46ce1f36799974c7e7e9c239304d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d1dc46ce1f36799974c7e7e9c239304d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d1dc46ce1f36799974c7e7e9c239304d,
        type_description_1,
        par_z,
        par_rho,
        par_cost_only,
        var_mask
    );


    // Release cached frame.
    if ( frame_d1dc46ce1f36799974c7e7e9c239304d == cache_frame_d1dc46ce1f36799974c7e7e9c239304d )
    {
        Py_DECREF( frame_d1dc46ce1f36799974c7e7e9c239304d );
    }
    cache_frame_d1dc46ce1f36799974c7e7e9c239304d = NULL;

    assertFrameObject( frame_d1dc46ce1f36799974c7e7e9c239304d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_6_huber );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_rho );
    Py_DECREF( par_rho );
    par_rho = NULL;

    CHECK_OBJECT( (PyObject *)par_cost_only );
    Py_DECREF( par_cost_only );
    par_cost_only = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_rho );
    Py_DECREF( par_rho );
    par_rho = NULL;

    CHECK_OBJECT( (PyObject *)par_cost_only );
    Py_DECREF( par_cost_only );
    par_cost_only = NULL;

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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_6_huber );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_7_soft_l1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_z = python_pars[ 0 ];
    PyObject *par_rho = python_pars[ 1 ];
    PyObject *par_cost_only = python_pars[ 2 ];
    PyObject *var_t = NULL;
    struct Nuitka_FrameObject *frame_5c9fa8c70cf2e2ae2360ee0100ca13c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5c9fa8c70cf2e2ae2360ee0100ca13c6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5c9fa8c70cf2e2ae2360ee0100ca13c6, codeobj_5c9fa8c70cf2e2ae2360ee0100ca13c6, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5c9fa8c70cf2e2ae2360ee0100ca13c6 = cache_frame_5c9fa8c70cf2e2ae2360ee0100ca13c6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5c9fa8c70cf2e2ae2360ee0100ca13c6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5c9fa8c70cf2e2ae2360ee0100ca13c6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_int_pos_1;
        CHECK_OBJECT( par_z );
        tmp_right_name_1 = par_z;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_t == NULL );
        var_t = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        tmp_left_name_2 = const_int_pos_2;
        CHECK_OBJECT( var_t );
        tmp_left_name_4 = var_t;
        tmp_right_name_3 = const_float_0_5;
        tmp_left_name_3 = POWER_OPERATION( tmp_left_name_4, tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_int_pos_1;
        tmp_right_name_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rho );
        tmp_ass_subscribed_1 = par_rho;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_cost_only );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_cost_only );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT( var_t );
        tmp_left_name_5 = var_t;
        tmp_right_name_5 = const_float_minus_0_5;
        tmp_ass_subvalue_2 = POWER_OPERATION( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rho );
        tmp_ass_subscribed_2 = par_rho;
        tmp_ass_subscript_2 = const_int_pos_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        int tmp_ass_subscript_res_3;
        tmp_left_name_6 = const_float_minus_0_5;
        CHECK_OBJECT( var_t );
        tmp_left_name_7 = var_t;
        tmp_right_name_7 = const_float_minus_1_5;
        tmp_right_name_6 = POWER_OPERATION( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_3 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rho );
        tmp_ass_subscribed_3 = par_rho;
        tmp_ass_subscript_3 = const_int_pos_2;
        tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_3, tmp_ass_subscript_3, 2, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_ass_subscript_res_3 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c9fa8c70cf2e2ae2360ee0100ca13c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c9fa8c70cf2e2ae2360ee0100ca13c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c9fa8c70cf2e2ae2360ee0100ca13c6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5c9fa8c70cf2e2ae2360ee0100ca13c6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5c9fa8c70cf2e2ae2360ee0100ca13c6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5c9fa8c70cf2e2ae2360ee0100ca13c6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5c9fa8c70cf2e2ae2360ee0100ca13c6,
        type_description_1,
        par_z,
        par_rho,
        par_cost_only,
        var_t
    );


    // Release cached frame.
    if ( frame_5c9fa8c70cf2e2ae2360ee0100ca13c6 == cache_frame_5c9fa8c70cf2e2ae2360ee0100ca13c6 )
    {
        Py_DECREF( frame_5c9fa8c70cf2e2ae2360ee0100ca13c6 );
    }
    cache_frame_5c9fa8c70cf2e2ae2360ee0100ca13c6 = NULL;

    assertFrameObject( frame_5c9fa8c70cf2e2ae2360ee0100ca13c6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_7_soft_l1 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_rho );
    Py_DECREF( par_rho );
    par_rho = NULL;

    CHECK_OBJECT( (PyObject *)par_cost_only );
    Py_DECREF( par_cost_only );
    par_cost_only = NULL;

    CHECK_OBJECT( (PyObject *)var_t );
    Py_DECREF( var_t );
    var_t = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_rho );
    Py_DECREF( par_rho );
    par_rho = NULL;

    CHECK_OBJECT( (PyObject *)par_cost_only );
    Py_DECREF( par_cost_only );
    par_cost_only = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_7_soft_l1 );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_8_cauchy( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_z = python_pars[ 0 ];
    PyObject *par_rho = python_pars[ 1 ];
    PyObject *par_cost_only = python_pars[ 2 ];
    PyObject *var_t = NULL;
    struct Nuitka_FrameObject *frame_6593425e21415fde7d46a253b101635a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6593425e21415fde7d46a253b101635a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6593425e21415fde7d46a253b101635a, codeobj_6593425e21415fde7d46a253b101635a, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6593425e21415fde7d46a253b101635a = cache_frame_6593425e21415fde7d46a253b101635a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6593425e21415fde7d46a253b101635a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6593425e21415fde7d46a253b101635a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_6593425e21415fde7d46a253b101635a->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_ass_subvalue_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_log1p, call_args );
        }

        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rho );
        tmp_ass_subscribed_1 = par_rho;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_cost_only );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_cost_only );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_int_pos_1;
        CHECK_OBJECT( par_z );
        tmp_right_name_1 = par_z;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_t == NULL );
        var_t = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        tmp_left_name_2 = const_int_pos_1;
        CHECK_OBJECT( var_t );
        tmp_right_name_2 = var_t;
        tmp_ass_subvalue_2 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rho );
        tmp_ass_subscribed_2 = par_rho;
        tmp_ass_subscript_2 = const_int_pos_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        int tmp_ass_subscript_res_3;
        tmp_left_name_3 = const_int_neg_1;
        CHECK_OBJECT( var_t );
        tmp_left_name_4 = var_t;
        tmp_right_name_4 = const_int_pos_2;
        tmp_right_name_3 = POWER_OPERATION( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_3 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rho );
        tmp_ass_subscribed_3 = par_rho;
        tmp_ass_subscript_3 = const_int_pos_2;
        tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_3, tmp_ass_subscript_3, 2, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_ass_subscript_res_3 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6593425e21415fde7d46a253b101635a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6593425e21415fde7d46a253b101635a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6593425e21415fde7d46a253b101635a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6593425e21415fde7d46a253b101635a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6593425e21415fde7d46a253b101635a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6593425e21415fde7d46a253b101635a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6593425e21415fde7d46a253b101635a,
        type_description_1,
        par_z,
        par_rho,
        par_cost_only,
        var_t
    );


    // Release cached frame.
    if ( frame_6593425e21415fde7d46a253b101635a == cache_frame_6593425e21415fde7d46a253b101635a )
    {
        Py_DECREF( frame_6593425e21415fde7d46a253b101635a );
    }
    cache_frame_6593425e21415fde7d46a253b101635a = NULL;

    assertFrameObject( frame_6593425e21415fde7d46a253b101635a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_8_cauchy );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_rho );
    Py_DECREF( par_rho );
    par_rho = NULL;

    CHECK_OBJECT( (PyObject *)par_cost_only );
    Py_DECREF( par_cost_only );
    par_cost_only = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_rho );
    Py_DECREF( par_rho );
    par_rho = NULL;

    CHECK_OBJECT( (PyObject *)par_cost_only );
    Py_DECREF( par_cost_only );
    par_cost_only = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_8_cauchy );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_9_arctan( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_z = python_pars[ 0 ];
    PyObject *par_rho = python_pars[ 1 ];
    PyObject *par_cost_only = python_pars[ 2 ];
    PyObject *var_t = NULL;
    struct Nuitka_FrameObject *frame_e2e304cbebe6b06894f391a2113d7003;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e2e304cbebe6b06894f391a2113d7003 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e2e304cbebe6b06894f391a2113d7003, codeobj_e2e304cbebe6b06894f391a2113d7003, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e2e304cbebe6b06894f391a2113d7003 = cache_frame_e2e304cbebe6b06894f391a2113d7003;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e2e304cbebe6b06894f391a2113d7003 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e2e304cbebe6b06894f391a2113d7003 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 199;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_e2e304cbebe6b06894f391a2113d7003->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_ass_subvalue_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_arctan, call_args );
        }

        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rho );
        tmp_ass_subscribed_1 = par_rho;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_cost_only );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_cost_only );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_left_name_1 = const_int_pos_1;
        CHECK_OBJECT( par_z );
        tmp_left_name_2 = par_z;
        tmp_right_name_2 = const_int_pos_2;
        tmp_right_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_t == NULL );
        var_t = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        tmp_left_name_3 = const_int_pos_1;
        CHECK_OBJECT( var_t );
        tmp_right_name_3 = var_t;
        tmp_ass_subvalue_2 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rho );
        tmp_ass_subscribed_2 = par_rho;
        tmp_ass_subscript_2 = const_int_pos_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        int tmp_ass_subscript_res_3;
        tmp_left_name_5 = const_int_neg_2;
        CHECK_OBJECT( par_z );
        tmp_right_name_4 = par_z;
        tmp_left_name_4 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_5, tmp_right_name_4 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_t );
        tmp_left_name_6 = var_t;
        tmp_right_name_6 = const_int_pos_2;
        tmp_right_name_5 = POWER_OPERATION( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 204;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rho );
        tmp_ass_subscribed_3 = par_rho;
        tmp_ass_subscript_3 = const_int_pos_2;
        tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_3, tmp_ass_subscript_3, 2, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_ass_subscript_res_3 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2e304cbebe6b06894f391a2113d7003 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2e304cbebe6b06894f391a2113d7003 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2e304cbebe6b06894f391a2113d7003 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e2e304cbebe6b06894f391a2113d7003, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e2e304cbebe6b06894f391a2113d7003->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e2e304cbebe6b06894f391a2113d7003, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e2e304cbebe6b06894f391a2113d7003,
        type_description_1,
        par_z,
        par_rho,
        par_cost_only,
        var_t
    );


    // Release cached frame.
    if ( frame_e2e304cbebe6b06894f391a2113d7003 == cache_frame_e2e304cbebe6b06894f391a2113d7003 )
    {
        Py_DECREF( frame_e2e304cbebe6b06894f391a2113d7003 );
    }
    cache_frame_e2e304cbebe6b06894f391a2113d7003 = NULL;

    assertFrameObject( frame_e2e304cbebe6b06894f391a2113d7003 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_9_arctan );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_rho );
    Py_DECREF( par_rho );
    par_rho = NULL;

    CHECK_OBJECT( (PyObject *)par_cost_only );
    Py_DECREF( par_cost_only );
    par_cost_only = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_rho );
    Py_DECREF( par_rho );
    par_rho = NULL;

    CHECK_OBJECT( (PyObject *)par_cost_only );
    Py_DECREF( par_cost_only );
    par_cost_only = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_9_arctan );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[ 0 ];
    struct Nuitka_CellObject *par_loss = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_f_scale = PyCell_NEW1( python_pars[ 2 ] );
    struct Nuitka_CellObject *var_rho = PyCell_EMPTY();
    PyObject *var_loss_function = NULL;
    struct Nuitka_FrameObject *frame_6ce40c2810dd94893a1b25dcaf3d4e50;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6ce40c2810dd94893a1b25dcaf3d4e50 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6ce40c2810dd94893a1b25dcaf3d4e50, codeobj_6ce40c2810dd94893a1b25dcaf3d4e50, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6ce40c2810dd94893a1b25dcaf3d4e50 = cache_frame_6ce40c2810dd94893a1b25dcaf3d4e50;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6ce40c2810dd94893a1b25dcaf3d4e50 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6ce40c2810dd94893a1b25dcaf3d4e50 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( PyCell_GET( par_loss ) );
        tmp_compexpr_left_1 = PyCell_GET( par_loss );
        tmp_compexpr_right_1 = const_str_plain_linear;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "occco";
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_callable );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( PyCell_GET( par_loss ) );
        tmp_args_element_name_1 = PyCell_GET( par_loss );
        frame_6ce40c2810dd94893a1b25dcaf3d4e50->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "occco";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "occco";
            goto frame_exception_exit_1;
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
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_IMPLEMENTED_LOSSES );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IMPLEMENTED_LOSSES );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IMPLEMENTED_LOSSES" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 216;
                type_description_1 = "occco";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( PyCell_GET( par_loss ) );
            tmp_subscript_name_1 = PyCell_GET( par_loss );
            tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "occco";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = PyCell_GET( par_loss );
                PyCell_SET( par_loss, tmp_assign_source_1 );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_tuple_element_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 217;
                type_description_1 = "occco";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            tmp_tuple_element_1 = const_int_pos_3;
            tmp_args_element_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_m );
            tmp_tuple_element_1 = par_m;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
            frame_6ce40c2810dd94893a1b25dcaf3d4e50->m_frame.f_lineno = 217;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_empty, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 217;
                type_description_1 = "occco";
                goto frame_exception_exit_1;
            }
            assert( PyCell_GET( var_rho ) == NULL );
            PyCell_SET( var_rho, tmp_assign_source_2 );

        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_assign_source_3 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function$$$function_1_loss_function( tmp_defaults_1 );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] = par_f_scale;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] = par_loss;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[2] = var_rho;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[2] );


            assert( var_loss_function == NULL );
            var_loss_function = tmp_assign_source_3;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_assign_source_4 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function$$$function_2_loss_function( tmp_defaults_2 );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] = par_f_scale;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[1] = par_loss;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[1] );


            assert( var_loss_function == NULL );
            var_loss_function = tmp_assign_source_4;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ce40c2810dd94893a1b25dcaf3d4e50 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ce40c2810dd94893a1b25dcaf3d4e50 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ce40c2810dd94893a1b25dcaf3d4e50 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6ce40c2810dd94893a1b25dcaf3d4e50, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6ce40c2810dd94893a1b25dcaf3d4e50->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6ce40c2810dd94893a1b25dcaf3d4e50, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6ce40c2810dd94893a1b25dcaf3d4e50,
        type_description_1,
        par_m,
        par_loss,
        par_f_scale,
        var_rho,
        var_loss_function
    );


    // Release cached frame.
    if ( frame_6ce40c2810dd94893a1b25dcaf3d4e50 == cache_frame_6ce40c2810dd94893a1b25dcaf3d4e50 )
    {
        Py_DECREF( frame_6ce40c2810dd94893a1b25dcaf3d4e50 );
    }
    cache_frame_6ce40c2810dd94893a1b25dcaf3d4e50 = NULL;

    assertFrameObject( frame_6ce40c2810dd94893a1b25dcaf3d4e50 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_loss_function );
    tmp_return_value = var_loss_function;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_loss );
    Py_DECREF( par_loss );
    par_loss = NULL;

    CHECK_OBJECT( (PyObject *)par_f_scale );
    Py_DECREF( par_f_scale );
    par_f_scale = NULL;

    CHECK_OBJECT( (PyObject *)var_rho );
    Py_DECREF( var_rho );
    var_rho = NULL;

    Py_XDECREF( var_loss_function );
    var_loss_function = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_loss );
    Py_DECREF( par_loss );
    par_loss = NULL;

    CHECK_OBJECT( (PyObject *)par_f_scale );
    Py_DECREF( par_f_scale );
    par_f_scale = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function$$$function_1_loss_function( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *par_cost_only = python_pars[ 1 ];
    PyObject *var_z = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    struct Nuitka_FrameObject *frame_da3e36f245e424dd1180e8da0ea37780;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_da3e36f245e424dd1180e8da0ea37780 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_da3e36f245e424dd1180e8da0ea37780, codeobj_da3e36f245e424dd1180e8da0ea37780, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_da3e36f245e424dd1180e8da0ea37780 = cache_frame_da3e36f245e424dd1180e8da0ea37780;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_da3e36f245e424dd1180e8da0ea37780 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_da3e36f245e424dd1180e8da0ea37780 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_f );
        tmp_left_name_2 = par_f;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "f_scale" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 220;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_left_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_pos_2;
        tmp_assign_source_1 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        assert( var_z == NULL );
        var_z = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "loss" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 221;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( var_z );
        tmp_tuple_element_1 = var_z;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "rho" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 221;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[2] );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_cost_only;
        CHECK_OBJECT( par_cost_only );
        tmp_dict_value_1 = par_cost_only;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_da3e36f245e424dd1180e8da0ea37780->m_frame.f_lineno = 221;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_cost_only );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_cost_only );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_left_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_3;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_4;
            PyObject *tmp_right_name_5;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            tmp_left_name_4 = const_float_0_5;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "f_scale" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 223;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }

            tmp_left_name_5 = PyCell_GET( self->m_closure[0] );
            tmp_right_name_4 = const_int_pos_2;
            tmp_right_name_3 = POWER_OPERATION( tmp_left_name_5, tmp_right_name_4 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }
            tmp_left_name_3 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_1 == NULL )
            {
                Py_DECREF( tmp_left_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 223;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sum );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 223;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }
            if ( PyCell_GET( self->m_closure[2] ) == NULL )
            {
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "rho" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 223;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_1 = PyCell_GET( self->m_closure[2] );
            tmp_subscript_name_1 = const_int_0;
            tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 223;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }
            frame_da3e36f245e424dd1180e8da0ea37780->m_frame.f_lineno = 223;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_right_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 223;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "rho" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 224;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_2 = PyCell_GET( self->m_closure[2] );
        assert( tmp_inplace_assign_subscr_1__target == NULL );
        Py_INCREF( tmp_assign_source_2 );
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_6;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_2 = tmp_inplace_assign_subscr_1__target;
        tmp_subscript_name_2 = const_int_0;
        tmp_left_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "f_scale" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 224;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }

        tmp_left_name_7 = PyCell_GET( self->m_closure[0] );
        tmp_right_name_7 = const_int_pos_2;
        tmp_right_name_6 = POWER_OPERATION( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 224;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    {
        PyObject *tmp_assign_source_3;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "rho" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 225;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_3 = PyCell_GET( self->m_closure[2] );
        assert( tmp_inplace_assign_subscr_2__target == NULL );
        Py_INCREF( tmp_assign_source_3 );
        tmp_inplace_assign_subscr_2__target = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_8;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
        tmp_subscribed_name_3 = tmp_inplace_assign_subscr_2__target;
        tmp_subscript_name_3 = const_int_pos_2;
        tmp_left_name_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 2 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "oooccc";
            goto try_except_handler_3;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "f_scale" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 225;
            type_description_1 = "oooccc";
            goto try_except_handler_3;
        }

        tmp_left_name_9 = PyCell_GET( self->m_closure[0] );
        tmp_right_name_9 = const_int_pos_2;
        tmp_right_name_8 = POWER_OPERATION( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 225;
            type_description_1 = "oooccc";
            goto try_except_handler_3;
        }
        tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_InPlaceTrueDivide, tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "oooccc";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
        tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_2__target;
        tmp_ass_subscript_2 = const_int_pos_2;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "oooccc";
            goto try_except_handler_3;
        }
    }
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    if ( PyCell_GET( self->m_closure[2] ) == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "rho" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;
        type_description_1 = "oooccc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = PyCell_GET( self->m_closure[2] );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_da3e36f245e424dd1180e8da0ea37780 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_da3e36f245e424dd1180e8da0ea37780 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_da3e36f245e424dd1180e8da0ea37780 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_da3e36f245e424dd1180e8da0ea37780, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_da3e36f245e424dd1180e8da0ea37780->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_da3e36f245e424dd1180e8da0ea37780, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_da3e36f245e424dd1180e8da0ea37780,
        type_description_1,
        par_f,
        par_cost_only,
        var_z,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_da3e36f245e424dd1180e8da0ea37780 == cache_frame_da3e36f245e424dd1180e8da0ea37780 )
    {
        Py_DECREF( frame_da3e36f245e424dd1180e8da0ea37780 );
    }
    cache_frame_da3e36f245e424dd1180e8da0ea37780 = NULL;

    assertFrameObject( frame_da3e36f245e424dd1180e8da0ea37780 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function$$$function_1_loss_function );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)par_cost_only );
    Py_DECREF( par_cost_only );
    par_cost_only = NULL;

    CHECK_OBJECT( (PyObject *)var_z );
    Py_DECREF( var_z );
    var_z = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)par_cost_only );
    Py_DECREF( par_cost_only );
    par_cost_only = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function$$$function_1_loss_function );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function$$$function_2_loss_function( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *par_cost_only = python_pars[ 1 ];
    PyObject *var_z = NULL;
    PyObject *var_rho = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    struct Nuitka_FrameObject *frame_abe2bbfb69a3cc8546975f35a0de7449;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_abe2bbfb69a3cc8546975f35a0de7449 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_abe2bbfb69a3cc8546975f35a0de7449, codeobj_abe2bbfb69a3cc8546975f35a0de7449, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_abe2bbfb69a3cc8546975f35a0de7449 = cache_frame_abe2bbfb69a3cc8546975f35a0de7449;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_abe2bbfb69a3cc8546975f35a0de7449 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_abe2bbfb69a3cc8546975f35a0de7449 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_f );
        tmp_left_name_2 = par_f;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "f_scale" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 229;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_left_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_pos_2;
        tmp_assign_source_1 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert( var_z == NULL );
        var_z = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "loss" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 230;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( var_z );
        tmp_args_element_name_1 = var_z;
        frame_abe2bbfb69a3cc8546975f35a0de7449->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert( var_rho == NULL );
        var_rho = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_cost_only );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_cost_only );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_left_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_3;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_4;
            PyObject *tmp_right_name_5;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            tmp_left_name_4 = const_float_0_5;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "f_scale" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 232;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }

            tmp_left_name_5 = PyCell_GET( self->m_closure[0] );
            tmp_right_name_4 = const_int_pos_2;
            tmp_right_name_3 = POWER_OPERATION( tmp_left_name_5, tmp_right_name_4 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 232;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            tmp_left_name_3 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 232;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_1 == NULL )
            {
                Py_DECREF( tmp_left_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 232;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sum );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 232;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_rho );
            tmp_subscribed_name_1 = var_rho;
            tmp_subscript_name_1 = const_int_0;
            tmp_args_element_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 232;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            frame_abe2bbfb69a3cc8546975f35a0de7449->m_frame.f_lineno = 232;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_right_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 232;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 232;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( var_rho );
        tmp_assign_source_3 = var_rho;
        assert( tmp_inplace_assign_subscr_1__target == NULL );
        Py_INCREF( tmp_assign_source_3 );
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_6;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_2 = tmp_inplace_assign_subscr_1__target;
        tmp_subscript_name_2 = const_int_0;
        tmp_left_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "f_scale" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 233;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }

        tmp_left_name_7 = PyCell_GET( self->m_closure[0] );
        tmp_right_name_7 = const_int_pos_2;
        tmp_right_name_6 = POWER_OPERATION( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 233;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( var_rho );
        tmp_assign_source_4 = var_rho;
        assert( tmp_inplace_assign_subscr_2__target == NULL );
        Py_INCREF( tmp_assign_source_4 );
        tmp_inplace_assign_subscr_2__target = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_8;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
        tmp_subscribed_name_3 = tmp_inplace_assign_subscr_2__target;
        tmp_subscript_name_3 = const_int_pos_2;
        tmp_left_name_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 2 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "f_scale" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 234;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }

        tmp_left_name_9 = PyCell_GET( self->m_closure[0] );
        tmp_right_name_9 = const_int_pos_2;
        tmp_right_name_8 = POWER_OPERATION( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 234;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }
        tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_InPlaceTrueDivide, tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
        tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_2__target;
        tmp_ass_subscript_2 = const_int_pos_2;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }
    }
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abe2bbfb69a3cc8546975f35a0de7449 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_abe2bbfb69a3cc8546975f35a0de7449 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abe2bbfb69a3cc8546975f35a0de7449 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_abe2bbfb69a3cc8546975f35a0de7449, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_abe2bbfb69a3cc8546975f35a0de7449->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_abe2bbfb69a3cc8546975f35a0de7449, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_abe2bbfb69a3cc8546975f35a0de7449,
        type_description_1,
        par_f,
        par_cost_only,
        var_z,
        var_rho,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_abe2bbfb69a3cc8546975f35a0de7449 == cache_frame_abe2bbfb69a3cc8546975f35a0de7449 )
    {
        Py_DECREF( frame_abe2bbfb69a3cc8546975f35a0de7449 );
    }
    cache_frame_abe2bbfb69a3cc8546975f35a0de7449 = NULL;

    assertFrameObject( frame_abe2bbfb69a3cc8546975f35a0de7449 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    CHECK_OBJECT( var_rho );
    tmp_return_value = var_rho;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function$$$function_2_loss_function );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)par_cost_only );
    Py_DECREF( par_cost_only );
    par_cost_only = NULL;

    CHECK_OBJECT( (PyObject *)var_z );
    Py_DECREF( var_z );
    var_z = NULL;

    CHECK_OBJECT( (PyObject *)var_rho );
    Py_DECREF( var_rho );
    var_rho = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)par_cost_only );
    Py_DECREF( par_cost_only );
    par_cost_only = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_rho );
    var_rho = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function$$$function_2_loss_function );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_11_least_squares( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_fun = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_x0 = python_pars[ 1 ];
    struct Nuitka_CellObject *par_jac = PyCell_NEW1( python_pars[ 2 ] );
    struct Nuitka_CellObject *par_bounds = PyCell_NEW1( python_pars[ 3 ] );
    PyObject *par_method = python_pars[ 4 ];
    PyObject *par_ftol = python_pars[ 5 ];
    PyObject *par_xtol = python_pars[ 6 ];
    PyObject *par_gtol = python_pars[ 7 ];
    PyObject *par_x_scale = python_pars[ 8 ];
    PyObject *par_loss = python_pars[ 9 ];
    PyObject *par_f_scale = python_pars[ 10 ];
    struct Nuitka_CellObject *par_diff_step = PyCell_NEW1( python_pars[ 11 ] );
    PyObject *par_tr_solver = python_pars[ 12 ];
    PyObject *par_tr_options = python_pars[ 13 ];
    struct Nuitka_CellObject *par_jac_sparsity = PyCell_NEW1( python_pars[ 14 ] );
    PyObject *par_max_nfev = python_pars[ 15 ];
    PyObject *par_verbose = python_pars[ 16 ];
    struct Nuitka_CellObject *par_args = PyCell_NEW1( python_pars[ 17 ] );
    struct Nuitka_CellObject *par_kwargs = PyCell_NEW1( python_pars[ 18 ] );
    PyObject *var_lb = NULL;
    PyObject *var_ub = NULL;
    PyObject *var_fun_wrapped = NULL;
    PyObject *var_f0 = NULL;
    PyObject *var_n = NULL;
    PyObject *var_m = NULL;
    PyObject *var_loss_function = NULL;
    PyObject *var_rho = NULL;
    PyObject *var_initial_cost = NULL;
    PyObject *var_J0 = NULL;
    PyObject *var_jac_wrapped = NULL;
    PyObject *var_jac_scale = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_669a61b265de2f1b22e9ae7144c18fd2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_669a61b265de2f1b22e9ae7144c18fd2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_669a61b265de2f1b22e9ae7144c18fd2, codeobj_669a61b265de2f1b22e9ae7144c18fd2, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_669a61b265de2f1b22e9ae7144c18fd2 = cache_frame_669a61b265de2f1b22e9ae7144c18fd2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_669a61b265de2f1b22e9ae7144c18fd2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_669a61b265de2f1b22e9ae7144c18fd2 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_method );
        tmp_compexpr_left_1 = par_method;
        tmp_compexpr_right_1 = LIST_COPY( const_list_str_plain_trf_str_plain_dogbox_str_plain_lm_list );
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 748;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_make_exception_arg_1 = const_str_digest_ebb81d0fad1ee3691b0f03b1d0327926;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 749;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 749;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( PyCell_GET( par_jac ) );
        tmp_compexpr_left_2 = PyCell_GET( par_jac );
        tmp_compexpr_right_2 = LIST_COPY( const_list_ae465a354ba6c7d92d0e589be105d5b9_list );
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 751;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
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
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_callable );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( PyCell_GET( par_jac ) );
        tmp_args_element_name_1 = PyCell_GET( par_jac );
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 751;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 751;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 751;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
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
            tmp_make_exception_arg_2 = const_str_digest_f647c29946908668ec9870543a22acb7;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 752;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 752;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_tr_solver );
        tmp_compexpr_left_3 = par_tr_solver;
        tmp_compexpr_right_3 = LIST_COPY( const_list_none_str_plain_exact_str_plain_lsmr_list );
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 755;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
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
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            tmp_make_exception_arg_3 = const_str_digest_38ee9aa82e524c9b1010d7459b9e9474;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 756;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 756;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_loss );
        tmp_compexpr_left_4 = par_loss;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_IMPLEMENTED_LOSSES );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IMPLEMENTED_LOSSES );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IMPLEMENTED_LOSSES" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 758;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_4 = tmp_mvar_value_1;
        tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 758;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_callable );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( par_loss );
        tmp_args_element_name_2 = par_loss;
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 758;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 758;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 758;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_4 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_raise_type_4;
            PyObject *tmp_make_exception_arg_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            tmp_source_name_1 = const_str_digest_9f40dca4074a986201906a0e6161e5c6;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
            assert( !(tmp_called_name_3 == NULL) );
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_IMPLEMENTED_LOSSES );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IMPLEMENTED_LOSSES );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IMPLEMENTED_LOSSES" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 760;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 760;
            tmp_args_element_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_keys );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 760;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 759;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_make_exception_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_make_exception_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 759;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 759;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_4 };
                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_4 );
            assert( !(tmp_raise_type_4 == NULL) );
            exception_type = tmp_raise_type_4;
            exception_lineno = 759;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_method );
        tmp_compexpr_left_5 = par_method;
        tmp_compexpr_right_5 = const_str_plain_lm;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 762;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_3 == 1 )
        {
            goto and_right_3;
        }
        else
        {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT( par_loss );
        tmp_compexpr_left_6 = par_loss;
        tmp_compexpr_right_6 = const_str_plain_linear;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 762;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_5 = tmp_and_left_value_3;
        and_end_3:;
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
            PyObject *tmp_raise_type_5;
            PyObject *tmp_make_exception_arg_5;
            tmp_make_exception_arg_5 = const_str_digest_0ed3932f28b4561ff03dcc48e6a7a0e1;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 763;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_5 };
                tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_5 == NULL) );
            exception_type = tmp_raise_type_5;
            exception_lineno = 763;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( par_verbose );
        tmp_compexpr_left_7 = par_verbose;
        tmp_compexpr_right_7 = LIST_COPY( const_list_int_0_int_pos_1_int_pos_2_list );
        tmp_res = PySequence_Contains( tmp_compexpr_right_7, tmp_compexpr_left_7 );
        Py_DECREF( tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 765;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_6;
            PyObject *tmp_make_exception_arg_6;
            tmp_make_exception_arg_6 = const_str_digest_402cb6c6f6e609cdac72fc0009ef2885;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 766;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_6 };
                tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_6 == NULL) );
            exception_type = tmp_raise_type_6;
            exception_lineno = 766;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( PyCell_GET( par_bounds ) );
        tmp_len_arg_1 = PyCell_GET( par_bounds );
        tmp_compexpr_left_8 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 768;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_8 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_left_8 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_raise_type_7;
            PyObject *tmp_make_exception_arg_7;
            tmp_make_exception_arg_7 = const_str_digest_1ee27a5ab623d3ef0007e49d2ec50770;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 769;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_7 };
                tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_7 == NULL) );
            exception_type = tmp_raise_type_7;
            exception_lineno = 769;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        CHECK_OBJECT( par_max_nfev );
        tmp_compexpr_left_9 = par_max_nfev;
        tmp_compexpr_right_9 = Py_None;
        tmp_and_left_value_4 = ( tmp_compexpr_left_9 != tmp_compexpr_right_9 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_4 == 1 )
        {
            goto and_right_4;
        }
        else
        {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT( par_max_nfev );
        tmp_compexpr_left_10 = par_max_nfev;
        tmp_compexpr_right_10 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 771;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_8 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_8 = tmp_and_left_value_4;
        and_end_4:;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_raise_type_8;
            PyObject *tmp_make_exception_arg_8;
            tmp_make_exception_arg_8 = const_str_digest_facb4996b1c5b89ddd9f820bb369646e;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 772;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_8 };
                tmp_raise_type_8 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_8 == NULL) );
            exception_type = tmp_raise_type_8;
            exception_lineno = 772;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 774;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_4 = par_x0;
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 774;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_iscomplexobj, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 774;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 774;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_raise_type_9;
            PyObject *tmp_make_exception_arg_9;
            tmp_make_exception_arg_9 = const_str_digest_478b589a04759e0a7a9facbe8cce89c4;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 775;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_9 };
                tmp_raise_type_9 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_9 == NULL) );
            exception_type = tmp_raise_type_9;
            exception_lineno = 775;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_9:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 777;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_5 = par_x0;
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 777;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_instance_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_atleast_1d, call_args );
        }

        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 777;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 777;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_astype, &PyTuple_GET_ITEM( const_tuple_type_float_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 777;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x0;
            assert( old != NULL );
            par_x0 = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_x0 );
        tmp_source_name_2 = par_x0;
        tmp_compexpr_left_11 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
        if ( tmp_compexpr_left_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 779;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_11 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        Py_DECREF( tmp_compexpr_left_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 779;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_raise_type_10;
            PyObject *tmp_make_exception_arg_10;
            tmp_make_exception_arg_10 = const_str_digest_9f4f109ca6c92d8deac2299e7d5a86c7;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 780;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_10 };
                tmp_raise_type_10 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_10 == NULL) );
            exception_type = tmp_raise_type_10;
            exception_lineno = 780;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_10:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_prepare_bounds );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_prepare_bounds );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "prepare_bounds" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 782;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        CHECK_OBJECT( PyCell_GET( par_bounds ) );
        tmp_args_element_name_6 = PyCell_GET( par_bounds );
        CHECK_OBJECT( par_x0 );
        tmp_source_name_3 = par_x0;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 782;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 782;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_2;
        }
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 782;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 782;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 782;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
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


            type_description_1 = "coccooooooocoocooccooooooooooooo";
            exception_lineno = 782;
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


            type_description_1 = "coccooooooocoocooccooooooooooooo";
            exception_lineno = 782;
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

                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    exception_lineno = 782;
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

            type_description_1 = "coccooooooocoocooccooooooooooooo";
            exception_lineno = 782;
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
        assert( var_lb == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_lb = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_ub == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_ub = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_11;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_1;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_right_name_1;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_8;
        CHECK_OBJECT( par_method );
        tmp_compexpr_left_12 = par_method;
        tmp_compexpr_right_12 = const_str_plain_lm;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 784;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_5 == 1 )
        {
            goto and_right_5;
        }
        else
        {
            goto and_left_5;
        }
        and_right_5:;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 784;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_6;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_all );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 784;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lb );
        tmp_compexpr_left_13 = var_lb;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 784;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_7;
        tmp_operand_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_inf );
        if ( tmp_operand_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 784;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_13 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_4 );
        Py_DECREF( tmp_operand_name_4 );
        if ( tmp_compexpr_right_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 784;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
        Py_DECREF( tmp_compexpr_right_13 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 784;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ub );
        tmp_compexpr_left_14 = var_ub;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 784;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_8;
        tmp_compexpr_right_14 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_inf );
        if ( tmp_compexpr_right_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 784;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
        Py_DECREF( tmp_compexpr_right_14 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 784;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 784;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 784;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 784;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 784;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_11 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_condition_result_11 = tmp_and_left_value_5;
        and_end_5:;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            PyObject *tmp_raise_type_11;
            PyObject *tmp_make_exception_arg_11;
            tmp_make_exception_arg_11 = const_str_digest_828a49a47e18251ddfb642044793cc78;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 785;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_11 };
                tmp_raise_type_11 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_11 == NULL) );
            exception_type = tmp_raise_type_11;
            exception_lineno = 785;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_11:;
    }
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( var_lb );
        tmp_source_name_7 = var_lb;
        tmp_compexpr_left_15 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
        if ( tmp_compexpr_left_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 787;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x0 );
        tmp_source_name_8 = par_x0;
        tmp_compexpr_right_15 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
        if ( tmp_compexpr_right_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_15 );

            exception_lineno = 787;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
        Py_DECREF( tmp_compexpr_left_15 );
        Py_DECREF( tmp_compexpr_right_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 787;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_ub );
        tmp_source_name_9 = var_ub;
        tmp_compexpr_left_16 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
        if ( tmp_compexpr_left_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 787;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x0 );
        tmp_source_name_10 = par_x0;
        tmp_compexpr_right_16 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
        if ( tmp_compexpr_right_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_16 );

            exception_lineno = 787;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
        Py_DECREF( tmp_compexpr_left_16 );
        Py_DECREF( tmp_compexpr_right_16 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 787;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_12 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_12 = tmp_or_left_value_1;
        or_end_1:;
        if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_12;
        }
        else
        {
            goto branch_no_12;
        }
        branch_yes_12:;
        {
            PyObject *tmp_raise_type_12;
            PyObject *tmp_make_exception_arg_12;
            tmp_make_exception_arg_12 = const_str_digest_72ce099ec2f29c3cb22d16d0b274b03b;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 788;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_12 };
                tmp_raise_type_12 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_12 == NULL) );
            exception_type = tmp_raise_type_12;
            exception_lineno = 788;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_12:;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_compexpr_left_17;
        PyObject *tmp_compexpr_right_17;
        int tmp_truth_name_2;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 790;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_9;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_any );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 790;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lb );
        tmp_compexpr_left_17 = var_lb;
        CHECK_OBJECT( var_ub );
        tmp_compexpr_right_17 = var_ub;
        tmp_args_element_name_9 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_17, tmp_compexpr_right_17 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 790;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 790;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 790;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 790;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_13;
        }
        else
        {
            goto branch_no_13;
        }
        branch_yes_13:;
        {
            PyObject *tmp_raise_type_13;
            PyObject *tmp_make_exception_arg_13;
            tmp_make_exception_arg_13 = const_str_digest_caaf3fa400764a871c9fd9a69e283cce;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 791;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_13 };
                tmp_raise_type_13 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_13 == NULL) );
            exception_type = tmp_raise_type_13;
            exception_lineno = 791;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_13:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_in_bounds );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_in_bounds );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "in_bounds" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 794;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_10;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_10 = par_x0;
        CHECK_OBJECT( var_lb );
        tmp_args_element_name_11 = var_lb;
        CHECK_OBJECT( var_ub );
        tmp_args_element_name_12 = var_ub;
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 794;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_operand_name_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        if ( tmp_operand_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 794;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
        Py_DECREF( tmp_operand_name_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 794;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_14;
        }
        else
        {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            PyObject *tmp_raise_type_14;
            PyObject *tmp_make_exception_arg_14;
            tmp_make_exception_arg_14 = const_str_digest_57948e197b05ae296ef9866599bc4484;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 795;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_14 };
                tmp_raise_type_14 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_14 == NULL) );
            exception_type = tmp_raise_type_14;
            exception_lineno = 795;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_14:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_check_x_scale );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_check_x_scale );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "check_x_scale" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 797;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_11;
        CHECK_OBJECT( par_x_scale );
        tmp_args_element_name_13 = par_x_scale;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_14 = par_x0;
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 797;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 797;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x_scale;
            assert( old != NULL );
            par_x_scale = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_check_tolerance );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_check_tolerance );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "check_tolerance" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 799;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_9 = tmp_mvar_value_12;
        CHECK_OBJECT( par_ftol );
        tmp_args_element_name_15 = par_ftol;
        CHECK_OBJECT( par_xtol );
        tmp_args_element_name_16 = par_xtol;
        CHECK_OBJECT( par_gtol );
        tmp_args_element_name_17 = par_gtol;
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 799;
        {
            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 799;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 799;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_3, 0, 3 );
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


            type_description_1 = "coccooooooocoocooccooooooooooooo";
            exception_lineno = 799;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_4, 1, 3 );
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


            type_description_1 = "coccooooooocoocooccooooooooooooo";
            exception_lineno = 799;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_5, 2, 3 );
        if ( tmp_assign_source_11 == NULL )
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


            type_description_1 = "coccooooooocoocooccooooooooooooo";
            exception_lineno = 799;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_3 == NULL );
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_11;
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

                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    exception_lineno = 799;
                    goto try_except_handler_5;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "coccooooooocoocooccooooooooooooo";
            exception_lineno = 799;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = par_ftol;
            assert( old != NULL );
            par_ftol = tmp_assign_source_12;
            Py_INCREF( par_ftol );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = par_xtol;
            assert( old != NULL );
            par_xtol = tmp_assign_source_13;
            Py_INCREF( par_xtol );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = par_gtol;
            assert( old != NULL );
            par_gtol = tmp_assign_source_14;
            Py_INCREF( par_gtol );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_1_fun_wrapped(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_15)->m_closure[0] = par_args;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_15)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_15)->m_closure[1] = par_fun;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_15)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_15)->m_closure[2] = par_kwargs;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_15)->m_closure[2] );


        assert( var_fun_wrapped == NULL );
        var_fun_wrapped = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_18;
        PyObject *tmp_compexpr_right_18;
        CHECK_OBJECT( par_method );
        tmp_compexpr_left_18 = par_method;
        tmp_compexpr_right_18 = const_str_plain_trf;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_18, tmp_compexpr_right_18 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 804;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_15;
        }
        else
        {
            goto branch_no_15;
        }
        branch_yes_15:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_args_element_name_20;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_make_strictly_feasible );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_make_strictly_feasible );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "make_strictly_feasible" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 805;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_10 = tmp_mvar_value_13;
            CHECK_OBJECT( par_x0 );
            tmp_args_element_name_18 = par_x0;
            CHECK_OBJECT( var_lb );
            tmp_args_element_name_19 = var_lb;
            CHECK_OBJECT( var_ub );
            tmp_args_element_name_20 = var_ub;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 805;
            {
                PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
                tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
            }

            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 805;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x0;
                assert( old != NULL );
                par_x0 = tmp_assign_source_16;
                Py_DECREF( old );
            }

        }
        branch_no_15:;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_21;
        CHECK_OBJECT( var_fun_wrapped );
        tmp_called_name_11 = var_fun_wrapped;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_21 = par_x0;
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 807;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 807;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f0 == NULL );
        var_f0 = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_19;
        PyObject *tmp_compexpr_right_19;
        PyObject *tmp_source_name_12;
        CHECK_OBJECT( var_f0 );
        tmp_source_name_12 = var_f0;
        tmp_compexpr_left_19 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_ndim );
        if ( tmp_compexpr_left_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 809;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_19 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_19, tmp_compexpr_right_19 );
        Py_DECREF( tmp_compexpr_left_19 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 809;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_16;
        }
        else
        {
            goto branch_no_16;
        }
        branch_yes_16:;
        {
            PyObject *tmp_raise_type_15;
            PyObject *tmp_make_exception_arg_15;
            tmp_make_exception_arg_15 = const_str_digest_e2b975b53f9f053950e1ed89ef6ee5be;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 810;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_15 };
                tmp_raise_type_15 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_15 == NULL) );
            exception_type = tmp_raise_type_15;
            exception_lineno = 810;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_16:;
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_operand_name_6;
        PyObject *tmp_called_name_12;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_23;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 812;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_14;
        tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_all );
        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 812;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_called_name_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 812;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_15;
        CHECK_OBJECT( var_f0 );
        tmp_args_element_name_23 = var_f0;
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 812;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_args_element_name_22 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_isfinite, call_args );
        }

        if ( tmp_args_element_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );

            exception_lineno = 812;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 812;
        {
            PyObject *call_args[] = { tmp_args_element_name_22 };
            tmp_operand_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_args_element_name_22 );
        if ( tmp_operand_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 812;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_6 );
        Py_DECREF( tmp_operand_name_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 812;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_17;
        }
        else
        {
            goto branch_no_17;
        }
        branch_yes_17:;
        {
            PyObject *tmp_raise_type_16;
            PyObject *tmp_make_exception_arg_16;
            tmp_make_exception_arg_16 = const_str_digest_2e81f1ba9a35c95acb2a9779f7e25676;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 813;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_16 };
                tmp_raise_type_16 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_16 == NULL) );
            exception_type = tmp_raise_type_16;
            exception_lineno = 813;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_17:;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_source_name_14;
        CHECK_OBJECT( par_x0 );
        tmp_source_name_14 = par_x0;
        tmp_assign_source_18 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_size );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 815;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_source_name_15;
        CHECK_OBJECT( var_f0 );
        tmp_source_name_15 = var_f0;
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_size );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 816;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_m == NULL );
        var_m = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_18;
        int tmp_and_left_truth_6;
        nuitka_bool tmp_and_left_value_6;
        nuitka_bool tmp_and_right_value_6;
        PyObject *tmp_compexpr_left_20;
        PyObject *tmp_compexpr_right_20;
        PyObject *tmp_compexpr_left_21;
        PyObject *tmp_compexpr_right_21;
        CHECK_OBJECT( par_method );
        tmp_compexpr_left_20 = par_method;
        tmp_compexpr_right_20 = const_str_plain_lm;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_20, tmp_compexpr_right_20 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 818;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_6 == 1 )
        {
            goto and_right_6;
        }
        else
        {
            goto and_left_6;
        }
        and_right_6:;
        CHECK_OBJECT( var_m );
        tmp_compexpr_left_21 = var_m;
        CHECK_OBJECT( var_n );
        tmp_compexpr_right_21 = var_n;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_21, tmp_compexpr_right_21 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 818;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_18 = tmp_and_right_value_6;
        goto and_end_6;
        and_left_6:;
        tmp_condition_result_18 = tmp_and_left_value_6;
        and_end_6:;
        if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_18;
        }
        else
        {
            goto branch_no_18;
        }
        branch_yes_18:;
        {
            PyObject *tmp_raise_type_17;
            PyObject *tmp_make_exception_arg_17;
            tmp_make_exception_arg_17 = const_str_digest_424e8e62fde6aa814436aec14edf90e5;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 819;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_17 };
                tmp_raise_type_17 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_17 == NULL) );
            exception_type = tmp_raise_type_17;
            exception_lineno = 819;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_18:;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_construct_loss_function );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_construct_loss_function );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "construct_loss_function" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 822;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_16;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_24 = var_m;
        CHECK_OBJECT( par_loss );
        tmp_args_element_name_25 = par_loss;
        CHECK_OBJECT( par_f_scale );
        tmp_args_element_name_26 = par_f_scale;
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 822;
        {
            PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26 };
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, call_args );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 822;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_loss_function == NULL );
        var_loss_function = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_called_name_14;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_27;
        int tmp_truth_name_3;
        tmp_called_name_14 = LOOKUP_BUILTIN( const_str_plain_callable );
        assert( tmp_called_name_14 != NULL );
        CHECK_OBJECT( par_loss );
        tmp_args_element_name_27 = par_loss;
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 823;
        {
            PyObject *call_args[] = { tmp_args_element_name_27 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 823;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 823;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
        if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_19;
        }
        else
        {
            goto branch_no_19;
        }
        branch_yes_19:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_name_15;
            PyObject *tmp_args_element_name_28;
            CHECK_OBJECT( var_loss_function );
            tmp_called_name_15 = var_loss_function;
            CHECK_OBJECT( var_f0 );
            tmp_args_element_name_28 = var_f0;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 824;
            {
                PyObject *call_args[] = { tmp_args_element_name_28 };
                tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
            }

            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 824;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_rho == NULL );
            var_rho = tmp_assign_source_21;
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_compexpr_left_22;
            PyObject *tmp_compexpr_right_22;
            PyObject *tmp_source_name_16;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( var_rho );
            tmp_source_name_16 = var_rho;
            tmp_compexpr_left_22 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_shape );
            if ( tmp_compexpr_left_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 825;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_1 = const_int_pos_3;
            tmp_compexpr_right_22 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_compexpr_right_22, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_m );
            tmp_tuple_element_1 = var_m;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_compexpr_right_22, 1, tmp_tuple_element_1 );
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_22, tmp_compexpr_right_22 );
            Py_DECREF( tmp_compexpr_left_22 );
            Py_DECREF( tmp_compexpr_right_22 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 825;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_20 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_20;
            }
            else
            {
                goto branch_no_20;
            }
            branch_yes_20:;
            {
                PyObject *tmp_raise_type_18;
                PyObject *tmp_make_exception_arg_18;
                tmp_make_exception_arg_18 = const_str_digest_e6cab37898fb1cdc0c0031bacdb6e70d;
                frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 826;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_18 };
                    tmp_raise_type_18 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_18 == NULL) );
                exception_type = tmp_raise_type_18;
                exception_lineno = 826;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_20:;
        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_name_16;
            PyObject *tmp_source_name_17;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_args_element_name_29;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            tmp_left_name_2 = const_float_0_5;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_17 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 828;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_17 = tmp_mvar_value_17;
            tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_sum );
            if ( tmp_called_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 828;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_rho );
            tmp_subscribed_name_2 = var_rho;
            tmp_subscript_name_2 = const_int_0;
            tmp_args_element_name_29 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_args_element_name_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_16 );

                exception_lineno = 828;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 828;
            {
                PyObject *call_args[] = { tmp_args_element_name_29 };
                tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
            }

            Py_DECREF( tmp_called_name_16 );
            Py_DECREF( tmp_args_element_name_29 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 828;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_22 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 828;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_initial_cost == NULL );
            var_initial_cost = tmp_assign_source_22;
        }
        goto branch_end_19;
        branch_no_19:;
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_compexpr_left_23;
            PyObject *tmp_compexpr_right_23;
            CHECK_OBJECT( var_loss_function );
            tmp_compexpr_left_23 = var_loss_function;
            tmp_compexpr_right_23 = Py_None;
            tmp_condition_result_21 = ( tmp_compexpr_left_23 != tmp_compexpr_right_23 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_21;
            }
            else
            {
                goto branch_no_21;
            }
            branch_yes_21:;
            {
                PyObject *tmp_assign_source_23;
                PyObject *tmp_called_name_17;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_kw_name_1;
                CHECK_OBJECT( var_loss_function );
                tmp_called_name_17 = var_loss_function;
                CHECK_OBJECT( var_f0 );
                tmp_tuple_element_2 = var_f0;
                tmp_args_name_1 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
                tmp_kw_name_1 = PyDict_Copy( const_dict_9e1b4601096819506f8f581e889fa028 );
                frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 830;
                tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_assign_source_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 830;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_initial_cost == NULL );
                var_initial_cost = tmp_assign_source_23;
            }
            goto branch_end_21;
            branch_no_21:;
            {
                PyObject *tmp_assign_source_24;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_called_instance_6;
                PyObject *tmp_mvar_value_18;
                PyObject *tmp_args_element_name_30;
                PyObject *tmp_args_element_name_31;
                tmp_left_name_3 = const_float_0_5;
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_18 == NULL ))
                {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_18 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 832;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_6 = tmp_mvar_value_18;
                CHECK_OBJECT( var_f0 );
                tmp_args_element_name_30 = var_f0;
                CHECK_OBJECT( var_f0 );
                tmp_args_element_name_31 = var_f0;
                frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 832;
                {
                    PyObject *call_args[] = { tmp_args_element_name_30, tmp_args_element_name_31 };
                    tmp_right_name_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_dot, call_args );
                }

                if ( tmp_right_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 832;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_24 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_assign_source_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 832;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_initial_cost == NULL );
                var_initial_cost = tmp_assign_source_24;
            }
            branch_end_21:;
        }
        branch_end_19:;
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_called_name_18;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_32;
        int tmp_truth_name_4;
        tmp_called_name_18 = LOOKUP_BUILTIN( const_str_plain_callable );
        assert( tmp_called_name_18 != NULL );
        CHECK_OBJECT( PyCell_GET( par_jac ) );
        tmp_args_element_name_32 = PyCell_GET( par_jac );
        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 834;
        {
            PyObject *call_args[] = { tmp_args_element_name_32 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 834;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_4 );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_4 );

            exception_lineno = 834;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_22 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_4 );
        if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_22;
        }
        else
        {
            goto branch_no_22;
        }
        branch_yes_22:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_dircall_arg4_1;
            CHECK_OBJECT( PyCell_GET( par_jac ) );
            tmp_dircall_arg1_1 = PyCell_GET( par_jac );
            CHECK_OBJECT( par_x0 );
            tmp_tuple_element_3 = par_x0;
            tmp_dircall_arg2_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( PyCell_GET( par_args ) );
            tmp_dircall_arg3_1 = PyCell_GET( par_args );
            CHECK_OBJECT( PyCell_GET( par_kwargs ) );
            tmp_dircall_arg4_1 = PyCell_GET( par_kwargs );
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg3_1 );
            Py_INCREF( tmp_dircall_arg4_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_assign_source_25 = impl___internal__$$$function_9_complex_call_helper_pos_star_list_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 835;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_J0 == NULL );
            var_J0 = tmp_assign_source_25;
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_called_name_19;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_33;
            int tmp_truth_name_5;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_issparse );

            if (unlikely( tmp_mvar_value_19 == NULL ))
            {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issparse );
            }

            if ( tmp_mvar_value_19 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "issparse" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 837;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_19 = tmp_mvar_value_19;
            CHECK_OBJECT( var_J0 );
            tmp_args_element_name_33 = var_J0;
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 837;
            {
                PyObject *call_args[] = { tmp_args_element_name_33 };
                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
            }

            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 837;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_5 = CHECK_IF_TRUE( tmp_call_result_5 );
            if ( tmp_truth_name_5 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_5 );

                exception_lineno = 837;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_23 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_5 );
            if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_23;
            }
            else
            {
                goto branch_no_23;
            }
            branch_yes_23:;
            {
                PyObject *tmp_assign_source_26;
                PyObject *tmp_called_name_20;
                PyObject *tmp_mvar_value_20;
                PyObject *tmp_args_element_name_34;
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_csr_matrix );

                if (unlikely( tmp_mvar_value_20 == NULL ))
                {
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_matrix );
                }

                if ( tmp_mvar_value_20 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csr_matrix" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 838;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_20 = tmp_mvar_value_20;
                CHECK_OBJECT( var_J0 );
                tmp_args_element_name_34 = var_J0;
                frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 838;
                {
                    PyObject *call_args[] = { tmp_args_element_name_34 };
                    tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
                }

                if ( tmp_assign_source_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 838;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_J0;
                    assert( old != NULL );
                    var_J0 = tmp_assign_source_26;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_27;
                PyObject *tmp_defaults_1;
                tmp_defaults_1 = const_tuple_none_tuple;
                Py_INCREF( tmp_defaults_1 );
                tmp_assign_source_27 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_2_jac_wrapped( tmp_defaults_1 );

                ((struct Nuitka_FunctionObject *)tmp_assign_source_27)->m_closure[0] = par_args;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_27)->m_closure[0] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_27)->m_closure[1] = par_jac;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_27)->m_closure[1] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_27)->m_closure[2] = par_kwargs;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_27)->m_closure[2] );


                assert( var_jac_wrapped == NULL );
                var_jac_wrapped = tmp_assign_source_27;
            }
            goto branch_end_23;
            branch_no_23:;
            {
                nuitka_bool tmp_condition_result_24;
                PyObject *tmp_isinstance_inst_1;
                PyObject *tmp_isinstance_cls_1;
                PyObject *tmp_mvar_value_21;
                CHECK_OBJECT( var_J0 );
                tmp_isinstance_inst_1 = var_J0;
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_LinearOperator );

                if (unlikely( tmp_mvar_value_21 == NULL ))
                {
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinearOperator );
                }

                if ( tmp_mvar_value_21 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinearOperator" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 843;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_isinstance_cls_1 = tmp_mvar_value_21;
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 843;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_24 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_24;
                }
                else
                {
                    goto branch_no_24;
                }
                branch_yes_24:;
                {
                    PyObject *tmp_assign_source_28;
                    PyObject *tmp_defaults_2;
                    tmp_defaults_2 = const_tuple_none_tuple;
                    Py_INCREF( tmp_defaults_2 );
                    tmp_assign_source_28 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_3_jac_wrapped( tmp_defaults_2 );

                    ((struct Nuitka_FunctionObject *)tmp_assign_source_28)->m_closure[0] = par_args;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_28)->m_closure[0] );
                    ((struct Nuitka_FunctionObject *)tmp_assign_source_28)->m_closure[1] = par_jac;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_28)->m_closure[1] );
                    ((struct Nuitka_FunctionObject *)tmp_assign_source_28)->m_closure[2] = par_kwargs;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_28)->m_closure[2] );


                    assert( var_jac_wrapped == NULL );
                    var_jac_wrapped = tmp_assign_source_28;
                }
                goto branch_end_24;
                branch_no_24:;
                {
                    PyObject *tmp_assign_source_29;
                    PyObject *tmp_called_instance_7;
                    PyObject *tmp_mvar_value_22;
                    PyObject *tmp_args_element_name_35;
                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

                    if (unlikely( tmp_mvar_value_22 == NULL ))
                    {
                        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                    }

                    if ( tmp_mvar_value_22 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 848;
                        type_description_1 = "coccooooooocoocooccooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_instance_7 = tmp_mvar_value_22;
                    CHECK_OBJECT( var_J0 );
                    tmp_args_element_name_35 = var_J0;
                    frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 848;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_35 };
                        tmp_assign_source_29 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_atleast_2d, call_args );
                    }

                    if ( tmp_assign_source_29 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 848;
                        type_description_1 = "coccooooooocoocooccooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_J0;
                        assert( old != NULL );
                        var_J0 = tmp_assign_source_29;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_30;
                    PyObject *tmp_defaults_3;
                    tmp_defaults_3 = const_tuple_none_tuple;
                    Py_INCREF( tmp_defaults_3 );
                    tmp_assign_source_30 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_4_jac_wrapped( tmp_defaults_3 );

                    ((struct Nuitka_FunctionObject *)tmp_assign_source_30)->m_closure[0] = par_args;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_30)->m_closure[0] );
                    ((struct Nuitka_FunctionObject *)tmp_assign_source_30)->m_closure[1] = par_jac;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_30)->m_closure[1] );
                    ((struct Nuitka_FunctionObject *)tmp_assign_source_30)->m_closure[2] = par_kwargs;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_30)->m_closure[2] );


                    assert( var_jac_wrapped == NULL );
                    var_jac_wrapped = tmp_assign_source_30;
                }
                branch_end_24:;
            }
            branch_end_23:;
        }
        goto branch_end_22;
        branch_no_22:;
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_compexpr_left_24;
            PyObject *tmp_compexpr_right_24;
            CHECK_OBJECT( par_method );
            tmp_compexpr_left_24 = par_method;
            tmp_compexpr_right_24 = const_str_plain_lm;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_24, tmp_compexpr_right_24 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 854;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_25 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_25;
            }
            else
            {
                goto branch_no_25;
            }
            branch_yes_25:;
            {
                nuitka_bool tmp_condition_result_26;
                PyObject *tmp_compexpr_left_25;
                PyObject *tmp_compexpr_right_25;
                CHECK_OBJECT( PyCell_GET( par_jac_sparsity ) );
                tmp_compexpr_left_25 = PyCell_GET( par_jac_sparsity );
                tmp_compexpr_right_25 = Py_None;
                tmp_condition_result_26 = ( tmp_compexpr_left_25 != tmp_compexpr_right_25 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_26 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_26;
                }
                else
                {
                    goto branch_no_26;
                }
                branch_yes_26:;
                {
                    PyObject *tmp_raise_type_19;
                    PyObject *tmp_make_exception_arg_19;
                    tmp_make_exception_arg_19 = const_str_digest_3ec9d7f296bdd644d9eacc6673f9ded8;
                    frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 856;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_19 };
                        tmp_raise_type_19 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_19 == NULL) );
                    exception_type = tmp_raise_type_19;
                    exception_lineno = 856;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_26:;
            }
            {
                nuitka_bool tmp_condition_result_27;
                PyObject *tmp_compexpr_left_26;
                PyObject *tmp_compexpr_right_26;
                CHECK_OBJECT( PyCell_GET( par_jac ) );
                tmp_compexpr_left_26 = PyCell_GET( par_jac );
                tmp_compexpr_right_26 = const_str_digest_9bca7c4227b5a1da023f6724018a8c27;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_26, tmp_compexpr_right_26 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 859;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_27 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_27 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_27;
                }
                else
                {
                    goto branch_no_27;
                }
                branch_yes_27:;
                {
                    PyObject *tmp_called_name_21;
                    PyObject *tmp_mvar_value_23;
                    PyObject *tmp_call_result_6;
                    PyObject *tmp_args_element_name_36;
                    PyObject *tmp_called_instance_8;
                    PyObject *tmp_args_element_name_37;
                    tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_warn );

                    if (unlikely( tmp_mvar_value_23 == NULL ))
                    {
                        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
                    }

                    if ( tmp_mvar_value_23 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 860;
                        type_description_1 = "coccooooooocoocooccooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_21 = tmp_mvar_value_23;
                    tmp_called_instance_8 = const_str_digest_3d8b0328a14288b97cc9d290dce120ec;
                    CHECK_OBJECT( PyCell_GET( par_jac ) );
                    tmp_args_element_name_37 = PyCell_GET( par_jac );
                    frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 860;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_37 };
                        tmp_args_element_name_36 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_format, call_args );
                    }

                    if ( tmp_args_element_name_36 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 860;
                        type_description_1 = "coccooooooocoocooccooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 860;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_36 };
                        tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_36 );
                    if ( tmp_call_result_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 860;
                        type_description_1 = "coccooooooocoocooccooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_6 );
                }
                branch_no_27:;
            }
            {
                PyObject *tmp_assign_source_31;
                tmp_assign_source_31 = Py_None;
                assert( var_J0 == NULL );
                Py_INCREF( tmp_assign_source_31 );
                var_J0 = tmp_assign_source_31;
            }
            {
                PyObject *tmp_assign_source_32;
                tmp_assign_source_32 = Py_None;
                assert( var_jac_wrapped == NULL );
                Py_INCREF( tmp_assign_source_32 );
                var_jac_wrapped = tmp_assign_source_32;
            }
            goto branch_end_25;
            branch_no_25:;
            {
                nuitka_bool tmp_condition_result_28;
                int tmp_and_left_truth_7;
                nuitka_bool tmp_and_left_value_7;
                nuitka_bool tmp_and_right_value_7;
                PyObject *tmp_compexpr_left_27;
                PyObject *tmp_compexpr_right_27;
                PyObject *tmp_compexpr_left_28;
                PyObject *tmp_compexpr_right_28;
                CHECK_OBJECT( PyCell_GET( par_jac_sparsity ) );
                tmp_compexpr_left_27 = PyCell_GET( par_jac_sparsity );
                tmp_compexpr_right_27 = Py_None;
                tmp_and_left_value_7 = ( tmp_compexpr_left_27 != tmp_compexpr_right_27 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
                if ( tmp_and_left_truth_7 == 1 )
                {
                    goto and_right_7;
                }
                else
                {
                    goto and_left_7;
                }
                and_right_7:;
                CHECK_OBJECT( par_tr_solver );
                tmp_compexpr_left_28 = par_tr_solver;
                tmp_compexpr_right_28 = const_str_plain_exact;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_28, tmp_compexpr_right_28 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 865;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_right_value_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_28 = tmp_and_right_value_7;
                goto and_end_7;
                and_left_7:;
                tmp_condition_result_28 = tmp_and_left_value_7;
                and_end_7:;
                if ( tmp_condition_result_28 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_28;
                }
                else
                {
                    goto branch_no_28;
                }
                branch_yes_28:;
                {
                    PyObject *tmp_raise_type_20;
                    PyObject *tmp_make_exception_arg_20;
                    tmp_make_exception_arg_20 = const_str_digest_6fe9111c5a4ffc1a9a823ed297606580;
                    frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 866;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_20 };
                        tmp_raise_type_20 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_20 == NULL) );
                    exception_type = tmp_raise_type_20;
                    exception_lineno = 866;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_28:;
            }
            {
                PyObject *tmp_assign_source_33;
                PyObject *tmp_called_name_22;
                PyObject *tmp_mvar_value_24;
                PyObject *tmp_args_element_name_38;
                PyObject *tmp_args_element_name_39;
                PyObject *tmp_args_element_name_40;
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_check_jac_sparsity );

                if (unlikely( tmp_mvar_value_24 == NULL ))
                {
                    tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_check_jac_sparsity );
                }

                if ( tmp_mvar_value_24 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "check_jac_sparsity" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 869;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_22 = tmp_mvar_value_24;
                CHECK_OBJECT( PyCell_GET( par_jac_sparsity ) );
                tmp_args_element_name_38 = PyCell_GET( par_jac_sparsity );
                CHECK_OBJECT( var_m );
                tmp_args_element_name_39 = var_m;
                CHECK_OBJECT( var_n );
                tmp_args_element_name_40 = var_n;
                frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 869;
                {
                    PyObject *call_args[] = { tmp_args_element_name_38, tmp_args_element_name_39, tmp_args_element_name_40 };
                    tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_22, call_args );
                }

                if ( tmp_assign_source_33 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 869;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = PyCell_GET( par_jac_sparsity );
                    PyCell_SET( par_jac_sparsity, tmp_assign_source_33 );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_34;
                tmp_assign_source_34 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_5_jac_wrapped(  );

                ((struct Nuitka_FunctionObject *)tmp_assign_source_34)->m_closure[0] = par_args;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_34)->m_closure[0] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_34)->m_closure[1] = par_bounds;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_34)->m_closure[1] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_34)->m_closure[2] = par_diff_step;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_34)->m_closure[2] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_34)->m_closure[3] = par_fun;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_34)->m_closure[3] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_34)->m_closure[4] = par_jac;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_34)->m_closure[4] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_34)->m_closure[5] = par_jac_sparsity;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_34)->m_closure[5] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_34)->m_closure[6] = par_kwargs;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_34)->m_closure[6] );


                assert( var_jac_wrapped == NULL );
                var_jac_wrapped = tmp_assign_source_34;
            }
            {
                PyObject *tmp_assign_source_35;
                PyObject *tmp_called_name_23;
                PyObject *tmp_args_element_name_41;
                PyObject *tmp_args_element_name_42;
                CHECK_OBJECT( var_jac_wrapped );
                tmp_called_name_23 = var_jac_wrapped;
                CHECK_OBJECT( par_x0 );
                tmp_args_element_name_41 = par_x0;
                CHECK_OBJECT( var_f0 );
                tmp_args_element_name_42 = var_f0;
                frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 880;
                {
                    PyObject *call_args[] = { tmp_args_element_name_41, tmp_args_element_name_42 };
                    tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_23, call_args );
                }

                if ( tmp_assign_source_35 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 880;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_J0 == NULL );
                var_J0 = tmp_assign_source_35;
            }
            branch_end_25:;
        }
        branch_end_22:;
    }
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_compexpr_left_29;
        PyObject *tmp_compexpr_right_29;
        if ( var_J0 == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J0" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 882;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_29 = var_J0;
        tmp_compexpr_right_29 = Py_None;
        tmp_condition_result_29 = ( tmp_compexpr_left_29 != tmp_compexpr_right_29 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_29 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_29;
        }
        else
        {
            goto branch_no_29;
        }
        branch_yes_29:;
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_compexpr_left_30;
            PyObject *tmp_compexpr_right_30;
            PyObject *tmp_source_name_18;
            PyObject *tmp_tuple_element_4;
            if ( var_J0 == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J0" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 883;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_18 = var_J0;
            tmp_compexpr_left_30 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_shape );
            if ( tmp_compexpr_left_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 883;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_m );
            tmp_tuple_element_4 = var_m;
            tmp_compexpr_right_30 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_compexpr_right_30, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( var_n );
            tmp_tuple_element_4 = var_n;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_compexpr_right_30, 1, tmp_tuple_element_4 );
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_30, tmp_compexpr_right_30 );
            Py_DECREF( tmp_compexpr_left_30 );
            Py_DECREF( tmp_compexpr_right_30 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 883;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_30 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_30 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_30;
            }
            else
            {
                goto branch_no_30;
            }
            branch_yes_30:;
            {
                PyObject *tmp_raise_type_21;
                PyObject *tmp_make_exception_arg_21;
                PyObject *tmp_called_name_24;
                PyObject *tmp_source_name_19;
                PyObject *tmp_args_element_name_43;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_args_element_name_44;
                PyObject *tmp_source_name_20;
                tmp_source_name_19 = const_str_digest_83dd5a41d8353dcb46e73f5d7763ed77;
                tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_format );
                assert( !(tmp_called_name_24 == NULL) );
                CHECK_OBJECT( var_m );
                tmp_tuple_element_5 = var_m;
                tmp_args_element_name_43 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_args_element_name_43, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( var_n );
                tmp_tuple_element_5 = var_n;
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_args_element_name_43, 1, tmp_tuple_element_5 );
                if ( var_J0 == NULL )
                {
                    Py_DECREF( tmp_called_name_24 );
                    Py_DECREF( tmp_args_element_name_43 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J0" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 886;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_20 = var_J0;
                tmp_args_element_name_44 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_shape );
                if ( tmp_args_element_name_44 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_24 );
                    Py_DECREF( tmp_args_element_name_43 );

                    exception_lineno = 886;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 885;
                {
                    PyObject *call_args[] = { tmp_args_element_name_43, tmp_args_element_name_44 };
                    tmp_make_exception_arg_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_24, call_args );
                }

                Py_DECREF( tmp_called_name_24 );
                Py_DECREF( tmp_args_element_name_43 );
                Py_DECREF( tmp_args_element_name_44 );
                if ( tmp_make_exception_arg_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 885;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 884;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_21 };
                    tmp_raise_type_21 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_21 );
                assert( !(tmp_raise_type_21 == NULL) );
                exception_type = tmp_raise_type_21;
                exception_lineno = 884;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_30:;
        }
        {
            nuitka_bool tmp_condition_result_31;
            PyObject *tmp_operand_name_7;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            PyObject *tmp_source_name_21;
            PyObject *tmp_mvar_value_25;
            if ( var_J0 == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J0" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 888;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_inst_2 = var_J0;
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_25 == NULL ))
            {
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_25 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 888;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_21 = tmp_mvar_value_25;
            tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_ndarray );
            if ( tmp_isinstance_cls_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 888;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            Py_DECREF( tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 888;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_7 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 888;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_31 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_31 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_31;
            }
            else
            {
                goto branch_no_31;
            }
            branch_yes_31:;
            {
                nuitka_bool tmp_condition_result_32;
                PyObject *tmp_compexpr_left_31;
                PyObject *tmp_compexpr_right_31;
                CHECK_OBJECT( par_method );
                tmp_compexpr_left_31 = par_method;
                tmp_compexpr_right_31 = const_str_plain_lm;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_31, tmp_compexpr_right_31 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 889;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_32 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_32 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_32;
                }
                else
                {
                    goto branch_no_32;
                }
                branch_yes_32:;
                {
                    PyObject *tmp_raise_type_22;
                    PyObject *tmp_make_exception_arg_22;
                    tmp_make_exception_arg_22 = const_str_digest_f73f470d3db54ccb2a030b6fa968a4b6;
                    frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 890;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_22 };
                        tmp_raise_type_22 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_22 == NULL) );
                    exception_type = tmp_raise_type_22;
                    exception_lineno = 890;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_32:;
            }
            {
                nuitka_bool tmp_condition_result_33;
                PyObject *tmp_compexpr_left_32;
                PyObject *tmp_compexpr_right_32;
                CHECK_OBJECT( par_tr_solver );
                tmp_compexpr_left_32 = par_tr_solver;
                tmp_compexpr_right_32 = const_str_plain_exact;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_32, tmp_compexpr_right_32 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 893;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_33 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_33 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_33;
                }
                else
                {
                    goto branch_no_33;
                }
                branch_yes_33:;
                {
                    PyObject *tmp_raise_type_23;
                    PyObject *tmp_make_exception_arg_23;
                    tmp_make_exception_arg_23 = const_str_digest_20a1b3b2cab9da24c0b666013c289515;
                    frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 894;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_23 };
                        tmp_raise_type_23 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_23 == NULL) );
                    exception_type = tmp_raise_type_23;
                    exception_lineno = 894;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_33:;
            }
            branch_no_31:;
        }
        {
            PyObject *tmp_assign_source_36;
            int tmp_and_left_truth_8;
            PyObject *tmp_and_left_value_8;
            PyObject *tmp_and_right_value_8;
            PyObject *tmp_isinstance_inst_3;
            PyObject *tmp_isinstance_cls_3;
            PyObject *tmp_mvar_value_26;
            PyObject *tmp_compexpr_left_33;
            PyObject *tmp_compexpr_right_33;
            CHECK_OBJECT( par_x_scale );
            tmp_isinstance_inst_3 = par_x_scale;
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_string_types );

            if (unlikely( tmp_mvar_value_26 == NULL ))
            {
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_string_types );
            }

            if ( tmp_mvar_value_26 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "string_types" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 898;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_3 = tmp_mvar_value_26;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 898;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_8 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_and_left_truth_8 = CHECK_IF_TRUE( tmp_and_left_value_8 );
            if ( tmp_and_left_truth_8 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 898;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( tmp_and_left_truth_8 == 1 )
            {
                goto and_right_8;
            }
            else
            {
                goto and_left_8;
            }
            and_right_8:;
            CHECK_OBJECT( par_x_scale );
            tmp_compexpr_left_33 = par_x_scale;
            tmp_compexpr_right_33 = const_str_plain_jac;
            tmp_and_right_value_8 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_33, tmp_compexpr_right_33 );
            if ( tmp_and_right_value_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 898;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_36 = tmp_and_right_value_8;
            goto and_end_8;
            and_left_8:;
            Py_INCREF( tmp_and_left_value_8 );
            tmp_assign_source_36 = tmp_and_left_value_8;
            and_end_8:;
            assert( var_jac_scale == NULL );
            var_jac_scale = tmp_assign_source_36;
        }
        {
            nuitka_bool tmp_condition_result_34;
            int tmp_and_left_truth_9;
            nuitka_bool tmp_and_left_value_9;
            nuitka_bool tmp_and_right_value_9;
            PyObject *tmp_isinstance_inst_4;
            PyObject *tmp_isinstance_cls_4;
            PyObject *tmp_mvar_value_27;
            int tmp_truth_name_6;
            if ( var_J0 == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J0" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 899;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_inst_4 = var_J0;
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_LinearOperator );

            if (unlikely( tmp_mvar_value_27 == NULL ))
            {
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinearOperator );
            }

            if ( tmp_mvar_value_27 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinearOperator" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 899;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_4 = tmp_mvar_value_27;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 899;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_9 = tmp_and_left_value_9 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_9 == 1 )
            {
                goto and_right_9;
            }
            else
            {
                goto and_left_9;
            }
            and_right_9:;
            CHECK_OBJECT( var_jac_scale );
            tmp_truth_name_6 = CHECK_IF_TRUE( var_jac_scale );
            if ( tmp_truth_name_6 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 899;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_9 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_34 = tmp_and_right_value_9;
            goto and_end_9;
            and_left_9:;
            tmp_condition_result_34 = tmp_and_left_value_9;
            and_end_9:;
            if ( tmp_condition_result_34 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_34;
            }
            else
            {
                goto branch_no_34;
            }
            branch_yes_34:;
            {
                PyObject *tmp_raise_type_24;
                PyObject *tmp_make_exception_arg_24;
                tmp_make_exception_arg_24 = const_str_digest_0a5e5ea72e84ec56cb59e49497a3a4ea;
                frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 900;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_24 };
                    tmp_raise_type_24 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_24 == NULL) );
                exception_type = tmp_raise_type_24;
                exception_lineno = 900;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_34:;
        }
        {
            nuitka_bool tmp_condition_result_35;
            PyObject *tmp_compexpr_left_34;
            PyObject *tmp_compexpr_right_34;
            CHECK_OBJECT( par_tr_solver );
            tmp_compexpr_left_34 = par_tr_solver;
            tmp_compexpr_right_34 = Py_None;
            tmp_condition_result_35 = ( tmp_compexpr_left_34 == tmp_compexpr_right_34 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_35 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_35;
            }
            else
            {
                goto branch_no_35;
            }
            branch_yes_35:;
            {
                nuitka_bool tmp_condition_result_36;
                PyObject *tmp_isinstance_inst_5;
                PyObject *tmp_isinstance_cls_5;
                PyObject *tmp_source_name_22;
                PyObject *tmp_mvar_value_28;
                if ( var_J0 == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J0" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 904;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_isinstance_inst_5 = var_J0;
                tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_28 == NULL ))
                {
                    tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_28 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 904;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_22 = tmp_mvar_value_28;
                tmp_isinstance_cls_5 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_ndarray );
                if ( tmp_isinstance_cls_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 904;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
                Py_DECREF( tmp_isinstance_cls_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 904;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_36 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_36 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_36;
                }
                else
                {
                    goto branch_no_36;
                }
                branch_yes_36:;
                {
                    PyObject *tmp_assign_source_37;
                    tmp_assign_source_37 = const_str_plain_exact;
                    {
                        PyObject *old = par_tr_solver;
                        assert( old != NULL );
                        par_tr_solver = tmp_assign_source_37;
                        Py_INCREF( par_tr_solver );
                        Py_DECREF( old );
                    }

                }
                goto branch_end_36;
                branch_no_36:;
                {
                    PyObject *tmp_assign_source_38;
                    tmp_assign_source_38 = const_str_plain_lsmr;
                    {
                        PyObject *old = par_tr_solver;
                        assert( old != NULL );
                        par_tr_solver = tmp_assign_source_38;
                        Py_INCREF( par_tr_solver );
                        Py_DECREF( old );
                    }

                }
                branch_end_36:;
            }
            branch_no_35:;
        }
        branch_no_29:;
    }
    {
        nuitka_bool tmp_condition_result_37;
        PyObject *tmp_compexpr_left_35;
        PyObject *tmp_compexpr_right_35;
        CHECK_OBJECT( par_method );
        tmp_compexpr_left_35 = par_method;
        tmp_compexpr_right_35 = const_str_plain_lm;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_35, tmp_compexpr_right_35 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 909;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_37 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_37 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_37;
        }
        else
        {
            goto branch_no_37;
        }
        branch_yes_37:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_name_25;
            PyObject *tmp_mvar_value_29;
            PyObject *tmp_args_element_name_45;
            PyObject *tmp_args_element_name_46;
            PyObject *tmp_args_element_name_47;
            PyObject *tmp_args_element_name_48;
            PyObject *tmp_args_element_name_49;
            PyObject *tmp_args_element_name_50;
            PyObject *tmp_args_element_name_51;
            PyObject *tmp_args_element_name_52;
            PyObject *tmp_args_element_name_53;
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_call_minpack );

            if (unlikely( tmp_mvar_value_29 == NULL ))
            {
                tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_call_minpack );
            }

            if ( tmp_mvar_value_29 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "call_minpack" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 910;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_25 = tmp_mvar_value_29;
            CHECK_OBJECT( var_fun_wrapped );
            tmp_args_element_name_45 = var_fun_wrapped;
            CHECK_OBJECT( par_x0 );
            tmp_args_element_name_46 = par_x0;
            if ( var_jac_wrapped == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac_wrapped" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 910;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_47 = var_jac_wrapped;
            CHECK_OBJECT( par_ftol );
            tmp_args_element_name_48 = par_ftol;
            CHECK_OBJECT( par_xtol );
            tmp_args_element_name_49 = par_xtol;
            CHECK_OBJECT( par_gtol );
            tmp_args_element_name_50 = par_gtol;
            CHECK_OBJECT( par_max_nfev );
            tmp_args_element_name_51 = par_max_nfev;
            CHECK_OBJECT( par_x_scale );
            tmp_args_element_name_52 = par_x_scale;
            CHECK_OBJECT( PyCell_GET( par_diff_step ) );
            tmp_args_element_name_53 = PyCell_GET( par_diff_step );
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 910;
            {
                PyObject *call_args[] = { tmp_args_element_name_45, tmp_args_element_name_46, tmp_args_element_name_47, tmp_args_element_name_48, tmp_args_element_name_49, tmp_args_element_name_50, tmp_args_element_name_51, tmp_args_element_name_52, tmp_args_element_name_53 };
                tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS9( tmp_called_name_25, call_args );
            }

            if ( tmp_assign_source_39 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 910;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_result == NULL );
            var_result = tmp_assign_source_39;
        }
        goto branch_end_37;
        branch_no_37:;
        {
            nuitka_bool tmp_condition_result_38;
            PyObject *tmp_compexpr_left_36;
            PyObject *tmp_compexpr_right_36;
            CHECK_OBJECT( par_method );
            tmp_compexpr_left_36 = par_method;
            tmp_compexpr_right_36 = const_str_plain_trf;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_36, tmp_compexpr_right_36 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 913;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_38 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_38 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_38;
            }
            else
            {
                goto branch_no_38;
            }
            branch_yes_38:;
            {
                PyObject *tmp_assign_source_40;
                PyObject *tmp_called_name_26;
                PyObject *tmp_mvar_value_30;
                PyObject *tmp_args_element_name_54;
                PyObject *tmp_args_element_name_55;
                PyObject *tmp_args_element_name_56;
                PyObject *tmp_args_element_name_57;
                PyObject *tmp_args_element_name_58;
                PyObject *tmp_args_element_name_59;
                PyObject *tmp_args_element_name_60;
                PyObject *tmp_args_element_name_61;
                PyObject *tmp_args_element_name_62;
                PyObject *tmp_args_element_name_63;
                PyObject *tmp_args_element_name_64;
                PyObject *tmp_args_element_name_65;
                PyObject *tmp_args_element_name_66;
                PyObject *tmp_args_element_name_67;
                PyObject *tmp_args_element_name_68;
                PyObject *tmp_called_instance_9;
                PyObject *tmp_args_element_name_69;
                tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_trf );

                if (unlikely( tmp_mvar_value_30 == NULL ))
                {
                    tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trf );
                }

                if ( tmp_mvar_value_30 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "trf" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 914;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_26 = tmp_mvar_value_30;
                CHECK_OBJECT( var_fun_wrapped );
                tmp_args_element_name_54 = var_fun_wrapped;
                if ( var_jac_wrapped == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac_wrapped" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 914;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_55 = var_jac_wrapped;
                CHECK_OBJECT( par_x0 );
                tmp_args_element_name_56 = par_x0;
                CHECK_OBJECT( var_f0 );
                tmp_args_element_name_57 = var_f0;
                if ( var_J0 == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J0" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 914;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_58 = var_J0;
                CHECK_OBJECT( var_lb );
                tmp_args_element_name_59 = var_lb;
                CHECK_OBJECT( var_ub );
                tmp_args_element_name_60 = var_ub;
                CHECK_OBJECT( par_ftol );
                tmp_args_element_name_61 = par_ftol;
                CHECK_OBJECT( par_xtol );
                tmp_args_element_name_62 = par_xtol;
                CHECK_OBJECT( par_gtol );
                tmp_args_element_name_63 = par_gtol;
                CHECK_OBJECT( par_max_nfev );
                tmp_args_element_name_64 = par_max_nfev;
                CHECK_OBJECT( par_x_scale );
                tmp_args_element_name_65 = par_x_scale;
                CHECK_OBJECT( var_loss_function );
                tmp_args_element_name_66 = var_loss_function;
                if ( par_tr_solver == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tr_solver" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 915;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_67 = par_tr_solver;
                CHECK_OBJECT( par_tr_options );
                tmp_called_instance_9 = par_tr_options;
                frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 916;
                tmp_args_element_name_68 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_copy );
                if ( tmp_args_element_name_68 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 916;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_verbose );
                tmp_args_element_name_69 = par_verbose;
                frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 914;
                {
                    PyObject *call_args[] = { tmp_args_element_name_54, tmp_args_element_name_55, tmp_args_element_name_56, tmp_args_element_name_57, tmp_args_element_name_58, tmp_args_element_name_59, tmp_args_element_name_60, tmp_args_element_name_61, tmp_args_element_name_62, tmp_args_element_name_63, tmp_args_element_name_64, tmp_args_element_name_65, tmp_args_element_name_66, tmp_args_element_name_67, tmp_args_element_name_68, tmp_args_element_name_69 };
                    tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS16( tmp_called_name_26, call_args );
                }

                Py_DECREF( tmp_args_element_name_68 );
                if ( tmp_assign_source_40 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 914;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_result == NULL );
                var_result = tmp_assign_source_40;
            }
            goto branch_end_38;
            branch_no_38:;
            {
                nuitka_bool tmp_condition_result_39;
                PyObject *tmp_compexpr_left_37;
                PyObject *tmp_compexpr_right_37;
                CHECK_OBJECT( par_method );
                tmp_compexpr_left_37 = par_method;
                tmp_compexpr_right_37 = const_str_plain_dogbox;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_37, tmp_compexpr_right_37 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 918;
                    type_description_1 = "coccooooooocoocooccooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_39 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_39 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_39;
                }
                else
                {
                    goto branch_no_39;
                }
                branch_yes_39:;
                {
                    nuitka_bool tmp_condition_result_40;
                    int tmp_and_left_truth_10;
                    nuitka_bool tmp_and_left_value_10;
                    nuitka_bool tmp_and_right_value_10;
                    PyObject *tmp_compexpr_left_38;
                    PyObject *tmp_compexpr_right_38;
                    PyObject *tmp_compexpr_left_39;
                    PyObject *tmp_compexpr_right_39;
                    if ( par_tr_solver == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tr_solver" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 919;
                        type_description_1 = "coccooooooocoocooccooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_compexpr_left_38 = par_tr_solver;
                    tmp_compexpr_right_38 = const_str_plain_lsmr;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_38, tmp_compexpr_right_38 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 919;
                        type_description_1 = "coccooooooocoocooccooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_left_value_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_and_left_truth_10 = tmp_and_left_value_10 == NUITKA_BOOL_TRUE ? 1 : 0;
                    if ( tmp_and_left_truth_10 == 1 )
                    {
                        goto and_right_10;
                    }
                    else
                    {
                        goto and_left_10;
                    }
                    and_right_10:;
                    tmp_compexpr_left_39 = const_str_plain_regularize;
                    CHECK_OBJECT( par_tr_options );
                    tmp_compexpr_right_39 = par_tr_options;
                    tmp_res = PySequence_Contains( tmp_compexpr_right_39, tmp_compexpr_left_39 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 919;
                        type_description_1 = "coccooooooocoocooccooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_right_value_10 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_condition_result_40 = tmp_and_right_value_10;
                    goto and_end_10;
                    and_left_10:;
                    tmp_condition_result_40 = tmp_and_left_value_10;
                    and_end_10:;
                    if ( tmp_condition_result_40 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_40;
                    }
                    else
                    {
                        goto branch_no_40;
                    }
                    branch_yes_40:;
                    {
                        PyObject *tmp_called_name_27;
                        PyObject *tmp_mvar_value_31;
                        PyObject *tmp_call_result_7;
                        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_warn );

                        if (unlikely( tmp_mvar_value_31 == NULL ))
                        {
                            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
                        }

                        if ( tmp_mvar_value_31 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 920;
                            type_description_1 = "coccooooooocoocooccooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_27 = tmp_mvar_value_31;
                        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 920;
                        tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, &PyTuple_GET_ITEM( const_tuple_str_digest_4c82984292ac2902da573c77a8fbfab6_tuple, 0 ) );

                        if ( tmp_call_result_7 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 920;
                            type_description_1 = "coccooooooocoocooccooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF( tmp_call_result_7 );
                    }
                    {
                        PyObject *tmp_assign_source_41;
                        PyObject *tmp_called_instance_10;
                        CHECK_OBJECT( par_tr_options );
                        tmp_called_instance_10 = par_tr_options;
                        frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 922;
                        tmp_assign_source_41 = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain_copy );
                        if ( tmp_assign_source_41 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 922;
                            type_description_1 = "coccooooooocoocooccooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = par_tr_options;
                            assert( old != NULL );
                            par_tr_options = tmp_assign_source_41;
                            Py_DECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_delsubscr_target_1;
                        PyObject *tmp_delsubscr_subscript_1;
                        CHECK_OBJECT( par_tr_options );
                        tmp_delsubscr_target_1 = par_tr_options;
                        tmp_delsubscr_subscript_1 = const_str_plain_regularize;
                        tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 923;
                            type_description_1 = "coccooooooocoocooccooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                    }
                    branch_no_40:;
                }
                {
                    PyObject *tmp_assign_source_42;
                    PyObject *tmp_called_name_28;
                    PyObject *tmp_mvar_value_32;
                    PyObject *tmp_args_element_name_70;
                    PyObject *tmp_args_element_name_71;
                    PyObject *tmp_args_element_name_72;
                    PyObject *tmp_args_element_name_73;
                    PyObject *tmp_args_element_name_74;
                    PyObject *tmp_args_element_name_75;
                    PyObject *tmp_args_element_name_76;
                    PyObject *tmp_args_element_name_77;
                    PyObject *tmp_args_element_name_78;
                    PyObject *tmp_args_element_name_79;
                    PyObject *tmp_args_element_name_80;
                    PyObject *tmp_args_element_name_81;
                    PyObject *tmp_args_element_name_82;
                    PyObject *tmp_args_element_name_83;
                    PyObject *tmp_args_element_name_84;
                    PyObject *tmp_args_element_name_85;
                    tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_dogbox );

                    if (unlikely( tmp_mvar_value_32 == NULL ))
                    {
                        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dogbox );
                    }

                    if ( tmp_mvar_value_32 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dogbox" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 925;
                        type_description_1 = "coccooooooocoocooccooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_28 = tmp_mvar_value_32;
                    CHECK_OBJECT( var_fun_wrapped );
                    tmp_args_element_name_70 = var_fun_wrapped;
                    if ( var_jac_wrapped == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac_wrapped" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 925;
                        type_description_1 = "coccooooooocoocooccooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_args_element_name_71 = var_jac_wrapped;
                    CHECK_OBJECT( par_x0 );
                    tmp_args_element_name_72 = par_x0;
                    CHECK_OBJECT( var_f0 );
                    tmp_args_element_name_73 = var_f0;
                    if ( var_J0 == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J0" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 925;
                        type_description_1 = "coccooooooocoocooccooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_args_element_name_74 = var_J0;
                    CHECK_OBJECT( var_lb );
                    tmp_args_element_name_75 = var_lb;
                    CHECK_OBJECT( var_ub );
                    tmp_args_element_name_76 = var_ub;
                    CHECK_OBJECT( par_ftol );
                    tmp_args_element_name_77 = par_ftol;
                    CHECK_OBJECT( par_xtol );
                    tmp_args_element_name_78 = par_xtol;
                    CHECK_OBJECT( par_gtol );
                    tmp_args_element_name_79 = par_gtol;
                    CHECK_OBJECT( par_max_nfev );
                    tmp_args_element_name_80 = par_max_nfev;
                    CHECK_OBJECT( par_x_scale );
                    tmp_args_element_name_81 = par_x_scale;
                    CHECK_OBJECT( var_loss_function );
                    tmp_args_element_name_82 = var_loss_function;
                    if ( par_tr_solver == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tr_solver" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 927;
                        type_description_1 = "coccooooooocoocooccooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_args_element_name_83 = par_tr_solver;
                    CHECK_OBJECT( par_tr_options );
                    tmp_args_element_name_84 = par_tr_options;
                    CHECK_OBJECT( par_verbose );
                    tmp_args_element_name_85 = par_verbose;
                    frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 925;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_70, tmp_args_element_name_71, tmp_args_element_name_72, tmp_args_element_name_73, tmp_args_element_name_74, tmp_args_element_name_75, tmp_args_element_name_76, tmp_args_element_name_77, tmp_args_element_name_78, tmp_args_element_name_79, tmp_args_element_name_80, tmp_args_element_name_81, tmp_args_element_name_82, tmp_args_element_name_83, tmp_args_element_name_84, tmp_args_element_name_85 };
                        tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS16( tmp_called_name_28, call_args );
                    }

                    if ( tmp_assign_source_42 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 925;
                        type_description_1 = "coccooooooocoocooccooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_result == NULL );
                    var_result = tmp_assign_source_42;
                }
                branch_no_39:;
            }
            branch_end_38:;
        }
        branch_end_37:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_source_name_23;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_TERMINATION_MESSAGES );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TERMINATION_MESSAGES );
        }

        if ( tmp_mvar_value_33 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TERMINATION_MESSAGES" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 929;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_3 = tmp_mvar_value_33;
        if ( var_result == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 929;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_23 = var_result;
        tmp_subscript_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_status );
        if ( tmp_subscript_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 929;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 929;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_result == NULL )
        {
            Py_DECREF( tmp_assattr_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 929;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = var_result;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_message, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 929;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_compexpr_left_40;
        PyObject *tmp_compexpr_right_40;
        PyObject *tmp_source_name_24;
        PyObject *tmp_assattr_target_2;
        if ( var_result == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 930;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_24 = var_result;
        tmp_compexpr_left_40 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_status );
        if ( tmp_compexpr_left_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 930;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_40 = const_int_0;
        tmp_assattr_name_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_40, tmp_compexpr_right_40 );
        Py_DECREF( tmp_compexpr_left_40 );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 930;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_result == NULL )
        {
            Py_DECREF( tmp_assattr_name_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 930;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = var_result;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_success, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 930;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_41;
        PyObject *tmp_compexpr_left_41;
        PyObject *tmp_compexpr_right_41;
        CHECK_OBJECT( par_verbose );
        tmp_compexpr_left_41 = par_verbose;
        tmp_compexpr_right_41 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_41, tmp_compexpr_right_41 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 932;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_41 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_41 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_41;
        }
        else
        {
            goto branch_no_41;
        }
        branch_yes_41:;
        {
            PyObject *tmp_called_name_29;
            PyObject *tmp_call_result_8;
            PyObject *tmp_args_element_name_86;
            PyObject *tmp_source_name_25;
            tmp_called_name_29 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_29 != NULL );
            if ( var_result == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 933;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_25 = var_result;
            tmp_args_element_name_86 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_message );
            if ( tmp_args_element_name_86 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 933;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 933;
            {
                PyObject *call_args[] = { tmp_args_element_name_86 };
                tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
            }

            Py_DECREF( tmp_args_element_name_86 );
            if ( tmp_call_result_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 933;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_8 );
        }
        {
            PyObject *tmp_called_name_30;
            PyObject *tmp_call_result_9;
            PyObject *tmp_args_element_name_87;
            PyObject *tmp_called_name_31;
            PyObject *tmp_source_name_26;
            PyObject *tmp_args_element_name_88;
            PyObject *tmp_source_name_27;
            PyObject *tmp_args_element_name_89;
            PyObject *tmp_args_element_name_90;
            PyObject *tmp_source_name_28;
            PyObject *tmp_args_element_name_91;
            PyObject *tmp_source_name_29;
            tmp_called_name_30 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_30 != NULL );
            tmp_source_name_26 = const_str_digest_2573cbcd9e95781aa7d8aa6f04c2c285;
            tmp_called_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_format );
            assert( !(tmp_called_name_31 == NULL) );
            if ( var_result == NULL )
            {
                Py_DECREF( tmp_called_name_31 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 936;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_27 = var_result;
            tmp_args_element_name_88 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_nfev );
            if ( tmp_args_element_name_88 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_31 );

                exception_lineno = 936;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_initial_cost == NULL )
            {
                Py_DECREF( tmp_called_name_31 );
                Py_DECREF( tmp_args_element_name_88 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "initial_cost" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 936;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_89 = var_initial_cost;
            if ( var_result == NULL )
            {
                Py_DECREF( tmp_called_name_31 );
                Py_DECREF( tmp_args_element_name_88 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 936;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_28 = var_result;
            tmp_args_element_name_90 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_cost );
            if ( tmp_args_element_name_90 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_31 );
                Py_DECREF( tmp_args_element_name_88 );

                exception_lineno = 936;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_result == NULL )
            {
                Py_DECREF( tmp_called_name_31 );
                Py_DECREF( tmp_args_element_name_88 );
                Py_DECREF( tmp_args_element_name_90 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 937;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_29 = var_result;
            tmp_args_element_name_91 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_optimality );
            if ( tmp_args_element_name_91 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_31 );
                Py_DECREF( tmp_args_element_name_88 );
                Py_DECREF( tmp_args_element_name_90 );

                exception_lineno = 937;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 934;
            {
                PyObject *call_args[] = { tmp_args_element_name_88, tmp_args_element_name_89, tmp_args_element_name_90, tmp_args_element_name_91 };
                tmp_args_element_name_87 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_31, call_args );
            }

            Py_DECREF( tmp_called_name_31 );
            Py_DECREF( tmp_args_element_name_88 );
            Py_DECREF( tmp_args_element_name_90 );
            Py_DECREF( tmp_args_element_name_91 );
            if ( tmp_args_element_name_87 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 934;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame.f_lineno = 934;
            {
                PyObject *call_args[] = { tmp_args_element_name_87 };
                tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
            }

            Py_DECREF( tmp_args_element_name_87 );
            if ( tmp_call_result_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 934;
                type_description_1 = "coccooooooocoocooccooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_9 );
        }
        branch_no_41:;
    }
    if ( var_result == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 939;
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_669a61b265de2f1b22e9ae7144c18fd2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_669a61b265de2f1b22e9ae7144c18fd2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_669a61b265de2f1b22e9ae7144c18fd2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_669a61b265de2f1b22e9ae7144c18fd2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_669a61b265de2f1b22e9ae7144c18fd2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_669a61b265de2f1b22e9ae7144c18fd2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_669a61b265de2f1b22e9ae7144c18fd2,
        type_description_1,
        par_fun,
        par_x0,
        par_jac,
        par_bounds,
        par_method,
        par_ftol,
        par_xtol,
        par_gtol,
        par_x_scale,
        par_loss,
        par_f_scale,
        par_diff_step,
        par_tr_solver,
        par_tr_options,
        par_jac_sparsity,
        par_max_nfev,
        par_verbose,
        par_args,
        par_kwargs,
        var_lb,
        var_ub,
        var_fun_wrapped,
        var_f0,
        var_n,
        var_m,
        var_loss_function,
        var_rho,
        var_initial_cost,
        var_J0,
        var_jac_wrapped,
        var_jac_scale,
        var_result
    );


    // Release cached frame.
    if ( frame_669a61b265de2f1b22e9ae7144c18fd2 == cache_frame_669a61b265de2f1b22e9ae7144c18fd2 )
    {
        Py_DECREF( frame_669a61b265de2f1b22e9ae7144c18fd2 );
    }
    cache_frame_669a61b265de2f1b22e9ae7144c18fd2 = NULL;

    assertFrameObject( frame_669a61b265de2f1b22e9ae7144c18fd2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_11_least_squares );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_gtol );
    Py_DECREF( par_gtol );
    par_gtol = NULL;

    CHECK_OBJECT( (PyObject *)par_x_scale );
    Py_DECREF( par_x_scale );
    par_x_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_loss );
    Py_DECREF( par_loss );
    par_loss = NULL;

    CHECK_OBJECT( (PyObject *)par_f_scale );
    Py_DECREF( par_f_scale );
    par_f_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_diff_step );
    Py_DECREF( par_diff_step );
    par_diff_step = NULL;

    Py_XDECREF( par_tr_solver );
    par_tr_solver = NULL;

    Py_XDECREF( par_tr_options );
    par_tr_options = NULL;

    CHECK_OBJECT( (PyObject *)par_jac_sparsity );
    Py_DECREF( par_jac_sparsity );
    par_jac_sparsity = NULL;

    CHECK_OBJECT( (PyObject *)par_max_nfev );
    Py_DECREF( par_max_nfev );
    par_max_nfev = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_lb );
    Py_DECREF( var_lb );
    var_lb = NULL;

    CHECK_OBJECT( (PyObject *)var_ub );
    Py_DECREF( var_ub );
    var_ub = NULL;

    CHECK_OBJECT( (PyObject *)var_fun_wrapped );
    Py_DECREF( var_fun_wrapped );
    var_fun_wrapped = NULL;

    CHECK_OBJECT( (PyObject *)var_f0 );
    Py_DECREF( var_f0 );
    var_f0 = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_loss_function );
    Py_DECREF( var_loss_function );
    var_loss_function = NULL;

    Py_XDECREF( var_rho );
    var_rho = NULL;

    Py_XDECREF( var_initial_cost );
    var_initial_cost = NULL;

    Py_XDECREF( var_J0 );
    var_J0 = NULL;

    Py_XDECREF( var_jac_wrapped );
    var_jac_wrapped = NULL;

    Py_XDECREF( var_jac_scale );
    var_jac_scale = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    Py_XDECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_gtol );
    Py_DECREF( par_gtol );
    par_gtol = NULL;

    CHECK_OBJECT( (PyObject *)par_x_scale );
    Py_DECREF( par_x_scale );
    par_x_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_loss );
    Py_DECREF( par_loss );
    par_loss = NULL;

    CHECK_OBJECT( (PyObject *)par_f_scale );
    Py_DECREF( par_f_scale );
    par_f_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_diff_step );
    Py_DECREF( par_diff_step );
    par_diff_step = NULL;

    Py_XDECREF( par_tr_solver );
    par_tr_solver = NULL;

    Py_XDECREF( par_tr_options );
    par_tr_options = NULL;

    CHECK_OBJECT( (PyObject *)par_jac_sparsity );
    Py_DECREF( par_jac_sparsity );
    par_jac_sparsity = NULL;

    CHECK_OBJECT( (PyObject *)par_max_nfev );
    Py_DECREF( par_max_nfev );
    par_max_nfev = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_lb );
    var_lb = NULL;

    Py_XDECREF( var_ub );
    var_ub = NULL;

    Py_XDECREF( var_fun_wrapped );
    var_fun_wrapped = NULL;

    Py_XDECREF( var_f0 );
    var_f0 = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_loss_function );
    var_loss_function = NULL;

    Py_XDECREF( var_rho );
    var_rho = NULL;

    Py_XDECREF( var_initial_cost );
    var_initial_cost = NULL;

    Py_XDECREF( var_J0 );
    var_J0 = NULL;

    Py_XDECREF( var_jac_wrapped );
    var_jac_wrapped = NULL;

    Py_XDECREF( var_jac_scale );
    var_jac_scale = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_11_least_squares );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_1_fun_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_57d92758b9e4145020c1ef73a7c186dc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_57d92758b9e4145020c1ef73a7c186dc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_57d92758b9e4145020c1ef73a7c186dc, codeobj_57d92758b9e4145020c1ef73a7c186dc, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_57d92758b9e4145020c1ef73a7c186dc = cache_frame_57d92758b9e4145020c1ef73a7c186dc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_57d92758b9e4145020c1ef73a7c186dc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_57d92758b9e4145020c1ef73a7c186dc ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 802;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_atleast_1d );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 802;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "fun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 802;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 802;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = PyCell_GET( self->m_closure[0] );
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "kwargs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 802;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_1 = PyCell_GET( self->m_closure[2] );
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_args_element_name_1 = impl___internal__$$$function_9_complex_call_helper_pos_star_list_star_dict( dir_call_args );
        }
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 802;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        frame_57d92758b9e4145020c1ef73a7c186dc->m_frame.f_lineno = 802;
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


            exception_lineno = 802;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_57d92758b9e4145020c1ef73a7c186dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_57d92758b9e4145020c1ef73a7c186dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_57d92758b9e4145020c1ef73a7c186dc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_57d92758b9e4145020c1ef73a7c186dc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_57d92758b9e4145020c1ef73a7c186dc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_57d92758b9e4145020c1ef73a7c186dc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_57d92758b9e4145020c1ef73a7c186dc,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_57d92758b9e4145020c1ef73a7c186dc == cache_frame_57d92758b9e4145020c1ef73a7c186dc )
    {
        Py_DECREF( frame_57d92758b9e4145020c1ef73a7c186dc );
    }
    cache_frame_57d92758b9e4145020c1ef73a7c186dc = NULL;

    assertFrameObject( frame_57d92758b9e4145020c1ef73a7c186dc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_1_fun_wrapped );
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_1_fun_wrapped );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_2_jac_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par__ = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_9241510db2e575e350b31dd1a73b156c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9241510db2e575e350b31dd1a73b156c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9241510db2e575e350b31dd1a73b156c, codeobj_9241510db2e575e350b31dd1a73b156c, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9241510db2e575e350b31dd1a73b156c = cache_frame_9241510db2e575e350b31dd1a73b156c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9241510db2e575e350b31dd1a73b156c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9241510db2e575e350b31dd1a73b156c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_csr_matrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_matrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csr_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 841;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 841;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 841;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = PyCell_GET( self->m_closure[0] );
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "kwargs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 841;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_1 = PyCell_GET( self->m_closure[2] );
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_args_element_name_1 = impl___internal__$$$function_9_complex_call_helper_pos_star_list_star_dict( dir_call_args );
        }
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 841;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        frame_9241510db2e575e350b31dd1a73b156c->m_frame.f_lineno = 841;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 841;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9241510db2e575e350b31dd1a73b156c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9241510db2e575e350b31dd1a73b156c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9241510db2e575e350b31dd1a73b156c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9241510db2e575e350b31dd1a73b156c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9241510db2e575e350b31dd1a73b156c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9241510db2e575e350b31dd1a73b156c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9241510db2e575e350b31dd1a73b156c,
        type_description_1,
        par_x,
        par__,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_9241510db2e575e350b31dd1a73b156c == cache_frame_9241510db2e575e350b31dd1a73b156c )
    {
        Py_DECREF( frame_9241510db2e575e350b31dd1a73b156c );
    }
    cache_frame_9241510db2e575e350b31dd1a73b156c = NULL;

    assertFrameObject( frame_9241510db2e575e350b31dd1a73b156c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_2_jac_wrapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par__ );
    Py_DECREF( par__ );
    par__ = NULL;

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

    CHECK_OBJECT( (PyObject *)par__ );
    Py_DECREF( par__ );
    par__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_2_jac_wrapped );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_3_jac_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par__ = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_0445efd918bc4f5834d97a20b0324527;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0445efd918bc4f5834d97a20b0324527 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0445efd918bc4f5834d97a20b0324527, codeobj_0445efd918bc4f5834d97a20b0324527, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0445efd918bc4f5834d97a20b0324527 = cache_frame_0445efd918bc4f5834d97a20b0324527;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0445efd918bc4f5834d97a20b0324527 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0445efd918bc4f5834d97a20b0324527 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 845;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 845;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = PyCell_GET( self->m_closure[0] );
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "kwargs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 845;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_1 = PyCell_GET( self->m_closure[2] );
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_9_complex_call_helper_pos_star_list_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 845;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0445efd918bc4f5834d97a20b0324527 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0445efd918bc4f5834d97a20b0324527 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0445efd918bc4f5834d97a20b0324527 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0445efd918bc4f5834d97a20b0324527, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0445efd918bc4f5834d97a20b0324527->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0445efd918bc4f5834d97a20b0324527, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0445efd918bc4f5834d97a20b0324527,
        type_description_1,
        par_x,
        par__,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_0445efd918bc4f5834d97a20b0324527 == cache_frame_0445efd918bc4f5834d97a20b0324527 )
    {
        Py_DECREF( frame_0445efd918bc4f5834d97a20b0324527 );
    }
    cache_frame_0445efd918bc4f5834d97a20b0324527 = NULL;

    assertFrameObject( frame_0445efd918bc4f5834d97a20b0324527 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_3_jac_wrapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par__ );
    Py_DECREF( par__ );
    par__ = NULL;

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

    CHECK_OBJECT( (PyObject *)par__ );
    Py_DECREF( par__ );
    par__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_3_jac_wrapped );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_4_jac_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par__ = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_6fb0c30d4a15aff49c2d990e38954b89;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6fb0c30d4a15aff49c2d990e38954b89 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6fb0c30d4a15aff49c2d990e38954b89, codeobj_6fb0c30d4a15aff49c2d990e38954b89, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6fb0c30d4a15aff49c2d990e38954b89 = cache_frame_6fb0c30d4a15aff49c2d990e38954b89;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6fb0c30d4a15aff49c2d990e38954b89 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6fb0c30d4a15aff49c2d990e38954b89 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 851;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_atleast_2d );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 851;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 851;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 851;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = PyCell_GET( self->m_closure[0] );
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "kwargs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 851;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_1 = PyCell_GET( self->m_closure[2] );
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_args_element_name_1 = impl___internal__$$$function_9_complex_call_helper_pos_star_list_star_dict( dir_call_args );
        }
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 851;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        frame_6fb0c30d4a15aff49c2d990e38954b89->m_frame.f_lineno = 851;
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


            exception_lineno = 851;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6fb0c30d4a15aff49c2d990e38954b89 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6fb0c30d4a15aff49c2d990e38954b89 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6fb0c30d4a15aff49c2d990e38954b89 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6fb0c30d4a15aff49c2d990e38954b89, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6fb0c30d4a15aff49c2d990e38954b89->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6fb0c30d4a15aff49c2d990e38954b89, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6fb0c30d4a15aff49c2d990e38954b89,
        type_description_1,
        par_x,
        par__,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_6fb0c30d4a15aff49c2d990e38954b89 == cache_frame_6fb0c30d4a15aff49c2d990e38954b89 )
    {
        Py_DECREF( frame_6fb0c30d4a15aff49c2d990e38954b89 );
    }
    cache_frame_6fb0c30d4a15aff49c2d990e38954b89 = NULL;

    assertFrameObject( frame_6fb0c30d4a15aff49c2d990e38954b89 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_4_jac_wrapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par__ );
    Py_DECREF( par__ );
    par__ = NULL;

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

    CHECK_OBJECT( (PyObject *)par__ );
    Py_DECREF( par__ );
    par__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_4_jac_wrapped );
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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_5_jac_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_f = python_pars[ 1 ];
    PyObject *var_J = NULL;
    struct Nuitka_FrameObject *frame_dd5bd972f6865eca2efd6568aeef2c67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_dd5bd972f6865eca2efd6568aeef2c67 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dd5bd972f6865eca2efd6568aeef2c67, codeobj_dd5bd972f6865eca2efd6568aeef2c67, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dd5bd972f6865eca2efd6568aeef2c67 = cache_frame_dd5bd972f6865eca2efd6568aeef2c67;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dd5bd972f6865eca2efd6568aeef2c67 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dd5bd972f6865eca2efd6568aeef2c67 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_approx_derivative );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_approx_derivative );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "approx_derivative" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 872;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "fun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 872;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[3] );
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_rel_step;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "diff_step" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 872;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = PyCell_GET( self->m_closure[2] );
        tmp_kw_name_1 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_method;
        if ( PyCell_GET( self->m_closure[4] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 872;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = PyCell_GET( self->m_closure[4] );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_f0;
        CHECK_OBJECT( par_f );
        tmp_dict_value_3 = par_f;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_bounds;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "bounds" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 873;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_4 = PyCell_GET( self->m_closure[1] );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_args;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 873;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_5 = PyCell_GET( self->m_closure[0] );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_kwargs;
        if ( PyCell_GET( self->m_closure[6] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "kwargs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 874;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_6 = PyCell_GET( self->m_closure[6] );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_sparsity;
        if ( PyCell_GET( self->m_closure[5] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "jac_sparsity" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 874;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_7 = PyCell_GET( self->m_closure[5] );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        frame_dd5bd972f6865eca2efd6568aeef2c67->m_frame.f_lineno = 872;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 872;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }
        assert( var_J == NULL );
        var_J = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_J );
        tmp_source_name_1 = var_J;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 875;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 875;
            type_description_1 = "oooccccccc";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 876;
                type_description_1 = "oooccccccc";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( var_J );
            tmp_args_element_name_1 = var_J;
            frame_dd5bd972f6865eca2efd6568aeef2c67->m_frame.f_lineno = 876;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_atleast_2d, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 876;
                type_description_1 = "oooccccccc";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_J;
                assert( old != NULL );
                var_J = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd5bd972f6865eca2efd6568aeef2c67 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd5bd972f6865eca2efd6568aeef2c67 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dd5bd972f6865eca2efd6568aeef2c67, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dd5bd972f6865eca2efd6568aeef2c67->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dd5bd972f6865eca2efd6568aeef2c67, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dd5bd972f6865eca2efd6568aeef2c67,
        type_description_1,
        par_x,
        par_f,
        var_J,
        self->m_closure[3],
        self->m_closure[2],
        self->m_closure[4],
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[6],
        self->m_closure[5]
    );


    // Release cached frame.
    if ( frame_dd5bd972f6865eca2efd6568aeef2c67 == cache_frame_dd5bd972f6865eca2efd6568aeef2c67 )
    {
        Py_DECREF( frame_dd5bd972f6865eca2efd6568aeef2c67 );
    }
    cache_frame_dd5bd972f6865eca2efd6568aeef2c67 = NULL;

    assertFrameObject( frame_dd5bd972f6865eca2efd6568aeef2c67 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_J );
    tmp_return_value = var_J;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_5_jac_wrapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)var_J );
    Py_DECREF( var_J );
    var_J = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_5_jac_wrapped );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function,
        const_str_plain_construct_loss_function,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6ce40c2810dd94893a1b25dcaf3d4e50,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function$$$function_1_loss_function( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function$$$function_1_loss_function,
        const_str_plain_loss_function,
#if PYTHON_VERSION >= 300
        const_str_digest_a3813c0754508b8fc913831f06b16766,
#endif
        codeobj_da3e36f245e424dd1180e8da0ea37780,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function$$$function_2_loss_function( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function$$$function_2_loss_function,
        const_str_plain_loss_function,
#if PYTHON_VERSION >= 300
        const_str_digest_a3813c0754508b8fc913831f06b16766,
#endif
        codeobj_abe2bbfb69a3cc8546975f35a0de7449,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_11_least_squares,
        const_str_plain_least_squares,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_669a61b265de2f1b22e9ae7144c18fd2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        const_str_digest_1ba0397762df6f39e8bf0a3fb138f87c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_1_fun_wrapped(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_1_fun_wrapped,
        const_str_plain_fun_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_4f6482504b2750b5a8b714e25f7ccbdc,
#endif
        codeobj_57d92758b9e4145020c1ef73a7c186dc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_2_jac_wrapped( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_2_jac_wrapped,
        const_str_plain_jac_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_8a056a5cca3b2add6f03cf365a565c24,
#endif
        codeobj_9241510db2e575e350b31dd1a73b156c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_3_jac_wrapped( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_3_jac_wrapped,
        const_str_plain_jac_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_8a056a5cca3b2add6f03cf365a565c24,
#endif
        codeobj_0445efd918bc4f5834d97a20b0324527,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_4_jac_wrapped( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_4_jac_wrapped,
        const_str_plain_jac_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_8a056a5cca3b2add6f03cf365a565c24,
#endif
        codeobj_6fb0c30d4a15aff49c2d990e38954b89,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_5_jac_wrapped(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_11_least_squares$$$function_5_jac_wrapped,
        const_str_plain_jac_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_8a056a5cca3b2add6f03cf365a565c24,
#endif
        codeobj_dd5bd972f6865eca2efd6568aeef2c67,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        7
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_1_call_minpack(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_1_call_minpack,
        const_str_plain_call_minpack,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1bce61bf942476c113a746c18866e257,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_2_prepare_bounds(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_2_prepare_bounds,
        const_str_plain_prepare_bounds,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c44124407d821733fff6f0118fd547fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_3_check_tolerance(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_3_check_tolerance,
        const_str_plain_check_tolerance,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4d29dc151a3f030d03c51729f7de9925,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_3_check_tolerance$$$function_1_check(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_3_check_tolerance$$$function_1_check,
        const_str_plain_check,
#if PYTHON_VERSION >= 300
        const_str_digest_c52c71dbf0e5cbd14f73b01e40b4f07a,
#endif
        codeobj_6652e219ccfc5d3f3688b73ce0c108d9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_4_check_x_scale(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_4_check_x_scale,
        const_str_plain_check_x_scale,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f0af4f4aebe3010bbff9a024e8bc21a9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_5_check_jac_sparsity(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_5_check_jac_sparsity,
        const_str_plain_check_jac_sparsity,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_67415de0f87415d662a89efc1a6e0cb0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_6_huber(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_6_huber,
        const_str_plain_huber,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d1dc46ce1f36799974c7e7e9c239304d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_7_soft_l1(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_7_soft_l1,
        const_str_plain_soft_l1,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5c9fa8c70cf2e2ae2360ee0100ca13c6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_8_cauchy(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_8_cauchy,
        const_str_plain_cauchy,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6593425e21415fde7d46a253b101635a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_9_arctan(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function_9_arctan,
        const_str_plain_arctan,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e2e304cbebe6b06894f391a2113d7003,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_lsq$least_squares =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._lsq.least_squares",
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

MOD_INIT_DECL( scipy$optimize$_lsq$least_squares )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_lsq$least_squares );
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
    puts("scipy.optimize._lsq.least_squares: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._lsq.least_squares: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._lsq.least_squares: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_lsq$least_squares" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_lsq$least_squares = Py_InitModule4(
        "scipy.optimize._lsq.least_squares",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_lsq$least_squares = PyModule_Create( &mdef_scipy$optimize$_lsq$least_squares );
#endif

    moduledict_scipy$optimize$_lsq$least_squares = MODULE_DICT( module_scipy$optimize$_lsq$least_squares );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_lsq$least_squares,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_lsq$least_squares,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_lsq$least_squares,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_lsq$least_squares,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_lsq$least_squares );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_0ab2aee1e99743ee9b8d63af812fc7da, module_scipy$optimize$_lsq$least_squares );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    struct Nuitka_FrameObject *frame_e36b3df559ec5a9b45cda450f417f019;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_d5813a50aed75fb1183fba9378a26f0e;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_e36b3df559ec5a9b45cda450f417f019 = MAKE_MODULE_FRAME( codeobj_e36b3df559ec5a9b45cda450f417f019, module_scipy$optimize$_lsq$least_squares );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e36b3df559ec5a9b45cda450f417f019 );
    assert( Py_REFCNT( frame_e36b3df559ec5a9b45cda450f417f019 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_e36b3df559ec5a9b45cda450f417f019->m_frame.f_lineno = 2;
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
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_name_name_1 = const_str_plain_warnings;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_warn_tuple;
        tmp_level_name_1 = const_int_0;
        frame_e36b3df559ec5a9b45cda450f417f019->m_frame.f_lineno = 4;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_warn );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_warn, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_e36b3df559ec5a9b45cda450f417f019->m_frame.f_lineno = 6;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_9 );
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
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_norm_tuple;
        tmp_level_name_3 = const_int_0;
        frame_e36b3df559ec5a9b45cda450f417f019->m_frame.f_lineno = 7;
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
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_issparse_str_plain_csr_matrix_tuple;
        tmp_level_name_4 = const_int_0;
        frame_e36b3df559ec5a9b45cda450f417f019->m_frame.f_lineno = 9;
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
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_issparse );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_issparse, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_csr_matrix );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_csr_matrix, tmp_assign_source_13 );
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_8783708b6421c71a0892a844e756fb02;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_LinearOperator_tuple;
        tmp_level_name_5 = const_int_0;
        frame_e36b3df559ec5a9b45cda450f417f019->m_frame.f_lineno = 10;
        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_LinearOperator );
        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_LinearOperator, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_a0dfa9cb56b41095d297f9de64891d65;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain__minpack_str_plain_OptimizeResult_tuple;
        tmp_level_name_6 = const_int_0;
        frame_e36b3df559ec5a9b45cda450f417f019->m_frame.f_lineno = 11;
        tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_9 = tmp_import_from_3__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain__minpack );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain__minpack, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_10 = tmp_import_from_3__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_OptimizeResult );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_OptimizeResult, tmp_assign_source_17 );
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_52d7d48bcb5881cf5fb85bf73f99ad81;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_approx_derivative_str_plain_group_columns_tuple;
        tmp_level_name_7 = const_int_0;
        frame_e36b3df559ec5a9b45cda450f417f019->m_frame.f_lineno = 12;
        tmp_assign_source_18 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_11 = tmp_import_from_4__module;
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_approx_derivative );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_approx_derivative, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_12 = tmp_import_from_4__module;
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_group_columns );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_group_columns, tmp_assign_source_20 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_digest_c88389693d9d476899c1c6e170568469;
        tmp_globals_name_8 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_string_types_tuple;
        tmp_level_name_8 = const_int_0;
        frame_e36b3df559ec5a9b45cda450f417f019->m_frame.f_lineno = 13;
        tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_string_types );
        Py_DECREF( tmp_import_name_from_13 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_string_types, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain_trf;
        tmp_globals_name_9 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_trf_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_e36b3df559ec5a9b45cda450f417f019->m_frame.f_lineno = 15;
        tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_import_name_from_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_14 ) )
        {
           tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                const_str_plain_trf,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_trf );
        }

        Py_DECREF( tmp_import_name_from_14 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_trf, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain_dogbox;
        tmp_globals_name_10 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_dogbox_tuple;
        tmp_level_name_10 = const_int_pos_1;
        frame_e36b3df559ec5a9b45cda450f417f019->m_frame.f_lineno = 16;
        tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_import_name_from_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_15 ) )
        {
           tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                const_str_plain_dogbox,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_dogbox );
        }

        Py_DECREF( tmp_import_name_from_15 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_dogbox, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_plain_common;
        tmp_globals_name_11 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_17c5e0793f08f1dc57e73412bb5eef1a_tuple;
        tmp_level_name_11 = const_int_pos_1;
        frame_e36b3df559ec5a9b45cda450f417f019->m_frame.f_lineno = 17;
        tmp_assign_source_24 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_5__module == NULL );
        tmp_import_from_5__module = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_16 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_16 ) )
        {
           tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                const_str_plain_EPS,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_EPS );
        }

        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_EPS, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_17 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_17 ) )
        {
           tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                const_str_plain_in_bounds,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_in_bounds );
        }

        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_in_bounds, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_18 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_18 ) )
        {
           tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                const_str_plain_make_strictly_feasible,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_make_strictly_feasible );
        }

        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_make_strictly_feasible, tmp_assign_source_27 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = PyDict_Copy( const_dict_66e66c9245ecdba441cd4411258bf6ca );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_TERMINATION_MESSAGES, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = PyDict_Copy( const_dict_361a049f0818f817e86d06b1318256a5 );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_FROM_MINPACK_TO_COMMON, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_1_call_minpack(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_call_minpack, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_2_prepare_bounds(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_prepare_bounds, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_3_check_tolerance(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_check_tolerance, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_4_check_x_scale(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_check_x_scale, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_5_check_jac_sparsity(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_check_jac_sparsity, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_6_huber(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_huber, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_7_soft_l1(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_soft_l1, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_8_cauchy(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_cauchy, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_9_arctan(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_arctan, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_mvar_value_6;
        tmp_dict_key_1 = const_str_plain_linear;
        tmp_dict_value_1 = Py_None;
        tmp_assign_source_39 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_huber;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_huber );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_huber );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_dict_value_2 = tmp_mvar_value_3;
        tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_soft_l1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_soft_l1 );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_soft_l1 );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_dict_value_3 = tmp_mvar_value_4;
        tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_cauchy;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_cauchy );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cauchy );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_dict_value_4 = tmp_mvar_value_5;
        tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_arctan;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_arctan );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arctan );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_dict_value_5 = tmp_mvar_value_6;
        tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_IMPLEMENTED_LOSSES, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_10_construct_loss_function(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_construct_loss_function, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_8;
        tmp_tuple_element_1 = const_str_digest_9bca7c4227b5a1da023f6724018a8c27;
        tmp_defaults_1 = PyTuple_New( 17 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_defaults_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_7;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_defaults_1 );

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_defaults_1 );

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_defaults_1 );
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_8;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inf );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_defaults_1 );
            Py_DECREF( tmp_tuple_element_1 );

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_str_plain_trf;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_float_1eminus_08;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_float_1eminus_08;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_float_1eminus_08;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 5, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_float_1_0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 6, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_str_plain_linear;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 7, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_float_1_0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 8, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 9, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 10, tmp_tuple_element_1 );
        tmp_tuple_element_1 = PyDict_New();
        PyTuple_SET_ITEM( tmp_defaults_1, 11, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 12, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 13, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 14, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_tuple_empty;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 15, tmp_tuple_element_1 );
        tmp_tuple_element_1 = PyDict_New();
        PyTuple_SET_ITEM( tmp_defaults_1, 16, tmp_tuple_element_1 );
        tmp_assign_source_41 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function_11_least_squares( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain_least_squares, tmp_assign_source_41 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e36b3df559ec5a9b45cda450f417f019 );
#endif
    popFrameStack();

    assertFrameObject( frame_e36b3df559ec5a9b45cda450f417f019 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e36b3df559ec5a9b45cda450f417f019 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e36b3df559ec5a9b45cda450f417f019, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e36b3df559ec5a9b45cda450f417f019->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e36b3df559ec5a9b45cda450f417f019, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_lsq$least_squares );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
