/* Generated code for Python module 'scipy.optimize.minpack'
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

/* The "_module_scipy$optimize$minpack" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$minpack;
PyDictObject *moduledict_scipy$optimize$minpack;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_threading;
static PyObject *const_str_digest_f94ec428aa1ca0842cc969612e766a08;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_ndarray;
static PyObject *const_tuple_07c85df77785bce5d5246588bcaed9db_tuple;
static PyObject *const_tuple_fff49b8f4c88d1544535ad5dd2011cce_tuple;
static PyObject *const_str_digest_9a20a1f7895832269a106b4070fded52;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_tuple_empty_float_1eminus_08_int_pos_500_str_plain_del2_tuple;
extern PyObject *const_str_plain_array;
static PyObject *const_str_digest_5b12bf06ed232a9b2effde7e86289099;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain__hybrj;
static PyObject *const_str_plain__del2;
extern PyObject *const_str_plain_isfinite;
static PyObject *const_str_digest_9154ba5761e25cb5f10c014e65ee3d99;
extern PyObject *const_dict_0f2519a6c952cc568952beb42c1e9b1d;
extern PyObject *const_int_neg_10;
extern PyObject *const_str_plain_unknown;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_inf;
static PyObject *const_str_digest_7242ad254b37fc2d62f82625c36d8791;
static PyObject *const_str_digest_926944a43f15f4a4a22a7a7638b54926;
extern PyObject *const_str_plain__wrap_jac;
extern PyObject *const_str_plain_OptimizeResult;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_Dfcn;
extern PyObject *const_str_plain_full_matrices;
extern PyObject *const_float_1_49012eminus_08;
extern PyObject *const_str_plain_sum;
static PyObject *const_str_digest_be59a3de3cec684ad2e0979193974708;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_iteration;
extern PyObject *const_slice_int_pos_1_int_neg_1_none;
static PyObject *const_tuple_str_plain_make_strictly_feasible_tuple;
extern PyObject *const_str_plain_ub_finite;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_njev;
extern PyObject *const_str_plain_err;
extern PyObject *const_str_plain_jac;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_curve_fit;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_fprime;
extern PyObject *const_str_plain_where;
extern PyObject *const_str_plain__root_hybr;
static PyObject *const_str_digest_f27c5401055d94ba434edb76f831113e;
static PyObject *const_tuple_90fc7223d4b447574cf6280bde620d85_tuple;
extern PyObject *const_str_plain__lmdif;
static PyObject *const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_lb_finite;
extern PyObject *const_str_plain_m;
static PyObject *const_str_digest_9a995e697f9a50d0a05b9e07aa66c0c7;
static PyObject *const_str_plain_numinputs;
extern PyObject *const_tuple_str_plain_maxfev_none_tuple;
static PyObject *const_tuple_str_plain_actual_str_plain_desired_tuple;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_inv;
extern PyObject *const_str_plain_category;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_callable;
static PyObject *const_tuple_2f07f1145c3d6b35c62f966f33847e18_tuple;
static PyObject *const_str_digest_45f5d38ef515ddafc684bb0471af9ccd;
extern PyObject *const_float_0_5;
extern PyObject *const_str_plain_func;
extern PyObject *const_tuple_str_plain_inv_tuple;
extern PyObject *const_str_plain_fillvalue;
extern PyObject *const_str_plain_nfev;
extern PyObject *const_tuple_str_plain_fvec_tuple;
extern PyObject *const_str_plain_reshape;
static PyObject *const_tuple_927f934513631d975de832f9f40063bc_tuple;
extern PyObject *const_str_plain_eps;
static PyObject *const_str_digest_f7ec2a90fc58e4d5b738a2a2198e3049;
extern PyObject *const_slice_none_int_pos_2_none;
static PyObject *const_str_digest_e13ee44f4d04d7f949935e02d4eec7a6;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_lower;
static PyObject *const_str_digest_5c244151713a7a8a0b8a4163fd11da2c;
extern PyObject *const_str_digest_9bca7c4227b5a1da023f6724018a8c27;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_a1057a5f21e8d378cb787f3aa7160640;
static PyObject *const_str_digest_7f4d68a58f7e743585f973e7fc7bd1a0;
extern PyObject *const_str_plain_factor;
extern PyObject *const_str_plain_diag;
extern PyObject *const_str_plain_transpose;
extern PyObject *const_str_plain__asarray_validated;
extern PyObject *const_str_plain_xdata;
static PyObject *const_str_digest_66e3dc881468887e26e2ca66d5e4be59;
extern PyObject *const_str_plain_maxfev;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_options;
static PyObject *const_str_plain_use_accel;
static PyObject *const_str_plain_check_gradient;
extern PyObject *const_str_plain_prepare_bounds;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_digest_5e5e64b0fc0ef4b181096cdb32113882;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_str_digest_440c41237cb77782720a7a89193c963c;
static PyObject *const_str_plain__relerr;
extern PyObject *const_str_plain__lmder;
extern PyObject *const_tuple_str_plain_getargspec_no_self_tuple;
extern PyObject *const_str_plain_numpy;
static PyObject *const_tuple_39a64cc0d67d53abaa2bbac1cdcf3ff4_tuple;
extern PyObject *const_str_plain_status;
static PyObject *const_str_plain_ldfjac;
static PyObject *const_str_plain_del2;
static PyObject *const_str_plain_fsolve;
static PyObject *const_str_plain_actual;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_band;
extern PyObject *const_str_digest_8015da37ef70c6fcb334280663239467;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
static PyObject *const_tuple_0a96716b48ccc114dd49382697dff72f_tuple;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_solve_triangular;
static PyObject *const_tuple_63de0f1daebf4e7ce7c7b53d403ce2ed_tuple;
extern PyObject *const_str_plain_p;
extern PyObject *const_float_2_0;
static PyObject *const_list_int_pos_5_int_pos_6_int_pos_7_int_pos_8_list;
static PyObject *const_tuple_0457d1a78b0bc7f8d0f5cf6f772248de_tuple;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_flatten;
extern PyObject *const_str_plain_transform;
extern PyObject *const_str_plain_x0;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_argname;
extern PyObject *const_str_plain_OptimizeWarning;
extern PyObject *const_str_plain_message;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_max_nfev;
extern PyObject *const_float_1eminus_08;
static PyObject *const_tuple_5d55ec3a50148de8797fa1b825b3aa64_tuple;
extern PyObject *const_str_plain_col_deriv;
extern PyObject *const_str_plain_mask;
extern PyObject *const_str_plain_issubdtype;
extern PyObject *const_str_plain_xtol;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_maxiter;
extern PyObject *const_str_plain_fun;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_digest_b486e9f351b52d934dc43f4c6c044aba;
static PyObject *const_str_plain__initialize_feasible;
static PyObject *const_tuple_f367d291772061796db7e30ab571dfaa_tuple;
static PyObject *const_str_digest_e17e5f98a1ef95505bf0197201003699;
extern PyObject *const_str_plain_prod;
static PyObject *const_tuple_str_plain__minpack_tuple;
extern PyObject *const_str_plain_ydata;
extern PyObject *const_str_plain_svd;
static PyObject *const_str_digest_28c7e410f2890b248677f8ae622f3c85;
static PyObject *const_str_plain_fixed_point;
extern PyObject *const_str_plain_triu;
extern PyObject *const_str_plain_ub;
extern PyObject *const_str_plain_r;
static PyObject *const_str_plain_good;
extern PyObject *const_str_plain_Dfun;
extern PyObject *const_str_plain_cholesky;
static PyObject *const_str_digest_69a26b8b4d1137a1a6556e5c55776159;
static PyObject *const_tuple_72494ccd92c2b2bc97d0bd441924f48b_tuple;
extern PyObject *const_str_plain__check_unknown_options;
static PyObject *const_str_digest_b68ad2eafa2f254cc7484ac1cd0c868a;
extern PyObject *const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202;
extern PyObject *const_str_plain_RuntimeWarning;
extern PyObject *const_str_plain_error;
static PyObject *const_str_digest_46f903385a6f8e37b2bcdd7ba29d5271;
extern PyObject *const_str_plain__lsq;
extern PyObject *const_str_plain_abs;
static PyObject *const_str_plain_relerr;
extern PyObject *const_str_plain_jac_wrapped;
static PyObject *const_str_digest_c23ba4e629f67c40fbf45a8719bb2b38;
static PyObject *const_str_digest_b9276fa9ac0e9983f78aa96bdbbd64e0;
extern PyObject *const_str_plain_greater;
extern PyObject *const_int_pos_500;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_bb86de56d95b2280dc96c56958e4f111;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_f;
static PyObject *const_str_digest_d086b5f7b82c13de98a1b42d51311bdb;
extern PyObject *const_str_digest_dbc049f94600503bfbd8944e5239d7ae;
static PyObject *const_tuple_b674829c2227d5f595a3e81d803ca0a1_tuple;
static PyObject *const_tuple_a056e3f2ec32594fa4cace56a16f376b_tuple;
extern PyObject *const_str_plain_LinAlgError;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_plain__chkder;
extern PyObject *const_tuple_type_float_tuple;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_plain_least_squares_tuple;
static PyObject *const_str_plain_LEASTSQ_SUCCESS;
static PyObject *const_list_int_pos_2_int_pos_3_int_pos_4_int_pos_5_list;
extern PyObject *const_str_plain_thefunc;
static PyObject *const_str_digest_d4a13ed45eeb999d44c916d0104048e0;
extern PyObject *const_str_plain_p1;
extern PyObject *const_str_plain_finfo;
extern PyObject *const_str_plain_eye;
extern PyObject *const_str_plain_msg;
static PyObject *const_tuple_19a025e9dcbbf8c50efd0a3047c74641_tuple;
static PyObject *const_dict_07054382d169ac52931a03db2d4b98df;
static PyObject *const_list_643a4d92a4369b05ca000de3f27fd962_list;
static PyObject *const_str_digest_344601044641b9ece32970c4d2464dec;
extern PyObject *const_str_plain_origin;
static PyObject *const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_list;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_f571c6965ea9f6c548a1ff3b0d1e739c;
extern PyObject *const_str_plain_atleast_1d;
static PyObject *const_str_digest_12c77bc5b265c75daaad8fb313f03739;
extern PyObject *const_dict_879d90f7995f6ab655dbe7fad38230a5;
static PyObject *const_str_plain_func_wrapped;
static PyObject *const_tuple_str_plain_prepare_bounds_tuple;
extern PyObject *const_int_pos_4;
static PyObject *const_str_digest_e433262c8f8e75bf10d78ada01745b0e;
extern PyObject *const_str_plain_ones_like;
extern PyObject *const_str_plain__wrap_func;
extern PyObject *const_int_pos_200;
static PyObject *const_str_plain__fixed_point_helper;
extern PyObject *const_str_plain_trf;
extern PyObject *const_str_plain_least_squares;
extern PyObject *const_str_plain_full_output;
static PyObject *const_str_digest_ce7270a1500194bbd536896a811729f1;
extern PyObject *const_str_plain_optimize;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_7f99265a7ccdc6344707e5d6a27d5ba7_tuple;
extern PyObject *const_str_plain_print_function;
static PyObject *const_tuple_str_digest_28c7e410f2890b248677f8ae622f3c85_tuple;
static PyObject *const_tuple_str_plain_p0_str_plain_p1_str_plain_d_tuple;
static PyObject *const_tuple_320aba98e87f6ed87243da7acd25bb90_tuple;
static PyObject *const_str_plain_fjac;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_1d7a6fd859aea104533a04cfbf750641;
extern PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_take;
extern PyObject *const_str_plain_p2;
static PyObject *const_str_digest_aa3bad273e69043e8faa5e7d46af98ae;
extern PyObject *const_str_plain_params;
static PyObject *const_dict_aa931695d9fe56581a2e661140c81de3;
extern PyObject *const_str_plain_p0;
static PyObject *const_str_digest_706028f613531401bfba1900ba48fd04;
extern PyObject *const_str_plain_xp;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_ce1252270e4ba7f9019273b7a453053f_tuple;
static PyObject *const_tuple_str_plain_full_output_false_tuple;
static PyObject *const_str_plain__check_func;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_cost;
extern PyObject *const_tuple_tuple_empty_int_0_tuple;
extern PyObject *const_str_plain_epsfcn;
static PyObject *const_tuple_str_plain__asarray_validated_str_plain__lazywhere_tuple;
static PyObject *const_str_digest_9e84706fe5ce6402a6cde02ff9ba17aa;
static PyObject *const_str_plain_ipvt;
extern PyObject *const_str_plain_make_strictly_feasible;
static PyObject *const_str_digest_2a69d69de0839b69a504b54581534a1f;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain__lazywhere;
static PyObject *const_str_digest_ff466a325e0b2869cc8ac026c67aa260;
static PyObject *const_tuple_00d725aaa1590a5fa9e7e6a97920bd59_tuple;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_lb;
extern PyObject *const_str_plain_inexact;
extern PyObject *const_str_plain_newaxis;
extern PyObject *const_str_plain_checker;
extern PyObject *const_str_plain_fvec;
extern PyObject *const_slice_none_none_none;
static PyObject *const_list_str_digest_d086b5f7b82c13de98a1b42d51311bdb_type_TypeError_list;
extern PyObject *const_str_plain_leastsq;
static PyObject *const_tuple_int_neg_10_int_neg_10_tuple;
extern PyObject *const_str_plain_lm;
extern PyObject *const_str_plain_method;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_asarray_chkfinite;
static PyObject *const_tuple_str_plain_params_str_plain_jac_str_plain_xdata_tuple;
static PyObject *const_str_plain_desired;
extern PyObject *const_str_plain_func_name;
extern PyObject *const_str_plain_output_shape;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain__hybrd;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_bounds;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain__minpack;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_as_inexact;
static PyObject *const_tuple_6e04443eecde4be864aea63ba6a7a445_tuple;
extern PyObject *const_str_plain_getargspec_no_self;
extern PyObject *const_str_plain_info;
static PyObject *const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_dt;
static PyObject *const_str_plain_LEASTSQ_FAILURE;
static PyObject *const_str_plain_fcn;
extern PyObject *const_float_0_0;
static PyObject *const_str_plain_qtf;
extern PyObject *const_str_plain_isscalar;
extern PyObject *const_str_plain_fill;
extern PyObject *const_int_pos_100;
extern PyObject *const_str_plain_square;
static PyObject *const_str_plain_fvecp;
static PyObject *const_str_digest_b58da9da20ae5c38c5bdafedc249867d;
extern PyObject *const_str_plain_success;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_f94ec428aa1ca0842cc969612e766a08 = UNSTREAM_STRING_ASCII( &constant_bin[ 5146567 ], 32, 0 );
    const_tuple_07c85df77785bce5d5246588bcaed9db_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_07c85df77785bce5d5246588bcaed9db_tuple, 0, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyTuple_SET_ITEM( const_tuple_07c85df77785bce5d5246588bcaed9db_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_07c85df77785bce5d5246588bcaed9db_tuple, 2, const_str_plain_xdata ); Py_INCREF( const_str_plain_xdata );
    PyTuple_SET_ITEM( const_tuple_07c85df77785bce5d5246588bcaed9db_tuple, 3, const_str_plain_ydata ); Py_INCREF( const_str_plain_ydata );
    const_tuple_fff49b8f4c88d1544535ad5dd2011cce_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_fff49b8f4c88d1544535ad5dd2011cce_tuple, 0, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_fff49b8f4c88d1544535ad5dd2011cce_tuple, 1, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    PyTuple_SET_ITEM( const_tuple_fff49b8f4c88d1544535ad5dd2011cce_tuple, 2, const_str_plain_p0 ); Py_INCREF( const_str_plain_p0 );
    PyTuple_SET_ITEM( const_tuple_fff49b8f4c88d1544535ad5dd2011cce_tuple, 3, const_str_plain_lb_finite ); Py_INCREF( const_str_plain_lb_finite );
    PyTuple_SET_ITEM( const_tuple_fff49b8f4c88d1544535ad5dd2011cce_tuple, 4, const_str_plain_ub_finite ); Py_INCREF( const_str_plain_ub_finite );
    PyTuple_SET_ITEM( const_tuple_fff49b8f4c88d1544535ad5dd2011cce_tuple, 5, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    const_str_digest_9a20a1f7895832269a106b4070fded52 = UNSTREAM_STRING_ASCII( &constant_bin[ 5146599 ], 31, 0 );
    const_tuple_tuple_empty_float_1eminus_08_int_pos_500_str_plain_del2_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_float_1eminus_08_int_pos_500_str_plain_del2_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_float_1eminus_08_int_pos_500_str_plain_del2_tuple, 1, const_float_1eminus_08 ); Py_INCREF( const_float_1eminus_08 );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_float_1eminus_08_int_pos_500_str_plain_del2_tuple, 2, const_int_pos_500 ); Py_INCREF( const_int_pos_500 );
    const_str_plain_del2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5146630 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_float_1eminus_08_int_pos_500_str_plain_del2_tuple, 3, const_str_plain_del2 ); Py_INCREF( const_str_plain_del2 );
    const_str_digest_5b12bf06ed232a9b2effde7e86289099 = UNSTREAM_STRING_ASCII( &constant_bin[ 5146634 ], 26, 0 );
    const_str_plain__hybrj = UNSTREAM_STRING_ASCII( &constant_bin[ 5146660 ], 6, 1 );
    const_str_plain__del2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5146666 ], 5, 1 );
    const_str_digest_9154ba5761e25cb5f10c014e65ee3d99 = UNSTREAM_STRING_ASCII( &constant_bin[ 5146671 ], 157, 0 );
    const_str_digest_7242ad254b37fc2d62f82625c36d8791 = UNSTREAM_STRING_ASCII( &constant_bin[ 5146828 ], 4512, 0 );
    const_str_digest_926944a43f15f4a4a22a7a7638b54926 = UNSTREAM_STRING_ASCII( &constant_bin[ 5151340 ], 117, 0 );
    const_str_plain_Dfcn = UNSTREAM_STRING_ASCII( &constant_bin[ 5151457 ], 4, 1 );
    const_str_digest_be59a3de3cec684ad2e0979193974708 = UNSTREAM_STRING_ASCII( &constant_bin[ 5151461 ], 39, 0 );
    const_tuple_str_plain_make_strictly_feasible_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_make_strictly_feasible_tuple, 0, const_str_plain_make_strictly_feasible ); Py_INCREF( const_str_plain_make_strictly_feasible );
    const_str_plain_curve_fit = UNSTREAM_STRING_ASCII( &constant_bin[ 4699050 ], 9, 1 );
    const_str_digest_f27c5401055d94ba434edb76f831113e = UNSTREAM_STRING_ASCII( &constant_bin[ 5151500 ], 51, 0 );
    const_tuple_90fc7223d4b447574cf6280bde620d85_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_90fc7223d4b447574cf6280bde620d85_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_90fc7223d4b447574cf6280bde620d85_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_90fc7223d4b447574cf6280bde620d85_tuple, 2, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 1, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 3, const_str_plain_fprime ); Py_INCREF( const_str_plain_fprime );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 4, const_str_plain_full_output ); Py_INCREF( const_str_plain_full_output );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 5, const_str_plain_col_deriv ); Py_INCREF( const_str_plain_col_deriv );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 6, const_str_plain_xtol ); Py_INCREF( const_str_plain_xtol );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 7, const_str_plain_maxfev ); Py_INCREF( const_str_plain_maxfev );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 8, const_str_plain_band ); Py_INCREF( const_str_plain_band );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 9, const_str_plain_epsfcn ); Py_INCREF( const_str_plain_epsfcn );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 10, const_str_plain_factor ); Py_INCREF( const_str_plain_factor );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 11, const_str_plain_diag ); Py_INCREF( const_str_plain_diag );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 12, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 13, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 14, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 15, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 16, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyTuple_SET_ITEM( const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 17, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_digest_9a995e697f9a50d0a05b9e07aa66c0c7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5151551 ], 7113, 0 );
    const_str_plain_numinputs = UNSTREAM_STRING_ASCII( &constant_bin[ 5158664 ], 9, 1 );
    const_tuple_str_plain_actual_str_plain_desired_tuple = PyTuple_New( 2 );
    const_str_plain_actual = UNSTREAM_STRING_ASCII( &constant_bin[ 4314 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_actual_str_plain_desired_tuple, 0, const_str_plain_actual ); Py_INCREF( const_str_plain_actual );
    const_str_plain_desired = UNSTREAM_STRING_ASCII( &constant_bin[ 5457 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_actual_str_plain_desired_tuple, 1, const_str_plain_desired ); Py_INCREF( const_str_plain_desired );
    const_tuple_2f07f1145c3d6b35c62f966f33847e18_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_2f07f1145c3d6b35c62f966f33847e18_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_2f07f1145c3d6b35c62f966f33847e18_tuple, 1, const_str_plain_xdata ); Py_INCREF( const_str_plain_xdata );
    PyTuple_SET_ITEM( const_tuple_2f07f1145c3d6b35c62f966f33847e18_tuple, 2, const_str_plain_ydata ); Py_INCREF( const_str_plain_ydata );
    PyTuple_SET_ITEM( const_tuple_2f07f1145c3d6b35c62f966f33847e18_tuple, 3, const_str_plain_transform ); Py_INCREF( const_str_plain_transform );
    const_str_plain_func_wrapped = UNSTREAM_STRING_ASCII( &constant_bin[ 5158673 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_2f07f1145c3d6b35c62f966f33847e18_tuple, 4, const_str_plain_func_wrapped ); Py_INCREF( const_str_plain_func_wrapped );
    const_str_digest_45f5d38ef515ddafc684bb0471af9ccd = UNSTREAM_STRING_ASCII( &constant_bin[ 5158685 ], 1413, 0 );
    const_tuple_927f934513631d975de832f9f40063bc_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5160098 ], 159 );
    const_str_digest_f7ec2a90fc58e4d5b738a2a2198e3049 = UNSTREAM_STRING_ASCII( &constant_bin[ 5160257 ], 45, 0 );
    const_str_digest_e13ee44f4d04d7f949935e02d4eec7a6 = UNSTREAM_STRING_ASCII( &constant_bin[ 5160302 ], 65, 0 );
    const_str_digest_5c244151713a7a8a0b8a4163fd11da2c = UNSTREAM_STRING_ASCII( &constant_bin[ 5160367 ], 61, 0 );
    const_str_digest_a1057a5f21e8d378cb787f3aa7160640 = UNSTREAM_STRING_ASCII( &constant_bin[ 5160428 ], 106, 0 );
    const_str_digest_7f4d68a58f7e743585f973e7fc7bd1a0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2042325 ], 6, 0 );
    const_str_digest_66e3dc881468887e26e2ca66d5e4be59 = UNSTREAM_STRING_ASCII( &constant_bin[ 5160534 ], 104, 0 );
    const_str_plain_use_accel = UNSTREAM_STRING_ASCII( &constant_bin[ 5160638 ], 9, 1 );
    const_str_plain_check_gradient = UNSTREAM_STRING_ASCII( &constant_bin[ 5160647 ], 14, 1 );
    const_str_digest_5e5e64b0fc0ef4b181096cdb32113882 = UNSTREAM_STRING_ASCII( &constant_bin[ 5160661 ], 25, 0 );
    const_str_digest_440c41237cb77782720a7a89193c963c = UNSTREAM_STRING_ASCII( &constant_bin[ 5160686 ], 30, 0 );
    const_str_plain__relerr = UNSTREAM_STRING_ASCII( &constant_bin[ 5160716 ], 7, 1 );
    const_tuple_39a64cc0d67d53abaa2bbac1cdcf3ff4_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5160723 ], 275 );
    const_str_plain_ldfjac = UNSTREAM_STRING_ASCII( &constant_bin[ 5160998 ], 6, 1 );
    const_str_plain_fsolve = UNSTREAM_STRING_ASCII( &constant_bin[ 4706133 ], 6, 1 );
    const_tuple_0a96716b48ccc114dd49382697dff72f_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_0a96716b48ccc114dd49382697dff72f_tuple, 0, const_str_plain_nfev ); Py_INCREF( const_str_plain_nfev );
    PyTuple_SET_ITEM( const_tuple_0a96716b48ccc114dd49382697dff72f_tuple, 1, const_str_plain_njev ); Py_INCREF( const_str_plain_njev );
    const_str_plain_fjac = UNSTREAM_STRING_ASCII( &constant_bin[ 5149157 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_0a96716b48ccc114dd49382697dff72f_tuple, 2, const_str_plain_fjac ); Py_INCREF( const_str_plain_fjac );
    PyTuple_SET_ITEM( const_tuple_0a96716b48ccc114dd49382697dff72f_tuple, 3, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_str_plain_qtf = UNSTREAM_STRING_ASCII( &constant_bin[ 5150289 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_0a96716b48ccc114dd49382697dff72f_tuple, 4, const_str_plain_qtf ); Py_INCREF( const_str_plain_qtf );
    const_tuple_63de0f1daebf4e7ce7c7b53d403ce2ed_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_63de0f1daebf4e7ce7c7b53d403ce2ed_tuple, 0, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_63de0f1daebf4e7ce7c7b53d403ce2ed_tuple, 1, const_str_plain_xdata ); Py_INCREF( const_str_plain_xdata );
    PyTuple_SET_ITEM( const_tuple_63de0f1daebf4e7ce7c7b53d403ce2ed_tuple, 2, const_str_plain_transform ); Py_INCREF( const_str_plain_transform );
    PyTuple_SET_ITEM( const_tuple_63de0f1daebf4e7ce7c7b53d403ce2ed_tuple, 3, const_str_plain_jac_wrapped ); Py_INCREF( const_str_plain_jac_wrapped );
    const_list_int_pos_5_int_pos_6_int_pos_7_int_pos_8_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_int_pos_5_int_pos_6_int_pos_7_int_pos_8_list, 0, const_int_pos_5 ); Py_INCREF( const_int_pos_5 );
    PyList_SET_ITEM( const_list_int_pos_5_int_pos_6_int_pos_7_int_pos_8_list, 1, const_int_pos_6 ); Py_INCREF( const_int_pos_6 );
    PyList_SET_ITEM( const_list_int_pos_5_int_pos_6_int_pos_7_int_pos_8_list, 2, const_int_pos_7 ); Py_INCREF( const_int_pos_7 );
    PyList_SET_ITEM( const_list_int_pos_5_int_pos_6_int_pos_7_int_pos_8_list, 3, const_int_pos_8 ); Py_INCREF( const_int_pos_8 );
    const_tuple_0457d1a78b0bc7f8d0f5cf6f772248de_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5161004 ], 162 );
    const_tuple_5d55ec3a50148de8797fa1b825b3aa64_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_5d55ec3a50148de8797fa1b825b3aa64_tuple, 0, const_str_plain_svd ); Py_INCREF( const_str_plain_svd );
    PyTuple_SET_ITEM( const_tuple_5d55ec3a50148de8797fa1b825b3aa64_tuple, 1, const_str_plain_cholesky ); Py_INCREF( const_str_plain_cholesky );
    PyTuple_SET_ITEM( const_tuple_5d55ec3a50148de8797fa1b825b3aa64_tuple, 2, const_str_plain_solve_triangular ); Py_INCREF( const_str_plain_solve_triangular );
    PyTuple_SET_ITEM( const_tuple_5d55ec3a50148de8797fa1b825b3aa64_tuple, 3, const_str_plain_LinAlgError ); Py_INCREF( const_str_plain_LinAlgError );
    const_str_digest_b486e9f351b52d934dc43f4c6c044aba = UNSTREAM_STRING_ASCII( &constant_bin[ 5161166 ], 79, 0 );
    const_str_plain__initialize_feasible = UNSTREAM_STRING_ASCII( &constant_bin[ 5161245 ], 20, 1 );
    const_tuple_f367d291772061796db7e30ab571dfaa_tuple = PyTuple_New( 15 );
    const_str_plain_fcn = UNSTREAM_STRING_ASCII( &constant_bin[ 4563662 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_f367d291772061796db7e30ab571dfaa_tuple, 0, const_str_plain_fcn ); Py_INCREF( const_str_plain_fcn );
    PyTuple_SET_ITEM( const_tuple_f367d291772061796db7e30ab571dfaa_tuple, 1, const_str_plain_Dfcn ); Py_INCREF( const_str_plain_Dfcn );
    PyTuple_SET_ITEM( const_tuple_f367d291772061796db7e30ab571dfaa_tuple, 2, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_f367d291772061796db7e30ab571dfaa_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_f367d291772061796db7e30ab571dfaa_tuple, 4, const_str_plain_col_deriv ); Py_INCREF( const_str_plain_col_deriv );
    PyTuple_SET_ITEM( const_tuple_f367d291772061796db7e30ab571dfaa_tuple, 5, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_f367d291772061796db7e30ab571dfaa_tuple, 6, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_f367d291772061796db7e30ab571dfaa_tuple, 7, const_str_plain_fvec ); Py_INCREF( const_str_plain_fvec );
    PyTuple_SET_ITEM( const_tuple_f367d291772061796db7e30ab571dfaa_tuple, 8, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_f367d291772061796db7e30ab571dfaa_tuple, 9, const_str_plain_ldfjac ); Py_INCREF( const_str_plain_ldfjac );
    PyTuple_SET_ITEM( const_tuple_f367d291772061796db7e30ab571dfaa_tuple, 10, const_str_plain_fjac ); Py_INCREF( const_str_plain_fjac );
    PyTuple_SET_ITEM( const_tuple_f367d291772061796db7e30ab571dfaa_tuple, 11, const_str_plain_xp ); Py_INCREF( const_str_plain_xp );
    PyTuple_SET_ITEM( const_tuple_f367d291772061796db7e30ab571dfaa_tuple, 12, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    const_str_plain_fvecp = UNSTREAM_STRING_ASCII( &constant_bin[ 5161265 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_f367d291772061796db7e30ab571dfaa_tuple, 13, const_str_plain_fvecp ); Py_INCREF( const_str_plain_fvecp );
    const_str_plain_good = UNSTREAM_STRING_ASCII( &constant_bin[ 545469 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_f367d291772061796db7e30ab571dfaa_tuple, 14, const_str_plain_good ); Py_INCREF( const_str_plain_good );
    const_str_digest_e17e5f98a1ef95505bf0197201003699 = UNSTREAM_STRING_ASCII( &constant_bin[ 5161270 ], 52, 0 );
    const_tuple_str_plain__minpack_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__minpack_tuple, 0, const_str_plain__minpack ); Py_INCREF( const_str_plain__minpack );
    const_str_digest_28c7e410f2890b248677f8ae622f3c85 = UNSTREAM_STRING_ASCII( &constant_bin[ 5161322 ], 51, 0 );
    const_str_plain_fixed_point = UNSTREAM_STRING_ASCII( &constant_bin[ 4702401 ], 11, 1 );
    const_str_digest_69a26b8b4d1137a1a6556e5c55776159 = UNSTREAM_STRING_ASCII( &constant_bin[ 5161373 ], 1290, 0 );
    const_tuple_72494ccd92c2b2bc97d0bd441924f48b_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_72494ccd92c2b2bc97d0bd441924f48b_tuple, 0, const_str_plain_checker ); Py_INCREF( const_str_plain_checker );
    PyTuple_SET_ITEM( const_tuple_72494ccd92c2b2bc97d0bd441924f48b_tuple, 1, const_str_plain_argname ); Py_INCREF( const_str_plain_argname );
    PyTuple_SET_ITEM( const_tuple_72494ccd92c2b2bc97d0bd441924f48b_tuple, 2, const_str_plain_thefunc ); Py_INCREF( const_str_plain_thefunc );
    PyTuple_SET_ITEM( const_tuple_72494ccd92c2b2bc97d0bd441924f48b_tuple, 3, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_72494ccd92c2b2bc97d0bd441924f48b_tuple, 4, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_72494ccd92c2b2bc97d0bd441924f48b_tuple, 5, const_str_plain_numinputs ); Py_INCREF( const_str_plain_numinputs );
    PyTuple_SET_ITEM( const_tuple_72494ccd92c2b2bc97d0bd441924f48b_tuple, 6, const_str_plain_output_shape ); Py_INCREF( const_str_plain_output_shape );
    PyTuple_SET_ITEM( const_tuple_72494ccd92c2b2bc97d0bd441924f48b_tuple, 7, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_72494ccd92c2b2bc97d0bd441924f48b_tuple, 8, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_72494ccd92c2b2bc97d0bd441924f48b_tuple, 9, const_str_plain_func_name ); Py_INCREF( const_str_plain_func_name );
    PyTuple_SET_ITEM( const_tuple_72494ccd92c2b2bc97d0bd441924f48b_tuple, 10, const_str_plain_dt ); Py_INCREF( const_str_plain_dt );
    const_str_digest_b68ad2eafa2f254cc7484ac1cd0c868a = UNSTREAM_STRING_ASCII( &constant_bin[ 5162663 ], 41, 0 );
    const_str_digest_46f903385a6f8e37b2bcdd7ba29d5271 = UNSTREAM_STRING_ASCII( &constant_bin[ 4895004 ], 11, 0 );
    const_str_plain_relerr = UNSTREAM_STRING_ASCII( &constant_bin[ 5160717 ], 6, 1 );
    const_str_digest_c23ba4e629f67c40fbf45a8719bb2b38 = UNSTREAM_STRING_ASCII( &constant_bin[ 5162704 ], 3281, 0 );
    const_str_digest_b9276fa9ac0e9983f78aa96bdbbd64e0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5146671 ], 84, 0 );
    const_str_digest_bb86de56d95b2280dc96c56958e4f111 = UNSTREAM_STRING_ASCII( &constant_bin[ 5165985 ], 98, 0 );
    const_str_digest_d086b5f7b82c13de98a1b42d51311bdb = UNSTREAM_STRING_ASCII( &constant_bin[ 5166083 ], 26, 0 );
    const_tuple_b674829c2227d5f595a3e81d803ca0a1_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b674829c2227d5f595a3e81d803ca0a1_tuple, 0, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyTuple_SET_ITEM( const_tuple_b674829c2227d5f595a3e81d803ca0a1_tuple, 1, const_str_plain_transform ); Py_INCREF( const_str_plain_transform );
    PyTuple_SET_ITEM( const_tuple_b674829c2227d5f595a3e81d803ca0a1_tuple, 2, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_b674829c2227d5f595a3e81d803ca0a1_tuple, 3, const_str_plain_xdata ); Py_INCREF( const_str_plain_xdata );
    PyTuple_SET_ITEM( const_tuple_b674829c2227d5f595a3e81d803ca0a1_tuple, 4, const_str_plain_ydata ); Py_INCREF( const_str_plain_ydata );
    const_tuple_a056e3f2ec32594fa4cace56a16f376b_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_a056e3f2ec32594fa4cace56a16f376b_tuple, 0, const_str_plain_OptimizeResult ); Py_INCREF( const_str_plain_OptimizeResult );
    PyTuple_SET_ITEM( const_tuple_a056e3f2ec32594fa4cace56a16f376b_tuple, 1, const_str_plain__check_unknown_options ); Py_INCREF( const_str_plain__check_unknown_options );
    PyTuple_SET_ITEM( const_tuple_a056e3f2ec32594fa4cace56a16f376b_tuple, 2, const_str_plain_OptimizeWarning ); Py_INCREF( const_str_plain_OptimizeWarning );
    const_str_plain__chkder = UNSTREAM_STRING_ASCII( &constant_bin[ 5166109 ], 7, 1 );
    const_str_plain_LEASTSQ_SUCCESS = UNSTREAM_STRING_ASCII( &constant_bin[ 5166116 ], 15, 1 );
    const_list_int_pos_2_int_pos_3_int_pos_4_int_pos_5_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_int_pos_2_int_pos_3_int_pos_4_int_pos_5_list, 0, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyList_SET_ITEM( const_list_int_pos_2_int_pos_3_int_pos_4_int_pos_5_list, 1, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    PyList_SET_ITEM( const_list_int_pos_2_int_pos_3_int_pos_4_int_pos_5_list, 2, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    PyList_SET_ITEM( const_list_int_pos_2_int_pos_3_int_pos_4_int_pos_5_list, 3, const_int_pos_5 ); Py_INCREF( const_int_pos_5 );
    const_str_digest_d4a13ed45eeb999d44c916d0104048e0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5166131 ], 87, 0 );
    const_tuple_19a025e9dcbbf8c50efd0a3047c74641_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_19a025e9dcbbf8c50efd0a3047c74641_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_19a025e9dcbbf8c50efd0a3047c74641_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_19a025e9dcbbf8c50efd0a3047c74641_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_19a025e9dcbbf8c50efd0a3047c74641_tuple, 3, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_19a025e9dcbbf8c50efd0a3047c74641_tuple, 4, const_float_1_49012eminus_08 ); Py_INCREF( const_float_1_49012eminus_08 );
    PyTuple_SET_ITEM( const_tuple_19a025e9dcbbf8c50efd0a3047c74641_tuple, 5, const_float_1_49012eminus_08 ); Py_INCREF( const_float_1_49012eminus_08 );
    PyTuple_SET_ITEM( const_tuple_19a025e9dcbbf8c50efd0a3047c74641_tuple, 6, const_float_0_0 ); Py_INCREF( const_float_0_0 );
    PyTuple_SET_ITEM( const_tuple_19a025e9dcbbf8c50efd0a3047c74641_tuple, 7, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_19a025e9dcbbf8c50efd0a3047c74641_tuple, 8, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_19a025e9dcbbf8c50efd0a3047c74641_tuple, 9, const_int_pos_100 ); Py_INCREF( const_int_pos_100 );
    PyTuple_SET_ITEM( const_tuple_19a025e9dcbbf8c50efd0a3047c74641_tuple, 10, Py_None ); Py_INCREF( Py_None );
    const_dict_07054382d169ac52931a03db2d4b98df = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_07054382d169ac52931a03db2d4b98df, const_str_plain_del2, Py_True );
    PyDict_SetItem( const_dict_07054382d169ac52931a03db2d4b98df, const_str_plain_iteration, Py_False );
    assert( PyDict_Size( const_dict_07054382d169ac52931a03db2d4b98df ) == 2 );
    const_list_643a4d92a4369b05ca000de3f27fd962_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_643a4d92a4369b05ca000de3f27fd962_list, 0, const_str_plain_fsolve ); Py_INCREF( const_str_plain_fsolve );
    PyList_SET_ITEM( const_list_643a4d92a4369b05ca000de3f27fd962_list, 1, const_str_plain_leastsq ); Py_INCREF( const_str_plain_leastsq );
    PyList_SET_ITEM( const_list_643a4d92a4369b05ca000de3f27fd962_list, 2, const_str_plain_fixed_point ); Py_INCREF( const_str_plain_fixed_point );
    PyList_SET_ITEM( const_list_643a4d92a4369b05ca000de3f27fd962_list, 3, const_str_plain_curve_fit ); Py_INCREF( const_str_plain_curve_fit );
    const_str_digest_344601044641b9ece32970c4d2464dec = UNSTREAM_STRING_ASCII( &constant_bin[ 5166218 ], 34, 0 );
    const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_list, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_list, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_list, 2, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_list, 3, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    const_str_digest_f571c6965ea9f6c548a1ff3b0d1e739c = UNSTREAM_STRING_ASCII( &constant_bin[ 4933720 ], 18, 0 );
    const_str_digest_12c77bc5b265c75daaad8fb313f03739 = UNSTREAM_STRING_ASCII( &constant_bin[ 5166252 ], 25, 0 );
    const_tuple_str_plain_prepare_bounds_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_prepare_bounds_tuple, 0, const_str_plain_prepare_bounds ); Py_INCREF( const_str_plain_prepare_bounds );
    const_str_digest_e433262c8f8e75bf10d78ada01745b0e = UNSTREAM_STRING_ASCII( &constant_bin[ 5166277 ], 56, 0 );
    const_str_plain__fixed_point_helper = UNSTREAM_STRING_ASCII( &constant_bin[ 5166333 ], 19, 1 );
    const_str_digest_ce7270a1500194bbd536896a811729f1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5166352 ], 18, 0 );
    const_tuple_7f99265a7ccdc6344707e5d6a27d5ba7_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_7f99265a7ccdc6344707e5d6a27d5ba7_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_7f99265a7ccdc6344707e5d6a27d5ba7_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_7f99265a7ccdc6344707e5d6a27d5ba7_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_7f99265a7ccdc6344707e5d6a27d5ba7_tuple, 3, const_float_1_49012eminus_08 ); Py_INCREF( const_float_1_49012eminus_08 );
    PyTuple_SET_ITEM( const_tuple_7f99265a7ccdc6344707e5d6a27d5ba7_tuple, 4, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_7f99265a7ccdc6344707e5d6a27d5ba7_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_7f99265a7ccdc6344707e5d6a27d5ba7_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_7f99265a7ccdc6344707e5d6a27d5ba7_tuple, 7, const_int_pos_100 ); Py_INCREF( const_int_pos_100 );
    PyTuple_SET_ITEM( const_tuple_7f99265a7ccdc6344707e5d6a27d5ba7_tuple, 8, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_digest_28c7e410f2890b248677f8ae622f3c85_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_28c7e410f2890b248677f8ae622f3c85_tuple, 0, const_str_digest_28c7e410f2890b248677f8ae622f3c85 ); Py_INCREF( const_str_digest_28c7e410f2890b248677f8ae622f3c85 );
    const_tuple_str_plain_p0_str_plain_p1_str_plain_d_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_p0_str_plain_p1_str_plain_d_tuple, 0, const_str_plain_p0 ); Py_INCREF( const_str_plain_p0 );
    PyTuple_SET_ITEM( const_tuple_str_plain_p0_str_plain_p1_str_plain_d_tuple, 1, const_str_plain_p1 ); Py_INCREF( const_str_plain_p1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_p0_str_plain_p1_str_plain_d_tuple, 2, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_tuple_320aba98e87f6ed87243da7acd25bb90_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_320aba98e87f6ed87243da7acd25bb90_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_320aba98e87f6ed87243da7acd25bb90_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_320aba98e87f6ed87243da7acd25bb90_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_320aba98e87f6ed87243da7acd25bb90_tuple, 3, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_320aba98e87f6ed87243da7acd25bb90_tuple, 4, const_float_1_49012eminus_08 ); Py_INCREF( const_float_1_49012eminus_08 );
    PyTuple_SET_ITEM( const_tuple_320aba98e87f6ed87243da7acd25bb90_tuple, 5, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_320aba98e87f6ed87243da7acd25bb90_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_320aba98e87f6ed87243da7acd25bb90_tuple, 7, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_320aba98e87f6ed87243da7acd25bb90_tuple, 8, const_int_pos_100 ); Py_INCREF( const_int_pos_100 );
    PyTuple_SET_ITEM( const_tuple_320aba98e87f6ed87243da7acd25bb90_tuple, 9, Py_None ); Py_INCREF( Py_None );
    const_str_digest_1d7a6fd859aea104533a04cfbf750641 = UNSTREAM_STRING_ASCII( &constant_bin[ 5166370 ], 32, 0 );
    const_str_digest_aa3bad273e69043e8faa5e7d46af98ae = UNSTREAM_STRING_ASCII( &constant_bin[ 5166402 ], 30, 0 );
    const_dict_aa931695d9fe56581a2e661140c81de3 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_aa931695d9fe56581a2e661140c81de3, const_str_plain_as_inexact, Py_True );
    assert( PyDict_Size( const_dict_aa931695d9fe56581a2e661140c81de3 ) == 1 );
    const_str_digest_706028f613531401bfba1900ba48fd04 = UNSTREAM_STRING_ASCII( &constant_bin[ 5166432 ], 28, 0 );
    const_tuple_ce1252270e4ba7f9019273b7a453053f_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_ce1252270e4ba7f9019273b7a453053f_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_ce1252270e4ba7f9019273b7a453053f_tuple, 1, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_ce1252270e4ba7f9019273b7a453053f_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_ce1252270e4ba7f9019273b7a453053f_tuple, 3, const_str_plain_xtol ); Py_INCREF( const_str_plain_xtol );
    PyTuple_SET_ITEM( const_tuple_ce1252270e4ba7f9019273b7a453053f_tuple, 4, const_str_plain_maxiter ); Py_INCREF( const_str_plain_maxiter );
    PyTuple_SET_ITEM( const_tuple_ce1252270e4ba7f9019273b7a453053f_tuple, 5, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_ce1252270e4ba7f9019273b7a453053f_tuple, 6, const_str_plain_use_accel ); Py_INCREF( const_str_plain_use_accel );
    const_tuple_str_plain_full_output_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_full_output_false_tuple, 0, const_str_plain_full_output ); Py_INCREF( const_str_plain_full_output );
    PyTuple_SET_ITEM( const_tuple_str_plain_full_output_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_str_plain__check_func = UNSTREAM_STRING_ASCII( &constant_bin[ 5166460 ], 11, 1 );
    const_tuple_str_plain__asarray_validated_str_plain__lazywhere_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain__asarray_validated_str_plain__lazywhere_tuple, 0, const_str_plain__asarray_validated ); Py_INCREF( const_str_plain__asarray_validated );
    PyTuple_SET_ITEM( const_tuple_str_plain__asarray_validated_str_plain__lazywhere_tuple, 1, const_str_plain__lazywhere ); Py_INCREF( const_str_plain__lazywhere );
    const_str_digest_9e84706fe5ce6402a6cde02ff9ba17aa = UNSTREAM_STRING_ASCII( &constant_bin[ 5166471 ], 79, 0 );
    const_str_plain_ipvt = UNSTREAM_STRING_ASCII( &constant_bin[ 4541402 ], 4, 1 );
    const_str_digest_2a69d69de0839b69a504b54581534a1f = UNSTREAM_STRING_ASCII( &constant_bin[ 5166550 ], 23, 0 );
    const_str_digest_ff466a325e0b2869cc8ac026c67aa260 = UNSTREAM_STRING_ASCII( &constant_bin[ 5146607 ], 22, 0 );
    const_tuple_00d725aaa1590a5fa9e7e6a97920bd59_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_00d725aaa1590a5fa9e7e6a97920bd59_tuple, 0, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyTuple_SET_ITEM( const_tuple_00d725aaa1590a5fa9e7e6a97920bd59_tuple, 1, const_str_plain_transform ); Py_INCREF( const_str_plain_transform );
    PyTuple_SET_ITEM( const_tuple_00d725aaa1590a5fa9e7e6a97920bd59_tuple, 2, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_00d725aaa1590a5fa9e7e6a97920bd59_tuple, 3, const_str_plain_xdata ); Py_INCREF( const_str_plain_xdata );
    const_list_str_digest_d086b5f7b82c13de98a1b42d51311bdb_type_TypeError_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_digest_d086b5f7b82c13de98a1b42d51311bdb_type_TypeError_list, 0, const_str_digest_d086b5f7b82c13de98a1b42d51311bdb ); Py_INCREF( const_str_digest_d086b5f7b82c13de98a1b42d51311bdb );
    PyList_SET_ITEM( const_list_str_digest_d086b5f7b82c13de98a1b42d51311bdb_type_TypeError_list, 1, (PyObject *)PyExc_TypeError ); Py_INCREF( (PyObject *)PyExc_TypeError );
    const_tuple_int_neg_10_int_neg_10_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_neg_10_int_neg_10_tuple, 0, const_int_neg_10 ); Py_INCREF( const_int_neg_10 );
    PyTuple_SET_ITEM( const_tuple_int_neg_10_int_neg_10_tuple, 1, const_int_neg_10 ); Py_INCREF( const_int_neg_10 );
    const_tuple_str_plain_params_str_plain_jac_str_plain_xdata_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_params_str_plain_jac_str_plain_xdata_tuple, 0, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyTuple_SET_ITEM( const_tuple_str_plain_params_str_plain_jac_str_plain_xdata_tuple, 1, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_str_plain_params_str_plain_jac_str_plain_xdata_tuple, 2, const_str_plain_xdata ); Py_INCREF( const_str_plain_xdata );
    const_str_plain__hybrd = UNSTREAM_STRING_ASCII( &constant_bin[ 5166573 ], 6, 1 );
    const_tuple_6e04443eecde4be864aea63ba6a7a445_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5166579 ], 167 );
    const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple, 1, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple, 3, const_str_plain_xtol ); Py_INCREF( const_str_plain_xtol );
    PyTuple_SET_ITEM( const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple, 4, const_str_plain_maxiter ); Py_INCREF( const_str_plain_maxiter );
    PyTuple_SET_ITEM( const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple, 5, const_str_plain_use_accel ); Py_INCREF( const_str_plain_use_accel );
    PyTuple_SET_ITEM( const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple, 6, const_str_plain_p0 ); Py_INCREF( const_str_plain_p0 );
    PyTuple_SET_ITEM( const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple, 7, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple, 8, const_str_plain_p1 ); Py_INCREF( const_str_plain_p1 );
    PyTuple_SET_ITEM( const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple, 9, const_str_plain_p2 ); Py_INCREF( const_str_plain_p2 );
    PyTuple_SET_ITEM( const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple, 10, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple, 11, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple, 12, const_str_plain_relerr ); Py_INCREF( const_str_plain_relerr );
    PyTuple_SET_ITEM( const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple, 13, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_plain_LEASTSQ_FAILURE = UNSTREAM_STRING_ASCII( &constant_bin[ 5166746 ], 15, 1 );
    const_str_digest_b58da9da20ae5c38c5bdafedc249867d = UNSTREAM_STRING_ASCII( &constant_bin[ 5166761 ], 81, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$minpack( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1ad2513fbfa3818c4b7e25b4d30ae532;
static PyCodeObject *codeobj_ae43d491cb718ca9f71a633da4e0877f;
static PyCodeObject *codeobj_67df75d6a9c6c9cfa684f2b53c194bf8;
static PyCodeObject *codeobj_39db257e348550f63251a77d2ae422fc;
static PyCodeObject *codeobj_725d367defded0901317e55e26faa160;
static PyCodeObject *codeobj_4cde5ecaaf20e577436564b496544da5;
static PyCodeObject *codeobj_4d16ddb5e9ae7c4d8533986a9625ad6d;
static PyCodeObject *codeobj_7053bb2c0ec01c545d2c7326ac8a6166;
static PyCodeObject *codeobj_9b4a2d3ed8d7805f0abe3ec7c3542601;
static PyCodeObject *codeobj_f6e45c97e87cd13cf6b3f00065202ff2;
static PyCodeObject *codeobj_f5a89da766d71fff1032fce82d751b11;
static PyCodeObject *codeobj_9d11936de421eaf8099eaa4f414cd7b7;
static PyCodeObject *codeobj_66fe672af585ce1778979d44755e2a9d;
static PyCodeObject *codeobj_45a3c77016efc4919192bb0d604537a8;
static PyCodeObject *codeobj_34b4e74a20b22ac0e5dcc07f696a7818;
static PyCodeObject *codeobj_0dd545cfd7ce2f525bb325eadb71bd0b;
static PyCodeObject *codeobj_20755951cb099e1602260251e452faf5;
static PyCodeObject *codeobj_13788e1f59295f8c444002ae335015a0;
static PyCodeObject *codeobj_0f67ec2d5b644f9fae3bd2b64cecb9df;
static PyCodeObject *codeobj_11498d4a9c803fc46731da02985456f7;
static PyCodeObject *codeobj_738e48ead867c6a1c393d969ba8273d6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_5e5e64b0fc0ef4b181096cdb32113882 );
    codeobj_1ad2513fbfa3818c4b7e25b4d30ae532 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 150, const_tuple_90fc7223d4b447574cf6280bde620d85_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ae43d491cb718ca9f71a633da4e0877f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9a20a1f7895832269a106b4070fded52, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_67df75d6a9c6c9cfa684f2b53c194bf8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__check_func, 24, const_tuple_72494ccd92c2b2bc97d0bd441924f48b_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_39db257e348550f63251a77d2ae422fc = MAKE_CODEOBJ( module_filename_obj, const_str_plain__del2, 834, const_tuple_str_plain_p0_str_plain_p1_str_plain_d_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_725d367defded0901317e55e26faa160 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fixed_point_helper, 842, const_tuple_640a99d88cd02bbbc3ddea8c6845a478_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4cde5ecaaf20e577436564b496544da5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__initialize_feasible, 489, const_tuple_fff49b8f4c88d1544535ad5dd2011cce_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4d16ddb5e9ae7c4d8533986a9625ad6d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__relerr, 838, const_tuple_str_plain_actual_str_plain_desired_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7053bb2c0ec01c545d2c7326ac8a6166 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_hybr, 168, const_tuple_6e04443eecde4be864aea63ba6a7a445_tuple, 11, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_9b4a2d3ed8d7805f0abe3ec7c3542601 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__wrap_func, 455, const_tuple_2f07f1145c3d6b35c62f966f33847e18_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f6e45c97e87cd13cf6b3f00065202ff2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__wrap_jac, 476, const_tuple_63de0f1daebf4e7ce7c7b53d403ce2ed_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f5a89da766d71fff1032fce82d751b11 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_gradient, 803, const_tuple_f367d291772061796db7e30ab571dfaa_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9d11936de421eaf8099eaa4f414cd7b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_curve_fit, 506, const_tuple_39a64cc0d67d53abaa2bbac1cdcf3ff4_tuple, 10, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_66fe672af585ce1778979d44755e2a9d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fixed_point, 860, const_tuple_ce1252270e4ba7f9019273b7a453053f_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_45a3c77016efc4919192bb0d604537a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fsolve, 48, const_tuple_7b4b1f074833b6a6a2100668ccb3fd06_tuple, 12, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_34b4e74a20b22ac0e5dcc07f696a7818 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_func_wrapped, 457, const_tuple_07c85df77785bce5d5246588bcaed9db_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_0dd545cfd7ce2f525bb325eadb71bd0b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_func_wrapped, 460, const_tuple_b674829c2227d5f595a3e81d803ca0a1_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_20755951cb099e1602260251e452faf5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_func_wrapped, 471, const_tuple_b674829c2227d5f595a3e81d803ca0a1_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_13788e1f59295f8c444002ae335015a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac_wrapped, 478, const_tuple_str_plain_params_str_plain_jac_str_plain_xdata_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_0f67ec2d5b644f9fae3bd2b64cecb9df = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac_wrapped, 481, const_tuple_00d725aaa1590a5fa9e7e6a97920bd59_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_11498d4a9c803fc46731da02985456f7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac_wrapped, 484, const_tuple_00d725aaa1590a5fa9e7e6a97920bd59_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_738e48ead867c6a1c393d969ba8273d6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_leastsq, 266, const_tuple_0457d1a78b0bc7f8d0f5cf6f772248de_tuple, 13, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *scipy$optimize$minpack$$$function_2_fsolve$$$genexpr_1_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_10__del2(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_11__relerr(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_12__fixed_point_helper(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_13_fixed_point( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_1__check_func( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_2_fsolve( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_3__root_hybr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_4_leastsq( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_5__wrap_func(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_5__wrap_func$$$function_1_func_wrapped(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_5__wrap_func$$$function_2_func_wrapped(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_5__wrap_func$$$function_3_func_wrapped(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_6__wrap_jac(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_6__wrap_jac$$$function_1_jac_wrapped(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_6__wrap_jac$$$function_2_jac_wrapped(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_6__wrap_jac$$$function_3_jac_wrapped(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_7__initialize_feasible(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_8_curve_fit( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_9_check_gradient( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$optimize$minpack$$$function_1__check_func( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_checker = python_pars[ 0 ];
    PyObject *par_argname = python_pars[ 1 ];
    PyObject *par_thefunc = python_pars[ 2 ];
    PyObject *par_x0 = python_pars[ 3 ];
    PyObject *par_args = python_pars[ 4 ];
    PyObject *par_numinputs = python_pars[ 5 ];
    PyObject *par_output_shape = python_pars[ 6 ];
    PyObject *var_res = NULL;
    PyObject *var_msg = NULL;
    PyObject *var_func_name = NULL;
    PyObject *var_dt = NULL;
    struct Nuitka_FrameObject *frame_67df75d6a9c6c9cfa684f2b53c194bf8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_67df75d6a9c6c9cfa684f2b53c194bf8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_67df75d6a9c6c9cfa684f2b53c194bf8, codeobj_67df75d6a9c6c9cfa684f2b53c194bf8, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_67df75d6a9c6c9cfa684f2b53c194bf8 = cache_frame_67df75d6a9c6c9cfa684f2b53c194bf8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_67df75d6a9c6c9cfa684f2b53c194bf8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_67df75d6a9c6c9cfa684f2b53c194bf8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_atleast_1d );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "atleast_1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 26;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_thefunc );
        tmp_dircall_arg1_1 = par_thefunc;
        CHECK_OBJECT( par_x0 );
        tmp_subscribed_name_1 = par_x0;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( par_numinputs );
        tmp_stop_name_1 = par_numinputs;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_left_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_args );
        tmp_right_name_1 = par_args;
        tmp_dircall_arg2_1 = BINARY_OPERATION_ADD_TUPLE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_dircall_arg2_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_args_element_name_1 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_67df75d6a9c6c9cfa684f2b53c194bf8->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_output_shape );
        tmp_compexpr_left_1 = par_output_shape;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_shape );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_shape );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "shape" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 27;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_res );
        tmp_args_element_name_2 = var_res;
        frame_67df75d6a9c6c9cfa684f2b53c194bf8->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_compexpr_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_output_shape );
        tmp_compexpr_right_2 = par_output_shape;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooooooo";
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
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_output_shape );
            tmp_subscribed_name_2 = par_output_shape;
            tmp_subscript_name_2 = const_int_0;
            tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;
                type_description_1 = "ooooooooooo";
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
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_len_arg_1;
                CHECK_OBJECT( par_output_shape );
                tmp_len_arg_1 = par_output_shape;
                tmp_compexpr_left_4 = BUILTIN_LEN( tmp_len_arg_1 );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 29;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_4 = const_int_pos_1;
                tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                assert( !(tmp_res == -1) );
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
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    PyObject *tmp_subscribed_name_3;
                    PyObject *tmp_subscript_name_3;
                    CHECK_OBJECT( par_output_shape );
                    tmp_subscribed_name_3 = par_output_shape;
                    tmp_subscript_name_3 = const_int_pos_1;
                    tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
                    if ( tmp_compexpr_left_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 30;
                        type_description_1 = "ooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_5 = const_int_pos_1;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                    Py_DECREF( tmp_compexpr_left_5 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 30;
                        type_description_1 = "ooooooooooo";
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
                        PyObject *tmp_called_name_3;
                        PyObject *tmp_mvar_value_3;
                        PyObject *tmp_args_element_name_3;
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_shape );

                        if (unlikely( tmp_mvar_value_3 == NULL ))
                        {
                            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_shape );
                        }

                        if ( tmp_mvar_value_3 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "shape" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 31;
                            type_description_1 = "ooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_3 = tmp_mvar_value_3;
                        CHECK_OBJECT( var_res );
                        tmp_args_element_name_3 = var_res;
                        frame_67df75d6a9c6c9cfa684f2b53c194bf8->m_frame.f_lineno = 31;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_3 };
                            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                        }

                        if ( tmp_return_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 31;
                            type_description_1 = "ooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        goto frame_return_exit_1;
                    }
                    branch_no_4:;
                }
                branch_no_3:;
            }
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_2;
                tmp_left_name_2 = const_str_digest_b486e9f351b52d934dc43f4c6c044aba;
                CHECK_OBJECT( par_checker );
                tmp_tuple_element_2 = par_checker;
                tmp_right_name_2 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( par_argname );
                tmp_tuple_element_2 = par_argname;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_2 );
                tmp_assign_source_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 32;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_msg == NULL );
                var_msg = tmp_assign_source_2;
            }
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                CHECK_OBJECT( par_thefunc );
                tmp_getattr_target_1 = par_thefunc;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = Py_None;
                tmp_assign_source_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 34;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_func_name == NULL );
                var_func_name = tmp_assign_source_3;
            }
            {
                nuitka_bool tmp_condition_result_5;
                int tmp_truth_name_1;
                CHECK_OBJECT( var_func_name );
                tmp_truth_name_1 = CHECK_IF_TRUE( var_func_name );
                if ( tmp_truth_name_1 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 35;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_4;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_right_name_3;
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_right_name_4;
                    CHECK_OBJECT( var_msg );
                    tmp_left_name_3 = var_msg;
                    tmp_left_name_4 = const_str_digest_7f4d68a58f7e743585f973e7fc7bd1a0;
                    CHECK_OBJECT( var_func_name );
                    tmp_right_name_4 = var_func_name;
                    tmp_right_name_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                    if ( tmp_right_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 36;
                        type_description_1 = "ooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
                    Py_DECREF( tmp_right_name_3 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 36;
                        type_description_1 = "ooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_4 = tmp_left_name_3;
                    var_msg = tmp_assign_source_4;

                }
                goto branch_end_5;
                branch_no_5:;
                {
                    PyObject *tmp_assign_source_5;
                    PyObject *tmp_left_name_5;
                    PyObject *tmp_right_name_5;
                    CHECK_OBJECT( var_msg );
                    tmp_left_name_5 = var_msg;
                    tmp_right_name_5 = const_str_dot;
                    tmp_result = BINARY_OPERATION_ADD_OBJECT_UNICODE_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 38;
                        type_description_1 = "ooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_5 = tmp_left_name_5;
                    var_msg = tmp_assign_source_5;

                }
                branch_end_5:;
            }
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_4;
                CHECK_OBJECT( var_msg );
                tmp_left_name_6 = var_msg;
                tmp_left_name_7 = const_str_digest_f94ec428aa1ca0842cc969612e766a08;
                CHECK_OBJECT( par_output_shape );
                tmp_tuple_element_3 = par_output_shape;
                tmp_right_name_7 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_right_name_7, 0, tmp_tuple_element_3 );
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_shape );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_shape );
                }

                if ( tmp_mvar_value_4 == NULL )
                {
                    Py_DECREF( tmp_right_name_7 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "shape" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 39;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_4;
                CHECK_OBJECT( var_res );
                tmp_args_element_name_4 = var_res;
                frame_67df75d6a9c6c9cfa684f2b53c194bf8->m_frame.f_lineno = 39;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_7 );

                    exception_lineno = 39;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_7, 1, tmp_tuple_element_3 );
                tmp_right_name_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
                Py_DECREF( tmp_right_name_7 );
                if ( tmp_right_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 39;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 39;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_6 = tmp_left_name_6;
                var_msg = tmp_assign_source_6;

            }
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                CHECK_OBJECT( var_msg );
                tmp_make_exception_arg_1 = var_msg;
                frame_67df75d6a9c6c9cfa684f2b53c194bf8->m_frame.f_lineno = 40;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 40;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_mvar_value_6;
        int tmp_truth_name_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_issubdtype );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issubdtype );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "issubdtype" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 41;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT( var_res );
        tmp_source_name_1 = var_res;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_inexact );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inexact );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "inexact" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 41;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = tmp_mvar_value_6;
        frame_67df75d6a9c6c9cfa684f2b53c194bf8->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 41;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( var_res );
            tmp_source_name_2 = var_res;
            tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_dt == NULL );
            var_dt = tmp_assign_source_7;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_dtype );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtype );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dtype" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 44;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_7;
            frame_67df75d6a9c6c9cfa684f2b53c194bf8->m_frame.f_lineno = 44;
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_type_float_tuple, 0 ) );

            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_dt == NULL );
            var_dt = tmp_assign_source_8;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_shape );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_shape );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "shape" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_8;
        CHECK_OBJECT( var_res );
        tmp_args_element_name_7 = var_res;
        frame_67df75d6a9c6c9cfa684f2b53c194bf8->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_dt );
        tmp_tuple_element_4 = var_dt;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67df75d6a9c6c9cfa684f2b53c194bf8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_67df75d6a9c6c9cfa684f2b53c194bf8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67df75d6a9c6c9cfa684f2b53c194bf8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_67df75d6a9c6c9cfa684f2b53c194bf8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_67df75d6a9c6c9cfa684f2b53c194bf8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_67df75d6a9c6c9cfa684f2b53c194bf8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_67df75d6a9c6c9cfa684f2b53c194bf8,
        type_description_1,
        par_checker,
        par_argname,
        par_thefunc,
        par_x0,
        par_args,
        par_numinputs,
        par_output_shape,
        var_res,
        var_msg,
        var_func_name,
        var_dt
    );


    // Release cached frame.
    if ( frame_67df75d6a9c6c9cfa684f2b53c194bf8 == cache_frame_67df75d6a9c6c9cfa684f2b53c194bf8 )
    {
        Py_DECREF( frame_67df75d6a9c6c9cfa684f2b53c194bf8 );
    }
    cache_frame_67df75d6a9c6c9cfa684f2b53c194bf8 = NULL;

    assertFrameObject( frame_67df75d6a9c6c9cfa684f2b53c194bf8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_1__check_func );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_checker );
    Py_DECREF( par_checker );
    par_checker = NULL;

    CHECK_OBJECT( (PyObject *)par_argname );
    Py_DECREF( par_argname );
    par_argname = NULL;

    CHECK_OBJECT( (PyObject *)par_thefunc );
    Py_DECREF( par_thefunc );
    par_thefunc = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_numinputs );
    Py_DECREF( par_numinputs );
    par_numinputs = NULL;

    CHECK_OBJECT( (PyObject *)par_output_shape );
    Py_DECREF( par_output_shape );
    par_output_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

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

    CHECK_OBJECT( (PyObject *)par_checker );
    Py_DECREF( par_checker );
    par_checker = NULL;

    CHECK_OBJECT( (PyObject *)par_argname );
    Py_DECREF( par_argname );
    par_argname = NULL;

    CHECK_OBJECT( (PyObject *)par_thefunc );
    Py_DECREF( par_thefunc );
    par_thefunc = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_numinputs );
    Py_DECREF( par_numinputs );
    par_numinputs = NULL;

    CHECK_OBJECT( (PyObject *)par_output_shape );
    Py_DECREF( par_output_shape );
    par_output_shape = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    Py_XDECREF( var_func_name );
    var_func_name = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_1__check_func );
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


static PyObject *impl_scipy$optimize$minpack$$$function_2_fsolve( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_fprime = python_pars[ 3 ];
    PyObject *par_full_output = python_pars[ 4 ];
    PyObject *par_col_deriv = python_pars[ 5 ];
    PyObject *par_xtol = python_pars[ 6 ];
    PyObject *par_maxfev = python_pars[ 7 ];
    PyObject *par_band = python_pars[ 8 ];
    PyObject *par_epsfcn = python_pars[ 9 ];
    PyObject *par_factor = python_pars[ 10 ];
    PyObject *par_diag = python_pars[ 11 ];
    PyObject *var_options = NULL;
    struct Nuitka_CellObject *var_res = PyCell_EMPTY();
    PyObject *var_x = NULL;
    PyObject *var_info = NULL;
    PyObject *var_status = NULL;
    PyObject *var_msg = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    int tmp_res;
    struct Nuitka_FrameObject *frame_45a3c77016efc4919192bb0d604537a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_45a3c77016efc4919192bb0d604537a8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
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
        tmp_dict_key_1 = const_str_plain_col_deriv;
        CHECK_OBJECT( par_col_deriv );
        tmp_dict_value_1 = par_col_deriv;
        tmp_assign_source_1 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_xtol;
        CHECK_OBJECT( par_xtol );
        tmp_dict_value_2 = par_xtol;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_maxfev;
        CHECK_OBJECT( par_maxfev );
        tmp_dict_value_3 = par_maxfev;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_band;
        CHECK_OBJECT( par_band );
        tmp_dict_value_4 = par_band;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_eps;
        CHECK_OBJECT( par_epsfcn );
        tmp_dict_value_5 = par_epsfcn;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_factor;
        CHECK_OBJECT( par_factor );
        tmp_dict_value_6 = par_factor;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_diag;
        CHECK_OBJECT( par_diag );
        tmp_dict_value_7 = par_diag;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        assert( var_options == NULL );
        var_options = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_45a3c77016efc4919192bb0d604537a8, codeobj_45a3c77016efc4919192bb0d604537a8, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_45a3c77016efc4919192bb0d604537a8 = cache_frame_45a3c77016efc4919192bb0d604537a8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_45a3c77016efc4919192bb0d604537a8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_45a3c77016efc4919192bb0d604537a8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__root_hybr );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__root_hybr );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_root_hybr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 147;
            type_description_1 = "ooooooooooooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_func );
        tmp_tuple_element_1 = par_func;
        tmp_dircall_arg2_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_x0 );
        tmp_tuple_element_1 = par_x0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_args );
        tmp_tuple_element_1 = par_args;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_1 );
        tmp_dict_key_8 = const_str_plain_jac;
        CHECK_OBJECT( par_fprime );
        tmp_dict_value_8 = par_fprime;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_options );
        tmp_dircall_arg4_1 = var_options;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_2 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooooooooooooocoooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_res ) == NULL );
        PyCell_SET( var_res, tmp_assign_source_2 );

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_full_output );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_full_output );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "ooooooooooooocoooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( PyCell_GET( var_res ) );
            tmp_subscribed_name_1 = PyCell_GET( var_res );
            tmp_subscript_name_1 = const_str_plain_x;
            tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 149;
                type_description_1 = "ooooooooooooocoooo";
                goto frame_exception_exit_1;
            }
            assert( var_x == NULL );
            var_x = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_dict_seq_1;
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_iter_arg_1;
                tmp_iter_arg_1 = const_tuple_0a96716b48ccc114dd49382697dff72f_tuple;
                tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
                assert( !(tmp_assign_source_5 == NULL) );
                assert( tmp_genexpr_1__$0 == NULL );
                tmp_genexpr_1__$0 = tmp_assign_source_5;
            }
            // Tried code:
            tmp_dict_seq_1 = scipy$optimize$minpack$$$function_2_fsolve$$$genexpr_1_genexpr_maker();

            ((struct Nuitka_GeneratorObject *)tmp_dict_seq_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
            ((struct Nuitka_GeneratorObject *)tmp_dict_seq_1)->m_closure[1] = var_res;
            Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_dict_seq_1)->m_closure[1] );


            goto try_return_handler_2;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_2_fsolve );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
            Py_DECREF( tmp_genexpr_1__$0 );
            tmp_genexpr_1__$0 = NULL;

            goto outline_result_1;
            // End of try:
            CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
            Py_DECREF( tmp_genexpr_1__$0 );
            tmp_genexpr_1__$0 = NULL;

            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_2_fsolve );
            return NULL;
            outline_result_1:;
            tmp_assign_source_4 = TO_DICT( tmp_dict_seq_1, NULL );
            Py_DECREF( tmp_dict_seq_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_1 = "ooooooooooooocoooo";
                goto frame_exception_exit_1;
            }
            assert( var_info == NULL );
            var_info = tmp_assign_source_4;
        }
        {
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( PyCell_GET( var_res ) );
            tmp_subscribed_name_2 = PyCell_GET( var_res );
            tmp_subscript_name_2 = const_str_plain_fun;
            tmp_dictset_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_1 = "ooooooooooooocoooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_info );
            tmp_dictset_dict = var_info;
            tmp_dictset_key = const_str_plain_fvec;
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            CHECK_OBJECT( var_x );
            tmp_tuple_element_2 = var_x;
            tmp_return_value = PyTuple_New( 4 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_info );
            tmp_tuple_element_2 = var_info;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( PyCell_GET( var_res ) );
            tmp_subscribed_name_3 = PyCell_GET( var_res );
            tmp_subscript_name_3 = const_str_plain_status;
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 153;
                type_description_1 = "ooooooooooooocoooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( PyCell_GET( var_res ) );
            tmp_subscribed_name_4 = PyCell_GET( var_res );
            tmp_subscript_name_4 = const_str_plain_message;
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 153;
                type_description_1 = "ooooooooooooocoooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_2 );
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( PyCell_GET( var_res ) );
            tmp_subscribed_name_5 = PyCell_GET( var_res );
            tmp_subscript_name_5 = const_str_plain_status;
            tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 155;
                type_description_1 = "ooooooooooooocoooo";
                goto frame_exception_exit_1;
            }
            assert( var_status == NULL );
            var_status = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            CHECK_OBJECT( PyCell_GET( var_res ) );
            tmp_subscribed_name_6 = PyCell_GET( var_res );
            tmp_subscript_name_6 = const_str_plain_message;
            tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 156;
                type_description_1 = "ooooooooooooocoooo";
                goto frame_exception_exit_1;
            }
            assert( var_msg == NULL );
            var_msg = tmp_assign_source_7;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( var_status );
            tmp_compexpr_left_1 = var_status;
            tmp_compexpr_right_1 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "ooooooooooooocoooo";
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                CHECK_OBJECT( var_msg );
                tmp_make_exception_arg_1 = var_msg;
                frame_45a3c77016efc4919192bb0d604537a8->m_frame.f_lineno = 158;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 158;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooocoooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                CHECK_OBJECT( var_status );
                tmp_compexpr_left_2 = var_status;
                tmp_compexpr_right_2 = const_int_pos_1;
                tmp_operand_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
                if ( tmp_operand_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 159;
                    type_description_1 = "ooooooooooooocoooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                Py_DECREF( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 159;
                    type_description_1 = "ooooooooooooocoooo";
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
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_3;
                    PyObject *tmp_compexpr_right_3;
                    CHECK_OBJECT( var_status );
                    tmp_compexpr_left_3 = var_status;
                    tmp_compexpr_right_3 = LIST_COPY( const_list_int_pos_2_int_pos_3_int_pos_4_int_pos_5_list );
                    tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
                    Py_DECREF( tmp_compexpr_right_3 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 161;
                        type_description_1 = "ooooooooooooocoooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_4 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_called_name_1;
                        PyObject *tmp_source_name_1;
                        PyObject *tmp_mvar_value_2;
                        PyObject *tmp_call_result_1;
                        PyObject *tmp_args_element_name_1;
                        PyObject *tmp_args_element_name_2;
                        PyObject *tmp_mvar_value_3;
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_warnings );

                        if (unlikely( tmp_mvar_value_2 == NULL ))
                        {
                            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                        }

                        if ( tmp_mvar_value_2 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 162;
                            type_description_1 = "ooooooooooooocoooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_1 = tmp_mvar_value_2;
                        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
                        if ( tmp_called_name_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 162;
                            type_description_1 = "ooooooooooooocoooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( var_msg );
                        tmp_args_element_name_1 = var_msg;
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

                        if (unlikely( tmp_mvar_value_3 == NULL ))
                        {
                            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
                        }

                        if ( tmp_mvar_value_3 == NULL )
                        {
                            Py_DECREF( tmp_called_name_1 );
                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 162;
                            type_description_1 = "ooooooooooooocoooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_args_element_name_2 = tmp_mvar_value_3;
                        frame_45a3c77016efc4919192bb0d604537a8->m_frame.f_lineno = 162;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
                        }

                        Py_DECREF( tmp_called_name_1 );
                        if ( tmp_call_result_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 162;
                            type_description_1 = "ooooooooooooocoooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF( tmp_call_result_1 );
                    }
                    goto branch_end_4;
                    branch_no_4:;
                    {
                        PyObject *tmp_raise_type_2;
                        PyObject *tmp_make_exception_arg_2;
                        CHECK_OBJECT( var_msg );
                        tmp_make_exception_arg_2 = var_msg;
                        frame_45a3c77016efc4919192bb0d604537a8->m_frame.f_lineno = 164;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_2 };
                            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                        }

                        assert( !(tmp_raise_type_2 == NULL) );
                        exception_type = tmp_raise_type_2;
                        exception_lineno = 164;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooooooooocoooo";
                        goto frame_exception_exit_1;
                    }
                    branch_end_4:;
                }
                branch_no_3:;
            }
            branch_end_2:;
        }
        {
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            CHECK_OBJECT( PyCell_GET( var_res ) );
            tmp_subscribed_name_7 = PyCell_GET( var_res );
            tmp_subscript_name_7 = const_str_plain_x;
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_1 = "ooooooooooooocoooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_45a3c77016efc4919192bb0d604537a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_45a3c77016efc4919192bb0d604537a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_45a3c77016efc4919192bb0d604537a8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_45a3c77016efc4919192bb0d604537a8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_45a3c77016efc4919192bb0d604537a8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_45a3c77016efc4919192bb0d604537a8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_45a3c77016efc4919192bb0d604537a8,
        type_description_1,
        par_func,
        par_x0,
        par_args,
        par_fprime,
        par_full_output,
        par_col_deriv,
        par_xtol,
        par_maxfev,
        par_band,
        par_epsfcn,
        par_factor,
        par_diag,
        var_options,
        var_res,
        var_x,
        var_info,
        var_status,
        var_msg
    );


    // Release cached frame.
    if ( frame_45a3c77016efc4919192bb0d604537a8 == cache_frame_45a3c77016efc4919192bb0d604537a8 )
    {
        Py_DECREF( frame_45a3c77016efc4919192bb0d604537a8 );
    }
    cache_frame_45a3c77016efc4919192bb0d604537a8 = NULL;

    assertFrameObject( frame_45a3c77016efc4919192bb0d604537a8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_2_fsolve );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_fprime );
    Py_DECREF( par_fprime );
    par_fprime = NULL;

    CHECK_OBJECT( (PyObject *)par_full_output );
    Py_DECREF( par_full_output );
    par_full_output = NULL;

    CHECK_OBJECT( (PyObject *)par_col_deriv );
    Py_DECREF( par_col_deriv );
    par_col_deriv = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxfev );
    Py_DECREF( par_maxfev );
    par_maxfev = NULL;

    CHECK_OBJECT( (PyObject *)par_band );
    Py_DECREF( par_band );
    par_band = NULL;

    CHECK_OBJECT( (PyObject *)par_epsfcn );
    Py_DECREF( par_epsfcn );
    par_epsfcn = NULL;

    CHECK_OBJECT( (PyObject *)par_factor );
    Py_DECREF( par_factor );
    par_factor = NULL;

    CHECK_OBJECT( (PyObject *)par_diag );
    Py_DECREF( par_diag );
    par_diag = NULL;

    CHECK_OBJECT( (PyObject *)var_options );
    Py_DECREF( var_options );
    var_options = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_fprime );
    Py_DECREF( par_fprime );
    par_fprime = NULL;

    CHECK_OBJECT( (PyObject *)par_full_output );
    Py_DECREF( par_full_output );
    par_full_output = NULL;

    CHECK_OBJECT( (PyObject *)par_col_deriv );
    Py_DECREF( par_col_deriv );
    par_col_deriv = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxfev );
    Py_DECREF( par_maxfev );
    par_maxfev = NULL;

    CHECK_OBJECT( (PyObject *)par_band );
    Py_DECREF( par_band );
    par_band = NULL;

    CHECK_OBJECT( (PyObject *)par_epsfcn );
    Py_DECREF( par_epsfcn );
    par_epsfcn = NULL;

    CHECK_OBJECT( (PyObject *)par_factor );
    Py_DECREF( par_factor );
    par_factor = NULL;

    CHECK_OBJECT( (PyObject *)par_diag );
    Py_DECREF( par_diag );
    par_diag = NULL;

    CHECK_OBJECT( (PyObject *)var_options );
    Py_DECREF( var_options );
    var_options = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_2_fsolve );
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



struct scipy$optimize$minpack$$$function_2_fsolve$$$genexpr_1_genexpr_locals {
    PyObject *var_k;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *scipy$optimize$minpack$$$function_2_fsolve$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$optimize$minpack$$$function_2_fsolve$$$genexpr_1_genexpr_locals *generator_heap = (struct scipy$optimize$minpack$$$function_2_fsolve$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_k = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_1ad2513fbfa3818c4b7e25b4d30ae532, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[0] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 150;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_k;
            generator_heap->var_k = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_k );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( generator_heap->var_k );
        tmp_compexpr_left_1 = generator_heap->var_k;
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "res" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 151;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_1 = PyCell_GET( generator->m_closure[1] );
        generator_heap->tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 151;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = ( generator_heap->tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_expression_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
            CHECK_OBJECT( generator_heap->var_k );
            tmp_tuple_element_1 = generator_heap->var_k;
            tmp_expression_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
            if ( PyCell_GET( generator->m_closure[1] ) == NULL )
            {
                Py_DECREF( tmp_expression_name_1 );
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "res" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 150;
                generator_heap->type_description_1 = "Noc";
                goto try_except_handler_2;
            }

            tmp_called_instance_1 = PyCell_GET( generator->m_closure[1] );
            CHECK_OBJECT( generator_heap->var_k );
            tmp_args_element_name_1 = generator_heap->var_k;
            generator->m_frame->m_frame.f_lineno = 150;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, call_args );
            }

            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_expression_name_1 );

                generator_heap->exception_lineno = 150;
                generator_heap->type_description_1 = "Noc";
                goto try_except_handler_2;
            }
            PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL );
            generator->m_yield_return_index = 1;
            return tmp_expression_name_1;
            yield_return_1:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 150;
                generator_heap->type_description_1 = "Noc";
                goto try_except_handler_2;
            }
            tmp_yield_result_1 = yield_return_value;
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 150;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_k,
            generator->m_closure[1]
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_k );
    generator_heap->var_k = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_k );
    generator_heap->var_k = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$optimize$minpack$$$function_2_fsolve$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$optimize$minpack$$$function_2_fsolve$$$genexpr_1_genexpr_context,
        module_scipy$optimize$minpack,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_12c77bc5b265c75daaad8fb313f03739,
#endif
        codeobj_1ad2513fbfa3818c4b7e25b4d30ae532,
        2,
        sizeof(struct scipy$optimize$minpack$$$function_2_fsolve$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_scipy$optimize$minpack$$$function_3__root_hybr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_jac = python_pars[ 3 ];
    PyObject *par_col_deriv = python_pars[ 4 ];
    PyObject *par_xtol = python_pars[ 5 ];
    PyObject *par_maxfev = python_pars[ 6 ];
    PyObject *par_band = python_pars[ 7 ];
    PyObject *par_eps = python_pars[ 8 ];
    PyObject *par_factor = python_pars[ 9 ];
    PyObject *par_diag = python_pars[ 10 ];
    PyObject *par_unknown_options = python_pars[ 11 ];
    PyObject *var_epsfcn = NULL;
    PyObject *var_n = NULL;
    PyObject *var_shape = NULL;
    PyObject *var_dtype = NULL;
    PyObject *var_Dfun = NULL;
    PyObject *var_ml = NULL;
    PyObject *var_mu = NULL;
    PyObject *var_retval = NULL;
    PyObject *var_x = NULL;
    PyObject *var_status = NULL;
    PyObject *var_errors = NULL;
    PyObject *var_info = NULL;
    PyObject *var_sol = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    struct Nuitka_FrameObject *frame_7053bb2c0ec01c545d2c7326ac8a6166;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    bool tmp_result;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_7053bb2c0ec01c545d2c7326ac8a6166 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7053bb2c0ec01c545d2c7326ac8a6166, codeobj_7053bb2c0ec01c545d2c7326ac8a6166, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7053bb2c0ec01c545d2c7326ac8a6166 = cache_frame_7053bb2c0ec01c545d2c7326ac8a6166;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7053bb2c0ec01c545d2c7326ac8a6166 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7053bb2c0ec01c545d2c7326ac8a6166 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__check_unknown_options );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_unknown_options );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_check_unknown_options" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_unknown_options );
        tmp_args_element_name_1 = par_unknown_options;
        frame_7053bb2c0ec01c545d2c7326ac8a6166->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( par_eps );
        tmp_assign_source_1 = par_eps;
        assert( var_epsfcn == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_epsfcn = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_2 = par_x0;
        frame_7053bb2c0ec01c545d2c7326ac8a6166->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7053bb2c0ec01c545d2c7326ac8a6166->m_frame.f_lineno = 209;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_flatten );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x0;
            assert( old != NULL );
            par_x0 = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_x0 );
        tmp_len_arg_1 = par_x0;
        tmp_assign_source_3 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_args );
        tmp_isinstance_inst_1 = par_args;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_args );
            tmp_tuple_element_1 = par_args;
            tmp_assign_source_4 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_4, 0, tmp_tuple_element_1 );
            {
                PyObject *old = par_args;
                assert( old != NULL );
                par_args = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_tuple_element_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__check_func );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_func );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_check_func" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_args_element_name_3 = const_str_plain_fsolve;
        tmp_args_element_name_4 = const_str_plain_func;
        CHECK_OBJECT( par_func );
        tmp_args_element_name_5 = par_func;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_6 = par_x0;
        CHECK_OBJECT( par_args );
        tmp_args_element_name_7 = par_args;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_8 = var_n;
        CHECK_OBJECT( var_n );
        tmp_tuple_element_2 = var_n;
        tmp_args_element_name_9 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_9, 0, tmp_tuple_element_2 );
        frame_7053bb2c0ec01c545d2c7326ac8a6166->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
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


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 213;
            goto try_except_handler_3;
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


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 213;
            goto try_except_handler_3;
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

                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 213;
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

            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 213;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert( var_shape == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_shape = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert( var_dtype == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_dtype = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_epsfcn );
        tmp_compexpr_left_1 = var_epsfcn;
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
            PyObject *tmp_assign_source_10;
            PyObject *tmp_source_name_1;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_10;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_finfo );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_finfo );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "finfo" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 215;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            CHECK_OBJECT( var_dtype );
            tmp_args_element_name_10 = var_dtype;
            frame_7053bb2c0ec01c545d2c7326ac8a6166->m_frame.f_lineno = 215;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_source_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_eps );
            Py_DECREF( tmp_source_name_1 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_epsfcn;
                assert( old != NULL );
                var_epsfcn = tmp_assign_source_10;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( par_jac );
        tmp_assign_source_11 = par_jac;
        assert( var_Dfun == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_Dfun = tmp_assign_source_11;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_Dfun );
        tmp_compexpr_left_2 = var_Dfun;
        tmp_compexpr_right_2 = Py_None;
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
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_band );
            tmp_compexpr_left_3 = par_band;
            tmp_compexpr_right_3 = Py_None;
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
                PyObject *tmp_assign_source_12;
                PyObject *tmp_iter_arg_2;
                tmp_iter_arg_2 = const_tuple_int_neg_10_int_neg_10_tuple;
                tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_2 );
                assert( !(tmp_assign_source_12 == NULL) );
                assert( tmp_tuple_unpack_2__source_iter == NULL );
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
            }
            // Tried code:
            // Tried code:
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_unpack_3;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
                if ( tmp_assign_source_13 == NULL )
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


                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 219;
                    goto try_except_handler_5;
                }
                assert( tmp_tuple_unpack_2__element_1 == NULL );
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
            }
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_unpack_4;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
                if ( tmp_assign_source_14 == NULL )
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


                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 219;
                    goto try_except_handler_5;
                }
                assert( tmp_tuple_unpack_2__element_2 == NULL );
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
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
                PyObject *tmp_assign_source_15;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
                tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
                assert( var_ml == NULL );
                Py_INCREF( tmp_assign_source_15 );
                var_ml = tmp_assign_source_15;
            }
            Py_XDECREF( tmp_tuple_unpack_2__element_1 );
            tmp_tuple_unpack_2__element_1 = NULL;

            {
                PyObject *tmp_assign_source_16;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
                tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
                assert( var_mu == NULL );
                Py_INCREF( tmp_assign_source_16 );
                var_mu = tmp_assign_source_16;
            }
            Py_XDECREF( tmp_tuple_unpack_2__element_2 );
            tmp_tuple_unpack_2__element_2 = NULL;

            goto branch_end_4;
            branch_no_4:;
            // Tried code:
            {
                PyObject *tmp_assign_source_17;
                PyObject *tmp_iter_arg_3;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                CHECK_OBJECT( par_band );
                tmp_subscribed_name_1 = par_band;
                tmp_subscript_name_1 = const_slice_none_int_pos_2_none;
                tmp_iter_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                if ( tmp_iter_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 221;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_3 );
                Py_DECREF( tmp_iter_arg_3 );
                if ( tmp_assign_source_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 221;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                assert( tmp_tuple_unpack_3__source_iter == NULL );
                tmp_tuple_unpack_3__source_iter = tmp_assign_source_17;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_18;
                PyObject *tmp_unpack_5;
                CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
                tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
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


                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 221;
                    goto try_except_handler_7;
                }
                assert( tmp_tuple_unpack_3__element_1 == NULL );
                tmp_tuple_unpack_3__element_1 = tmp_assign_source_18;
            }
            {
                PyObject *tmp_assign_source_19;
                PyObject *tmp_unpack_6;
                CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
                tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
                if ( tmp_assign_source_19 == NULL )
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


                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 221;
                    goto try_except_handler_7;
                }
                assert( tmp_tuple_unpack_3__element_2 == NULL );
                tmp_tuple_unpack_3__element_2 = tmp_assign_source_19;
            }
            {
                PyObject *tmp_iterator_name_2;
                CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                tmp_iterator_name_2 = tmp_tuple_unpack_3__source_iter;
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

                            type_description_1 = "ooooooooooooooooooooooooo";
                            exception_lineno = 221;
                            goto try_except_handler_7;
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

                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 221;
                    goto try_except_handler_7;
                }
            }
            goto try_end_5;
            // Exception handler code:
            try_except_handler_7:;
            exception_keeper_type_5 = exception_type;
            exception_keeper_value_5 = exception_value;
            exception_keeper_tb_5 = exception_tb;
            exception_keeper_lineno_5 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
            Py_DECREF( tmp_tuple_unpack_3__source_iter );
            tmp_tuple_unpack_3__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_5;
            exception_value = exception_keeper_value_5;
            exception_tb = exception_keeper_tb_5;
            exception_lineno = exception_keeper_lineno_5;

            goto try_except_handler_6;
            // End of try:
            try_end_5:;
            goto try_end_6;
            // Exception handler code:
            try_except_handler_6:;
            exception_keeper_type_6 = exception_type;
            exception_keeper_value_6 = exception_value;
            exception_keeper_tb_6 = exception_tb;
            exception_keeper_lineno_6 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_tuple_unpack_3__element_1 );
            tmp_tuple_unpack_3__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_3__element_2 );
            tmp_tuple_unpack_3__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_6;
            exception_value = exception_keeper_value_6;
            exception_tb = exception_keeper_tb_6;
            exception_lineno = exception_keeper_lineno_6;

            goto frame_exception_exit_1;
            // End of try:
            try_end_6:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
            Py_DECREF( tmp_tuple_unpack_3__source_iter );
            tmp_tuple_unpack_3__source_iter = NULL;

            {
                PyObject *tmp_assign_source_20;
                CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
                tmp_assign_source_20 = tmp_tuple_unpack_3__element_1;
                assert( var_ml == NULL );
                Py_INCREF( tmp_assign_source_20 );
                var_ml = tmp_assign_source_20;
            }
            Py_XDECREF( tmp_tuple_unpack_3__element_1 );
            tmp_tuple_unpack_3__element_1 = NULL;

            {
                PyObject *tmp_assign_source_21;
                CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
                tmp_assign_source_21 = tmp_tuple_unpack_3__element_2;
                assert( var_mu == NULL );
                Py_INCREF( tmp_assign_source_21 );
                var_mu = tmp_assign_source_21;
            }
            Py_XDECREF( tmp_tuple_unpack_3__element_2 );
            tmp_tuple_unpack_3__element_2 = NULL;

            branch_end_4:;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( par_maxfev );
            tmp_compexpr_left_4 = par_maxfev;
            tmp_compexpr_right_4 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 222;
                type_description_1 = "ooooooooooooooooooooooooo";
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
                PyObject *tmp_assign_source_22;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                tmp_left_name_1 = const_int_pos_200;
                CHECK_OBJECT( var_n );
                tmp_left_name_2 = var_n;
                tmp_right_name_2 = const_int_pos_1;
                tmp_right_name_1 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_2, tmp_right_name_2 );
                assert( !(tmp_right_name_1 == NULL) );
                tmp_assign_source_22 = BINARY_OPERATION_MUL_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                assert( !(tmp_assign_source_22 == NULL) );
                {
                    PyObject *old = par_maxfev;
                    assert( old != NULL );
                    par_maxfev = tmp_assign_source_22;
                    Py_DECREF( old );
                }

            }
            branch_no_5:;
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_11;
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
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__minpack );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minpack );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minpack" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 224;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_5;
            CHECK_OBJECT( par_func );
            tmp_args_element_name_11 = par_func;
            CHECK_OBJECT( par_x0 );
            tmp_args_element_name_12 = par_x0;
            CHECK_OBJECT( par_args );
            tmp_args_element_name_13 = par_args;
            tmp_args_element_name_14 = const_int_pos_1;
            CHECK_OBJECT( par_xtol );
            tmp_args_element_name_15 = par_xtol;
            CHECK_OBJECT( par_maxfev );
            tmp_args_element_name_16 = par_maxfev;
            CHECK_OBJECT( var_ml );
            tmp_args_element_name_17 = var_ml;
            CHECK_OBJECT( var_mu );
            tmp_args_element_name_18 = var_mu;
            CHECK_OBJECT( var_epsfcn );
            tmp_args_element_name_19 = var_epsfcn;
            CHECK_OBJECT( par_factor );
            tmp_args_element_name_20 = par_factor;
            CHECK_OBJECT( par_diag );
            tmp_args_element_name_21 = par_diag;
            frame_7053bb2c0ec01c545d2c7326ac8a6166->m_frame.f_lineno = 224;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
                tmp_assign_source_23 = CALL_METHOD_WITH_ARGS11( tmp_called_instance_2, const_str_plain__hybrd, call_args );
            }

            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 224;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_retval == NULL );
            var_retval = tmp_assign_source_23;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_args_element_name_23;
            PyObject *tmp_args_element_name_24;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_args_element_name_28;
            PyObject *tmp_tuple_element_3;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__check_func );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_func );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_check_func" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 227;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_6;
            tmp_args_element_name_22 = const_str_plain_fsolve;
            tmp_args_element_name_23 = const_str_plain_fprime;
            CHECK_OBJECT( var_Dfun );
            tmp_args_element_name_24 = var_Dfun;
            CHECK_OBJECT( par_x0 );
            tmp_args_element_name_25 = par_x0;
            CHECK_OBJECT( par_args );
            tmp_args_element_name_26 = par_args;
            CHECK_OBJECT( var_n );
            tmp_args_element_name_27 = var_n;
            CHECK_OBJECT( var_n );
            tmp_tuple_element_3 = var_n;
            tmp_args_element_name_28 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_element_name_28, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_n );
            tmp_tuple_element_3 = var_n;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_element_name_28, 1, tmp_tuple_element_3 );
            frame_7053bb2c0ec01c545d2c7326ac8a6166->m_frame.f_lineno = 227;
            {
                PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_28 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 227;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( par_maxfev );
            tmp_compexpr_left_5 = par_maxfev;
            tmp_compexpr_right_5 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 228;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_24;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                tmp_left_name_3 = const_int_pos_100;
                CHECK_OBJECT( var_n );
                tmp_left_name_4 = var_n;
                tmp_right_name_4 = const_int_pos_1;
                tmp_right_name_3 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_4, tmp_right_name_4 );
                assert( !(tmp_right_name_3 == NULL) );
                tmp_assign_source_24 = BINARY_OPERATION_MUL_LONG_LONG( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                assert( !(tmp_assign_source_24 == NULL) );
                {
                    PyObject *old = par_maxfev;
                    assert( old != NULL );
                    par_maxfev = tmp_assign_source_24;
                    Py_DECREF( old );
                }

            }
            branch_no_6:;
        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_29;
            PyObject *tmp_args_element_name_30;
            PyObject *tmp_args_element_name_31;
            PyObject *tmp_args_element_name_32;
            PyObject *tmp_args_element_name_33;
            PyObject *tmp_args_element_name_34;
            PyObject *tmp_args_element_name_35;
            PyObject *tmp_args_element_name_36;
            PyObject *tmp_args_element_name_37;
            PyObject *tmp_args_element_name_38;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__minpack );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minpack );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minpack" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 230;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_7;
            CHECK_OBJECT( par_func );
            tmp_args_element_name_29 = par_func;
            CHECK_OBJECT( var_Dfun );
            tmp_args_element_name_30 = var_Dfun;
            CHECK_OBJECT( par_x0 );
            tmp_args_element_name_31 = par_x0;
            CHECK_OBJECT( par_args );
            tmp_args_element_name_32 = par_args;
            tmp_args_element_name_33 = const_int_pos_1;
            CHECK_OBJECT( par_col_deriv );
            tmp_args_element_name_34 = par_col_deriv;
            CHECK_OBJECT( par_xtol );
            tmp_args_element_name_35 = par_xtol;
            CHECK_OBJECT( par_maxfev );
            tmp_args_element_name_36 = par_maxfev;
            CHECK_OBJECT( par_factor );
            tmp_args_element_name_37 = par_factor;
            CHECK_OBJECT( par_diag );
            tmp_args_element_name_38 = par_diag;
            frame_7053bb2c0ec01c545d2c7326ac8a6166->m_frame.f_lineno = 230;
            {
                PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31, tmp_args_element_name_32, tmp_args_element_name_33, tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36, tmp_args_element_name_37, tmp_args_element_name_38 };
                tmp_assign_source_25 = CALL_METHOD_WITH_ARGS10( tmp_called_instance_3, const_str_plain__hybrj, call_args );
            }

            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_retval == NULL );
            var_retval = tmp_assign_source_25;
        }
        branch_end_3:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_retval );
        tmp_subscribed_name_2 = var_retval;
        tmp_subscript_name_2 = const_int_0;
        tmp_tuple_element_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_iter_arg_4 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_iter_arg_4, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_retval );
        tmp_subscribed_name_3 = var_retval;
        tmp_subscript_name_3 = const_int_neg_1;
        tmp_tuple_element_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, -1 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_4 );

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_4, 1, tmp_tuple_element_4 );
        tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert( tmp_tuple_unpack_4__source_iter == NULL );
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_27 = UNPACK_NEXT( tmp_unpack_7, 0, 2 );
        if ( tmp_assign_source_27 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 233;
            goto try_except_handler_9;
        }
        assert( tmp_tuple_unpack_4__element_1 == NULL );
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT( tmp_unpack_8, 1, 2 );
        if ( tmp_assign_source_28 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 233;
            goto try_except_handler_9;
        }
        assert( tmp_tuple_unpack_4__element_2 == NULL );
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_28;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_29 = tmp_tuple_unpack_4__element_1;
        assert( var_x == NULL );
        Py_INCREF( tmp_assign_source_29 );
        var_x = tmp_assign_source_29;
    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
        tmp_assign_source_30 = tmp_tuple_unpack_4__element_2;
        assert( var_status == NULL );
        Py_INCREF( tmp_assign_source_30 );
        var_status = tmp_assign_source_30;
    }
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_dict_key_1 = const_int_0;
        tmp_dict_value_1 = const_str_digest_be59a3de3cec684ad2e0979193974708;
        tmp_assign_source_31 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_int_pos_1;
        tmp_dict_value_2 = const_str_digest_2a69d69de0839b69a504b54581534a1f;
        tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_int_pos_2;
        tmp_left_name_5 = const_str_digest_e433262c8f8e75bf10d78ada01745b0e;
        if ( par_maxfev == NULL )
        {
            Py_DECREF( tmp_assign_source_31 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "maxfev" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 238;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_5 = par_maxfev;
        tmp_dict_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_31 );

            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_int_pos_3;
        tmp_left_name_6 = const_str_digest_d4a13ed45eeb999d44c916d0104048e0;
        CHECK_OBJECT( par_xtol );
        tmp_right_name_6 = par_xtol;
        tmp_dict_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_31 );

            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_int_pos_4;
        tmp_dict_value_5 = const_str_digest_926944a43f15f4a4a22a7a7638b54926;
        tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_int_pos_5;
        tmp_dict_value_6 = const_str_digest_a1057a5f21e8d378cb787f3aa7160640;
        tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_unknown;
        tmp_dict_value_7 = const_str_digest_ce7270a1500194bbd536896a811729f1;
        tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        assert( var_errors == NULL );
        var_errors = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( var_retval );
        tmp_subscribed_name_4 = var_retval;
        tmp_subscript_name_4 = const_int_pos_1;
        tmp_assign_source_32 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 1 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_info == NULL );
        var_info = tmp_assign_source_32;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( var_info );
        tmp_called_instance_4 = var_info;
        frame_7053bb2c0ec01c545d2c7326ac8a6166->m_frame.f_lineno = 251;
        tmp_ass_subvalue_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_fvec_tuple, 0 ) );

        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_info );
        tmp_ass_subscribed_1 = var_info;
        tmp_ass_subscript_1 = const_str_plain_fun;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_OptimizeResult );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeResult );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_8;
        tmp_dict_key_8 = const_str_plain_x;
        CHECK_OBJECT( var_x );
        tmp_dict_value_8 = var_x;
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_success;
        CHECK_OBJECT( var_status );
        tmp_compexpr_left_6 = var_status;
        tmp_compexpr_right_6 = const_int_pos_1;
        tmp_dict_value_9 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_dict_value_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
        Py_DECREF( tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_status;
        CHECK_OBJECT( var_status );
        tmp_dict_value_10 = var_status;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_10, tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        frame_7053bb2c0ec01c545d2c7326ac8a6166->m_frame.f_lineno = 252;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_6, tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sol == NULL );
        var_sol = tmp_assign_source_33;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_39;
        CHECK_OBJECT( var_sol );
        tmp_called_instance_5 = var_sol;
        CHECK_OBJECT( var_info );
        tmp_args_element_name_39 = var_info;
        frame_7053bb2c0ec01c545d2c7326ac8a6166->m_frame.f_lineno = 253;
        {
            PyObject *call_args[] = { tmp_args_element_name_39 };
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_update, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( var_errors );
        tmp_dict_name_1 = var_errors;
        CHECK_OBJECT( var_status );
        tmp_key_name_1 = var_status;
        tmp_ass_subvalue_2 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT( var_sol );
        tmp_ass_subscribed_2 = var_sol;
        tmp_ass_subscript_2 = const_str_plain_message;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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

    if ( exception_keeper_tb_9 == NULL )
    {
        exception_keeper_tb_9 = MAKE_TRACEBACK( frame_7053bb2c0ec01c545d2c7326ac8a6166, exception_keeper_lineno_9 );
    }
    else if ( exception_keeper_lineno_9 != 0 )
    {
        exception_keeper_tb_9 = ADD_TRACEBACK( exception_keeper_tb_9, frame_7053bb2c0ec01c545d2c7326ac8a6166, exception_keeper_lineno_9 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
    PyException_SetTraceback( exception_keeper_value_9, (PyObject *)exception_keeper_tb_9 );
    PUBLISH_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        tmp_compexpr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_7 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_11;
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
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_dict_name_2;
            PyObject *tmp_key_name_2;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            CHECK_OBJECT( var_errors );
            tmp_dict_name_2 = var_errors;
            tmp_key_name_2 = const_str_plain_unknown;
            tmp_ass_subvalue_3 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
            if ( tmp_ass_subvalue_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            CHECK_OBJECT( var_sol );
            tmp_ass_subscribed_3 = var_sol;
            tmp_ass_subscript_3 = const_str_plain_message;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            Py_DECREF( tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
        }
        goto branch_end_7;
        branch_no_7:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 254;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_7053bb2c0ec01c545d2c7326ac8a6166->m_frame) frame_7053bb2c0ec01c545d2c7326ac8a6166->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto try_except_handler_11;
        branch_end_7:;
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_9;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_3__root_hybr );
    return NULL;
    // End of try:
    try_end_9:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7053bb2c0ec01c545d2c7326ac8a6166 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7053bb2c0ec01c545d2c7326ac8a6166 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7053bb2c0ec01c545d2c7326ac8a6166, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7053bb2c0ec01c545d2c7326ac8a6166->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7053bb2c0ec01c545d2c7326ac8a6166, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7053bb2c0ec01c545d2c7326ac8a6166,
        type_description_1,
        par_func,
        par_x0,
        par_args,
        par_jac,
        par_col_deriv,
        par_xtol,
        par_maxfev,
        par_band,
        par_eps,
        par_factor,
        par_diag,
        par_unknown_options,
        var_epsfcn,
        var_n,
        var_shape,
        var_dtype,
        var_Dfun,
        var_ml,
        var_mu,
        var_retval,
        var_x,
        var_status,
        var_errors,
        var_info,
        var_sol
    );


    // Release cached frame.
    if ( frame_7053bb2c0ec01c545d2c7326ac8a6166 == cache_frame_7053bb2c0ec01c545d2c7326ac8a6166 )
    {
        Py_DECREF( frame_7053bb2c0ec01c545d2c7326ac8a6166 );
    }
    cache_frame_7053bb2c0ec01c545d2c7326ac8a6166 = NULL;

    assertFrameObject( frame_7053bb2c0ec01c545d2c7326ac8a6166 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_sol );
    tmp_return_value = var_sol;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_3__root_hybr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_col_deriv );
    Py_DECREF( par_col_deriv );
    par_col_deriv = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    Py_XDECREF( par_maxfev );
    par_maxfev = NULL;

    CHECK_OBJECT( (PyObject *)par_band );
    Py_DECREF( par_band );
    par_band = NULL;

    CHECK_OBJECT( (PyObject *)par_eps );
    Py_DECREF( par_eps );
    par_eps = NULL;

    CHECK_OBJECT( (PyObject *)par_factor );
    Py_DECREF( par_factor );
    par_factor = NULL;

    CHECK_OBJECT( (PyObject *)par_diag );
    Py_DECREF( par_diag );
    par_diag = NULL;

    CHECK_OBJECT( (PyObject *)par_unknown_options );
    Py_DECREF( par_unknown_options );
    par_unknown_options = NULL;

    CHECK_OBJECT( (PyObject *)var_epsfcn );
    Py_DECREF( var_epsfcn );
    var_epsfcn = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_shape );
    Py_DECREF( var_shape );
    var_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_dtype );
    Py_DECREF( var_dtype );
    var_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_Dfun );
    Py_DECREF( var_Dfun );
    var_Dfun = NULL;

    Py_XDECREF( var_ml );
    var_ml = NULL;

    Py_XDECREF( var_mu );
    var_mu = NULL;

    CHECK_OBJECT( (PyObject *)var_retval );
    Py_DECREF( var_retval );
    var_retval = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_status );
    Py_DECREF( var_status );
    var_status = NULL;

    CHECK_OBJECT( (PyObject *)var_errors );
    Py_DECREF( var_errors );
    var_errors = NULL;

    CHECK_OBJECT( (PyObject *)var_info );
    Py_DECREF( var_info );
    var_info = NULL;

    CHECK_OBJECT( (PyObject *)var_sol );
    Py_DECREF( var_sol );
    var_sol = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_col_deriv );
    Py_DECREF( par_col_deriv );
    par_col_deriv = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    Py_XDECREF( par_maxfev );
    par_maxfev = NULL;

    CHECK_OBJECT( (PyObject *)par_band );
    Py_DECREF( par_band );
    par_band = NULL;

    CHECK_OBJECT( (PyObject *)par_eps );
    Py_DECREF( par_eps );
    par_eps = NULL;

    CHECK_OBJECT( (PyObject *)par_factor );
    Py_DECREF( par_factor );
    par_factor = NULL;

    CHECK_OBJECT( (PyObject *)par_diag );
    Py_DECREF( par_diag );
    par_diag = NULL;

    CHECK_OBJECT( (PyObject *)par_unknown_options );
    Py_DECREF( par_unknown_options );
    par_unknown_options = NULL;

    Py_XDECREF( var_epsfcn );
    var_epsfcn = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_Dfun );
    var_Dfun = NULL;

    Py_XDECREF( var_ml );
    var_ml = NULL;

    Py_XDECREF( var_mu );
    var_mu = NULL;

    Py_XDECREF( var_retval );
    var_retval = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_errors );
    var_errors = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_sol );
    var_sol = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_3__root_hybr );
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


static PyObject *impl_scipy$optimize$minpack$$$function_4_leastsq( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_Dfun = python_pars[ 3 ];
    PyObject *par_full_output = python_pars[ 4 ];
    PyObject *par_col_deriv = python_pars[ 5 ];
    PyObject *par_ftol = python_pars[ 6 ];
    PyObject *par_xtol = python_pars[ 7 ];
    PyObject *par_gtol = python_pars[ 8 ];
    PyObject *par_maxfev = python_pars[ 9 ];
    PyObject *par_epsfcn = python_pars[ 10 ];
    PyObject *par_factor = python_pars[ 11 ];
    PyObject *par_diag = python_pars[ 12 ];
    PyObject *var_n = NULL;
    PyObject *var_shape = NULL;
    PyObject *var_dtype = NULL;
    PyObject *var_m = NULL;
    PyObject *var_retval = NULL;
    PyObject *var_errors = NULL;
    PyObject *var_info = NULL;
    PyObject *var_cov_x = NULL;
    PyObject *var_inv = NULL;
    PyObject *var_perm = NULL;
    PyObject *var_r = NULL;
    PyObject *var_R = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_738e48ead867c6a1c393d969ba8273d6;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_738e48ead867c6a1c393d969ba8273d6 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_738e48ead867c6a1c393d969ba8273d6, codeobj_738e48ead867c6a1c393d969ba8273d6, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_738e48ead867c6a1c393d969ba8273d6 = cache_frame_738e48ead867c6a1c393d969ba8273d6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_738e48ead867c6a1c393d969ba8273d6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_738e48ead867c6a1c393d969ba8273d6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 379;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_1 = par_x0;
        frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 379;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 379;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_flatten );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "ooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_x0 );
        tmp_len_arg_1 = par_x0;
        tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_args );
        tmp_isinstance_inst_1 = par_args;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 381;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 381;
            type_description_1 = "ooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_args );
            tmp_tuple_element_1 = par_args;
            tmp_assign_source_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_3, 0, tmp_tuple_element_1 );
            {
                PyObject *old = par_args;
                assert( old != NULL );
                par_args = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__check_func );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_func );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_check_func" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        tmp_args_element_name_2 = const_str_plain_leastsq;
        tmp_args_element_name_3 = const_str_plain_func;
        CHECK_OBJECT( par_func );
        tmp_args_element_name_4 = par_func;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_5 = par_x0;
        CHECK_OBJECT( par_args );
        tmp_args_element_name_6 = par_args;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_7 = var_n;
        frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 383;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_5 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 383;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 383;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 383;
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

            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 383;
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert( var_shape == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_shape = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert( var_dtype == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_dtype = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_shape );
        tmp_subscribed_name_1 = var_shape;
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_m == NULL );
        var_m = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_n );
        tmp_compexpr_left_1 = var_n;
        CHECK_OBJECT( var_m );
        tmp_compexpr_right_1 = var_m;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "ooooooooooooooooooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_2;
            tmp_left_name_1 = const_str_digest_b68ad2eafa2f254cc7484ac1cd0c868a;
            CHECK_OBJECT( var_n );
            tmp_tuple_element_2 = var_n;
            tmp_right_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_m );
            tmp_tuple_element_2 = var_m;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 387;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 387;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 387;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_epsfcn );
        tmp_compexpr_left_2 = par_epsfcn;
        tmp_compexpr_right_2 = Py_None;
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
            PyObject *tmp_assign_source_10;
            PyObject *tmp_source_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_finfo );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_finfo );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "finfo" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 390;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_dtype );
            tmp_args_element_name_8 = var_dtype;
            frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 390;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_source_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 390;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_eps );
            Py_DECREF( tmp_source_name_1 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 390;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_epsfcn;
                assert( old != NULL );
                par_epsfcn = tmp_assign_source_10;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_Dfun );
        tmp_compexpr_left_3 = par_Dfun;
        tmp_compexpr_right_3 = Py_None;
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
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( par_maxfev );
            tmp_compexpr_left_4 = par_maxfev;
            tmp_compexpr_right_4 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 393;
                type_description_1 = "ooooooooooooooooooooooooo";
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
                PyObject *tmp_assign_source_11;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                tmp_left_name_2 = const_int_pos_200;
                CHECK_OBJECT( var_n );
                tmp_left_name_3 = var_n;
                tmp_right_name_3 = const_int_pos_1;
                tmp_right_name_2 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_3, tmp_right_name_3 );
                assert( !(tmp_right_name_2 == NULL) );
                tmp_assign_source_11 = BINARY_OPERATION_MUL_LONG_LONG( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                assert( !(tmp_assign_source_11 == NULL) );
                {
                    PyObject *old = par_maxfev;
                    assert( old != NULL );
                    par_maxfev = tmp_assign_source_11;
                    Py_DECREF( old );
                }

            }
            branch_no_5:;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_args_element_name_19;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__minpack );

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

                exception_lineno = 395;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_4;
            CHECK_OBJECT( par_func );
            tmp_args_element_name_9 = par_func;
            CHECK_OBJECT( par_x0 );
            tmp_args_element_name_10 = par_x0;
            CHECK_OBJECT( par_args );
            tmp_args_element_name_11 = par_args;
            CHECK_OBJECT( par_full_output );
            tmp_args_element_name_12 = par_full_output;
            CHECK_OBJECT( par_ftol );
            tmp_args_element_name_13 = par_ftol;
            CHECK_OBJECT( par_xtol );
            tmp_args_element_name_14 = par_xtol;
            CHECK_OBJECT( par_gtol );
            tmp_args_element_name_15 = par_gtol;
            CHECK_OBJECT( par_maxfev );
            tmp_args_element_name_16 = par_maxfev;
            CHECK_OBJECT( par_epsfcn );
            tmp_args_element_name_17 = par_epsfcn;
            CHECK_OBJECT( par_factor );
            tmp_args_element_name_18 = par_factor;
            CHECK_OBJECT( par_diag );
            tmp_args_element_name_19 = par_diag;
            frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 395;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19 };
                tmp_assign_source_12 = CALL_METHOD_WITH_ARGS11( tmp_called_instance_2, const_str_plain__lmdif, call_args );
            }

            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 395;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_retval == NULL );
            var_retval = tmp_assign_source_12;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            nuitka_bool tmp_condition_result_6;
            int tmp_truth_name_1;
            CHECK_OBJECT( par_col_deriv );
            tmp_truth_name_1 = CHECK_IF_TRUE( par_col_deriv );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 398;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_6 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_20;
                PyObject *tmp_args_element_name_21;
                PyObject *tmp_args_element_name_22;
                PyObject *tmp_args_element_name_23;
                PyObject *tmp_args_element_name_24;
                PyObject *tmp_args_element_name_25;
                PyObject *tmp_args_element_name_26;
                PyObject *tmp_tuple_element_3;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__check_func );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_func );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_check_func" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 399;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_5;
                tmp_args_element_name_20 = const_str_plain_leastsq;
                tmp_args_element_name_21 = const_str_plain_Dfun;
                CHECK_OBJECT( par_Dfun );
                tmp_args_element_name_22 = par_Dfun;
                CHECK_OBJECT( par_x0 );
                tmp_args_element_name_23 = par_x0;
                CHECK_OBJECT( par_args );
                tmp_args_element_name_24 = par_args;
                CHECK_OBJECT( var_n );
                tmp_args_element_name_25 = var_n;
                CHECK_OBJECT( var_n );
                tmp_tuple_element_3 = var_n;
                tmp_args_element_name_26 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_element_name_26, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( var_m );
                tmp_tuple_element_3 = var_m;
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_element_name_26, 1, tmp_tuple_element_3 );
                frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 399;
                {
                    PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26 };
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_args_element_name_26 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 399;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            goto branch_end_6;
            branch_no_6:;
            {
                PyObject *tmp_called_name_5;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_27;
                PyObject *tmp_args_element_name_28;
                PyObject *tmp_args_element_name_29;
                PyObject *tmp_args_element_name_30;
                PyObject *tmp_args_element_name_31;
                PyObject *tmp_args_element_name_32;
                PyObject *tmp_args_element_name_33;
                PyObject *tmp_tuple_element_4;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__check_func );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_func );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_check_func" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 401;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_5 = tmp_mvar_value_6;
                tmp_args_element_name_27 = const_str_plain_leastsq;
                tmp_args_element_name_28 = const_str_plain_Dfun;
                CHECK_OBJECT( par_Dfun );
                tmp_args_element_name_29 = par_Dfun;
                CHECK_OBJECT( par_x0 );
                tmp_args_element_name_30 = par_x0;
                CHECK_OBJECT( par_args );
                tmp_args_element_name_31 = par_args;
                CHECK_OBJECT( var_n );
                tmp_args_element_name_32 = var_n;
                CHECK_OBJECT( var_m );
                tmp_tuple_element_4 = var_m;
                tmp_args_element_name_33 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_args_element_name_33, 0, tmp_tuple_element_4 );
                CHECK_OBJECT( var_n );
                tmp_tuple_element_4 = var_n;
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_args_element_name_33, 1, tmp_tuple_element_4 );
                frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 401;
                {
                    PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31, tmp_args_element_name_32, tmp_args_element_name_33 };
                    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_5, call_args );
                }

                Py_DECREF( tmp_args_element_name_33 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 401;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_end_6:;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( par_maxfev );
            tmp_compexpr_left_5 = par_maxfev;
            tmp_compexpr_right_5 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 402;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
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
                PyObject *tmp_assign_source_13;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                tmp_left_name_4 = const_int_pos_100;
                CHECK_OBJECT( var_n );
                tmp_left_name_5 = var_n;
                tmp_right_name_5 = const_int_pos_1;
                tmp_right_name_4 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_5, tmp_right_name_5 );
                assert( !(tmp_right_name_4 == NULL) );
                tmp_assign_source_13 = BINARY_OPERATION_MUL_LONG_LONG( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                assert( !(tmp_assign_source_13 == NULL) );
                {
                    PyObject *old = par_maxfev;
                    assert( old != NULL );
                    par_maxfev = tmp_assign_source_13;
                    Py_DECREF( old );
                }

            }
            branch_no_7:;
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_34;
            PyObject *tmp_args_element_name_35;
            PyObject *tmp_args_element_name_36;
            PyObject *tmp_args_element_name_37;
            PyObject *tmp_args_element_name_38;
            PyObject *tmp_args_element_name_39;
            PyObject *tmp_args_element_name_40;
            PyObject *tmp_args_element_name_41;
            PyObject *tmp_args_element_name_42;
            PyObject *tmp_args_element_name_43;
            PyObject *tmp_args_element_name_44;
            PyObject *tmp_args_element_name_45;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__minpack );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minpack );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minpack" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 404;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_7;
            CHECK_OBJECT( par_func );
            tmp_args_element_name_34 = par_func;
            CHECK_OBJECT( par_Dfun );
            tmp_args_element_name_35 = par_Dfun;
            CHECK_OBJECT( par_x0 );
            tmp_args_element_name_36 = par_x0;
            CHECK_OBJECT( par_args );
            tmp_args_element_name_37 = par_args;
            CHECK_OBJECT( par_full_output );
            tmp_args_element_name_38 = par_full_output;
            CHECK_OBJECT( par_col_deriv );
            tmp_args_element_name_39 = par_col_deriv;
            CHECK_OBJECT( par_ftol );
            tmp_args_element_name_40 = par_ftol;
            CHECK_OBJECT( par_xtol );
            tmp_args_element_name_41 = par_xtol;
            CHECK_OBJECT( par_gtol );
            tmp_args_element_name_42 = par_gtol;
            CHECK_OBJECT( par_maxfev );
            tmp_args_element_name_43 = par_maxfev;
            CHECK_OBJECT( par_factor );
            tmp_args_element_name_44 = par_factor;
            CHECK_OBJECT( par_diag );
            tmp_args_element_name_45 = par_diag;
            frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 404;
            {
                PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36, tmp_args_element_name_37, tmp_args_element_name_38, tmp_args_element_name_39, tmp_args_element_name_40, tmp_args_element_name_41, tmp_args_element_name_42, tmp_args_element_name_43, tmp_args_element_name_44, tmp_args_element_name_45 };
                tmp_assign_source_14 = CALL_METHOD_WITH_ARGS12( tmp_called_instance_3, const_str_plain__lmder, call_args );
            }

            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 404;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_retval == NULL );
            var_retval = tmp_assign_source_14;
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_list_element_2;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_list_element_3;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_list_element_4;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_list_element_5;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_list_element_6;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_list_element_7;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_list_element_8;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        tmp_dict_key_1 = const_int_0;
        tmp_dict_value_1 = LIST_COPY( const_list_str_digest_d086b5f7b82c13de98a1b42d51311bdb_type_TypeError_list );
        tmp_assign_source_15 = _PyDict_NewPresized( 9 );
        tmp_res = PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_int_pos_1;
        tmp_left_name_6 = const_str_digest_b9276fa9ac0e9983f78aa96bdbbd64e0;
        CHECK_OBJECT( par_ftol );
        tmp_right_name_6 = par_ftol;
        tmp_list_element_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_15 );

            exception_lineno = 409;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_dict_value_2, 0, tmp_list_element_1 );
        tmp_list_element_1 = Py_None;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_dict_value_2, 1, tmp_list_element_1 );
        tmp_res = PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_int_pos_2;
        tmp_left_name_7 = const_str_digest_e13ee44f4d04d7f949935e02d4eec7a6;
        CHECK_OBJECT( par_xtol );
        tmp_right_name_7 = par_xtol;
        tmp_list_element_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_list_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_15 );

            exception_lineno = 411;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_dict_value_3, 0, tmp_list_element_2 );
        tmp_list_element_2 = Py_None;
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_dict_value_3, 1, tmp_list_element_2 );
        tmp_res = PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_int_pos_3;
        tmp_left_name_8 = const_str_digest_9154ba5761e25cb5f10c014e65ee3d99;
        CHECK_OBJECT( par_ftol );
        tmp_tuple_element_5 = par_ftol;
        tmp_right_name_8 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_right_name_8, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( par_xtol );
        tmp_tuple_element_5 = par_xtol;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_right_name_8, 1, tmp_tuple_element_5 );
        tmp_list_element_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_list_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_15 );

            exception_lineno = 413;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_4 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_dict_value_4, 0, tmp_list_element_3 );
        tmp_list_element_3 = Py_None;
        Py_INCREF( tmp_list_element_3 );
        PyList_SET_ITEM( tmp_dict_value_4, 1, tmp_list_element_3 );
        tmp_res = PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_int_pos_4;
        tmp_left_name_9 = const_str_digest_66e3dc881468887e26e2ca66d5e4be59;
        CHECK_OBJECT( par_gtol );
        tmp_right_name_9 = par_gtol;
        tmp_list_element_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_list_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_15 );

            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_dict_value_5, 0, tmp_list_element_4 );
        tmp_list_element_4 = Py_None;
        Py_INCREF( tmp_list_element_4 );
        PyList_SET_ITEM( tmp_dict_value_5, 1, tmp_list_element_4 );
        tmp_res = PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_int_pos_5;
        tmp_left_name_10 = const_str_digest_e17e5f98a1ef95505bf0197201003699;
        if ( par_maxfev == NULL )
        {
            Py_DECREF( tmp_assign_source_15 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "maxfev" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_10 = par_maxfev;
        tmp_list_element_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_list_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_15 );

            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_dict_value_6, 0, tmp_list_element_5 );
        tmp_list_element_5 = PyExc_ValueError;
        Py_INCREF( tmp_list_element_5 );
        PyList_SET_ITEM( tmp_dict_value_6, 1, tmp_list_element_5 );
        tmp_res = PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_int_pos_6;
        tmp_left_name_11 = const_str_digest_9e84706fe5ce6402a6cde02ff9ba17aa;
        CHECK_OBJECT( par_ftol );
        tmp_right_name_11 = par_ftol;
        tmp_list_element_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_list_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_15 );

            exception_lineno = 422;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_7 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_dict_value_7, 0, tmp_list_element_6 );
        tmp_list_element_6 = PyExc_ValueError;
        Py_INCREF( tmp_list_element_6 );
        PyList_SET_ITEM( tmp_dict_value_7, 1, tmp_list_element_6 );
        tmp_res = PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_int_pos_7;
        tmp_left_name_12 = const_str_digest_d4a13ed45eeb999d44c916d0104048e0;
        CHECK_OBJECT( par_xtol );
        tmp_right_name_12 = par_xtol;
        tmp_list_element_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_list_element_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_15 );

            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_8 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_dict_value_8, 0, tmp_list_element_7 );
        tmp_list_element_7 = PyExc_ValueError;
        Py_INCREF( tmp_list_element_7 );
        PyList_SET_ITEM( tmp_dict_value_8, 1, tmp_list_element_7 );
        tmp_res = PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_8, tmp_dict_value_8 );
        Py_DECREF( tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_int_pos_8;
        tmp_left_name_13 = const_str_digest_bb86de56d95b2280dc96c56958e4f111;
        CHECK_OBJECT( par_gtol );
        tmp_right_name_13 = par_gtol;
        tmp_list_element_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_list_element_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_15 );

            exception_lineno = 428;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_9 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_dict_value_9, 0, tmp_list_element_8 );
        tmp_list_element_8 = PyExc_ValueError;
        Py_INCREF( tmp_list_element_8 );
        PyList_SET_ITEM( tmp_dict_value_9, 1, tmp_list_element_8 );
        tmp_res = PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_9, tmp_dict_value_9 );
        Py_DECREF( tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        assert( var_errors == NULL );
        var_errors = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_retval );
        tmp_subscribed_name_2 = var_retval;
        tmp_subscript_name_2 = const_int_neg_1;
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_info == NULL );
        var_info = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_full_output );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_full_output );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = Py_None;
            assert( var_cov_x == NULL );
            Py_INCREF( tmp_assign_source_17 );
            var_cov_x = tmp_assign_source_17;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_mvar_value_8;
            CHECK_OBJECT( var_info );
            tmp_compexpr_left_6 = var_info;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_LEASTSQ_SUCCESS );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LEASTSQ_SUCCESS );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LEASTSQ_SUCCESS" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 437;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_6 = tmp_mvar_value_8;
            tmp_res = PySequence_Contains( tmp_compexpr_right_6, tmp_compexpr_left_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 437;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_9 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_18;
                PyObject *tmp_import_name_from_1;
                PyObject *tmp_name_name_1;
                PyObject *tmp_globals_name_1;
                PyObject *tmp_locals_name_1;
                PyObject *tmp_fromlist_name_1;
                PyObject *tmp_level_name_1;
                tmp_name_name_1 = const_str_digest_8015da37ef70c6fcb334280663239467;
                tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$minpack;
                tmp_locals_name_1 = Py_None;
                tmp_fromlist_name_1 = const_tuple_str_plain_inv_tuple;
                tmp_level_name_1 = const_int_0;
                frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 438;
                tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
                if ( tmp_import_name_from_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 438;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_inv );
                Py_DECREF( tmp_import_name_from_1 );
                if ( tmp_assign_source_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 438;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_inv == NULL );
                var_inv = tmp_assign_source_18;
            }
            {
                PyObject *tmp_assign_source_19;
                PyObject *tmp_called_name_6;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_args_element_name_46;
                PyObject *tmp_called_name_7;
                PyObject *tmp_mvar_value_10;
                PyObject *tmp_args_element_name_47;
                PyObject *tmp_args_element_name_48;
                PyObject *tmp_left_name_14;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_right_name_14;
                PyObject *tmp_args_element_name_49;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_take );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_take );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "take" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 439;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_6 = tmp_mvar_value_9;
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_eye );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eye );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eye" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 439;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_7 = tmp_mvar_value_10;
                CHECK_OBJECT( var_n );
                tmp_args_element_name_47 = var_n;
                frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 439;
                {
                    PyObject *call_args[] = { tmp_args_element_name_47 };
                    tmp_args_element_name_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                }

                if ( tmp_args_element_name_46 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 439;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_retval );
                tmp_subscribed_name_4 = var_retval;
                tmp_subscript_name_3 = const_int_pos_1;
                tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_3, 1 );
                if ( tmp_subscribed_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_46 );

                    exception_lineno = 439;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_4 = const_str_plain_ipvt;
                tmp_left_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_4 );
                Py_DECREF( tmp_subscribed_name_3 );
                if ( tmp_left_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_46 );

                    exception_lineno = 439;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_14 = const_int_pos_1;
                tmp_args_element_name_48 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_14, tmp_right_name_14 );
                Py_DECREF( tmp_left_name_14 );
                if ( tmp_args_element_name_48 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_46 );

                    exception_lineno = 439;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_49 = const_int_0;
                frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 439;
                {
                    PyObject *call_args[] = { tmp_args_element_name_46, tmp_args_element_name_48, tmp_args_element_name_49 };
                    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
                }

                Py_DECREF( tmp_args_element_name_46 );
                Py_DECREF( tmp_args_element_name_48 );
                if ( tmp_assign_source_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 439;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_perm == NULL );
                var_perm = tmp_assign_source_19;
            }
            {
                PyObject *tmp_assign_source_20;
                PyObject *tmp_called_name_8;
                PyObject *tmp_mvar_value_11;
                PyObject *tmp_args_element_name_50;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_called_name_9;
                PyObject *tmp_mvar_value_12;
                PyObject *tmp_args_element_name_51;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_subscribed_name_7;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_subscript_name_6;
                PyObject *tmp_subscript_name_7;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_start_name_1;
                PyObject *tmp_stop_name_1;
                PyObject *tmp_step_name_1;
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_triu );

                if (unlikely( tmp_mvar_value_11 == NULL ))
                {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_triu );
                }

                if ( tmp_mvar_value_11 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "triu" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 440;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_8 = tmp_mvar_value_11;
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_transpose );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transpose );
                }

                if ( tmp_mvar_value_12 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "transpose" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 440;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_9 = tmp_mvar_value_12;
                CHECK_OBJECT( var_retval );
                tmp_subscribed_name_7 = var_retval;
                tmp_subscript_name_5 = const_int_pos_1;
                tmp_subscribed_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_5, 1 );
                if ( tmp_subscribed_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 440;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_6 = const_str_plain_fjac;
                tmp_args_element_name_51 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
                Py_DECREF( tmp_subscribed_name_6 );
                if ( tmp_args_element_name_51 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 440;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 440;
                {
                    PyObject *call_args[] = { tmp_args_element_name_51 };
                    tmp_subscribed_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
                }

                Py_DECREF( tmp_args_element_name_51 );
                if ( tmp_subscribed_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 440;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_start_name_1 = Py_None;
                CHECK_OBJECT( var_n );
                tmp_stop_name_1 = var_n;
                tmp_step_name_1 = Py_None;
                tmp_tuple_element_6 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
                assert( !(tmp_tuple_element_6 == NULL) );
                tmp_subscript_name_7 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_subscript_name_7, 0, tmp_tuple_element_6 );
                tmp_tuple_element_6 = const_slice_none_none_none;
                Py_INCREF( tmp_tuple_element_6 );
                PyTuple_SET_ITEM( tmp_subscript_name_7, 1, tmp_tuple_element_6 );
                tmp_args_element_name_50 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_7 );
                Py_DECREF( tmp_subscribed_name_5 );
                Py_DECREF( tmp_subscript_name_7 );
                if ( tmp_args_element_name_50 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 440;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 440;
                {
                    PyObject *call_args[] = { tmp_args_element_name_50 };
                    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                }

                Py_DECREF( tmp_args_element_name_50 );
                if ( tmp_assign_source_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 440;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_r == NULL );
                var_r = tmp_assign_source_20;
            }
            {
                PyObject *tmp_assign_source_21;
                PyObject *tmp_called_name_10;
                PyObject *tmp_mvar_value_13;
                PyObject *tmp_args_element_name_52;
                PyObject *tmp_args_element_name_53;
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_dot );

                if (unlikely( tmp_mvar_value_13 == NULL ))
                {
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dot );
                }

                if ( tmp_mvar_value_13 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dot" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 441;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_10 = tmp_mvar_value_13;
                CHECK_OBJECT( var_r );
                tmp_args_element_name_52 = var_r;
                CHECK_OBJECT( var_perm );
                tmp_args_element_name_53 = var_perm;
                frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 441;
                {
                    PyObject *call_args[] = { tmp_args_element_name_52, tmp_args_element_name_53 };
                    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
                }

                if ( tmp_assign_source_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 441;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_R == NULL );
                var_R = tmp_assign_source_21;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_22;
                PyObject *tmp_called_name_11;
                PyObject *tmp_args_element_name_54;
                PyObject *tmp_called_name_12;
                PyObject *tmp_mvar_value_14;
                PyObject *tmp_args_element_name_55;
                PyObject *tmp_called_name_13;
                PyObject *tmp_mvar_value_15;
                PyObject *tmp_args_element_name_56;
                PyObject *tmp_args_element_name_57;
                CHECK_OBJECT( var_inv );
                tmp_called_name_11 = var_inv;
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_dot );

                if (unlikely( tmp_mvar_value_14 == NULL ))
                {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dot );
                }

                if ( tmp_mvar_value_14 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dot" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 443;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_12 = tmp_mvar_value_14;
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_transpose );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transpose );
                }

                if ( tmp_mvar_value_15 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "transpose" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 443;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_13 = tmp_mvar_value_15;
                CHECK_OBJECT( var_R );
                tmp_args_element_name_56 = var_R;
                frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 443;
                {
                    PyObject *call_args[] = { tmp_args_element_name_56 };
                    tmp_args_element_name_55 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
                }

                if ( tmp_args_element_name_55 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 443;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_R );
                tmp_args_element_name_57 = var_R;
                frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 443;
                {
                    PyObject *call_args[] = { tmp_args_element_name_55, tmp_args_element_name_57 };
                    tmp_args_element_name_54 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
                }

                Py_DECREF( tmp_args_element_name_55 );
                if ( tmp_args_element_name_54 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 443;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 443;
                {
                    PyObject *call_args[] = { tmp_args_element_name_54 };
                    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
                }

                Py_DECREF( tmp_args_element_name_54 );
                if ( tmp_assign_source_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 443;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = var_cov_x;
                    assert( old != NULL );
                    var_cov_x = tmp_assign_source_22;
                    Py_DECREF( old );
                }

            }
            goto try_end_3;
            // Exception handler code:
            try_except_handler_4:;
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
                exception_keeper_tb_3 = MAKE_TRACEBACK( frame_738e48ead867c6a1c393d969ba8273d6, exception_keeper_lineno_3 );
            }
            else if ( exception_keeper_lineno_3 != 0 )
            {
                exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_738e48ead867c6a1c393d969ba8273d6, exception_keeper_lineno_3 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
            PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
            PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
            // Tried code:
            {
                nuitka_bool tmp_condition_result_10;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_compexpr_left_7;
                PyObject *tmp_compexpr_right_7;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_mvar_value_16;
                tmp_compexpr_left_7 = EXC_TYPE(PyThreadState_GET());
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_LinAlgError );

                if (unlikely( tmp_mvar_value_16 == NULL ))
                {
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
                }

                if ( tmp_mvar_value_16 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 444;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_5;
                }

                tmp_tuple_element_7 = tmp_mvar_value_16;
                tmp_compexpr_right_7 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_7 );
                PyTuple_SET_ITEM( tmp_compexpr_right_7, 0, tmp_tuple_element_7 );
                tmp_tuple_element_7 = PyExc_ValueError;
                Py_INCREF( tmp_tuple_element_7 );
                PyTuple_SET_ITEM( tmp_compexpr_right_7, 1, tmp_tuple_element_7 );
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                Py_DECREF( tmp_compexpr_right_7 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 444;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 444;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_condition_result_10 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_10;
                }
                else
                {
                    goto branch_no_10;
                }
                branch_yes_10:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 442;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_738e48ead867c6a1c393d969ba8273d6->m_frame) frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_5;
                branch_no_10:;
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
            NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_4_leastsq );
            return NULL;
            // End of try:
            try_end_3:;
            branch_no_9:;
        }
        {
            PyObject *tmp_left_name_15;
            PyObject *tmp_left_name_16;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            PyObject *tmp_right_name_15;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_subscript_name_9;
            PyObject *tmp_right_name_16;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_subscribed_name_10;
            PyObject *tmp_dict_name_1;
            PyObject *tmp_key_name_1;
            PyObject *tmp_subscript_name_10;
            CHECK_OBJECT( var_retval );
            tmp_subscribed_name_8 = var_retval;
            tmp_subscript_name_8 = const_int_0;
            tmp_tuple_element_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 0 );
            if ( tmp_tuple_element_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 446;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_16 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_left_name_16, 0, tmp_tuple_element_8 );
            if ( var_cov_x == NULL )
            {
                Py_DECREF( tmp_left_name_16 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cov_x" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 446;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_8 = var_cov_x;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_left_name_16, 1, tmp_tuple_element_8 );
            CHECK_OBJECT( var_retval );
            tmp_subscribed_name_9 = var_retval;
            tmp_subscript_name_9 = const_slice_int_pos_1_int_neg_1_none;
            tmp_right_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
            if ( tmp_right_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );

                exception_lineno = 446;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_15 = BINARY_OPERATION_ADD_TUPLE_OBJECT( tmp_left_name_16, tmp_right_name_15 );
            Py_DECREF( tmp_left_name_16 );
            Py_DECREF( tmp_right_name_15 );
            if ( tmp_left_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 446;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_errors );
            tmp_dict_name_1 = var_errors;
            CHECK_OBJECT( var_info );
            tmp_key_name_1 = var_info;
            tmp_subscribed_name_10 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
            if ( tmp_subscribed_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_15 );

                exception_lineno = 446;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_10 = const_int_0;
            tmp_tuple_element_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_10, tmp_subscript_name_10, 0 );
            Py_DECREF( tmp_subscribed_name_10 );
            if ( tmp_tuple_element_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_15 );

                exception_lineno = 446;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_16 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_right_name_16, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( var_info );
            tmp_tuple_element_9 = var_info;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_right_name_16, 1, tmp_tuple_element_9 );
            tmp_return_value = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_15, tmp_right_name_16 );
            Py_DECREF( tmp_left_name_15 );
            Py_DECREF( tmp_right_name_16 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 446;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_8;
        branch_no_8:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_mvar_value_17;
            CHECK_OBJECT( var_info );
            tmp_compexpr_left_8 = var_info;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_LEASTSQ_FAILURE );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LEASTSQ_FAILURE );
            }

            if ( tmp_mvar_value_17 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LEASTSQ_FAILURE" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 448;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_8 = tmp_mvar_value_17;
            tmp_res = PySequence_Contains( tmp_compexpr_right_8, tmp_compexpr_left_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 448;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_11 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_14;
                PyObject *tmp_source_name_2;
                PyObject *tmp_mvar_value_18;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_58;
                PyObject *tmp_subscribed_name_11;
                PyObject *tmp_dict_name_2;
                PyObject *tmp_key_name_2;
                PyObject *tmp_subscript_name_11;
                PyObject *tmp_args_element_name_59;
                PyObject *tmp_mvar_value_19;
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_warnings );

                if (unlikely( tmp_mvar_value_18 == NULL ))
                {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                }

                if ( tmp_mvar_value_18 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 449;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_2 = tmp_mvar_value_18;
                tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_warn );
                if ( tmp_called_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 449;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_errors );
                tmp_dict_name_2 = var_errors;
                CHECK_OBJECT( var_info );
                tmp_key_name_2 = var_info;
                tmp_subscribed_name_11 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
                if ( tmp_subscribed_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_14 );

                    exception_lineno = 449;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_11 = const_int_0;
                tmp_args_element_name_58 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_11, tmp_subscript_name_11, 0 );
                Py_DECREF( tmp_subscribed_name_11 );
                if ( tmp_args_element_name_58 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_14 );

                    exception_lineno = 449;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

                if (unlikely( tmp_mvar_value_19 == NULL ))
                {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
                }

                if ( tmp_mvar_value_19 == NULL )
                {
                    Py_DECREF( tmp_called_name_14 );
                    Py_DECREF( tmp_args_element_name_58 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 449;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_59 = tmp_mvar_value_19;
                frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 449;
                {
                    PyObject *call_args[] = { tmp_args_element_name_58, tmp_args_element_name_59 };
                    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
                }

                Py_DECREF( tmp_called_name_14 );
                Py_DECREF( tmp_args_element_name_58 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 449;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            goto branch_end_11;
            branch_no_11:;
            {
                nuitka_bool tmp_condition_result_12;
                PyObject *tmp_compexpr_left_9;
                PyObject *tmp_compexpr_right_9;
                CHECK_OBJECT( var_info );
                tmp_compexpr_left_9 = var_info;
                tmp_compexpr_right_9 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 450;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_called_name_15;
                    PyObject *tmp_subscribed_name_12;
                    PyObject *tmp_dict_name_3;
                    PyObject *tmp_key_name_3;
                    PyObject *tmp_subscript_name_12;
                    PyObject *tmp_args_element_name_60;
                    PyObject *tmp_subscribed_name_13;
                    PyObject *tmp_dict_name_4;
                    PyObject *tmp_key_name_4;
                    PyObject *tmp_subscript_name_13;
                    CHECK_OBJECT( var_errors );
                    tmp_dict_name_3 = var_errors;
                    CHECK_OBJECT( var_info );
                    tmp_key_name_3 = var_info;
                    tmp_subscribed_name_12 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
                    if ( tmp_subscribed_name_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 451;
                        type_description_1 = "ooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_subscript_name_12 = const_int_pos_1;
                    tmp_called_name_15 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_12, tmp_subscript_name_12, 1 );
                    Py_DECREF( tmp_subscribed_name_12 );
                    if ( tmp_called_name_15 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 451;
                        type_description_1 = "ooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_errors );
                    tmp_dict_name_4 = var_errors;
                    CHECK_OBJECT( var_info );
                    tmp_key_name_4 = var_info;
                    tmp_subscribed_name_13 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
                    if ( tmp_subscribed_name_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_15 );

                        exception_lineno = 451;
                        type_description_1 = "ooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_subscript_name_13 = const_int_0;
                    tmp_args_element_name_60 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_13, tmp_subscript_name_13, 0 );
                    Py_DECREF( tmp_subscribed_name_13 );
                    if ( tmp_args_element_name_60 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_15 );

                        exception_lineno = 451;
                        type_description_1 = "ooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_738e48ead867c6a1c393d969ba8273d6->m_frame.f_lineno = 451;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_60 };
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
                    }

                    Py_DECREF( tmp_called_name_15 );
                    Py_DECREF( tmp_args_element_name_60 );
                    if ( tmp_raise_type_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 451;
                        type_description_1 = "ooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_2;
                    exception_lineno = 451;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_12:;
            }
            branch_end_11:;
        }
        {
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_subscribed_name_14;
            PyObject *tmp_subscript_name_14;
            CHECK_OBJECT( var_retval );
            tmp_subscribed_name_14 = var_retval;
            tmp_subscript_name_14 = const_int_0;
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_14, tmp_subscript_name_14, 0 );
            if ( tmp_tuple_element_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 452;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( var_info );
            tmp_tuple_element_10 = var_info;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_10 );
            goto frame_return_exit_1;
        }
        branch_end_8:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_738e48ead867c6a1c393d969ba8273d6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_738e48ead867c6a1c393d969ba8273d6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_738e48ead867c6a1c393d969ba8273d6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_738e48ead867c6a1c393d969ba8273d6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_738e48ead867c6a1c393d969ba8273d6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_738e48ead867c6a1c393d969ba8273d6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_738e48ead867c6a1c393d969ba8273d6,
        type_description_1,
        par_func,
        par_x0,
        par_args,
        par_Dfun,
        par_full_output,
        par_col_deriv,
        par_ftol,
        par_xtol,
        par_gtol,
        par_maxfev,
        par_epsfcn,
        par_factor,
        par_diag,
        var_n,
        var_shape,
        var_dtype,
        var_m,
        var_retval,
        var_errors,
        var_info,
        var_cov_x,
        var_inv,
        var_perm,
        var_r,
        var_R
    );


    // Release cached frame.
    if ( frame_738e48ead867c6a1c393d969ba8273d6 == cache_frame_738e48ead867c6a1c393d969ba8273d6 )
    {
        Py_DECREF( frame_738e48ead867c6a1c393d969ba8273d6 );
    }
    cache_frame_738e48ead867c6a1c393d969ba8273d6 = NULL;

    assertFrameObject( frame_738e48ead867c6a1c393d969ba8273d6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_4_leastsq );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_Dfun );
    Py_DECREF( par_Dfun );
    par_Dfun = NULL;

    CHECK_OBJECT( (PyObject *)par_full_output );
    Py_DECREF( par_full_output );
    par_full_output = NULL;

    CHECK_OBJECT( (PyObject *)par_col_deriv );
    Py_DECREF( par_col_deriv );
    par_col_deriv = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_gtol );
    Py_DECREF( par_gtol );
    par_gtol = NULL;

    Py_XDECREF( par_maxfev );
    par_maxfev = NULL;

    CHECK_OBJECT( (PyObject *)par_epsfcn );
    Py_DECREF( par_epsfcn );
    par_epsfcn = NULL;

    CHECK_OBJECT( (PyObject *)par_factor );
    Py_DECREF( par_factor );
    par_factor = NULL;

    CHECK_OBJECT( (PyObject *)par_diag );
    Py_DECREF( par_diag );
    par_diag = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_shape );
    Py_DECREF( var_shape );
    var_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_dtype );
    Py_DECREF( var_dtype );
    var_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_retval );
    Py_DECREF( var_retval );
    var_retval = NULL;

    CHECK_OBJECT( (PyObject *)var_errors );
    Py_DECREF( var_errors );
    var_errors = NULL;

    CHECK_OBJECT( (PyObject *)var_info );
    Py_DECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_cov_x );
    var_cov_x = NULL;

    Py_XDECREF( var_inv );
    var_inv = NULL;

    Py_XDECREF( var_perm );
    var_perm = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_Dfun );
    Py_DECREF( par_Dfun );
    par_Dfun = NULL;

    CHECK_OBJECT( (PyObject *)par_full_output );
    Py_DECREF( par_full_output );
    par_full_output = NULL;

    CHECK_OBJECT( (PyObject *)par_col_deriv );
    Py_DECREF( par_col_deriv );
    par_col_deriv = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_gtol );
    Py_DECREF( par_gtol );
    par_gtol = NULL;

    Py_XDECREF( par_maxfev );
    par_maxfev = NULL;

    Py_XDECREF( par_epsfcn );
    par_epsfcn = NULL;

    CHECK_OBJECT( (PyObject *)par_factor );
    Py_DECREF( par_factor );
    par_factor = NULL;

    CHECK_OBJECT( (PyObject *)par_diag );
    Py_DECREF( par_diag );
    par_diag = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_retval );
    var_retval = NULL;

    Py_XDECREF( var_errors );
    var_errors = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_cov_x );
    var_cov_x = NULL;

    Py_XDECREF( var_inv );
    var_inv = NULL;

    Py_XDECREF( var_perm );
    var_perm = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_4_leastsq );
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


static PyObject *impl_scipy$optimize$minpack$$$function_5__wrap_func( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_func = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_xdata = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_ydata = PyCell_NEW1( python_pars[ 2 ] );
    struct Nuitka_CellObject *par_transform = PyCell_NEW1( python_pars[ 3 ] );
    PyObject *var_func_wrapped = NULL;
    struct Nuitka_FrameObject *frame_9b4a2d3ed8d7805f0abe3ec7c3542601;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9b4a2d3ed8d7805f0abe3ec7c3542601 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9b4a2d3ed8d7805f0abe3ec7c3542601, codeobj_9b4a2d3ed8d7805f0abe3ec7c3542601, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9b4a2d3ed8d7805f0abe3ec7c3542601 = cache_frame_9b4a2d3ed8d7805f0abe3ec7c3542601;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9b4a2d3ed8d7805f0abe3ec7c3542601 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9b4a2d3ed8d7805f0abe3ec7c3542601 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( PyCell_GET( par_transform ) );
        tmp_compexpr_left_1 = PyCell_GET( par_transform );
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
            tmp_assign_source_1 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_5__wrap_func$$$function_1_func_wrapped(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_func;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] = par_xdata;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[2] = par_ydata;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[2] );


            assert( var_func_wrapped == NULL );
            var_func_wrapped = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( PyCell_GET( par_transform ) );
            tmp_source_name_1 = PyCell_GET( par_transform );
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 459;
                type_description_1 = "cccco";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 459;
                type_description_1 = "cccco";
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
                PyObject *tmp_assign_source_2;
                tmp_assign_source_2 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_5__wrap_func$$$function_2_func_wrapped(  );

                ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] = par_func;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] = par_transform;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[2] = par_xdata;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[2] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[3] = par_ydata;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[3] );


                assert( var_func_wrapped == NULL );
                var_func_wrapped = tmp_assign_source_2;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_5__wrap_func$$$function_3_func_wrapped(  );

                ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] = par_func;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] = par_transform;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[2] = par_xdata;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[2] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[3] = par_ydata;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[3] );


                assert( var_func_wrapped == NULL );
                var_func_wrapped = tmp_assign_source_3;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    if ( var_func_wrapped == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "func_wrapped" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 473;
        type_description_1 = "cccco";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_func_wrapped;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b4a2d3ed8d7805f0abe3ec7c3542601 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b4a2d3ed8d7805f0abe3ec7c3542601 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b4a2d3ed8d7805f0abe3ec7c3542601 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9b4a2d3ed8d7805f0abe3ec7c3542601, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9b4a2d3ed8d7805f0abe3ec7c3542601->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9b4a2d3ed8d7805f0abe3ec7c3542601, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9b4a2d3ed8d7805f0abe3ec7c3542601,
        type_description_1,
        par_func,
        par_xdata,
        par_ydata,
        par_transform,
        var_func_wrapped
    );


    // Release cached frame.
    if ( frame_9b4a2d3ed8d7805f0abe3ec7c3542601 == cache_frame_9b4a2d3ed8d7805f0abe3ec7c3542601 )
    {
        Py_DECREF( frame_9b4a2d3ed8d7805f0abe3ec7c3542601 );
    }
    cache_frame_9b4a2d3ed8d7805f0abe3ec7c3542601 = NULL;

    assertFrameObject( frame_9b4a2d3ed8d7805f0abe3ec7c3542601 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_5__wrap_func );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_xdata );
    Py_DECREF( par_xdata );
    par_xdata = NULL;

    CHECK_OBJECT( (PyObject *)par_ydata );
    Py_DECREF( par_ydata );
    par_ydata = NULL;

    CHECK_OBJECT( (PyObject *)par_transform );
    Py_DECREF( par_transform );
    par_transform = NULL;

    Py_XDECREF( var_func_wrapped );
    var_func_wrapped = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_xdata );
    Py_DECREF( par_xdata );
    par_xdata = NULL;

    CHECK_OBJECT( (PyObject *)par_ydata );
    Py_DECREF( par_ydata );
    par_ydata = NULL;

    CHECK_OBJECT( (PyObject *)par_transform );
    Py_DECREF( par_transform );
    par_transform = NULL;

    Py_XDECREF( var_func_wrapped );
    var_func_wrapped = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_5__wrap_func );
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


static PyObject *impl_scipy$optimize$minpack$$$function_5__wrap_func$$$function_1_func_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_34b4e74a20b22ac0e5dcc07f696a7818;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_34b4e74a20b22ac0e5dcc07f696a7818 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_34b4e74a20b22ac0e5dcc07f696a7818, codeobj_34b4e74a20b22ac0e5dcc07f696a7818, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_34b4e74a20b22ac0e5dcc07f696a7818 = cache_frame_34b4e74a20b22ac0e5dcc07f696a7818;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_34b4e74a20b22ac0e5dcc07f696a7818 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_34b4e74a20b22ac0e5dcc07f696a7818 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_right_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 458;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[0] );
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "xdata" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 458;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[1] );
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_params );
        tmp_dircall_arg3_1 = par_params;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_left_name_1 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 458;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ydata" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 458;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = PyCell_GET( self->m_closure[2] );
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 458;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_34b4e74a20b22ac0e5dcc07f696a7818 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_34b4e74a20b22ac0e5dcc07f696a7818 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_34b4e74a20b22ac0e5dcc07f696a7818 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_34b4e74a20b22ac0e5dcc07f696a7818, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_34b4e74a20b22ac0e5dcc07f696a7818->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_34b4e74a20b22ac0e5dcc07f696a7818, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_34b4e74a20b22ac0e5dcc07f696a7818,
        type_description_1,
        par_params,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_34b4e74a20b22ac0e5dcc07f696a7818 == cache_frame_34b4e74a20b22ac0e5dcc07f696a7818 )
    {
        Py_DECREF( frame_34b4e74a20b22ac0e5dcc07f696a7818 );
    }
    cache_frame_34b4e74a20b22ac0e5dcc07f696a7818 = NULL;

    assertFrameObject( frame_34b4e74a20b22ac0e5dcc07f696a7818 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_5__wrap_func$$$function_1_func_wrapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

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

    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_5__wrap_func$$$function_1_func_wrapped );
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


static PyObject *impl_scipy$optimize$minpack$$$function_5__wrap_func$$$function_2_func_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_0dd545cfd7ce2f525bb325eadb71bd0b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0dd545cfd7ce2f525bb325eadb71bd0b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0dd545cfd7ce2f525bb325eadb71bd0b, codeobj_0dd545cfd7ce2f525bb325eadb71bd0b, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0dd545cfd7ce2f525bb325eadb71bd0b = cache_frame_0dd545cfd7ce2f525bb325eadb71bd0b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0dd545cfd7ce2f525bb325eadb71bd0b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0dd545cfd7ce2f525bb325eadb71bd0b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_right_name_2;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "transform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 461;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = PyCell_GET( self->m_closure[1] );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 461;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[0] );
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "xdata" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 461;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[2] );
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_params );
        tmp_dircall_arg3_1 = par_params;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_left_name_2 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ydata" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 461;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = PyCell_GET( self->m_closure[3] );
        tmp_right_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0dd545cfd7ce2f525bb325eadb71bd0b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0dd545cfd7ce2f525bb325eadb71bd0b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0dd545cfd7ce2f525bb325eadb71bd0b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0dd545cfd7ce2f525bb325eadb71bd0b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0dd545cfd7ce2f525bb325eadb71bd0b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0dd545cfd7ce2f525bb325eadb71bd0b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0dd545cfd7ce2f525bb325eadb71bd0b,
        type_description_1,
        par_params,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2],
        self->m_closure[3]
    );


    // Release cached frame.
    if ( frame_0dd545cfd7ce2f525bb325eadb71bd0b == cache_frame_0dd545cfd7ce2f525bb325eadb71bd0b )
    {
        Py_DECREF( frame_0dd545cfd7ce2f525bb325eadb71bd0b );
    }
    cache_frame_0dd545cfd7ce2f525bb325eadb71bd0b = NULL;

    assertFrameObject( frame_0dd545cfd7ce2f525bb325eadb71bd0b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_5__wrap_func$$$function_2_func_wrapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

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

    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_5__wrap_func$$$function_2_func_wrapped );
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


static PyObject *impl_scipy$optimize$minpack$$$function_5__wrap_func$$$function_3_func_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_20755951cb099e1602260251e452faf5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_20755951cb099e1602260251e452faf5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_20755951cb099e1602260251e452faf5, codeobj_20755951cb099e1602260251e452faf5, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_20755951cb099e1602260251e452faf5 = cache_frame_20755951cb099e1602260251e452faf5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_20755951cb099e1602260251e452faf5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_20755951cb099e1602260251e452faf5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_solve_triangular );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_triangular );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_triangular" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 472;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "transform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 472;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[1] );
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 472;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[0] );
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "xdata" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 472;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = PyCell_GET( self->m_closure[2] );
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_params );
        tmp_dircall_arg3_1 = par_params;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_left_name_1 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 472;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ydata" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 472;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = PyCell_GET( self->m_closure[3] );
        tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 472;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_0f2519a6c952cc568952beb42c1e9b1d );
        frame_20755951cb099e1602260251e452faf5->m_frame.f_lineno = 472;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20755951cb099e1602260251e452faf5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_20755951cb099e1602260251e452faf5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20755951cb099e1602260251e452faf5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_20755951cb099e1602260251e452faf5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_20755951cb099e1602260251e452faf5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_20755951cb099e1602260251e452faf5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_20755951cb099e1602260251e452faf5,
        type_description_1,
        par_params,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2],
        self->m_closure[3]
    );


    // Release cached frame.
    if ( frame_20755951cb099e1602260251e452faf5 == cache_frame_20755951cb099e1602260251e452faf5 )
    {
        Py_DECREF( frame_20755951cb099e1602260251e452faf5 );
    }
    cache_frame_20755951cb099e1602260251e452faf5 = NULL;

    assertFrameObject( frame_20755951cb099e1602260251e452faf5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_5__wrap_func$$$function_3_func_wrapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

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

    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_5__wrap_func$$$function_3_func_wrapped );
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


static PyObject *impl_scipy$optimize$minpack$$$function_6__wrap_jac( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_jac = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_xdata = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_transform = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *var_jac_wrapped = NULL;
    struct Nuitka_FrameObject *frame_f6e45c97e87cd13cf6b3f00065202ff2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f6e45c97e87cd13cf6b3f00065202ff2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f6e45c97e87cd13cf6b3f00065202ff2, codeobj_f6e45c97e87cd13cf6b3f00065202ff2, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f6e45c97e87cd13cf6b3f00065202ff2 = cache_frame_f6e45c97e87cd13cf6b3f00065202ff2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f6e45c97e87cd13cf6b3f00065202ff2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f6e45c97e87cd13cf6b3f00065202ff2 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( PyCell_GET( par_transform ) );
        tmp_compexpr_left_1 = PyCell_GET( par_transform );
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
            tmp_assign_source_1 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_6__wrap_jac$$$function_1_jac_wrapped(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_jac;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] = par_xdata;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] );


            assert( var_jac_wrapped == NULL );
            var_jac_wrapped = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( PyCell_GET( par_transform ) );
            tmp_source_name_1 = PyCell_GET( par_transform );
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 480;
                type_description_1 = "ccco";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 480;
                type_description_1 = "ccco";
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
                PyObject *tmp_assign_source_2;
                tmp_assign_source_2 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_6__wrap_jac$$$function_2_jac_wrapped(  );

                ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] = par_jac;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] = par_transform;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[2] = par_xdata;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[2] );


                assert( var_jac_wrapped == NULL );
                var_jac_wrapped = tmp_assign_source_2;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_6__wrap_jac$$$function_3_jac_wrapped(  );

                ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] = par_jac;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] = par_transform;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[2] = par_xdata;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[2] );


                assert( var_jac_wrapped == NULL );
                var_jac_wrapped = tmp_assign_source_3;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    if ( var_jac_wrapped == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac_wrapped" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 486;
        type_description_1 = "ccco";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_jac_wrapped;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6e45c97e87cd13cf6b3f00065202ff2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6e45c97e87cd13cf6b3f00065202ff2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6e45c97e87cd13cf6b3f00065202ff2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f6e45c97e87cd13cf6b3f00065202ff2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f6e45c97e87cd13cf6b3f00065202ff2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f6e45c97e87cd13cf6b3f00065202ff2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f6e45c97e87cd13cf6b3f00065202ff2,
        type_description_1,
        par_jac,
        par_xdata,
        par_transform,
        var_jac_wrapped
    );


    // Release cached frame.
    if ( frame_f6e45c97e87cd13cf6b3f00065202ff2 == cache_frame_f6e45c97e87cd13cf6b3f00065202ff2 )
    {
        Py_DECREF( frame_f6e45c97e87cd13cf6b3f00065202ff2 );
    }
    cache_frame_f6e45c97e87cd13cf6b3f00065202ff2 = NULL;

    assertFrameObject( frame_f6e45c97e87cd13cf6b3f00065202ff2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_6__wrap_jac );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_xdata );
    Py_DECREF( par_xdata );
    par_xdata = NULL;

    CHECK_OBJECT( (PyObject *)par_transform );
    Py_DECREF( par_transform );
    par_transform = NULL;

    Py_XDECREF( var_jac_wrapped );
    var_jac_wrapped = NULL;

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

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_xdata );
    Py_DECREF( par_xdata );
    par_xdata = NULL;

    CHECK_OBJECT( (PyObject *)par_transform );
    Py_DECREF( par_transform );
    par_transform = NULL;

    Py_XDECREF( var_jac_wrapped );
    var_jac_wrapped = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_6__wrap_jac );
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


static PyObject *impl_scipy$optimize$minpack$$$function_6__wrap_jac$$$function_1_jac_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_13788e1f59295f8c444002ae335015a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_13788e1f59295f8c444002ae335015a0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_13788e1f59295f8c444002ae335015a0, codeobj_13788e1f59295f8c444002ae335015a0, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_13788e1f59295f8c444002ae335015a0 = cache_frame_13788e1f59295f8c444002ae335015a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_13788e1f59295f8c444002ae335015a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_13788e1f59295f8c444002ae335015a0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 479;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[0] );
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "xdata" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 479;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[1] );
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_params );
        tmp_dircall_arg3_1 = par_params;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 479;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13788e1f59295f8c444002ae335015a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_13788e1f59295f8c444002ae335015a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13788e1f59295f8c444002ae335015a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_13788e1f59295f8c444002ae335015a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_13788e1f59295f8c444002ae335015a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_13788e1f59295f8c444002ae335015a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_13788e1f59295f8c444002ae335015a0,
        type_description_1,
        par_params,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_13788e1f59295f8c444002ae335015a0 == cache_frame_13788e1f59295f8c444002ae335015a0 )
    {
        Py_DECREF( frame_13788e1f59295f8c444002ae335015a0 );
    }
    cache_frame_13788e1f59295f8c444002ae335015a0 = NULL;

    assertFrameObject( frame_13788e1f59295f8c444002ae335015a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_6__wrap_jac$$$function_1_jac_wrapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

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

    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_6__wrap_jac$$$function_1_jac_wrapped );
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


static PyObject *impl_scipy$optimize$minpack$$$function_6__wrap_jac$$$function_2_jac_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_0f67ec2d5b644f9fae3bd2b64cecb9df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0f67ec2d5b644f9fae3bd2b64cecb9df = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0f67ec2d5b644f9fae3bd2b64cecb9df, codeobj_0f67ec2d5b644f9fae3bd2b64cecb9df, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0f67ec2d5b644f9fae3bd2b64cecb9df = cache_frame_0f67ec2d5b644f9fae3bd2b64cecb9df;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0f67ec2d5b644f9fae3bd2b64cecb9df );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0f67ec2d5b644f9fae3bd2b64cecb9df ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "transform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 482;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_tuple_element_1 = const_slice_none_none_none;
        tmp_subscript_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 482;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_newaxis );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscript_name_1 );

            exception_lineno = 482;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_1 );
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 482;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 482;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 482;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 482;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[0] );
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "xdata" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 482;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = PyCell_GET( self->m_closure[2] );
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_params );
        tmp_dircall_arg3_1 = par_params;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_args_element_name_1 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 482;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        frame_0f67ec2d5b644f9fae3bd2b64cecb9df->m_frame.f_lineno = 482;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 482;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 482;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f67ec2d5b644f9fae3bd2b64cecb9df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f67ec2d5b644f9fae3bd2b64cecb9df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f67ec2d5b644f9fae3bd2b64cecb9df );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0f67ec2d5b644f9fae3bd2b64cecb9df, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0f67ec2d5b644f9fae3bd2b64cecb9df->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0f67ec2d5b644f9fae3bd2b64cecb9df, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0f67ec2d5b644f9fae3bd2b64cecb9df,
        type_description_1,
        par_params,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_0f67ec2d5b644f9fae3bd2b64cecb9df == cache_frame_0f67ec2d5b644f9fae3bd2b64cecb9df )
    {
        Py_DECREF( frame_0f67ec2d5b644f9fae3bd2b64cecb9df );
    }
    cache_frame_0f67ec2d5b644f9fae3bd2b64cecb9df = NULL;

    assertFrameObject( frame_0f67ec2d5b644f9fae3bd2b64cecb9df );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_6__wrap_jac$$$function_2_jac_wrapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

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

    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_6__wrap_jac$$$function_2_jac_wrapped );
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


static PyObject *impl_scipy$optimize$minpack$$$function_6__wrap_jac$$$function_3_jac_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_11498d4a9c803fc46731da02985456f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_11498d4a9c803fc46731da02985456f7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_11498d4a9c803fc46731da02985456f7, codeobj_11498d4a9c803fc46731da02985456f7, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_11498d4a9c803fc46731da02985456f7 = cache_frame_11498d4a9c803fc46731da02985456f7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_11498d4a9c803fc46731da02985456f7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_11498d4a9c803fc46731da02985456f7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_solve_triangular );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_triangular );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_triangular" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 485;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "transform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 485;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[1] );
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 485;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 485;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 485;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[0] );
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "xdata" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 485;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = PyCell_GET( self->m_closure[2] );
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_params );
        tmp_dircall_arg3_1 = par_params;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_args_element_name_1 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 485;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        frame_11498d4a9c803fc46731da02985456f7->m_frame.f_lineno = 485;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 485;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_0f2519a6c952cc568952beb42c1e9b1d );
        frame_11498d4a9c803fc46731da02985456f7->m_frame.f_lineno = 485;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 485;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11498d4a9c803fc46731da02985456f7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_11498d4a9c803fc46731da02985456f7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11498d4a9c803fc46731da02985456f7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_11498d4a9c803fc46731da02985456f7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_11498d4a9c803fc46731da02985456f7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_11498d4a9c803fc46731da02985456f7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_11498d4a9c803fc46731da02985456f7,
        type_description_1,
        par_params,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_11498d4a9c803fc46731da02985456f7 == cache_frame_11498d4a9c803fc46731da02985456f7 )
    {
        Py_DECREF( frame_11498d4a9c803fc46731da02985456f7 );
    }
    cache_frame_11498d4a9c803fc46731da02985456f7 = NULL;

    assertFrameObject( frame_11498d4a9c803fc46731da02985456f7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_6__wrap_jac$$$function_3_jac_wrapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

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

    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_6__wrap_jac$$$function_3_jac_wrapped );
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


static PyObject *impl_scipy$optimize$minpack$$$function_7__initialize_feasible( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_lb = python_pars[ 0 ];
    PyObject *par_ub = python_pars[ 1 ];
    PyObject *var_p0 = NULL;
    PyObject *var_lb_finite = NULL;
    PyObject *var_ub_finite = NULL;
    PyObject *var_mask = NULL;
    struct Nuitka_FrameObject *frame_4cde5ecaaf20e577436564b496544da5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4cde5ecaaf20e577436564b496544da5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4cde5ecaaf20e577436564b496544da5, codeobj_4cde5ecaaf20e577436564b496544da5, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4cde5ecaaf20e577436564b496544da5 = cache_frame_4cde5ecaaf20e577436564b496544da5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4cde5ecaaf20e577436564b496544da5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4cde5ecaaf20e577436564b496544da5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 490;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_1 = par_lb;
        frame_4cde5ecaaf20e577436564b496544da5->m_frame.f_lineno = 490;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ones_like, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 490;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_p0 == NULL );
        var_p0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 491;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_2 = par_lb;
        frame_4cde5ecaaf20e577436564b496544da5->m_frame.f_lineno = 491;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_isfinite, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 491;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lb_finite == NULL );
        var_lb_finite = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 492;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_3 = par_ub;
        frame_4cde5ecaaf20e577436564b496544da5->m_frame.f_lineno = 492;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_isfinite, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 492;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ub_finite == NULL );
        var_ub_finite = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_lb_finite );
        tmp_left_name_1 = var_lb_finite;
        CHECK_OBJECT( var_ub_finite );
        tmp_right_name_1 = var_ub_finite;
        tmp_assign_source_4 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 494;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mask == NULL );
        var_mask = tmp_assign_source_4;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_left_name_2 = const_float_0_5;
        CHECK_OBJECT( par_lb );
        tmp_subscribed_name_1 = par_lb;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_1 = var_mask;
        tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ub );
        tmp_subscribed_name_2 = par_ub;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_2 = var_mask;
        tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 495;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_p0 );
        tmp_ass_subscribed_1 = var_p0;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_1 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_lb_finite );
        tmp_left_name_4 = var_lb_finite;
        CHECK_OBJECT( var_ub_finite );
        tmp_operand_name_1 = var_ub_finite;
        tmp_right_name_4 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_1 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 497;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION( PyNumber_And, tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 497;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_mask;
            assert( old != NULL );
            var_mask = tmp_assign_source_5;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_5;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( par_lb );
        tmp_subscribed_name_3 = par_lb;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_3 = var_mask;
        tmp_left_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 498;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = const_int_pos_1;
        tmp_ass_subvalue_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 498;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_p0 );
        tmp_ass_subscribed_2 = var_p0;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_2 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 498;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_6;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_lb_finite );
        tmp_operand_name_2 = var_lb_finite;
        tmp_left_name_6 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_2 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 500;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ub_finite );
        tmp_right_name_6 = var_ub_finite;
        tmp_assign_source_6 = BINARY_OPERATION( PyNumber_And, tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 500;
            type_description_1 = "oooooo";
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
        PyObject *tmp_left_name_7;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_right_name_7;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( par_ub );
        tmp_subscribed_name_4 = par_ub;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_4 = var_mask;
        tmp_left_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 501;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_7 = const_int_pos_1;
        tmp_ass_subvalue_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 501;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_p0 );
        tmp_ass_subscribed_3 = var_p0;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_3 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 501;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cde5ecaaf20e577436564b496544da5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cde5ecaaf20e577436564b496544da5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4cde5ecaaf20e577436564b496544da5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4cde5ecaaf20e577436564b496544da5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4cde5ecaaf20e577436564b496544da5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4cde5ecaaf20e577436564b496544da5,
        type_description_1,
        par_lb,
        par_ub,
        var_p0,
        var_lb_finite,
        var_ub_finite,
        var_mask
    );


    // Release cached frame.
    if ( frame_4cde5ecaaf20e577436564b496544da5 == cache_frame_4cde5ecaaf20e577436564b496544da5 )
    {
        Py_DECREF( frame_4cde5ecaaf20e577436564b496544da5 );
    }
    cache_frame_4cde5ecaaf20e577436564b496544da5 = NULL;

    assertFrameObject( frame_4cde5ecaaf20e577436564b496544da5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_p0 );
    tmp_return_value = var_p0;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_7__initialize_feasible );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)var_p0 );
    Py_DECREF( var_p0 );
    var_p0 = NULL;

    CHECK_OBJECT( (PyObject *)var_lb_finite );
    Py_DECREF( var_lb_finite );
    var_lb_finite = NULL;

    CHECK_OBJECT( (PyObject *)var_ub_finite );
    Py_DECREF( var_ub_finite );
    var_ub_finite = NULL;

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

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    Py_XDECREF( var_p0 );
    var_p0 = NULL;

    Py_XDECREF( var_lb_finite );
    var_lb_finite = NULL;

    Py_XDECREF( var_ub_finite );
    var_ub_finite = NULL;

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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_7__initialize_feasible );
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


static PyObject *impl_scipy$optimize$minpack$$$function_8_curve_fit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *par_xdata = python_pars[ 1 ];
    PyObject *par_ydata = python_pars[ 2 ];
    PyObject *par_p0 = python_pars[ 3 ];
    PyObject *par_sigma = python_pars[ 4 ];
    PyObject *par_absolute_sigma = python_pars[ 5 ];
    PyObject *par_check_finite = python_pars[ 6 ];
    PyObject *par_bounds = python_pars[ 7 ];
    PyObject *par_method = python_pars[ 8 ];
    PyObject *par_jac = python_pars[ 9 ];
    PyObject *par_kwargs = python_pars[ 10 ];
    PyObject *var__getargspec = NULL;
    PyObject *var_args = NULL;
    PyObject *var_varargs = NULL;
    PyObject *var_varkw = NULL;
    PyObject *var_defaults = NULL;
    PyObject *var_n = NULL;
    PyObject *var_lb = NULL;
    PyObject *var_ub = NULL;
    PyObject *var_bounded_problem = NULL;
    PyObject *var_transform = NULL;
    PyObject *var_func = NULL;
    PyObject *var_return_full = NULL;
    PyObject *var_res = NULL;
    PyObject *var_popt = NULL;
    PyObject *var_pcov = NULL;
    PyObject *var_infodict = NULL;
    PyObject *var_errmsg = NULL;
    PyObject *var_ier = NULL;
    PyObject *var_cost = NULL;
    PyObject *var__ = NULL;
    PyObject *var_s = NULL;
    PyObject *var_VT = NULL;
    PyObject *var_threshold = NULL;
    nuitka_bool var_warn_cov = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_s_sq = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__element_4 = NULL;
    PyObject *tmp_tuple_unpack_3__element_5 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9d11936de421eaf8099eaa4f414cd7b7;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9d11936de421eaf8099eaa4f414cd7b7 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9d11936de421eaf8099eaa4f414cd7b7, codeobj_9d11936de421eaf8099eaa4f414cd7b7, module_scipy$optimize$minpack, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9d11936de421eaf8099eaa4f414cd7b7 = cache_frame_9d11936de421eaf8099eaa4f414cd7b7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9d11936de421eaf8099eaa4f414cd7b7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9d11936de421eaf8099eaa4f414cd7b7 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_p0 );
        tmp_compexpr_left_1 = par_p0;
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
            PyObject *tmp_import_name_from_1;
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            PyObject *tmp_level_name_1;
            tmp_name_name_1 = const_str_digest_dbc049f94600503bfbd8944e5239d7ae;
            tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$minpack;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = const_tuple_str_plain_getargspec_no_self_tuple;
            tmp_level_name_1 = const_int_0;
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 680;
            tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
            if ( tmp_import_name_from_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 680;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_getargspec_no_self );
            Py_DECREF( tmp_import_name_from_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 680;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            assert( var__getargspec == NULL );
            var__getargspec = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( var__getargspec );
            tmp_called_name_1 = var__getargspec;
            CHECK_OBJECT( par_f );
            tmp_args_element_name_1 = par_f;
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 681;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 681;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 681;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
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
            tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 4 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                exception_lineno = 681;
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
            tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 4 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                exception_lineno = 681;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 2, 4 );
            if ( tmp_assign_source_5 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                exception_lineno = 681;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_3 == NULL );
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_4, 3, 4 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                exception_lineno = 681;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_4 == NULL );
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        exception_lineno = 681;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                exception_lineno = 681;
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

        Py_XDECREF( tmp_tuple_unpack_1__element_4 );
        tmp_tuple_unpack_1__element_4 = NULL;

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
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
            assert( var_args == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_args = tmp_assign_source_7;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
            assert( var_varargs == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_varargs = tmp_assign_source_8;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
            tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
            assert( var_varkw == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_varkw = tmp_assign_source_9;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
            tmp_assign_source_10 = tmp_tuple_unpack_1__element_4;
            assert( var_defaults == NULL );
            Py_INCREF( tmp_assign_source_10 );
            var_defaults = tmp_assign_source_10;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_4 );
        tmp_tuple_unpack_1__element_4 = NULL;

        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT( var_args );
            tmp_len_arg_1 = var_args;
            tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 682;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            assert( !(tmp_res == -1) );
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_f7ec2a90fc58e4d5b738a2a2198e3049;
                frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 683;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 683;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_left_name_1;
            PyObject *tmp_len_arg_2;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_args );
            tmp_len_arg_2 = var_args;
            tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 684;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_11 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            assert( !(tmp_assign_source_11 == NULL) );
            assert( var_n == NULL );
            var_n = tmp_assign_source_11;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 686;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_p0 );
            tmp_args_element_name_2 = par_p0;
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 686;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_atleast_1d, call_args );
            }

            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 686;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_p0;
                assert( old != NULL );
                par_p0 = tmp_assign_source_12;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_p0 );
            tmp_source_name_1 = par_p0;
            tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 687;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            assert( var_n == NULL );
            var_n = tmp_assign_source_13;
        }
        branch_end_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_prepare_bounds );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_prepare_bounds );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "prepare_bounds" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 689;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto try_except_handler_4;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_bounds );
        tmp_args_element_name_3 = par_bounds;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_4 = var_n;
        frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 689;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 689;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto try_except_handler_4;
        }
        tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 689;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
        if ( tmp_assign_source_15 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            exception_lineno = 689;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            exception_lineno = 689;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_16;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    exception_lineno = 689;
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

            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            exception_lineno = 689;
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
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_1;
        assert( var_lb == NULL );
        Py_INCREF( tmp_assign_source_17 );
        var_lb = tmp_assign_source_17;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_2;
        assert( var_ub == NULL );
        Py_INCREF( tmp_assign_source_18 );
        var_ub = tmp_assign_source_18;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_p0 );
        tmp_compexpr_left_3 = par_p0;
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
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__initialize_feasible );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__initialize_feasible );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_initialize_feasible" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 691;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_lb );
            tmp_args_element_name_5 = var_lb;
            CHECK_OBJECT( var_ub );
            tmp_args_element_name_6 = var_ub;
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 691;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 691;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_p0;
                assert( old != NULL );
                par_p0 = tmp_assign_source_19;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_right_name_2;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 693;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_any );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 693;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lb );
        tmp_compexpr_left_4 = var_lb;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 693;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_5;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_inf );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 693;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 693;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 693;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ub );
        tmp_compexpr_left_5 = var_ub;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 693;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_6;
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_inf );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 693;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 693;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 693;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 693;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 693;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        assert( var_bounded_problem == NULL );
        var_bounded_problem = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_method );
        tmp_compexpr_left_6 = par_method;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_4 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_5;
            int tmp_truth_name_1;
            CHECK_OBJECT( var_bounded_problem );
            tmp_truth_name_1 = CHECK_IF_TRUE( var_bounded_problem );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 695;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_21;
                tmp_assign_source_21 = const_str_plain_trf;
                {
                    PyObject *old = par_method;
                    assert( old != NULL );
                    par_method = tmp_assign_source_21;
                    Py_INCREF( par_method );
                    Py_DECREF( old );
                }

            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_assign_source_22;
                tmp_assign_source_22 = const_str_plain_lm;
                {
                    PyObject *old = par_method;
                    assert( old != NULL );
                    par_method = tmp_assign_source_22;
                    Py_INCREF( par_method );
                    Py_DECREF( old );
                }

            }
            branch_end_5:;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        int tmp_truth_name_2;
        if ( par_method == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 700;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_7 = par_method;
        tmp_compexpr_right_7 = const_str_plain_lm;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 700;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
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
        CHECK_OBJECT( var_bounded_problem );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_bounded_problem );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 700;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_6 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_b58da9da20ae5c38c5bdafedc249867d;
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 701;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 701;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_check_finite );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_check_finite );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 707;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 708;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_7;
            CHECK_OBJECT( par_ydata );
            tmp_args_element_name_8 = par_ydata;
            tmp_args_element_name_9 = (PyObject *)&PyFloat_Type;
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 708;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_assign_source_23 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_asarray_chkfinite, call_args );
            }

            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 708;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_ydata;
                assert( old != NULL );
                par_ydata = tmp_assign_source_23;
                Py_DECREF( old );
            }

        }
        goto branch_end_7;
        branch_no_7:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 710;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_8;
            CHECK_OBJECT( par_ydata );
            tmp_args_element_name_10 = par_ydata;
            tmp_args_element_name_11 = (PyObject *)&PyFloat_Type;
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 710;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_assign_source_24 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_asarray, call_args );
            }

            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 710;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_ydata;
                assert( old != NULL );
                par_ydata = tmp_assign_source_24;
                Py_DECREF( old );
            }

        }
        branch_end_7:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_9;
        CHECK_OBJECT( par_xdata );
        tmp_isinstance_inst_1 = par_xdata;
        tmp_tuple_element_1 = (PyObject *)&PyList_Type;
        tmp_isinstance_cls_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = (PyObject *)&PyTuple_Type;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_isinstance_cls_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 712;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_9;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ndarray );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_isinstance_cls_1 );

            exception_lineno = 712;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 2, tmp_tuple_element_1 );
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 712;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
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
        {
            nuitka_bool tmp_condition_result_9;
            int tmp_truth_name_4;
            CHECK_OBJECT( par_check_finite );
            tmp_truth_name_4 = CHECK_IF_TRUE( par_check_finite );
            if ( tmp_truth_name_4 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 715;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_9 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_25;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_mvar_value_10;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_args_element_name_13;
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 716;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_4 = tmp_mvar_value_10;
                CHECK_OBJECT( par_xdata );
                tmp_args_element_name_12 = par_xdata;
                tmp_args_element_name_13 = (PyObject *)&PyFloat_Type;
                frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 716;
                {
                    PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
                    tmp_assign_source_25 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_asarray_chkfinite, call_args );
                }

                if ( tmp_assign_source_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 716;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_xdata;
                    assert( old != NULL );
                    par_xdata = tmp_assign_source_25;
                    Py_DECREF( old );
                }

            }
            goto branch_end_9;
            branch_no_9:;
            {
                PyObject *tmp_assign_source_26;
                PyObject *tmp_called_instance_5;
                PyObject *tmp_mvar_value_11;
                PyObject *tmp_args_element_name_14;
                PyObject *tmp_args_element_name_15;
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 718;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_5 = tmp_mvar_value_11;
                CHECK_OBJECT( par_xdata );
                tmp_args_element_name_14 = par_xdata;
                tmp_args_element_name_15 = (PyObject *)&PyFloat_Type;
                frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 718;
                {
                    PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
                    tmp_assign_source_26 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_asarray, call_args );
                }

                if ( tmp_assign_source_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 718;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_xdata;
                    assert( old != NULL );
                    par_xdata = tmp_assign_source_26;
                    Py_DECREF( old );
                }

            }
            branch_end_9:;
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_ydata );
        tmp_source_name_6 = par_ydata;
        tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_size );
        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 720;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_8 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_left_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 720;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            tmp_make_exception_arg_3 = const_str_digest_5b12bf06ed232a9b2effde7e86289099;
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 721;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 721;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        branch_no_10:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT( par_sigma );
        tmp_compexpr_left_9 = par_sigma;
        tmp_compexpr_right_9 = Py_None;
        tmp_condition_result_11 = ( tmp_compexpr_left_9 != tmp_compexpr_right_9 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_element_name_16;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 725;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = tmp_mvar_value_12;
            CHECK_OBJECT( par_sigma );
            tmp_args_element_name_16 = par_sigma;
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 725;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_assign_source_27 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_asarray, call_args );
            }

            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 725;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_sigma;
                assert( old != NULL );
                par_sigma = tmp_assign_source_27;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            PyObject *tmp_source_name_7;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( par_sigma );
            tmp_source_name_7 = par_sigma;
            tmp_compexpr_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
            if ( tmp_compexpr_left_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 728;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ydata );
            tmp_source_name_8 = par_ydata;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_size );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_10 );

                exception_lineno = 728;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_10 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_compexpr_right_10, 0, tmp_tuple_element_2 );
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
            Py_DECREF( tmp_compexpr_left_10 );
            Py_DECREF( tmp_compexpr_right_10 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 728;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_28;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                tmp_left_name_3 = const_float_1_0;
                CHECK_OBJECT( par_sigma );
                tmp_right_name_3 = par_sigma;
                tmp_assign_source_28 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
                if ( tmp_assign_source_28 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 729;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }
                assert( var_transform == NULL );
                var_transform = tmp_assign_source_28;
            }
            goto branch_end_12;
            branch_no_12:;
            {
                nuitka_bool tmp_condition_result_13;
                PyObject *tmp_compexpr_left_11;
                PyObject *tmp_compexpr_right_11;
                PyObject *tmp_source_name_9;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_source_name_10;
                PyObject *tmp_source_name_11;
                CHECK_OBJECT( par_sigma );
                tmp_source_name_9 = par_sigma;
                tmp_compexpr_left_11 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
                if ( tmp_compexpr_left_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 732;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_ydata );
                tmp_source_name_10 = par_ydata;
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_size );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_11 );

                    exception_lineno = 732;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_11 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_compexpr_right_11, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( par_ydata );
                tmp_source_name_11 = par_ydata;
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_size );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_11 );
                    Py_DECREF( tmp_compexpr_right_11 );

                    exception_lineno = 732;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_compexpr_right_11, 1, tmp_tuple_element_3 );
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
                Py_DECREF( tmp_compexpr_left_11 );
                Py_DECREF( tmp_compexpr_right_11 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 732;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_13;
                }
                else
                {
                    goto branch_no_13;
                }
                branch_yes_13:;
                // Tried code:
                {
                    PyObject *tmp_assign_source_29;
                    PyObject *tmp_called_name_5;
                    PyObject *tmp_mvar_value_13;
                    PyObject *tmp_args_name_1;
                    PyObject *tmp_tuple_element_4;
                    PyObject *tmp_kw_name_1;
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_cholesky );

                    if (unlikely( tmp_mvar_value_13 == NULL ))
                    {
                        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cholesky );
                    }

                    if ( tmp_mvar_value_13 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cholesky" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 735;
                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        goto try_except_handler_6;
                    }

                    tmp_called_name_5 = tmp_mvar_value_13;
                    CHECK_OBJECT( par_sigma );
                    tmp_tuple_element_4 = par_sigma;
                    tmp_args_name_1 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_4 );
                    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_4 );
                    tmp_kw_name_1 = PyDict_Copy( const_dict_0f2519a6c952cc568952beb42c1e9b1d );
                    frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 735;
                    tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
                    Py_DECREF( tmp_args_name_1 );
                    Py_DECREF( tmp_kw_name_1 );
                    if ( tmp_assign_source_29 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 735;
                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        goto try_except_handler_6;
                    }
                    assert( var_transform == NULL );
                    var_transform = tmp_assign_source_29;
                }
                goto try_end_5;
                // Exception handler code:
                try_except_handler_6:;
                exception_keeper_type_5 = exception_type;
                exception_keeper_value_5 = exception_value;
                exception_keeper_tb_5 = exception_tb;
                exception_keeper_lineno_5 = exception_lineno;
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

                if ( exception_keeper_tb_5 == NULL )
                {
                    exception_keeper_tb_5 = MAKE_TRACEBACK( frame_9d11936de421eaf8099eaa4f414cd7b7, exception_keeper_lineno_5 );
                }
                else if ( exception_keeper_lineno_5 != 0 )
                {
                    exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_9d11936de421eaf8099eaa4f414cd7b7, exception_keeper_lineno_5 );
                }

                NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
                PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
                PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
                // Tried code:
                {
                    nuitka_bool tmp_condition_result_14;
                    PyObject *tmp_compexpr_left_12;
                    PyObject *tmp_compexpr_right_12;
                    PyObject *tmp_mvar_value_14;
                    tmp_compexpr_left_12 = EXC_TYPE(PyThreadState_GET());
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_LinAlgError );

                    if (unlikely( tmp_mvar_value_14 == NULL ))
                    {
                        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
                    }

                    if ( tmp_mvar_value_14 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 736;
                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        goto try_except_handler_7;
                    }

                    tmp_compexpr_right_12 = tmp_mvar_value_14;
                    tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_12, tmp_compexpr_right_12 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 736;
                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        goto try_except_handler_7;
                    }
                    tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_raise_type_4;
                        PyObject *tmp_make_exception_arg_4;
                        tmp_make_exception_arg_4 = const_str_digest_344601044641b9ece32970c4d2464dec;
                        frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 737;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_4 };
                            tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        assert( !(tmp_raise_type_4 == NULL) );
                        exception_type = tmp_raise_type_4;
                        exception_lineno = 737;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        goto try_except_handler_7;
                    }
                    goto branch_end_14;
                    branch_no_14:;
                    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    if (unlikely( tmp_result == false ))
                    {
                        exception_lineno = 733;
                    }

                    if (exception_tb && exception_tb->tb_frame == &frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame) frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = exception_tb->tb_lineno;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto try_except_handler_7;
                    branch_end_14:;
                }
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_8_curve_fit );
                return NULL;
                // Exception handler code:
                try_except_handler_7:;
                exception_keeper_type_6 = exception_type;
                exception_keeper_value_6 = exception_value;
                exception_keeper_tb_6 = exception_tb;
                exception_keeper_lineno_6 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                // Restore previous exception.
                SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
                // Re-raise.
                exception_type = exception_keeper_type_6;
                exception_value = exception_keeper_value_6;
                exception_tb = exception_keeper_tb_6;
                exception_lineno = exception_keeper_lineno_6;

                goto frame_exception_exit_1;
                // End of try:
                // End of try:
                try_end_5:;
                goto branch_end_13;
                branch_no_13:;
                {
                    PyObject *tmp_raise_type_5;
                    PyObject *tmp_make_exception_arg_5;
                    tmp_make_exception_arg_5 = const_str_digest_706028f613531401bfba1900ba48fd04;
                    frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 739;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_5 };
                        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_5 == NULL) );
                    exception_type = tmp_raise_type_5;
                    exception_lineno = 739;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }
                branch_end_13:;
            }
            branch_end_12:;
        }
        goto branch_end_11;
        branch_no_11:;
        {
            PyObject *tmp_assign_source_30;
            tmp_assign_source_30 = Py_None;
            assert( var_transform == NULL );
            Py_INCREF( tmp_assign_source_30 );
            var_transform = tmp_assign_source_30;
        }
        branch_end_11:;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__wrap_func );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrap_func );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_wrap_func" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 743;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_15;
        CHECK_OBJECT( par_f );
        tmp_args_element_name_17 = par_f;
        if ( par_xdata == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "xdata" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 743;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_18 = par_xdata;
        CHECK_OBJECT( par_ydata );
        tmp_args_element_name_19 = par_ydata;
        if ( var_transform == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "transform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 743;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_20 = var_transform;
        frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 743;
        {
            PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 743;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        assert( var_func == NULL );
        var_func = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_called_name_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_21;
        int tmp_truth_name_5;
        tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_callable );
        assert( tmp_called_name_7 != NULL );
        CHECK_OBJECT( par_jac );
        tmp_args_element_name_21 = par_jac;
        frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 744;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 744;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 744;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_args_element_name_23;
            PyObject *tmp_args_element_name_24;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__wrap_jac );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrap_jac );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_wrap_jac" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 745;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_8 = tmp_mvar_value_16;
            CHECK_OBJECT( par_jac );
            tmp_args_element_name_22 = par_jac;
            if ( par_xdata == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "xdata" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 745;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_23 = par_xdata;
            if ( var_transform == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "transform" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 745;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_24 = var_transform;
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 745;
            {
                PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24 };
                tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, call_args );
            }

            if ( tmp_assign_source_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 745;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_jac;
                assert( old != NULL );
                par_jac = tmp_assign_source_32;
                Py_DECREF( old );
            }

        }
        goto branch_end_15;
        branch_no_15:;
        {
            nuitka_bool tmp_condition_result_16;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_compexpr_left_13;
            PyObject *tmp_compexpr_right_13;
            PyObject *tmp_compexpr_left_14;
            PyObject *tmp_compexpr_right_14;
            CHECK_OBJECT( par_jac );
            tmp_compexpr_left_13 = par_jac;
            tmp_compexpr_right_13 = Py_None;
            tmp_and_left_value_2 = ( tmp_compexpr_left_13 == tmp_compexpr_right_13 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            if ( par_method == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 746;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_14 = par_method;
            tmp_compexpr_right_14 = const_str_plain_lm;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 746;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_16 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_condition_result_16 = tmp_and_left_value_2;
            and_end_2:;
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
                PyObject *tmp_assign_source_33;
                tmp_assign_source_33 = const_str_digest_9bca7c4227b5a1da023f6724018a8c27;
                {
                    PyObject *old = par_jac;
                    assert( old != NULL );
                    par_jac = tmp_assign_source_33;
                    Py_INCREF( par_jac );
                    Py_DECREF( old );
                }

            }
            branch_no_16:;
        }
        branch_end_15:;
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        if ( par_method == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 749;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_15 = par_method;
        tmp_compexpr_right_15 = const_str_plain_lm;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 749;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_instance_7;
            CHECK_OBJECT( par_kwargs );
            tmp_called_instance_7 = par_kwargs;
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 751;
            tmp_assign_source_34 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_full_output_false_tuple, 0 ) );

            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 751;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            assert( var_return_full == NULL );
            var_return_full = tmp_assign_source_34;
        }
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dircall_arg4_1;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_leastsq );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_leastsq );
            }

            if ( tmp_mvar_value_17 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "leastsq" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 752;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg1_1 = tmp_mvar_value_17;
            CHECK_OBJECT( var_func );
            tmp_tuple_element_5 = var_func;
            tmp_dircall_arg2_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_5 );
            if ( par_p0 == NULL )
            {
                Py_DECREF( tmp_dircall_arg2_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p0" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 752;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_5 = par_p0;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_5 );
            tmp_dict_key_1 = const_str_plain_Dfun;
            if ( par_jac == NULL )
            {
                Py_DECREF( tmp_dircall_arg2_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 752;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_1 = par_jac;
            tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_full_output;
            tmp_dict_value_2 = const_int_pos_1;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( par_kwargs );
            tmp_dircall_arg4_1 = par_kwargs;
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg4_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_assign_source_35 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 752;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            assert( var_res == NULL );
            var_res = tmp_assign_source_35;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( var_res );
            tmp_iter_arg_3 = var_res;
            tmp_assign_source_36 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 753;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_3__source_iter == NULL );
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_36;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_37 = UNPACK_NEXT( tmp_unpack_7, 0, 5 );
            if ( tmp_assign_source_37 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                exception_lineno = 753;
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_3__element_1 == NULL );
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_37;
        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_38 = UNPACK_NEXT( tmp_unpack_8, 1, 5 );
            if ( tmp_assign_source_38 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                exception_lineno = 753;
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_38;
        }
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_39 = UNPACK_NEXT( tmp_unpack_9, 2, 5 );
            if ( tmp_assign_source_39 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                exception_lineno = 753;
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_3__element_3 == NULL );
            tmp_tuple_unpack_3__element_3 = tmp_assign_source_39;
        }
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_10 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_40 = UNPACK_NEXT( tmp_unpack_10, 3, 5 );
            if ( tmp_assign_source_40 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                exception_lineno = 753;
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_3__element_4 == NULL );
            tmp_tuple_unpack_3__element_4 = tmp_assign_source_40;
        }
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_11 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_41 = UNPACK_NEXT( tmp_unpack_11, 4, 5 );
            if ( tmp_assign_source_41 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                exception_lineno = 753;
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_3__element_5 == NULL );
            tmp_tuple_unpack_3__element_5 = tmp_assign_source_41;
        }
        {
            PyObject *tmp_iterator_name_3;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_3 ); assert( HAS_ITERNEXT( tmp_iterator_name_3 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

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

                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        exception_lineno = 753;
                        goto try_except_handler_9;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                exception_lineno = 753;
                goto try_except_handler_9;
            }
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        try_end_6:;
        goto try_end_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_3 );
        tmp_tuple_unpack_3__element_3 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_4 );
        tmp_tuple_unpack_3__element_4 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_5 );
        tmp_tuple_unpack_3__element_5 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_1;
        // End of try:
        try_end_7:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        {
            PyObject *tmp_assign_source_42;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_42 = tmp_tuple_unpack_3__element_1;
            assert( var_popt == NULL );
            Py_INCREF( tmp_assign_source_42 );
            var_popt = tmp_assign_source_42;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_43;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_43 = tmp_tuple_unpack_3__element_2;
            assert( var_pcov == NULL );
            Py_INCREF( tmp_assign_source_43 );
            var_pcov = tmp_assign_source_43;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_assign_source_44;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
            tmp_assign_source_44 = tmp_tuple_unpack_3__element_3;
            assert( var_infodict == NULL );
            Py_INCREF( tmp_assign_source_44 );
            var_infodict = tmp_assign_source_44;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_3 );
        tmp_tuple_unpack_3__element_3 = NULL;

        {
            PyObject *tmp_assign_source_45;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_4 );
            tmp_assign_source_45 = tmp_tuple_unpack_3__element_4;
            assert( var_errmsg == NULL );
            Py_INCREF( tmp_assign_source_45 );
            var_errmsg = tmp_assign_source_45;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_4 );
        tmp_tuple_unpack_3__element_4 = NULL;

        {
            PyObject *tmp_assign_source_46;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_5 );
            tmp_assign_source_46 = tmp_tuple_unpack_3__element_5;
            assert( var_ier == NULL );
            Py_INCREF( tmp_assign_source_46 );
            var_ier = tmp_assign_source_46;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_5 );
        tmp_tuple_unpack_3__element_5 = NULL;

        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_12;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_left_name_4;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_4;
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 754;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_12 = tmp_mvar_value_18;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_sum );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 754;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_infodict );
            tmp_subscribed_name_1 = var_infodict;
            tmp_subscript_name_1 = const_str_plain_fvec;
            tmp_left_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_9 );

                exception_lineno = 754;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = const_int_pos_2;
            tmp_args_element_name_25 = POWER_OPERATION( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            if ( tmp_args_element_name_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_9 );

                exception_lineno = 754;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 754;
            {
                PyObject *call_args[] = { tmp_args_element_name_25 };
                tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_25 );
            if ( tmp_assign_source_47 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 754;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            assert( var_cost == NULL );
            var_cost = tmp_assign_source_47;
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_compexpr_left_16;
            PyObject *tmp_compexpr_right_16;
            CHECK_OBJECT( var_ier );
            tmp_compexpr_left_16 = var_ier;
            tmp_compexpr_right_16 = LIST_COPY( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_list );
            tmp_res = PySequence_Contains( tmp_compexpr_right_16, tmp_compexpr_left_16 );
            Py_DECREF( tmp_compexpr_right_16 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 755;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_18 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_6;
                PyObject *tmp_make_exception_arg_6;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                tmp_left_name_5 = const_str_digest_aa3bad273e69043e8faa5e7d46af98ae;
                CHECK_OBJECT( var_errmsg );
                tmp_right_name_5 = var_errmsg;
                tmp_make_exception_arg_6 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_5, tmp_right_name_5 );
                if ( tmp_make_exception_arg_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 756;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }
                frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 756;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_6 };
                    tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_6 );
                assert( !(tmp_raise_type_6 == NULL) );
                exception_type = tmp_raise_type_6;
                exception_lineno = 756;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            branch_no_18:;
        }
        goto branch_end_17;
        branch_no_17:;
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_compexpr_left_17;
            PyObject *tmp_compexpr_right_17;
            tmp_compexpr_left_17 = const_str_plain_max_nfev;
            CHECK_OBJECT( par_kwargs );
            tmp_compexpr_right_17 = par_kwargs;
            tmp_res = PySequence_Contains( tmp_compexpr_right_17, tmp_compexpr_left_17 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 759;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_19 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_called_instance_8;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                CHECK_OBJECT( par_kwargs );
                tmp_called_instance_8 = par_kwargs;
                frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 760;
                tmp_ass_subvalue_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_8, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_maxfev_none_tuple, 0 ) );

                if ( tmp_ass_subvalue_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 760;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_kwargs );
                tmp_ass_subscribed_1 = par_kwargs;
                tmp_ass_subscript_1 = const_str_plain_max_nfev;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subvalue_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 760;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }
            }
            branch_no_19:;
        }
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_dircall_arg1_2;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_dircall_arg2_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_dircall_arg3_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dircall_arg4_2;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_least_squares );

            if (unlikely( tmp_mvar_value_19 == NULL ))
            {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_least_squares );
            }

            if ( tmp_mvar_value_19 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "least_squares" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 762;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg1_2 = tmp_mvar_value_19;
            CHECK_OBJECT( var_func );
            tmp_tuple_element_6 = var_func;
            tmp_dircall_arg2_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_6 );
            if ( par_p0 == NULL )
            {
                Py_DECREF( tmp_dircall_arg2_2 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p0" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 762;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_6 = par_p0;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_6 );
            tmp_dict_key_3 = const_str_plain_jac;
            if ( par_jac == NULL )
            {
                Py_DECREF( tmp_dircall_arg2_2 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 762;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_3 = par_jac;
            tmp_dircall_arg3_2 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_4 = const_str_plain_bounds;
            CHECK_OBJECT( par_bounds );
            tmp_dict_value_4 = par_bounds;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_5 = const_str_plain_method;
            if ( par_method == NULL )
            {
                Py_DECREF( tmp_dircall_arg2_2 );
                Py_DECREF( tmp_dircall_arg3_2 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 762;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_5 = par_method;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( par_kwargs );
            tmp_dircall_arg4_2 = par_kwargs;
            Py_INCREF( tmp_dircall_arg1_2 );
            Py_INCREF( tmp_dircall_arg4_2 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
                tmp_assign_source_48 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_48 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 762;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            assert( var_res == NULL );
            var_res = tmp_assign_source_48;
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_13;
            CHECK_OBJECT( var_res );
            tmp_source_name_13 = var_res;
            tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_success );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 765;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 765;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_20 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_7;
                PyObject *tmp_make_exception_arg_7;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_source_name_14;
                tmp_left_name_6 = const_str_digest_aa3bad273e69043e8faa5e7d46af98ae;
                CHECK_OBJECT( var_res );
                tmp_source_name_14 = var_res;
                tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_message );
                if ( tmp_right_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 766;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }
                tmp_make_exception_arg_7 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_make_exception_arg_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 766;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }
                frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 766;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_7 };
                    tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_7 );
                assert( !(tmp_raise_type_7 == NULL) );
                exception_type = tmp_raise_type_7;
                exception_lineno = 766;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            branch_no_20:;
        }
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_source_name_15;
            tmp_left_name_7 = const_int_pos_2;
            CHECK_OBJECT( var_res );
            tmp_source_name_15 = var_res;
            tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_cost );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 768;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_49 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_assign_source_49 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 768;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            assert( var_cost == NULL );
            var_cost = tmp_assign_source_49;
        }
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_source_name_16;
            CHECK_OBJECT( var_res );
            tmp_source_name_16 = var_res;
            tmp_assign_source_50 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_x );
            if ( tmp_assign_source_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 769;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            assert( var_popt == NULL );
            var_popt = tmp_assign_source_50;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_20;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_source_name_17;
            PyObject *tmp_kw_name_2;
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_svd );

            if (unlikely( tmp_mvar_value_20 == NULL ))
            {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_svd );
            }

            if ( tmp_mvar_value_20 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "svd" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 772;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto try_except_handler_10;
            }

            tmp_called_name_10 = tmp_mvar_value_20;
            CHECK_OBJECT( var_res );
            tmp_source_name_17 = var_res;
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_jac );
            if ( tmp_tuple_element_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 772;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto try_except_handler_10;
            }
            tmp_args_name_2 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_7 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_879d90f7995f6ab655dbe7fad38230a5 );
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 772;
            tmp_iter_arg_4 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_iter_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 772;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto try_except_handler_10;
            }
            tmp_assign_source_51 = MAKE_ITERATOR( tmp_iter_arg_4 );
            Py_DECREF( tmp_iter_arg_4 );
            if ( tmp_assign_source_51 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 772;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto try_except_handler_10;
            }
            assert( tmp_tuple_unpack_4__source_iter == NULL );
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_51;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_unpack_12;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_12 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_52 = UNPACK_NEXT( tmp_unpack_12, 0, 3 );
            if ( tmp_assign_source_52 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                exception_lineno = 772;
                goto try_except_handler_11;
            }
            assert( tmp_tuple_unpack_4__element_1 == NULL );
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_52;
        }
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_unpack_13;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_13 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_53 = UNPACK_NEXT( tmp_unpack_13, 1, 3 );
            if ( tmp_assign_source_53 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                exception_lineno = 772;
                goto try_except_handler_11;
            }
            assert( tmp_tuple_unpack_4__element_2 == NULL );
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_53;
        }
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_unpack_14;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_14 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_54 = UNPACK_NEXT( tmp_unpack_14, 2, 3 );
            if ( tmp_assign_source_54 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                exception_lineno = 772;
                goto try_except_handler_11;
            }
            assert( tmp_tuple_unpack_4__element_3 == NULL );
            tmp_tuple_unpack_4__element_3 = tmp_assign_source_54;
        }
        {
            PyObject *tmp_iterator_name_4;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_4 ); assert( HAS_ITERNEXT( tmp_iterator_name_4 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_4 )->tp_iternext)( tmp_iterator_name_4 );

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

                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        exception_lineno = 772;
                        goto try_except_handler_11;
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

                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                exception_lineno = 772;
                goto try_except_handler_11;
            }
        }
        goto try_end_8;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
        Py_DECREF( tmp_tuple_unpack_4__source_iter );
        tmp_tuple_unpack_4__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        try_end_8:;
        goto try_end_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_4__element_1 );
        tmp_tuple_unpack_4__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_4__element_2 );
        tmp_tuple_unpack_4__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_4__element_3 );
        tmp_tuple_unpack_4__element_3 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_1;
        // End of try:
        try_end_9:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
        Py_DECREF( tmp_tuple_unpack_4__source_iter );
        tmp_tuple_unpack_4__source_iter = NULL;

        {
            PyObject *tmp_assign_source_55;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
            tmp_assign_source_55 = tmp_tuple_unpack_4__element_1;
            assert( var__ == NULL );
            Py_INCREF( tmp_assign_source_55 );
            var__ = tmp_assign_source_55;
        }
        Py_XDECREF( tmp_tuple_unpack_4__element_1 );
        tmp_tuple_unpack_4__element_1 = NULL;

        {
            PyObject *tmp_assign_source_56;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
            tmp_assign_source_56 = tmp_tuple_unpack_4__element_2;
            assert( var_s == NULL );
            Py_INCREF( tmp_assign_source_56 );
            var_s = tmp_assign_source_56;
        }
        Py_XDECREF( tmp_tuple_unpack_4__element_2 );
        tmp_tuple_unpack_4__element_2 = NULL;

        {
            PyObject *tmp_assign_source_57;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_3 );
            tmp_assign_source_57 = tmp_tuple_unpack_4__element_3;
            assert( var_VT == NULL );
            Py_INCREF( tmp_assign_source_57 );
            var_VT = tmp_assign_source_57;
        }
        Py_XDECREF( tmp_tuple_unpack_4__element_3 );
        tmp_tuple_unpack_4__element_3 = NULL;

        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_left_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_source_name_18;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_mvar_value_21;
            PyObject *tmp_right_name_8;
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_source_name_19;
            PyObject *tmp_source_name_20;
            PyObject *tmp_right_name_9;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_21 == NULL ))
            {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_21 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 773;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_9 = tmp_mvar_value_21;
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 773;
            tmp_source_name_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_finfo, &PyTuple_GET_ITEM( const_tuple_type_float_tuple, 0 ) );

            if ( tmp_source_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 773;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_eps );
            Py_DECREF( tmp_source_name_18 );
            if ( tmp_left_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 773;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_11 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_11 != NULL );
            CHECK_OBJECT( var_res );
            tmp_source_name_20 = var_res;
            tmp_source_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_jac );
            if ( tmp_source_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_9 );

                exception_lineno = 773;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_shape );
            Py_DECREF( tmp_source_name_19 );
            if ( tmp_args_element_name_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_9 );

                exception_lineno = 773;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 773;
            {
                PyObject *call_args[] = { tmp_args_element_name_26 };
                tmp_right_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            Py_DECREF( tmp_args_element_name_26 );
            if ( tmp_right_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_9 );

                exception_lineno = 773;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_9 );
            Py_DECREF( tmp_right_name_8 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 773;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_s );
            tmp_subscribed_name_2 = var_s;
            tmp_subscript_name_2 = const_int_0;
            tmp_right_name_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_right_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 773;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_58 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_9 );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_right_name_9 );
            if ( tmp_assign_source_58 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 773;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            assert( var_threshold == NULL );
            var_threshold = tmp_assign_source_58;
        }
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_compexpr_left_18;
            PyObject *tmp_compexpr_right_18;
            CHECK_OBJECT( var_s );
            tmp_subscribed_name_3 = var_s;
            CHECK_OBJECT( var_s );
            tmp_compexpr_left_18 = var_s;
            CHECK_OBJECT( var_threshold );
            tmp_compexpr_right_18 = var_threshold;
            tmp_subscript_name_3 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_18, tmp_compexpr_right_18 );
            if ( tmp_subscript_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 774;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_59 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            Py_DECREF( tmp_subscript_name_3 );
            if ( tmp_assign_source_59 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 774;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_s;
                assert( old != NULL );
                var_s = tmp_assign_source_59;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_source_name_21;
            PyObject *tmp_step_name_1;
            CHECK_OBJECT( var_VT );
            tmp_subscribed_name_4 = var_VT;
            tmp_start_name_1 = Py_None;
            CHECK_OBJECT( var_s );
            tmp_source_name_21 = var_s;
            tmp_stop_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_size );
            if ( tmp_stop_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 775;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            Py_DECREF( tmp_stop_name_1 );
            assert( !(tmp_subscript_name_4 == NULL) );
            tmp_assign_source_60 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_assign_source_60 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 775;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_VT;
                assert( old != NULL );
                var_VT = tmp_assign_source_60;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_called_name_12;
            PyObject *tmp_source_name_22;
            PyObject *tmp_mvar_value_22;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_left_name_10;
            PyObject *tmp_source_name_23;
            PyObject *tmp_right_name_10;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            PyObject *tmp_args_element_name_28;
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 776;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_22 = tmp_mvar_value_22;
            tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_dot );
            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 776;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_VT );
            tmp_source_name_23 = var_VT;
            tmp_left_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_T );
            if ( tmp_left_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );

                exception_lineno = 776;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_s );
            tmp_left_name_11 = var_s;
            tmp_right_name_11 = const_int_pos_2;
            tmp_right_name_10 = POWER_OPERATION( tmp_left_name_11, tmp_right_name_11 );
            if ( tmp_right_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );
                Py_DECREF( tmp_left_name_10 );

                exception_lineno = 776;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_27 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
            Py_DECREF( tmp_left_name_10 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_args_element_name_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );

                exception_lineno = 776;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_VT );
            tmp_args_element_name_28 = var_VT;
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 776;
            {
                PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28 };
                tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
            }

            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_args_element_name_27 );
            if ( tmp_assign_source_61 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 776;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            assert( var_pcov == NULL );
            var_pcov = tmp_assign_source_61;
        }
        {
            PyObject *tmp_assign_source_62;
            tmp_assign_source_62 = Py_False;
            assert( var_return_full == NULL );
            Py_INCREF( tmp_assign_source_62 );
            var_return_full = tmp_assign_source_62;
        }
        branch_end_17:;
    }
    {
        nuitka_bool tmp_assign_source_63;
        tmp_assign_source_63 = NUITKA_BOOL_FALSE;
        var_warn_cov = tmp_assign_source_63;
    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_compexpr_left_19;
        PyObject *tmp_compexpr_right_19;
        CHECK_OBJECT( var_pcov );
        tmp_compexpr_left_19 = var_pcov;
        tmp_compexpr_right_19 = Py_None;
        tmp_condition_result_21 = ( tmp_compexpr_left_19 == tmp_compexpr_right_19 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_64;
            PyObject *tmp_called_name_13;
            PyObject *tmp_mvar_value_23;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_len_arg_3;
            PyObject *tmp_len_arg_4;
            PyObject *tmp_kw_name_3;
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_zeros );

            if (unlikely( tmp_mvar_value_23 == NULL ))
            {
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
            }

            if ( tmp_mvar_value_23 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 782;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_13 = tmp_mvar_value_23;
            CHECK_OBJECT( var_popt );
            tmp_len_arg_3 = var_popt;
            tmp_tuple_element_9 = BUILTIN_LEN( tmp_len_arg_3 );
            if ( tmp_tuple_element_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 782;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_8 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_tuple_element_8, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( var_popt );
            tmp_len_arg_4 = var_popt;
            tmp_tuple_element_9 = BUILTIN_LEN( tmp_len_arg_4 );
            if ( tmp_tuple_element_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_tuple_element_8 );

                exception_lineno = 782;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_tuple_element_8, 1, tmp_tuple_element_9 );
            tmp_args_name_3 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_8 );
            tmp_kw_name_3 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 782;
            tmp_assign_source_64 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_assign_source_64 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 782;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_pcov;
                assert( old != NULL );
                var_pcov = tmp_assign_source_64;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_14;
            PyObject *tmp_source_name_24;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_29;
            PyObject *tmp_mvar_value_24;
            CHECK_OBJECT( var_pcov );
            tmp_source_name_24 = var_pcov;
            tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_fill );
            if ( tmp_called_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 783;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_inf );

            if (unlikely( tmp_mvar_value_24 == NULL ))
            {
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inf );
            }

            if ( tmp_mvar_value_24 == NULL )
            {
                Py_DECREF( tmp_called_name_14 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "inf" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 783;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_29 = tmp_mvar_value_24;
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 783;
            {
                PyObject *call_args[] = { tmp_args_element_name_29 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
            }

            Py_DECREF( tmp_called_name_14 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 783;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            nuitka_bool tmp_assign_source_65;
            tmp_assign_source_65 = NUITKA_BOOL_TRUE;
            var_warn_cov = tmp_assign_source_65;
        }
        goto branch_end_21;
        branch_no_21:;
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_operand_name_3;
            CHECK_OBJECT( par_absolute_sigma );
            tmp_operand_name_3 = par_absolute_sigma;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 785;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_22 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                nuitka_bool tmp_condition_result_23;
                PyObject *tmp_compexpr_left_20;
                PyObject *tmp_compexpr_right_20;
                PyObject *tmp_source_name_25;
                PyObject *tmp_source_name_26;
                CHECK_OBJECT( par_ydata );
                tmp_source_name_25 = par_ydata;
                tmp_compexpr_left_20 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_size );
                if ( tmp_compexpr_left_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 786;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }
                if ( par_p0 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_20 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p0" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 786;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_26 = par_p0;
                tmp_compexpr_right_20 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_size );
                if ( tmp_compexpr_right_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_20 );

                    exception_lineno = 786;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_20, tmp_compexpr_right_20 );
                Py_DECREF( tmp_compexpr_left_20 );
                Py_DECREF( tmp_compexpr_right_20 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 786;
                    type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_23 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_66;
                    PyObject *tmp_left_name_12;
                    PyObject *tmp_right_name_12;
                    PyObject *tmp_left_name_13;
                    PyObject *tmp_source_name_27;
                    PyObject *tmp_right_name_13;
                    PyObject *tmp_source_name_28;
                    CHECK_OBJECT( var_cost );
                    tmp_left_name_12 = var_cost;
                    CHECK_OBJECT( par_ydata );
                    tmp_source_name_27 = par_ydata;
                    tmp_left_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_size );
                    if ( tmp_left_name_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 787;
                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        goto frame_exception_exit_1;
                    }
                    if ( par_p0 == NULL )
                    {
                        Py_DECREF( tmp_left_name_13 );
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p0" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 787;
                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_28 = par_p0;
                    tmp_right_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_size );
                    if ( tmp_right_name_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_13 );

                        exception_lineno = 787;
                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        goto frame_exception_exit_1;
                    }
                    tmp_right_name_12 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
                    Py_DECREF( tmp_left_name_13 );
                    Py_DECREF( tmp_right_name_13 );
                    if ( tmp_right_name_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 787;
                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_66 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
                    Py_DECREF( tmp_right_name_12 );
                    if ( tmp_assign_source_66 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 787;
                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_s_sq == NULL );
                    var_s_sq = tmp_assign_source_66;
                }
                {
                    PyObject *tmp_assign_source_67;
                    PyObject *tmp_left_name_14;
                    PyObject *tmp_right_name_14;
                    CHECK_OBJECT( var_pcov );
                    tmp_left_name_14 = var_pcov;
                    CHECK_OBJECT( var_s_sq );
                    tmp_right_name_14 = var_s_sq;
                    tmp_assign_source_67 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
                    if ( tmp_assign_source_67 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 788;
                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_pcov;
                        assert( old != NULL );
                        var_pcov = tmp_assign_source_67;
                        Py_DECREF( old );
                    }

                }
                goto branch_end_23;
                branch_no_23:;
                {
                    PyObject *tmp_called_name_15;
                    PyObject *tmp_source_name_29;
                    PyObject *tmp_call_result_3;
                    PyObject *tmp_args_element_name_30;
                    PyObject *tmp_mvar_value_25;
                    CHECK_OBJECT( var_pcov );
                    tmp_source_name_29 = var_pcov;
                    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_fill );
                    if ( tmp_called_name_15 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 790;
                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_inf );

                    if (unlikely( tmp_mvar_value_25 == NULL ))
                    {
                        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inf );
                    }

                    if ( tmp_mvar_value_25 == NULL )
                    {
                        Py_DECREF( tmp_called_name_15 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "inf" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 790;
                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        goto frame_exception_exit_1;
                    }

                    tmp_args_element_name_30 = tmp_mvar_value_25;
                    frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 790;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_30 };
                        tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
                    }

                    Py_DECREF( tmp_called_name_15 );
                    if ( tmp_call_result_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 790;
                        type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_3 );
                }
                {
                    nuitka_bool tmp_assign_source_68;
                    tmp_assign_source_68 = NUITKA_BOOL_TRUE;
                    var_warn_cov = tmp_assign_source_68;
                }
                branch_end_23:;
            }
            branch_no_22:;
        }
        branch_end_21:;
    }
    {
        nuitka_bool tmp_condition_result_24;
        if ( var_warn_cov == NUITKA_BOOL_UNASSIGNED )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "warn_cov" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 793;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }

        tmp_condition_result_24 = var_warn_cov;
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
            PyObject *tmp_called_name_16;
            PyObject *tmp_source_name_30;
            PyObject *tmp_mvar_value_26;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_kw_name_4;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_mvar_value_27;
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_26 == NULL ))
            {
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_26 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 794;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_30 = tmp_mvar_value_26;
            tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_warn );
            if ( tmp_called_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 794;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_4 = const_tuple_str_digest_28c7e410f2890b248677f8ae622f3c85_tuple;
            tmp_dict_key_6 = const_str_plain_category;
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );

            if (unlikely( tmp_mvar_value_27 == NULL ))
            {
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );
            }

            if ( tmp_mvar_value_27 == NULL )
            {
                Py_DECREF( tmp_called_name_16 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 795;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_6 = tmp_mvar_value_27;
            tmp_kw_name_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame.f_lineno = 794;
            tmp_call_result_4 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_called_name_16 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 794;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_24:;
    }
    {
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_6;
        CHECK_OBJECT( var_return_full );
        tmp_truth_name_6 = CHECK_IF_TRUE( var_return_full );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 797;
            type_description_1 = "oooooooooooooooooooooooooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_25 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_tuple_element_10;
            CHECK_OBJECT( var_popt );
            tmp_tuple_element_10 = var_popt;
            tmp_return_value = PyTuple_New( 5 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_10 );
            if ( var_pcov == NULL )
            {
                Py_DECREF( tmp_return_value );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pcov" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 798;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_10 = var_pcov;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_10 );
            if ( var_infodict == NULL )
            {
                Py_DECREF( tmp_return_value );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "infodict" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 798;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_10 = var_infodict;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_10 );
            if ( var_errmsg == NULL )
            {
                Py_DECREF( tmp_return_value );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "errmsg" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 798;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_10 = var_errmsg;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_10 );
            if ( var_ier == NULL )
            {
                Py_DECREF( tmp_return_value );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ier" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 798;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_10 = var_ier;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_10 );
            goto frame_return_exit_1;
        }
        goto branch_end_25;
        branch_no_25:;
        {
            PyObject *tmp_tuple_element_11;
            CHECK_OBJECT( var_popt );
            tmp_tuple_element_11 = var_popt;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_11 );
            if ( var_pcov == NULL )
            {
                Py_DECREF( tmp_return_value );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pcov" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 800;
                type_description_1 = "oooooooooooooooooooooooooooooooooobo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_11 = var_pcov;
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_11 );
            goto frame_return_exit_1;
        }
        branch_end_25:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d11936de421eaf8099eaa4f414cd7b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d11936de421eaf8099eaa4f414cd7b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d11936de421eaf8099eaa4f414cd7b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d11936de421eaf8099eaa4f414cd7b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d11936de421eaf8099eaa4f414cd7b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d11936de421eaf8099eaa4f414cd7b7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9d11936de421eaf8099eaa4f414cd7b7,
        type_description_1,
        par_f,
        par_xdata,
        par_ydata,
        par_p0,
        par_sigma,
        par_absolute_sigma,
        par_check_finite,
        par_bounds,
        par_method,
        par_jac,
        par_kwargs,
        var__getargspec,
        var_args,
        var_varargs,
        var_varkw,
        var_defaults,
        var_n,
        var_lb,
        var_ub,
        var_bounded_problem,
        var_transform,
        var_func,
        var_return_full,
        var_res,
        var_popt,
        var_pcov,
        var_infodict,
        var_errmsg,
        var_ier,
        var_cost,
        var__,
        var_s,
        var_VT,
        var_threshold,
        (int)var_warn_cov,
        var_s_sq
    );


    // Release cached frame.
    if ( frame_9d11936de421eaf8099eaa4f414cd7b7 == cache_frame_9d11936de421eaf8099eaa4f414cd7b7 )
    {
        Py_DECREF( frame_9d11936de421eaf8099eaa4f414cd7b7 );
    }
    cache_frame_9d11936de421eaf8099eaa4f414cd7b7 = NULL;

    assertFrameObject( frame_9d11936de421eaf8099eaa4f414cd7b7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_8_curve_fit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    Py_XDECREF( par_xdata );
    par_xdata = NULL;

    CHECK_OBJECT( (PyObject *)par_ydata );
    Py_DECREF( par_ydata );
    par_ydata = NULL;

    Py_XDECREF( par_p0 );
    par_p0 = NULL;

    CHECK_OBJECT( (PyObject *)par_sigma );
    Py_DECREF( par_sigma );
    par_sigma = NULL;

    CHECK_OBJECT( (PyObject *)par_absolute_sigma );
    Py_DECREF( par_absolute_sigma );
    par_absolute_sigma = NULL;

    CHECK_OBJECT( (PyObject *)par_check_finite );
    Py_DECREF( par_check_finite );
    par_check_finite = NULL;

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var__getargspec );
    var__getargspec = NULL;

    Py_XDECREF( var_args );
    var_args = NULL;

    Py_XDECREF( var_varargs );
    var_varargs = NULL;

    Py_XDECREF( var_varkw );
    var_varkw = NULL;

    Py_XDECREF( var_defaults );
    var_defaults = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_lb );
    Py_DECREF( var_lb );
    var_lb = NULL;

    CHECK_OBJECT( (PyObject *)var_ub );
    Py_DECREF( var_ub );
    var_ub = NULL;

    CHECK_OBJECT( (PyObject *)var_bounded_problem );
    Py_DECREF( var_bounded_problem );
    var_bounded_problem = NULL;

    Py_XDECREF( var_transform );
    var_transform = NULL;

    CHECK_OBJECT( (PyObject *)var_func );
    Py_DECREF( var_func );
    var_func = NULL;

    CHECK_OBJECT( (PyObject *)var_return_full );
    Py_DECREF( var_return_full );
    var_return_full = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)var_popt );
    Py_DECREF( var_popt );
    var_popt = NULL;

    Py_XDECREF( var_pcov );
    var_pcov = NULL;

    Py_XDECREF( var_infodict );
    var_infodict = NULL;

    Py_XDECREF( var_errmsg );
    var_errmsg = NULL;

    Py_XDECREF( var_ier );
    var_ier = NULL;

    CHECK_OBJECT( (PyObject *)var_cost );
    Py_DECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_VT );
    var_VT = NULL;

    Py_XDECREF( var_threshold );
    var_threshold = NULL;

    Py_XDECREF( var_s_sq );
    var_s_sq = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    Py_XDECREF( par_xdata );
    par_xdata = NULL;

    Py_XDECREF( par_ydata );
    par_ydata = NULL;

    Py_XDECREF( par_p0 );
    par_p0 = NULL;

    Py_XDECREF( par_sigma );
    par_sigma = NULL;

    CHECK_OBJECT( (PyObject *)par_absolute_sigma );
    Py_DECREF( par_absolute_sigma );
    par_absolute_sigma = NULL;

    CHECK_OBJECT( (PyObject *)par_check_finite );
    Py_DECREF( par_check_finite );
    par_check_finite = NULL;

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var__getargspec );
    var__getargspec = NULL;

    Py_XDECREF( var_args );
    var_args = NULL;

    Py_XDECREF( var_varargs );
    var_varargs = NULL;

    Py_XDECREF( var_varkw );
    var_varkw = NULL;

    Py_XDECREF( var_defaults );
    var_defaults = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_lb );
    var_lb = NULL;

    Py_XDECREF( var_ub );
    var_ub = NULL;

    Py_XDECREF( var_bounded_problem );
    var_bounded_problem = NULL;

    Py_XDECREF( var_transform );
    var_transform = NULL;

    Py_XDECREF( var_func );
    var_func = NULL;

    Py_XDECREF( var_return_full );
    var_return_full = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_popt );
    var_popt = NULL;

    Py_XDECREF( var_pcov );
    var_pcov = NULL;

    Py_XDECREF( var_infodict );
    var_infodict = NULL;

    Py_XDECREF( var_errmsg );
    var_errmsg = NULL;

    Py_XDECREF( var_ier );
    var_ier = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_VT );
    var_VT = NULL;

    Py_XDECREF( var_threshold );
    var_threshold = NULL;

    Py_XDECREF( var_s_sq );
    var_s_sq = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_8_curve_fit );
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


static PyObject *impl_scipy$optimize$minpack$$$function_9_check_gradient( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fcn = python_pars[ 0 ];
    PyObject *par_Dfcn = python_pars[ 1 ];
    PyObject *par_x0 = python_pars[ 2 ];
    PyObject *par_args = python_pars[ 3 ];
    PyObject *par_col_deriv = python_pars[ 4 ];
    PyObject *var_x = NULL;
    PyObject *var_n = NULL;
    PyObject *var_fvec = NULL;
    PyObject *var_m = NULL;
    PyObject *var_ldfjac = NULL;
    PyObject *var_fjac = NULL;
    PyObject *var_xp = NULL;
    PyObject *var_err = NULL;
    PyObject *var_fvecp = NULL;
    PyObject *var_good = NULL;
    struct Nuitka_FrameObject *frame_f5a89da766d71fff1032fce82d751b11;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f5a89da766d71fff1032fce82d751b11 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f5a89da766d71fff1032fce82d751b11, codeobj_f5a89da766d71fff1032fce82d751b11, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f5a89da766d71fff1032fce82d751b11 = cache_frame_f5a89da766d71fff1032fce82d751b11;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f5a89da766d71fff1032fce82d751b11 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f5a89da766d71fff1032fce82d751b11 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_atleast_1d );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "atleast_1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 808;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_1 = par_x0;
        frame_f5a89da766d71fff1032fce82d751b11->m_frame.f_lineno = 808;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 808;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_x );
        tmp_len_arg_1 = var_x;
        tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 809;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_x );
        tmp_called_instance_1 = var_x;
        CHECK_OBJECT( var_n );
        tmp_tuple_element_1 = var_n;
        tmp_args_element_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
        frame_f5a89da766d71fff1032fce82d751b11->m_frame.f_lineno = 810;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_reshape, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 810;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x;
            assert( old != NULL );
            var_x = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_atleast_1d );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "atleast_1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 811;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_fcn );
        tmp_dircall_arg1_1 = par_fcn;
        CHECK_OBJECT( var_x );
        tmp_tuple_element_2 = var_x;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_args_element_name_3 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 811;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f5a89da766d71fff1032fce82d751b11->m_frame.f_lineno = 811;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 811;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_fvec == NULL );
        var_fvec = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( var_fvec );
        tmp_len_arg_2 = var_fvec;
        tmp_assign_source_5 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 812;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_m == NULL );
        var_m = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( var_fvec );
        tmp_called_instance_2 = var_fvec;
        CHECK_OBJECT( var_m );
        tmp_tuple_element_3 = var_m;
        tmp_args_element_name_4 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_3 );
        frame_f5a89da766d71fff1032fce82d751b11->m_frame.f_lineno = 813;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_reshape, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 813;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_fvec;
            assert( old != NULL );
            var_fvec = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( var_m );
        tmp_assign_source_7 = var_m;
        assert( var_ldfjac == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_ldfjac = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_dircall_arg3_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_atleast_1d );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "atleast_1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 815;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_Dfcn );
        tmp_dircall_arg1_2 = par_Dfcn;
        CHECK_OBJECT( var_x );
        tmp_tuple_element_4 = var_x;
        tmp_dircall_arg2_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg3_2 = par_args;
        Py_INCREF( tmp_dircall_arg1_2 );
        Py_INCREF( tmp_dircall_arg3_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_args_element_name_5 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 815;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f5a89da766d71fff1032fce82d751b11->m_frame.f_lineno = 815;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 815;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_fjac == NULL );
        var_fjac = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT( var_fjac );
        tmp_called_instance_3 = var_fjac;
        CHECK_OBJECT( var_m );
        tmp_tuple_element_5 = var_m;
        tmp_args_element_name_6 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_n );
        tmp_tuple_element_5 = var_n;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 1, tmp_tuple_element_5 );
        frame_f5a89da766d71fff1032fce82d751b11->m_frame.f_lineno = 816;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_reshape, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 816;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_fjac;
            assert( old != NULL );
            var_fjac = tmp_assign_source_9;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_col_deriv );
        tmp_compexpr_left_1 = par_col_deriv;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 817;
            type_description_1 = "ooooooooooooooo";
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
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_7;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_transpose );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transpose );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "transpose" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 818;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            CHECK_OBJECT( var_fjac );
            tmp_args_element_name_7 = var_fjac;
            frame_f5a89da766d71fff1032fce82d751b11->m_frame.f_lineno = 818;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 818;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_fjac;
                assert( old != NULL );
                var_fjac = tmp_assign_source_10;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_zeros );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 820;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT( var_n );
        tmp_tuple_element_6 = var_n;
        tmp_args_element_name_8 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_element_name_8, 0, tmp_tuple_element_6 );
        tmp_args_element_name_9 = (PyObject *)&PyFloat_Type;
        frame_f5a89da766d71fff1032fce82d751b11->m_frame.f_lineno = 820;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 820;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_xp == NULL );
        var_xp = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_zeros );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 821;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        CHECK_OBJECT( var_m );
        tmp_tuple_element_7 = var_m;
        tmp_args_element_name_10 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_args_element_name_10, 0, tmp_tuple_element_7 );
        tmp_args_element_name_11 = (PyObject *)&PyFloat_Type;
        frame_f5a89da766d71fff1032fce82d751b11->m_frame.f_lineno = 821;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 821;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_err == NULL );
        var_err = tmp_assign_source_12;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_result_1;
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
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__minpack );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minpack );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minpack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 823;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_7;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_12 = var_m;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_13 = var_n;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_14 = var_x;
        CHECK_OBJECT( var_fvec );
        tmp_args_element_name_15 = var_fvec;
        CHECK_OBJECT( var_fjac );
        tmp_args_element_name_16 = var_fjac;
        CHECK_OBJECT( var_ldfjac );
        tmp_args_element_name_17 = var_ldfjac;
        CHECK_OBJECT( var_xp );
        tmp_args_element_name_18 = var_xp;
        tmp_args_element_name_19 = Py_None;
        tmp_args_element_name_20 = const_int_pos_1;
        CHECK_OBJECT( var_err );
        tmp_args_element_name_21 = var_err;
        frame_f5a89da766d71fff1032fce82d751b11->m_frame.f_lineno = 823;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS10( tmp_called_instance_4, const_str_plain__chkder, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 823;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_dircall_arg3_3;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_atleast_1d );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "atleast_1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 825;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_8;
        CHECK_OBJECT( par_fcn );
        tmp_dircall_arg1_3 = par_fcn;
        CHECK_OBJECT( var_xp );
        tmp_tuple_element_8 = var_xp;
        tmp_dircall_arg2_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_8 );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg3_3 = par_args;
        Py_INCREF( tmp_dircall_arg1_3 );
        Py_INCREF( tmp_dircall_arg3_3 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3};
            tmp_args_element_name_22 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_args_element_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 825;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f5a89da766d71fff1032fce82d751b11->m_frame.f_lineno = 825;
        {
            PyObject *call_args[] = { tmp_args_element_name_22 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_22 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 825;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_fvecp == NULL );
        var_fvecp = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_tuple_element_9;
        CHECK_OBJECT( var_fvecp );
        tmp_called_instance_5 = var_fvecp;
        CHECK_OBJECT( var_m );
        tmp_tuple_element_9 = var_m;
        tmp_args_element_name_23 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_args_element_name_23, 0, tmp_tuple_element_9 );
        frame_f5a89da766d71fff1032fce82d751b11->m_frame.f_lineno = 826;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_assign_source_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_reshape, call_args );
        }

        Py_DECREF( tmp_args_element_name_23 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 826;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_fvecp;
            assert( old != NULL );
            var_fvecp = tmp_assign_source_14;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_args_element_name_33;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__minpack );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minpack );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minpack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 827;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_9;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_24 = var_m;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_25 = var_n;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_26 = var_x;
        CHECK_OBJECT( var_fvec );
        tmp_args_element_name_27 = var_fvec;
        CHECK_OBJECT( var_fjac );
        tmp_args_element_name_28 = var_fjac;
        CHECK_OBJECT( var_ldfjac );
        tmp_args_element_name_29 = var_ldfjac;
        CHECK_OBJECT( var_xp );
        tmp_args_element_name_30 = var_xp;
        CHECK_OBJECT( var_fvecp );
        tmp_args_element_name_31 = var_fvecp;
        tmp_args_element_name_32 = const_int_pos_2;
        CHECK_OBJECT( var_err );
        tmp_args_element_name_33 = var_err;
        frame_f5a89da766d71fff1032fce82d751b11->m_frame.f_lineno = 827;
        {
            PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31, tmp_args_element_name_32, tmp_args_element_name_33 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS10( tmp_called_instance_6, const_str_plain__chkder, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 827;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_prod );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_prod );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "prod" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 829;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_10;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_greater );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_greater );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "greater" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 829;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_11;
        CHECK_OBJECT( var_err );
        tmp_args_element_name_34 = var_err;
        tmp_args_element_name_35 = const_float_0_5;
        frame_f5a89da766d71fff1032fce82d751b11->m_frame.f_lineno = 829;
        {
            PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35 };
            tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
        }

        if ( tmp_tuple_element_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 829;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_10 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
        frame_f5a89da766d71fff1032fce82d751b11->m_frame.f_lineno = 829;
        tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 829;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_good == NULL );
        var_good = tmp_assign_source_15;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5a89da766d71fff1032fce82d751b11 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5a89da766d71fff1032fce82d751b11 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f5a89da766d71fff1032fce82d751b11, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f5a89da766d71fff1032fce82d751b11->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f5a89da766d71fff1032fce82d751b11, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f5a89da766d71fff1032fce82d751b11,
        type_description_1,
        par_fcn,
        par_Dfcn,
        par_x0,
        par_args,
        par_col_deriv,
        var_x,
        var_n,
        var_fvec,
        var_m,
        var_ldfjac,
        var_fjac,
        var_xp,
        var_err,
        var_fvecp,
        var_good
    );


    // Release cached frame.
    if ( frame_f5a89da766d71fff1032fce82d751b11 == cache_frame_f5a89da766d71fff1032fce82d751b11 )
    {
        Py_DECREF( frame_f5a89da766d71fff1032fce82d751b11 );
    }
    cache_frame_f5a89da766d71fff1032fce82d751b11 = NULL;

    assertFrameObject( frame_f5a89da766d71fff1032fce82d751b11 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_11;
        CHECK_OBJECT( var_good );
        tmp_tuple_element_11 = var_good;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_11 );
        CHECK_OBJECT( var_err );
        tmp_tuple_element_11 = var_err;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_11 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_9_check_gradient );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fcn );
    Py_DECREF( par_fcn );
    par_fcn = NULL;

    CHECK_OBJECT( (PyObject *)par_Dfcn );
    Py_DECREF( par_Dfcn );
    par_Dfcn = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_col_deriv );
    Py_DECREF( par_col_deriv );
    par_col_deriv = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_fvec );
    Py_DECREF( var_fvec );
    var_fvec = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_ldfjac );
    Py_DECREF( var_ldfjac );
    var_ldfjac = NULL;

    CHECK_OBJECT( (PyObject *)var_fjac );
    Py_DECREF( var_fjac );
    var_fjac = NULL;

    CHECK_OBJECT( (PyObject *)var_xp );
    Py_DECREF( var_xp );
    var_xp = NULL;

    CHECK_OBJECT( (PyObject *)var_err );
    Py_DECREF( var_err );
    var_err = NULL;

    CHECK_OBJECT( (PyObject *)var_fvecp );
    Py_DECREF( var_fvecp );
    var_fvecp = NULL;

    CHECK_OBJECT( (PyObject *)var_good );
    Py_DECREF( var_good );
    var_good = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fcn );
    Py_DECREF( par_fcn );
    par_fcn = NULL;

    CHECK_OBJECT( (PyObject *)par_Dfcn );
    Py_DECREF( par_Dfcn );
    par_Dfcn = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_col_deriv );
    Py_DECREF( par_col_deriv );
    par_col_deriv = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_fvec );
    var_fvec = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_ldfjac );
    var_ldfjac = NULL;

    Py_XDECREF( var_fjac );
    var_fjac = NULL;

    Py_XDECREF( var_xp );
    var_xp = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_fvecp );
    var_fvecp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_9_check_gradient );
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


static PyObject *impl_scipy$optimize$minpack$$$function_10__del2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p0 = python_pars[ 0 ];
    PyObject *par_p1 = python_pars[ 1 ];
    PyObject *par_d = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_39db257e348550f63251a77d2ae422fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_39db257e348550f63251a77d2ae422fc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_39db257e348550f63251a77d2ae422fc, codeobj_39db257e348550f63251a77d2ae422fc, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_39db257e348550f63251a77d2ae422fc = cache_frame_39db257e348550f63251a77d2ae422fc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_39db257e348550f63251a77d2ae422fc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_39db257e348550f63251a77d2ae422fc ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_p0 );
        tmp_left_name_1 = par_p0;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 835;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_square );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 835;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_p1 );
        tmp_left_name_3 = par_p1;
        CHECK_OBJECT( par_p0 );
        tmp_right_name_2 = par_p0;
        tmp_args_element_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 835;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_39db257e348550f63251a77d2ae422fc->m_frame.f_lineno = 835;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 835;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_d );
        tmp_right_name_3 = par_d;
        tmp_right_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 835;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 835;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_39db257e348550f63251a77d2ae422fc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_39db257e348550f63251a77d2ae422fc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_39db257e348550f63251a77d2ae422fc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_39db257e348550f63251a77d2ae422fc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_39db257e348550f63251a77d2ae422fc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_39db257e348550f63251a77d2ae422fc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_39db257e348550f63251a77d2ae422fc,
        type_description_1,
        par_p0,
        par_p1,
        par_d
    );


    // Release cached frame.
    if ( frame_39db257e348550f63251a77d2ae422fc == cache_frame_39db257e348550f63251a77d2ae422fc )
    {
        Py_DECREF( frame_39db257e348550f63251a77d2ae422fc );
    }
    cache_frame_39db257e348550f63251a77d2ae422fc = NULL;

    assertFrameObject( frame_39db257e348550f63251a77d2ae422fc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_10__del2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_p0 );
    Py_DECREF( par_p0 );
    par_p0 = NULL;

    CHECK_OBJECT( (PyObject *)par_p1 );
    Py_DECREF( par_p1 );
    par_p1 = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p0 );
    Py_DECREF( par_p0 );
    par_p0 = NULL;

    CHECK_OBJECT( (PyObject *)par_p1 );
    Py_DECREF( par_p1 );
    par_p1 = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_10__del2 );
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


static PyObject *impl_scipy$optimize$minpack$$$function_11__relerr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_actual = python_pars[ 0 ];
    PyObject *par_desired = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_4d16ddb5e9ae7c4d8533986a9625ad6d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4d16ddb5e9ae7c4d8533986a9625ad6d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4d16ddb5e9ae7c4d8533986a9625ad6d, codeobj_4d16ddb5e9ae7c4d8533986a9625ad6d, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *) );
    frame_4d16ddb5e9ae7c4d8533986a9625ad6d = cache_frame_4d16ddb5e9ae7c4d8533986a9625ad6d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4d16ddb5e9ae7c4d8533986a9625ad6d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4d16ddb5e9ae7c4d8533986a9625ad6d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_actual );
        tmp_left_name_2 = par_actual;
        CHECK_OBJECT( par_desired );
        tmp_right_name_1 = par_desired;
        tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 839;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_desired );
        tmp_right_name_2 = par_desired;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 839;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d16ddb5e9ae7c4d8533986a9625ad6d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d16ddb5e9ae7c4d8533986a9625ad6d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d16ddb5e9ae7c4d8533986a9625ad6d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4d16ddb5e9ae7c4d8533986a9625ad6d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4d16ddb5e9ae7c4d8533986a9625ad6d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4d16ddb5e9ae7c4d8533986a9625ad6d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4d16ddb5e9ae7c4d8533986a9625ad6d,
        type_description_1,
        par_actual,
        par_desired
    );


    // Release cached frame.
    if ( frame_4d16ddb5e9ae7c4d8533986a9625ad6d == cache_frame_4d16ddb5e9ae7c4d8533986a9625ad6d )
    {
        Py_DECREF( frame_4d16ddb5e9ae7c4d8533986a9625ad6d );
    }
    cache_frame_4d16ddb5e9ae7c4d8533986a9625ad6d = NULL;

    assertFrameObject( frame_4d16ddb5e9ae7c4d8533986a9625ad6d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_11__relerr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_actual );
    Py_DECREF( par_actual );
    par_actual = NULL;

    CHECK_OBJECT( (PyObject *)par_desired );
    Py_DECREF( par_desired );
    par_desired = NULL;

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

    CHECK_OBJECT( (PyObject *)par_actual );
    Py_DECREF( par_actual );
    par_actual = NULL;

    CHECK_OBJECT( (PyObject *)par_desired );
    Py_DECREF( par_desired );
    par_desired = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_11__relerr );
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


static PyObject *impl_scipy$optimize$minpack$$$function_12__fixed_point_helper( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_xtol = python_pars[ 3 ];
    PyObject *par_maxiter = python_pars[ 4 ];
    PyObject *par_use_accel = python_pars[ 5 ];
    PyObject *var_p0 = NULL;
    PyObject *var_i = NULL;
    PyObject *var_p1 = NULL;
    PyObject *var_p2 = NULL;
    PyObject *var_d = NULL;
    PyObject *var_p = NULL;
    PyObject *var_relerr = NULL;
    PyObject *var_msg = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_725d367defded0901317e55e26faa160;
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
    static struct Nuitka_FrameObject *cache_frame_725d367defded0901317e55e26faa160 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( par_x0 );
        tmp_assign_source_1 = par_x0;
        assert( var_p0 == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_p0 = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_725d367defded0901317e55e26faa160, codeobj_725d367defded0901317e55e26faa160, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_725d367defded0901317e55e26faa160 = cache_frame_725d367defded0901317e55e26faa160;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_725d367defded0901317e55e26faa160 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_725d367defded0901317e55e26faa160 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( par_maxiter );
        tmp_xrange_low_1 = par_maxiter;
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 844;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 844;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooo";
                exception_lineno = 844;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_4;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_func );
        tmp_dircall_arg1_1 = par_func;
        CHECK_OBJECT( var_p0 );
        tmp_tuple_element_1 = var_p0;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_5 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 845;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_p1;
            var_p1 = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_use_accel );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_use_accel );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 846;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_dircall_arg1_2;
            PyObject *tmp_dircall_arg2_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_dircall_arg3_2;
            CHECK_OBJECT( par_func );
            tmp_dircall_arg1_2 = par_func;
            CHECK_OBJECT( var_p1 );
            tmp_tuple_element_2 = var_p1;
            tmp_dircall_arg2_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_args );
            tmp_dircall_arg3_2 = par_args;
            Py_INCREF( tmp_dircall_arg1_2 );
            Py_INCREF( tmp_dircall_arg3_2 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
                tmp_assign_source_6 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
            }
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 847;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_p2;
                var_p2 = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( var_p2 );
            tmp_left_name_2 = var_p2;
            tmp_left_name_3 = const_float_2_0;
            CHECK_OBJECT( var_p1 );
            tmp_right_name_2 = var_p1;
            tmp_right_name_1 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 848;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 848;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_p0 );
            tmp_right_name_3 = var_p0;
            tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 848;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_d;
                var_d = tmp_assign_source_7;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__lazywhere );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__lazywhere );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_lazywhere" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 849;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( var_d );
            tmp_compexpr_left_1 = var_d;
            tmp_compexpr_right_1 = const_int_0;
            tmp_tuple_element_3 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 849;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_args_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_p0 );
            tmp_tuple_element_4 = var_p0;
            tmp_tuple_element_3 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( var_p1 );
            tmp_tuple_element_4 = var_p1;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_tuple_element_3, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( var_d );
            tmp_tuple_element_4 = var_d;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_tuple_element_3, 2, tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_3 );
            tmp_dict_key_1 = const_str_plain_f;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__del2 );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__del2 );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_del2" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 849;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_dict_value_1 = tmp_mvar_value_2;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_fillvalue;
            CHECK_OBJECT( var_p2 );
            tmp_dict_value_2 = var_p2;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_725d367defded0901317e55e26faa160->m_frame.f_lineno = 849;
            tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 849;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_p;
                var_p = tmp_assign_source_8;
                Py_XDECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( var_p1 );
            tmp_assign_source_9 = var_p1;
            {
                PyObject *old = var_p;
                var_p = tmp_assign_source_9;
                Py_INCREF( var_p );
                Py_XDECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__lazywhere );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__lazywhere );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_lazywhere" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 852;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_p0 );
        tmp_compexpr_left_2 = var_p0;
        tmp_compexpr_right_2 = const_int_0;
        tmp_tuple_element_5 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 852;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_name_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_p );
        tmp_tuple_element_6 = var_p;
        tmp_tuple_element_5 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_tuple_element_5, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_p0 );
        tmp_tuple_element_6 = var_p0;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_tuple_element_5, 1, tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_5 );
        tmp_dict_key_3 = const_str_plain_f;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__relerr );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__relerr );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_args_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_relerr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 852;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_dict_value_3 = tmp_mvar_value_4;
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_fillvalue;
        CHECK_OBJECT( var_p );
        tmp_dict_value_4 = var_p;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        frame_725d367defded0901317e55e26faa160->m_frame.f_lineno = 852;
        tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 852;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_relerr;
            var_relerr = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 853;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_5;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_all );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 853;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 853;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_6;
        CHECK_OBJECT( var_relerr );
        tmp_args_element_name_2 = var_relerr;
        frame_725d367defded0901317e55e26faa160->m_frame.f_lineno = 853;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_compexpr_left_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abs, call_args );
        }

        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 853;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_xtol );
        tmp_compexpr_right_3 = par_xtol;
        tmp_args_element_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 853;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_725d367defded0901317e55e26faa160->m_frame.f_lineno = 853;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 853;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 853;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
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
        CHECK_OBJECT( var_p );
        tmp_return_value = var_p;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_2;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( var_p );
        tmp_assign_source_11 = var_p;
        {
            PyObject *old = var_p0;
            assert( old != NULL );
            var_p0 = tmp_assign_source_11;
            Py_INCREF( var_p0 );
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 844;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_tuple_element_7;
        tmp_left_name_4 = const_str_digest_f27c5401055d94ba434edb76f831113e;
        CHECK_OBJECT( par_maxiter );
        tmp_tuple_element_7 = par_maxiter;
        tmp_right_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_7 );
        if ( var_p == NULL )
        {
            Py_DECREF( tmp_right_name_4 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 856;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_7 = var_p;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_7 );
        tmp_assign_source_12 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 856;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_msg == NULL );
        var_msg = tmp_assign_source_12;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        CHECK_OBJECT( var_msg );
        tmp_make_exception_arg_1 = var_msg;
        frame_725d367defded0901317e55e26faa160->m_frame.f_lineno = 857;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
        }

        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 857;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_725d367defded0901317e55e26faa160 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_725d367defded0901317e55e26faa160 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_725d367defded0901317e55e26faa160 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_725d367defded0901317e55e26faa160, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_725d367defded0901317e55e26faa160->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_725d367defded0901317e55e26faa160, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_725d367defded0901317e55e26faa160,
        type_description_1,
        par_func,
        par_x0,
        par_args,
        par_xtol,
        par_maxiter,
        par_use_accel,
        var_p0,
        var_i,
        var_p1,
        var_p2,
        var_d,
        var_p,
        var_relerr,
        var_msg
    );


    // Release cached frame.
    if ( frame_725d367defded0901317e55e26faa160 == cache_frame_725d367defded0901317e55e26faa160 )
    {
        Py_DECREF( frame_725d367defded0901317e55e26faa160 );
    }
    cache_frame_725d367defded0901317e55e26faa160 = NULL;

    assertFrameObject( frame_725d367defded0901317e55e26faa160 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_12__fixed_point_helper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_use_accel );
    Py_DECREF( par_use_accel );
    par_use_accel = NULL;

    CHECK_OBJECT( (PyObject *)var_p0 );
    Py_DECREF( var_p0 );
    var_p0 = NULL;

    CHECK_OBJECT( (PyObject *)var_i );
    Py_DECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)var_p1 );
    Py_DECREF( var_p1 );
    var_p1 = NULL;

    Py_XDECREF( var_p2 );
    var_p2 = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    CHECK_OBJECT( (PyObject *)var_p );
    Py_DECREF( var_p );
    var_p = NULL;

    CHECK_OBJECT( (PyObject *)var_relerr );
    Py_DECREF( var_relerr );
    var_relerr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_use_accel );
    Py_DECREF( par_use_accel );
    par_use_accel = NULL;

    Py_XDECREF( var_p0 );
    var_p0 = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_p1 );
    var_p1 = NULL;

    Py_XDECREF( var_p2 );
    var_p2 = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_relerr );
    var_relerr = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_12__fixed_point_helper );
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


static PyObject *impl_scipy$optimize$minpack$$$function_13_fixed_point( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_xtol = python_pars[ 3 ];
    PyObject *par_maxiter = python_pars[ 4 ];
    PyObject *par_method = python_pars[ 5 ];
    PyObject *var_use_accel = NULL;
    struct Nuitka_FrameObject *frame_66fe672af585ce1778979d44755e2a9d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_66fe672af585ce1778979d44755e2a9d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_66fe672af585ce1778979d44755e2a9d, codeobj_66fe672af585ce1778979d44755e2a9d, module_scipy$optimize$minpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_66fe672af585ce1778979d44755e2a9d = cache_frame_66fe672af585ce1778979d44755e2a9d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_66fe672af585ce1778979d44755e2a9d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_66fe672af585ce1778979d44755e2a9d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_subscribed_name_1 = PyDict_Copy( const_dict_07054382d169ac52931a03db2d4b98df );
        CHECK_OBJECT( par_method );
        tmp_subscript_name_1 = par_method;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 901;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_use_accel == NULL );
        var_use_accel = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__asarray_validated );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__asarray_validated );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_asarray_validated" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 902;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x0 );
        tmp_tuple_element_1 = par_x0;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_aa931695d9fe56581a2e661140c81de3 );
        frame_66fe672af585ce1778979d44755e2a9d->m_frame.f_lineno = 902;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 902;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x0;
            assert( old != NULL );
            par_x0 = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__fixed_point_helper );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fixed_point_helper );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fixed_point_helper" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 903;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_func );
        tmp_args_element_name_1 = par_func;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_2 = par_x0;
        CHECK_OBJECT( par_args );
        tmp_args_element_name_3 = par_args;
        CHECK_OBJECT( par_xtol );
        tmp_args_element_name_4 = par_xtol;
        CHECK_OBJECT( par_maxiter );
        tmp_args_element_name_5 = par_maxiter;
        CHECK_OBJECT( var_use_accel );
        tmp_args_element_name_6 = var_use_accel;
        frame_66fe672af585ce1778979d44755e2a9d->m_frame.f_lineno = 903;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 903;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66fe672af585ce1778979d44755e2a9d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_66fe672af585ce1778979d44755e2a9d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66fe672af585ce1778979d44755e2a9d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_66fe672af585ce1778979d44755e2a9d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_66fe672af585ce1778979d44755e2a9d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_66fe672af585ce1778979d44755e2a9d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_66fe672af585ce1778979d44755e2a9d,
        type_description_1,
        par_func,
        par_x0,
        par_args,
        par_xtol,
        par_maxiter,
        par_method,
        var_use_accel
    );


    // Release cached frame.
    if ( frame_66fe672af585ce1778979d44755e2a9d == cache_frame_66fe672af585ce1778979d44755e2a9d )
    {
        Py_DECREF( frame_66fe672af585ce1778979d44755e2a9d );
    }
    cache_frame_66fe672af585ce1778979d44755e2a9d = NULL;

    assertFrameObject( frame_66fe672af585ce1778979d44755e2a9d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_13_fixed_point );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)var_use_accel );
    Py_DECREF( var_use_accel );
    var_use_accel = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    Py_XDECREF( var_use_accel );
    var_use_accel = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$minpack$$$function_13_fixed_point );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_10__del2(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_10__del2,
        const_str_plain__del2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_39db257e348550f63251a77d2ae422fc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_11__relerr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_11__relerr,
        const_str_plain__relerr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4d16ddb5e9ae7c4d8533986a9625ad6d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_12__fixed_point_helper(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_12__fixed_point_helper,
        const_str_plain__fixed_point_helper,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_725d367defded0901317e55e26faa160,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_13_fixed_point( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_13_fixed_point,
        const_str_plain_fixed_point,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_66fe672af585ce1778979d44755e2a9d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        const_str_digest_69a26b8b4d1137a1a6556e5c55776159,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_1__check_func( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_1__check_func,
        const_str_plain__check_func,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_67df75d6a9c6c9cfa684f2b53c194bf8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_2_fsolve( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_2_fsolve,
        const_str_plain_fsolve,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_45a3c77016efc4919192bb0d604537a8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        const_str_digest_c23ba4e629f67c40fbf45a8719bb2b38,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_3__root_hybr( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_3__root_hybr,
        const_str_plain__root_hybr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7053bb2c0ec01c545d2c7326ac8a6166,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        const_str_digest_45f5d38ef515ddafc684bb0471af9ccd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_4_leastsq( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_4_leastsq,
        const_str_plain_leastsq,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_738e48ead867c6a1c393d969ba8273d6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        const_str_digest_7242ad254b37fc2d62f82625c36d8791,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_5__wrap_func(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_5__wrap_func,
        const_str_plain__wrap_func,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9b4a2d3ed8d7805f0abe3ec7c3542601,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_5__wrap_func$$$function_1_func_wrapped(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_5__wrap_func$$$function_1_func_wrapped,
        const_str_plain_func_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_1d7a6fd859aea104533a04cfbf750641,
#endif
        codeobj_34b4e74a20b22ac0e5dcc07f696a7818,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_5__wrap_func$$$function_2_func_wrapped(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_5__wrap_func$$$function_2_func_wrapped,
        const_str_plain_func_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_1d7a6fd859aea104533a04cfbf750641,
#endif
        codeobj_0dd545cfd7ce2f525bb325eadb71bd0b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        NULL,
        4
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_5__wrap_func$$$function_3_func_wrapped(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_5__wrap_func$$$function_3_func_wrapped,
        const_str_plain_func_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_1d7a6fd859aea104533a04cfbf750641,
#endif
        codeobj_20755951cb099e1602260251e452faf5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        NULL,
        4
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_6__wrap_jac(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_6__wrap_jac,
        const_str_plain__wrap_jac,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f6e45c97e87cd13cf6b3f00065202ff2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_6__wrap_jac$$$function_1_jac_wrapped(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_6__wrap_jac$$$function_1_jac_wrapped,
        const_str_plain_jac_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_440c41237cb77782720a7a89193c963c,
#endif
        codeobj_13788e1f59295f8c444002ae335015a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_6__wrap_jac$$$function_2_jac_wrapped(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_6__wrap_jac$$$function_2_jac_wrapped,
        const_str_plain_jac_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_440c41237cb77782720a7a89193c963c,
#endif
        codeobj_0f67ec2d5b644f9fae3bd2b64cecb9df,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_6__wrap_jac$$$function_3_jac_wrapped(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_6__wrap_jac$$$function_3_jac_wrapped,
        const_str_plain_jac_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_440c41237cb77782720a7a89193c963c,
#endif
        codeobj_11498d4a9c803fc46731da02985456f7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_7__initialize_feasible(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_7__initialize_feasible,
        const_str_plain__initialize_feasible,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4cde5ecaaf20e577436564b496544da5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_8_curve_fit( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_8_curve_fit,
        const_str_plain_curve_fit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9d11936de421eaf8099eaa4f414cd7b7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        const_str_digest_9a995e697f9a50d0a05b9e07aa66c0c7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$minpack$$$function_9_check_gradient( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$minpack$$$function_9_check_gradient,
        const_str_plain_check_gradient,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f5a89da766d71fff1032fce82d751b11,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$minpack,
        const_str_digest_5c244151713a7a8a0b8a4163fd11da2c,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$minpack =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize.minpack",
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

MOD_INIT_DECL( scipy$optimize$minpack )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$minpack );
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
    puts("scipy.optimize.minpack: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize.minpack: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize.minpack: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$minpack" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$minpack = Py_InitModule4(
        "scipy.optimize.minpack",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$minpack = PyModule_Create( &mdef_scipy$optimize$minpack );
#endif

    moduledict_scipy$optimize$minpack = MODULE_DICT( module_scipy$optimize$minpack );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$minpack,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$minpack,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$minpack,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$minpack,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$minpack );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_ff466a325e0b2869cc8ac026c67aa260, module_scipy$optimize$minpack );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    struct Nuitka_FrameObject *frame_ae43d491cb718ca9f71a633da4e0877f;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_ae43d491cb718ca9f71a633da4e0877f = MAKE_MODULE_FRAME( codeobj_ae43d491cb718ca9f71a633da4e0877f, module_scipy$optimize$minpack );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ae43d491cb718ca9f71a633da4e0877f );
    assert( Py_REFCNT( frame_ae43d491cb718ca9f71a633da4e0877f ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_ae43d491cb718ca9f71a633da4e0877f->m_frame.f_lineno = 1;
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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_threading;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$minpack;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_ae43d491cb718ca9f71a633da4e0877f->m_frame.f_lineno = 3;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_warnings;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$minpack;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_ae43d491cb718ca9f71a633da4e0877f->m_frame.f_lineno = 4;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_empty;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$minpack;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain__minpack_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_ae43d491cb718ca9f71a633da4e0877f->m_frame.f_lineno = 5;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$optimize$minpack,
                const_str_plain__minpack,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain__minpack );
        }

        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__minpack, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_numpy;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$minpack;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_ae43d491cb718ca9f71a633da4e0877f->m_frame.f_lineno = 7;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_numpy;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$optimize$minpack;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_927f934513631d975de832f9f40063bc_tuple;
        tmp_level_name_5 = const_int_0;
        frame_ae43d491cb718ca9f71a633da4e0877f->m_frame.f_lineno = 8;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_atleast_1d );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_atleast_1d, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_dot );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_dot, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_take );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_take, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_triu );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_triu, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_shape );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_shape, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_eye );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_eye, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_transpose );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_transpose, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_12 = tmp_import_from_2__module;
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_zeros );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_13 = tmp_import_from_2__module;
        tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_prod );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_prod, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_14 = tmp_import_from_2__module;
        tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_greater );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_greater, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_15 = tmp_import_from_2__module;
        tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_array );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_16 = tmp_import_from_2__module;
        tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_all );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_all, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_17 = tmp_import_from_2__module;
        tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_where );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_where, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_18 = tmp_import_from_2__module;
        tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_isscalar );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_isscalar, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_19 = tmp_import_from_2__module;
        tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_asarray );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_20 = tmp_import_from_2__module;
        tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_inf );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_inf, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_21 = tmp_import_from_2__module;
        tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_abs );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_abs, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_22 = tmp_import_from_2__module;
        tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_finfo );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_finfo, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_23 = tmp_import_from_2__module;
        tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_inexact );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_inexact, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_24 = tmp_import_from_2__module;
        tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_issubdtype );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_issubdtype, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_25 = tmp_import_from_2__module;
        tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_dtype );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_dtype, tmp_assign_source_33 );
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
        PyObject *tmp_assign_source_34;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$optimize$minpack;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_5d55ec3a50148de8797fa1b825b3aa64_tuple;
        tmp_level_name_6 = const_int_0;
        frame_ae43d491cb718ca9f71a633da4e0877f->m_frame.f_lineno = 12;
        tmp_assign_source_34 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_34;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_26 = tmp_import_from_3__module;
        tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_svd );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_svd, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_27 = tmp_import_from_3__module;
        tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_cholesky );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_cholesky, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_28 = tmp_import_from_3__module;
        tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_solve_triangular );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_solve_triangular, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_29 = tmp_import_from_3__module;
        tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_LinAlgError );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_LinAlgError, tmp_assign_source_38 );
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
        PyObject *tmp_assign_source_39;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_dbc049f94600503bfbd8944e5239d7ae;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$optimize$minpack;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain__asarray_validated_str_plain__lazywhere_tuple;
        tmp_level_name_7 = const_int_0;
        frame_ae43d491cb718ca9f71a633da4e0877f->m_frame.f_lineno = 13;
        tmp_assign_source_39 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_39;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_30 = tmp_import_from_4__module;
        tmp_assign_source_40 = IMPORT_NAME( tmp_import_name_from_30, const_str_plain__asarray_validated );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__asarray_validated, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_31 = tmp_import_from_4__module;
        tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_31, const_str_plain__lazywhere );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__lazywhere, tmp_assign_source_41 );
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
        PyObject *tmp_assign_source_42;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_optimize;
        tmp_globals_name_8 = (PyObject *)moduledict_scipy$optimize$minpack;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_a056e3f2ec32594fa4cace56a16f376b_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_ae43d491cb718ca9f71a633da4e0877f->m_frame.f_lineno = 14;
        tmp_assign_source_42 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_5__module == NULL );
        tmp_import_from_5__module = tmp_assign_source_42;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_32 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_32 ) )
        {
           tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_scipy$optimize$minpack,
                const_str_plain_OptimizeResult,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_32, const_str_plain_OptimizeResult );
        }

        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_OptimizeResult, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_33 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_33 ) )
        {
           tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_scipy$optimize$minpack,
                const_str_plain__check_unknown_options,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_33, const_str_plain__check_unknown_options );
        }

        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__check_unknown_options, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_34 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_34 ) )
        {
           tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_scipy$optimize$minpack,
                const_str_plain_OptimizeWarning,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_45 = IMPORT_NAME( tmp_import_name_from_34, const_str_plain_OptimizeWarning );
        }

        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_OptimizeWarning, tmp_assign_source_45 );
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
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_35;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain__lsq;
        tmp_globals_name_9 = (PyObject *)moduledict_scipy$optimize$minpack;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_least_squares_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_ae43d491cb718ca9f71a633da4e0877f->m_frame.f_lineno = 15;
        tmp_import_name_from_35 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_import_name_from_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_35 ) )
        {
           tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_scipy$optimize$minpack,
                const_str_plain_least_squares,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_35, const_str_plain_least_squares );
        }

        Py_DECREF( tmp_import_name_from_35 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_least_squares, tmp_assign_source_46 );
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_36;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_digest_46f903385a6f8e37b2bcdd7ba29d5271;
        tmp_globals_name_10 = (PyObject *)moduledict_scipy$optimize$minpack;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_make_strictly_feasible_tuple;
        tmp_level_name_10 = const_int_pos_1;
        frame_ae43d491cb718ca9f71a633da4e0877f->m_frame.f_lineno = 16;
        tmp_import_name_from_36 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_import_name_from_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_36 ) )
        {
           tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_scipy$optimize$minpack,
                const_str_plain_make_strictly_feasible,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_47 = IMPORT_NAME( tmp_import_name_from_36, const_str_plain_make_strictly_feasible );
        }

        Py_DECREF( tmp_import_name_from_36 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_make_strictly_feasible, tmp_assign_source_47 );
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_37;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_digest_f571c6965ea9f6c548a1ff3b0d1e739c;
        tmp_globals_name_11 = (PyObject *)moduledict_scipy$optimize$minpack;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_str_plain_prepare_bounds_tuple;
        tmp_level_name_11 = const_int_pos_1;
        frame_ae43d491cb718ca9f71a633da4e0877f->m_frame.f_lineno = 17;
        tmp_import_name_from_37 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
        if ( tmp_import_name_from_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_37 ) )
        {
           tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_scipy$optimize$minpack,
                const_str_plain_prepare_bounds,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_48 = IMPORT_NAME( tmp_import_name_from_37, const_str_plain_prepare_bounds );
        }

        Py_DECREF( tmp_import_name_from_37 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_prepare_bounds, tmp_assign_source_48 );
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__minpack );

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

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_assign_source_49 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_error );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_error, tmp_assign_source_49 );
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = LIST_COPY( const_list_643a4d92a4369b05ca000de3f27fd962_list );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_50 );
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_51 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_1__check_func( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__check_func, tmp_assign_source_51 );
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_320aba98e87f6ed87243da7acd25bb90_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_52 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_2_fsolve( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_fsolve, tmp_assign_source_52 );
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_7f99265a7ccdc6344707e5d6a27d5ba7_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_53 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_3__root_hybr( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__root_hybr, tmp_assign_source_53 );
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = LIST_COPY( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_list );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_LEASTSQ_SUCCESS, tmp_assign_source_54 );
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = LIST_COPY( const_list_int_pos_5_int_pos_6_int_pos_7_int_pos_8_list );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_LEASTSQ_FAILURE, tmp_assign_source_55 );
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_19a025e9dcbbf8c50efd0a3047c74641_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_56 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_4_leastsq( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_leastsq, tmp_assign_source_56 );
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_5__wrap_func(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__wrap_func, tmp_assign_source_57 );
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_6__wrap_jac(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__wrap_jac, tmp_assign_source_58 );
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_7__initialize_feasible(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__initialize_feasible, tmp_assign_source_59 );
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_defaults_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_5;
        tmp_tuple_element_1 = Py_None;
        tmp_defaults_5 = PyTuple_New( 7 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_5, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_5, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_False;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_5, 2, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_True;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_5, 3, tmp_tuple_element_1 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_defaults_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 507;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inf );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_defaults_5 );

            exception_lineno = 507;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_defaults_5 );

            exception_lineno = 507;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_defaults_5 );
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 507;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_5;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_inf );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_defaults_5 );
            Py_DECREF( tmp_tuple_element_1 );

            exception_lineno = 507;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_5, 4, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_5, 5, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_5, 6, tmp_tuple_element_1 );
        tmp_assign_source_60 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_8_curve_fit( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_curve_fit, tmp_assign_source_60 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae43d491cb718ca9f71a633da4e0877f );
#endif
    popFrameStack();

    assertFrameObject( frame_ae43d491cb718ca9f71a633da4e0877f );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae43d491cb718ca9f71a633da4e0877f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ae43d491cb718ca9f71a633da4e0877f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ae43d491cb718ca9f71a633da4e0877f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ae43d491cb718ca9f71a633da4e0877f, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = const_tuple_tuple_empty_int_0_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_assign_source_61 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_9_check_gradient( tmp_defaults_6 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_check_gradient, tmp_assign_source_61 );
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_10__del2(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__del2, tmp_assign_source_62 );
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_11__relerr(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__relerr, tmp_assign_source_63 );
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_12__fixed_point_helper(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain__fixed_point_helper, tmp_assign_source_64 );
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_defaults_7;
        tmp_defaults_7 = const_tuple_tuple_empty_float_1eminus_08_int_pos_500_str_plain_del2_tuple;
        Py_INCREF( tmp_defaults_7 );
        tmp_assign_source_65 = MAKE_FUNCTION_scipy$optimize$minpack$$$function_13_fixed_point( tmp_defaults_7 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain_fixed_point, tmp_assign_source_65 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$minpack, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$minpack );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
