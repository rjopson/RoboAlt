/* Generated code for Python module 'scipy.integrate.quadrature'
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

/* The "_module_scipy$integrate$quadrature" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$integrate$quadrature;
PyDictObject *moduledict_scipy$integrate$quadrature;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain___closure__;
extern PyObject *const_str_plain_result;
extern PyObject *const_dict_22b54c5c9112a5c8c51dc4a23fd6481b;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_cumtrapz;
extern PyObject *const_tuple_str_plain_xrange_tuple;
extern PyObject *const_str_plain_FunctionType;
extern PyObject *const_str_plain_array;
static PyObject *const_str_digest_21db9de32a9c38f59a6877147f173fa4;
extern PyObject *const_str_plain___kwdefaults__;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_Warning;
static PyObject *const_str_plain_from;
static PyObject *const_str_digest_5ad398a52239f38a0428f845379c7a60;
extern PyObject *const_str_plain_sep;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_tuple_c61e3331c604dfee164016e29c4809c2_tuple;
static PyObject *const_tuple_str_plain_t_str_plain_i_str_plain_value_str_plain_l_tuple;
static PyObject *const_tuple_str_digest_05dd2d2881970c0cc0696ff83c3adcff_tuple;
extern PyObject *const_str_plain_inf;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_digest_74a412e987f090816381ff18e90b10d1_tuple;
extern PyObject *const_str_plain_i;
static PyObject *const_str_plain_numtraps;
extern PyObject *const_str_plain_h;
static PyObject *const_str_plain_romberg;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_digest_9de53a552350350635235a4e21f12d7a;
static PyObject *const_str_digest_8fc4cbabe71e76531a878ca953ff013e;
extern PyObject *const_str_plain_err;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_shapex;
static PyObject *const_str_plain__builtincoeffs;
extern PyObject *const_str_plain_N;
static PyObject *const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple;
extern PyObject *const_str_plain_newval;
static PyObject *const_tuple_str_plain_trapz_tuple;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_end;
extern PyObject *const_str_plain_inv;
extern PyObject *const_str_plain_real;
extern PyObject *const_int_pos_5;
extern PyObject *const_float_0_5;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_isinf;
extern PyObject *const_str_plain_full;
extern PyObject *const_tuple_int_0_int_0_tuple;
extern PyObject *const_str_plain___globals__;
static PyObject *const_str_digest_cf538e2ebc3b8d2b232a3e41e7b9a98e;
extern PyObject *const_str_plain_cache;
extern PyObject *const_str_plain_roots_legendre;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_str_plain_avg;
static PyObject *const_str_plain__printresmat;
extern PyObject *const_str_plain_linalg;
static PyObject *const_str_digest_46ac34b758178710f1a10e115b563949;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_AccuracyWarning;
extern PyObject *const_str_plain_slice2;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_flags;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_rtol;
extern PyObject *const_str_plain_gammaln;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_digest_6944d20248bdbd2b3e56da0846e4d939;
static PyObject *const_tuple_9af1a4bf1aaa8894622db0f1beeab434_tuple;
extern PyObject *const_str_digest_c88389693d9d476899c1c6e170568469;
extern PyObject *const_slice_none_none_int_pos_2;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_dict_781521607e0786098475f1bcd1891db7;
extern PyObject *const_str_plain_trapz;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_n;
extern PyObject *const_int_neg_2;
static PyObject *const_tuple_0b52f2c4060b6442340206adc79babab_tuple;
static PyObject *const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple;
static PyObject *const_tuple_5b688e792989e0b4cb1fdf473280fe37_tuple;
extern PyObject *const_tuple_type_TypeError_type_IndexError_tuple;
extern PyObject *const_str_plain_y0;
extern PyObject *const_str_plain_w;
extern PyObject *const_float_1_0;
static PyObject *const_tuple_tuple_empty_false_tuple;
extern PyObject *const_tuple_slice_none_none_none_slice_none_none_int_pos_2_tuple;
extern PyObject *const_str_plain_g;
extern PyObject *const_str_plain_value;
extern PyObject *const_float_2_0;
extern PyObject *const_str_plain_tmp;
extern PyObject *const_float_6_0;
extern PyObject *const_str_plain_exp;
extern PyObject *const_str_plain_float;
extern PyObject *const_int_pos_68;
static PyObject *const_tuple_tuple_empty_int_pos_5_tuple;
extern PyObject *const_str_plain_after;
static PyObject *const_tuple_str_digest_992bd0a1c27df010086b8cf339642d48_tuple;
extern PyObject *const_str_plain_all;
static PyObject *const_str_plain_romb;
extern PyObject *const_str_plain_even;
extern PyObject *const_int_pos_8;
static PyObject *const_str_digest_c2f591070e288bb70a50b1c720294c4a;
extern PyObject *const_str_plain_arange;
static PyObject *const_tuple_e93eac2b7e67ab5f16774f0d8253c310_tuple;
extern PyObject *const_list_int_pos_1_list;
static PyObject *const_str_digest_bf6304af5d04609bb914ac43d4fd6093;
extern PyObject *const_str_plain_l;
extern PyObject *const_float_1_48eminus_08;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_maxiter;
extern PyObject *const_str_space;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_digest_59323f47c6c24df31d9826cb307e660c;
extern PyObject *const_str_plain_append;
extern PyObject *const_tuple_str_plain_x_str_plain_func_str_plain_args_tuple;
static PyObject *const_str_digest_92608c7269ef7b2baf3915fde22474ed;
static PyObject *const_tuple_none_int_pos_1_int_neg_1_str_plain_avg_tuple;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_miniter;
static PyObject *const_str_digest_1ce622cc2873fea69e8f4cee1901e78a;
extern PyObject *const_int_pos_10;
static PyObject *const_str_digest_05dd2d2881970c0cc0696ff83c3adcff;
static PyObject *const_str_plain_first_dx;
static PyObject *const_str_plain_newton_cotes;
static PyObject *const_str_plain__cached_roots_legendre;
extern PyObject *const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202;
static PyObject *const_list_str_plain_avg_str_plain_first_list;
extern PyObject *const_str_plain_b;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_abs;
static PyObject *const_str_digest_216dbc19b5a25ff03c644f00cdd348ce;
extern PyObject *const_str_plain_xrange;
static PyObject *const_str_plain_closure;
extern PyObject *const_str_plain_concatenate;
extern PyObject *const_str_plain_False;
extern PyObject *const_tuple_str_empty_tuple;
extern PyObject *const_str_plain_output;
static PyObject *const_str_digest_7ecdb06e81ef8341b46741f934783c46;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_plain_vfunc;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_k;
static PyObject *const_str_plain_simps;
extern PyObject *const_str_plain_f;
static PyObject *const_str_digest_cbf7cf14a51f8dcf3b5f1e45f9ddb751;
static PyObject *const_str_digest_6aeaf93ab13a0721712c51524f1820fd;
extern PyObject *const_str_plain_first;
extern PyObject *const_float_4_0;
static PyObject *const_tuple_float_1_0_int_neg_1_false_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_val;
static PyObject *const_str_digest_f2d3414a13d0ccd773b98d6910f1fdd7;
static PyObject *const_str_plain_update_wrapper;
static PyObject *const_str_plain__copy_func;
static PyObject *const_str_digest_f6f58a114455f77592e6c9e15eaefea3;
static PyObject *const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple;
static PyObject *const_tuple_267af263249ebdeef6dba10398594ad8_tuple;
static PyObject *const_str_plain__basic_simps;
static PyObject *const_str_digest_bfc2d52b7bcc8306320d3aa91e584d7b;
static PyObject *const_str_digest_c28aa5192b2c55d2c031a997003d6691;
static PyObject *const_str_digest_a917613a67ae98f5f1c2911bd45315a9;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_f4b73c03e9c7704d929603a3b17e538b;
static PyObject *const_str_plain__romberg_diff;
static PyObject *const_tuple_int_pos_68_tuple;
static PyObject *const_str_digest_c12878d1e530c96345d751f2cd0b14b4;
extern PyObject *const_str_plain_nd;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_log;
static PyObject *const_tuple_c17e699ae8d0429d4710b7ae04d4507e_tuple;
extern PyObject *const_str_plain___code__;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_quadrature;
extern PyObject *const_str_plain_c;
static PyObject *const_tuple_str_plain_roots_legendre_tuple;
extern PyObject *const_int_pos_4;
static PyObject *const_str_digest_955ab92a0abff440476bf2c4e30cfdd3;
extern PyObject *const_float_3_0;
static PyObject *const_list_str_plain_avg_str_plain_last_str_plain_first_list;
extern PyObject *const_tuple_slice_none_none_none_tuple;
extern PyObject *const_tuple_str_plain_n_tuple;
extern PyObject *const_int_pos_50;
static PyObject *const_str_plain_returnshape;
extern PyObject *const_str_plain_points;
static PyObject *const_str_digest_623c8c62d0332bbb2f6448d90cfb4d61;
static PyObject *const_str_plain_numtosum;
static PyObject *const_str_plain_lox;
extern PyObject *const_str_plain_optimize;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_saveshape;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___defaults__;
extern PyObject *const_str_plain_math;
static PyObject *const_list_abd4608d2db02e99c3dfbf05942624db_list;
extern PyObject *const_str_plain_diff;
extern PyObject *const_str_plain_cumsum;
static PyObject *const_str_digest_798a2ba265316c2560fce132e38cd672;
static PyObject *const_str_plain__difftrap;
extern PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain_functools;
static PyObject *const_str_plain_last_dx;
static PyObject *const_str_digest_9e868f12b276703354fba6b4ec9f12c3;
static PyObject *const_str_plain_vec_func;
static PyObject *const_dict_aa61dd133fb5a963fbe38a34e70b9d3b;
static PyObject *const_str_plain_tupleset;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_interval;
static PyObject *const_str_digest_74a412e987f090816381ff18e90b10d1;
static PyObject *const_str_plain_argdefs;
static PyObject *const_str_digest_992bd0a1c27df010086b8cf339642d48;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_08f1824039eff941c96a4872b353052d;
extern PyObject *const_str_plain_replace;
static PyObject *const_tuple_5ec0a94fdc440532cdf138dce94a4e2b_tuple;
extern PyObject *const_str_plain_y;
static PyObject *const_tuple_none_float_1_0_int_neg_1_none_tuple;
extern PyObject *const_str_plain_initial;
extern PyObject *const_str_plain_last;
static PyObject *const_str_digest_dceadfd43b3174028d0eb2eab9d30453;
extern PyObject *const_str_plain_dx;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_axis;
static PyObject *const_str_digest_991acca7f3791d03776a975e84db3df6;
static PyObject *const_tuple_602aafeb4e1ff1c7b44220127bb614ff_tuple;
extern PyObject *const_str_plain_center;
static PyObject *const_str_plain_resmat;
extern PyObject *const_str_newline;
static PyObject *const_tuple_494ee96b6bb160bc3f7b59b311b52236_tuple;
extern PyObject *const_str_plain_print;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_types;
extern PyObject *const_tuple_str_plain_gammaln_tuple;
static PyObject *const_tuple_str_plain_b_str_plain_c_str_plain_k_str_plain_tmp_tuple;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_digest_445cd82d18d4ed836ea47ed31d78a119;
static PyObject *const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple;
extern PyObject *const_str_plain_newaxis;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_function;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_slice1;
static PyObject *const_str_digest_2226ba70f074e45f2e28b1e4cec5bac4;
static PyObject *const_str_plain_fixed_quad;
static PyObject *const_str_digest_92b7e6ede236e22c4d8101f0b8aca038;
extern PyObject *const_str_plain_np;
extern PyObject *const_xrange_0_2;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_float_1_49eminus_08;
extern PyObject *const_int_pos_2;
static PyObject *const_list_str_plain_avg_str_plain_last_list;
static PyObject *const_str_digest_b9da98666d4075a0b2ae3c2825761158;
static PyObject *const_tuple_str_plain_f_str_plain_g_tuple;
static PyObject *const_str_plain_vectorize1;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_a9e181bf37d270035fdf10c0460ac9ea;
static PyObject *const_str_digest_d918e52496d1cccc374c472894c7143c;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_isscalar;
static PyObject *const_tuple_d003280b35f0e15a58de9ea72682b96b_tuple;
extern PyObject *const_dict_fb4ddbadafbecbaef28aef989e4b600e;
static PyObject *const_str_digest_25e3ee3c70206466e940939625fb6bf7;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_21db9de32a9c38f59a6877147f173fa4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4220619 ], 21, 0 );
    const_str_plain_from = UNSTREAM_STRING_ASCII( &constant_bin[ 972 ], 4, 1 );
    const_str_digest_5ad398a52239f38a0428f845379c7a60 = UNSTREAM_STRING_ASCII( &constant_bin[ 4235740 ], 25, 0 );
    const_tuple_c61e3331c604dfee164016e29c4809c2_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_c61e3331c604dfee164016e29c4809c2_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_c61e3331c604dfee164016e29c4809c2_tuple, 1, const_float_1_49eminus_08 ); Py_INCREF( const_float_1_49eminus_08 );
    PyTuple_SET_ITEM( const_tuple_c61e3331c604dfee164016e29c4809c2_tuple, 2, const_float_1_49eminus_08 ); Py_INCREF( const_float_1_49eminus_08 );
    PyTuple_SET_ITEM( const_tuple_c61e3331c604dfee164016e29c4809c2_tuple, 3, const_int_pos_50 ); Py_INCREF( const_int_pos_50 );
    PyTuple_SET_ITEM( const_tuple_c61e3331c604dfee164016e29c4809c2_tuple, 4, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_c61e3331c604dfee164016e29c4809c2_tuple, 5, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_tuple_str_plain_t_str_plain_i_str_plain_value_str_plain_l_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_i_str_plain_value_str_plain_l_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_i_str_plain_value_str_plain_l_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_i_str_plain_value_str_plain_l_tuple, 2, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_i_str_plain_value_str_plain_l_tuple, 3, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    const_tuple_str_digest_05dd2d2881970c0cc0696ff83c3adcff_tuple = PyTuple_New( 1 );
    const_str_digest_05dd2d2881970c0cc0696ff83c3adcff = UNSTREAM_STRING_ASCII( &constant_bin[ 4235765 ], 26, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_05dd2d2881970c0cc0696ff83c3adcff_tuple, 0, const_str_digest_05dd2d2881970c0cc0696ff83c3adcff ); Py_INCREF( const_str_digest_05dd2d2881970c0cc0696ff83c3adcff );
    const_tuple_str_digest_74a412e987f090816381ff18e90b10d1_tuple = PyTuple_New( 1 );
    const_str_digest_74a412e987f090816381ff18e90b10d1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4235791 ], 69, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_74a412e987f090816381ff18e90b10d1_tuple, 0, const_str_digest_74a412e987f090816381ff18e90b10d1 ); Py_INCREF( const_str_digest_74a412e987f090816381ff18e90b10d1 );
    const_str_plain_numtraps = UNSTREAM_STRING_ASCII( &constant_bin[ 4235860 ], 8, 1 );
    const_str_plain_romberg = UNSTREAM_STRING_ASCII( &constant_bin[ 4093665 ], 7, 1 );
    const_str_digest_8fc4cbabe71e76531a878ca953ff013e = UNSTREAM_STRING_ASCII( &constant_bin[ 4235868 ], 66, 0 );
    const_str_plain_shapex = UNSTREAM_STRING_ASCII( &constant_bin[ 4235934 ], 6, 1 );
    const_str_plain__builtincoeffs = UNSTREAM_STRING_ASCII( &constant_bin[ 4235940 ], 14, 1 );
    const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 4, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 5, const_str_plain_rtol ); Py_INCREF( const_str_plain_rtol );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 6, const_str_plain_maxiter ); Py_INCREF( const_str_plain_maxiter );
    const_str_plain_vec_func = UNSTREAM_STRING_ASCII( &constant_bin[ 4235954 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 7, const_str_plain_vec_func ); Py_INCREF( const_str_plain_vec_func );
    const_str_plain_miniter = UNSTREAM_STRING_ASCII( &constant_bin[ 4235962 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 8, const_str_plain_miniter ); Py_INCREF( const_str_plain_miniter );
    const_str_plain_vfunc = UNSTREAM_STRING_ASCII( &constant_bin[ 3053026 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 9, const_str_plain_vfunc ); Py_INCREF( const_str_plain_vfunc );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 10, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 11, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 12, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 13, const_str_plain_newval ); Py_INCREF( const_str_plain_newval );
    const_tuple_str_plain_trapz_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_trapz_tuple, 0, const_str_plain_trapz ); Py_INCREF( const_str_plain_trapz );
    const_str_digest_cf538e2ebc3b8d2b232a3e41e7b9a98e = UNSTREAM_STRING_ASCII( &constant_bin[ 4235969 ], 1993, 0 );
    const_str_plain__printresmat = UNSTREAM_STRING_ASCII( &constant_bin[ 4237962 ], 12, 1 );
    const_str_digest_46ac34b758178710f1a10e115b563949 = UNSTREAM_STRING_ASCII( &constant_bin[ 4237974 ], 1764, 0 );
    const_str_plain_AccuracyWarning = UNSTREAM_STRING_ASCII( &constant_bin[ 4239738 ], 15, 1 );
    const_str_digest_6944d20248bdbd2b3e56da0846e4d939 = UNSTREAM_STRING_ASCII( &constant_bin[ 4239753 ], 54, 0 );
    const_tuple_9af1a4bf1aaa8894622db0f1beeab434_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4239807 ], 95 );
    const_dict_781521607e0786098475f1bcd1891db7 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4239902 ], 1231 );
    const_tuple_0b52f2c4060b6442340206adc79babab_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 0, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 2, const_str_plain_dx ); Py_INCREF( const_str_plain_dx );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 3, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 4, const_str_plain_initial ); Py_INCREF( const_str_plain_initial );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 5, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 6, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 7, const_str_plain_nd ); Py_INCREF( const_str_plain_nd );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 8, const_str_plain_slice1 ); Py_INCREF( const_str_plain_slice1 );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 9, const_str_plain_slice2 ); Py_INCREF( const_str_plain_slice2 );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 10, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 0, const_str_plain_function ); Py_INCREF( const_str_plain_function );
    PyTuple_SET_ITEM( const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 1, const_str_plain_interval ); Py_INCREF( const_str_plain_interval );
    PyTuple_SET_ITEM( const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 2, const_str_plain_numtraps ); Py_INCREF( const_str_plain_numtraps );
    const_str_plain_numtosum = UNSTREAM_STRING_ASCII( &constant_bin[ 4241133 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 3, const_str_plain_numtosum ); Py_INCREF( const_str_plain_numtosum );
    PyTuple_SET_ITEM( const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 4, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    const_str_plain_lox = UNSTREAM_STRING_ASCII( &constant_bin[ 3878024 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 5, const_str_plain_lox ); Py_INCREF( const_str_plain_lox );
    PyTuple_SET_ITEM( const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 6, const_str_plain_points ); Py_INCREF( const_str_plain_points );
    PyTuple_SET_ITEM( const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 7, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_tuple_5b688e792989e0b4cb1fdf473280fe37_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4241141 ], 151 );
    const_tuple_tuple_empty_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_false_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_tuple_tuple_empty_int_pos_5_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_int_pos_5_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_int_pos_5_tuple, 1, const_int_pos_5 ); Py_INCREF( const_int_pos_5 );
    const_tuple_str_digest_992bd0a1c27df010086b8cf339642d48_tuple = PyTuple_New( 1 );
    const_str_digest_992bd0a1c27df010086b8cf339642d48 = UNSTREAM_STRING_ASCII( &constant_bin[ 2307712 ], 68, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_992bd0a1c27df010086b8cf339642d48_tuple, 0, const_str_digest_992bd0a1c27df010086b8cf339642d48 ); Py_INCREF( const_str_digest_992bd0a1c27df010086b8cf339642d48 );
    const_str_plain_romb = UNSTREAM_STRING_ASCII( &constant_bin[ 7435 ], 4, 1 );
    const_str_digest_c2f591070e288bb70a50b1c720294c4a = UNSTREAM_STRING_ASCII( &constant_bin[ 4241292 ], 35, 0 );
    const_tuple_e93eac2b7e67ab5f16774f0d8253c310_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_e93eac2b7e67ab5f16774f0d8253c310_tuple, 0, const_str_plain_function ); Py_INCREF( const_str_plain_function );
    PyTuple_SET_ITEM( const_tuple_e93eac2b7e67ab5f16774f0d8253c310_tuple, 1, const_str_plain_interval ); Py_INCREF( const_str_plain_interval );
    const_str_plain_resmat = UNSTREAM_STRING_ASCII( &constant_bin[ 4237968 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_e93eac2b7e67ab5f16774f0d8253c310_tuple, 2, const_str_plain_resmat ); Py_INCREF( const_str_plain_resmat );
    PyTuple_SET_ITEM( const_tuple_e93eac2b7e67ab5f16774f0d8253c310_tuple, 3, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_e93eac2b7e67ab5f16774f0d8253c310_tuple, 4, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    const_str_digest_bf6304af5d04609bb914ac43d4fd6093 = UNSTREAM_STRING_ASCII( &constant_bin[ 4241327 ], 22, 0 );
    const_str_digest_59323f47c6c24df31d9826cb307e660c = UNSTREAM_STRING_ASCII( &constant_bin[ 4241349 ], 55, 0 );
    const_str_digest_92608c7269ef7b2baf3915fde22474ed = UNSTREAM_STRING_ASCII( &constant_bin[ 4241404 ], 35, 0 );
    const_tuple_none_int_pos_1_int_neg_1_str_plain_avg_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_int_neg_1_str_plain_avg_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_int_neg_1_str_plain_avg_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_int_neg_1_str_plain_avg_tuple, 2, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_int_neg_1_str_plain_avg_tuple, 3, const_str_plain_avg ); Py_INCREF( const_str_plain_avg );
    const_str_digest_1ce622cc2873fea69e8f4cee1901e78a = UNSTREAM_STRING_ASCII( &constant_bin[ 4241439 ], 8, 0 );
    const_str_plain_first_dx = UNSTREAM_STRING_ASCII( &constant_bin[ 4241447 ], 8, 1 );
    const_str_plain_newton_cotes = UNSTREAM_STRING_ASCII( &constant_bin[ 4093780 ], 12, 1 );
    const_str_plain__cached_roots_legendre = UNSTREAM_STRING_ASCII( &constant_bin[ 4241455 ], 22, 1 );
    const_list_str_plain_avg_str_plain_first_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_avg_str_plain_first_list, 0, const_str_plain_avg ); Py_INCREF( const_str_plain_avg );
    PyList_SET_ITEM( const_list_str_plain_avg_str_plain_first_list, 1, const_str_plain_first ); Py_INCREF( const_str_plain_first );
    const_str_digest_216dbc19b5a25ff03c644f00cdd348ce = UNSTREAM_STRING_ASCII( &constant_bin[ 4241477 ], 131, 0 );
    const_str_plain_closure = UNSTREAM_STRING_ASCII( &constant_bin[ 4241608 ], 7, 1 );
    const_str_digest_7ecdb06e81ef8341b46741f934783c46 = UNSTREAM_STRING_ASCII( &constant_bin[ 4241615 ], 1721, 0 );
    const_str_plain_simps = UNSTREAM_STRING_ASCII( &constant_bin[ 4094188 ], 5, 1 );
    const_str_digest_cbf7cf14a51f8dcf3b5f1e45f9ddb751 = UNSTREAM_STRING_ASCII( &constant_bin[ 4243336 ], 53, 0 );
    const_str_digest_6aeaf93ab13a0721712c51524f1820fd = UNSTREAM_STRING_ASCII( &constant_bin[ 4243389 ], 39, 0 );
    const_tuple_float_1_0_int_neg_1_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_float_1_0_int_neg_1_false_tuple, 0, const_float_1_0 ); Py_INCREF( const_float_1_0 );
    PyTuple_SET_ITEM( const_tuple_float_1_0_int_neg_1_false_tuple, 1, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_float_1_0_int_neg_1_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    const_str_digest_f2d3414a13d0ccd773b98d6910f1fdd7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4243428 ], 29, 0 );
    const_str_plain_update_wrapper = UNSTREAM_STRING_ASCII( &constant_bin[ 4243457 ], 14, 1 );
    const_str_plain__copy_func = UNSTREAM_STRING_ASCII( &constant_bin[ 4243471 ], 10, 1 );
    const_str_digest_f6f58a114455f77592e6c9e15eaefea3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4243481 ], 49, 0 );
    const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple, 1, const_float_1_48eminus_08 ); Py_INCREF( const_float_1_48eminus_08 );
    PyTuple_SET_ITEM( const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple, 2, const_float_1_48eminus_08 ); Py_INCREF( const_float_1_48eminus_08 );
    PyTuple_SET_ITEM( const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple, 3, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple, 4, const_int_pos_10 ); Py_INCREF( const_int_pos_10 );
    PyTuple_SET_ITEM( const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple, 5, Py_False ); Py_INCREF( Py_False );
    const_tuple_267af263249ebdeef6dba10398594ad8_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_267af263249ebdeef6dba10398594ad8_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_267af263249ebdeef6dba10398594ad8_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_267af263249ebdeef6dba10398594ad8_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_267af263249ebdeef6dba10398594ad8_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_267af263249ebdeef6dba10398594ad8_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_267af263249ebdeef6dba10398594ad8_tuple, 5, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_267af263249ebdeef6dba10398594ad8_tuple, 6, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_267af263249ebdeef6dba10398594ad8_tuple, 7, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    const_str_plain__basic_simps = UNSTREAM_STRING_ASCII( &constant_bin[ 4243530 ], 12, 1 );
    const_str_digest_bfc2d52b7bcc8306320d3aa91e584d7b = UNSTREAM_STRING_ASCII( &constant_bin[ 3006951 ], 11, 0 );
    const_str_digest_c28aa5192b2c55d2c031a997003d6691 = UNSTREAM_STRING_ASCII( &constant_bin[ 4243542 ], 88, 0 );
    const_str_digest_a917613a67ae98f5f1c2911bd45315a9 = UNSTREAM_STRING_ASCII( &constant_bin[ 2253376 ], 12, 0 );
    const_str_digest_f4b73c03e9c7704d929603a3b17e538b = UNSTREAM_STRING_ASCII( &constant_bin[ 4243630 ], 44, 0 );
    const_str_plain__romberg_diff = UNSTREAM_STRING_ASCII( &constant_bin[ 4243674 ], 13, 1 );
    const_tuple_int_pos_68_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_68_tuple, 0, const_int_pos_68 ); Py_INCREF( const_int_pos_68 );
    const_str_digest_c12878d1e530c96345d751f2cd0b14b4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4243687 ], 1911, 0 );
    const_tuple_c17e699ae8d0429d4710b7ae04d4507e_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_c17e699ae8d0429d4710b7ae04d4507e_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_c17e699ae8d0429d4710b7ae04d4507e_tuple, 1, const_str_plain_y0 ); Py_INCREF( const_str_plain_y0 );
    PyTuple_SET_ITEM( const_tuple_c17e699ae8d0429d4710b7ae04d4507e_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_c17e699ae8d0429d4710b7ae04d4507e_tuple, 3, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_c17e699ae8d0429d4710b7ae04d4507e_tuple, 4, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    PyTuple_SET_ITEM( const_tuple_c17e699ae8d0429d4710b7ae04d4507e_tuple, 5, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_c17e699ae8d0429d4710b7ae04d4507e_tuple, 6, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_c17e699ae8d0429d4710b7ae04d4507e_tuple, 7, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    const_tuple_str_plain_roots_legendre_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_roots_legendre_tuple, 0, const_str_plain_roots_legendre ); Py_INCREF( const_str_plain_roots_legendre );
    const_str_digest_955ab92a0abff440476bf2c4e30cfdd3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4245598 ], 61, 0 );
    const_list_str_plain_avg_str_plain_last_str_plain_first_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_avg_str_plain_last_str_plain_first_list, 0, const_str_plain_avg ); Py_INCREF( const_str_plain_avg );
    PyList_SET_ITEM( const_list_str_plain_avg_str_plain_last_str_plain_first_list, 1, const_str_plain_last ); Py_INCREF( const_str_plain_last );
    PyList_SET_ITEM( const_list_str_plain_avg_str_plain_last_str_plain_first_list, 2, const_str_plain_first ); Py_INCREF( const_str_plain_first );
    const_str_plain_returnshape = UNSTREAM_STRING_ASCII( &constant_bin[ 4245659 ], 11, 1 );
    const_str_digest_623c8c62d0332bbb2f6448d90cfb4d61 = UNSTREAM_STRING_ASCII( &constant_bin[ 4245670 ], 2313, 0 );
    const_str_plain_saveshape = UNSTREAM_STRING_ASCII( &constant_bin[ 4247983 ], 9, 1 );
    const_list_abd4608d2db02e99c3dfbf05942624db_list = PyList_New( 8 );
    const_str_plain_fixed_quad = UNSTREAM_STRING_ASCII( &constant_bin[ 4093513 ], 10, 1 );
    PyList_SET_ITEM( const_list_abd4608d2db02e99c3dfbf05942624db_list, 0, const_str_plain_fixed_quad ); Py_INCREF( const_str_plain_fixed_quad );
    PyList_SET_ITEM( const_list_abd4608d2db02e99c3dfbf05942624db_list, 1, const_str_plain_quadrature ); Py_INCREF( const_str_plain_quadrature );
    PyList_SET_ITEM( const_list_abd4608d2db02e99c3dfbf05942624db_list, 2, const_str_plain_romberg ); Py_INCREF( const_str_plain_romberg );
    PyList_SET_ITEM( const_list_abd4608d2db02e99c3dfbf05942624db_list, 3, const_str_plain_trapz ); Py_INCREF( const_str_plain_trapz );
    PyList_SET_ITEM( const_list_abd4608d2db02e99c3dfbf05942624db_list, 4, const_str_plain_simps ); Py_INCREF( const_str_plain_simps );
    PyList_SET_ITEM( const_list_abd4608d2db02e99c3dfbf05942624db_list, 5, const_str_plain_romb ); Py_INCREF( const_str_plain_romb );
    PyList_SET_ITEM( const_list_abd4608d2db02e99c3dfbf05942624db_list, 6, const_str_plain_cumtrapz ); Py_INCREF( const_str_plain_cumtrapz );
    PyList_SET_ITEM( const_list_abd4608d2db02e99c3dfbf05942624db_list, 7, const_str_plain_newton_cotes ); Py_INCREF( const_str_plain_newton_cotes );
    const_str_digest_798a2ba265316c2560fce132e38cd672 = UNSTREAM_STRING_ASCII( &constant_bin[ 4247992 ], 51, 0 );
    const_str_plain__difftrap = UNSTREAM_STRING_ASCII( &constant_bin[ 4248043 ], 9, 1 );
    const_str_plain_last_dx = UNSTREAM_STRING_ASCII( &constant_bin[ 4248052 ], 7, 1 );
    const_str_digest_9e868f12b276703354fba6b4ec9f12c3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4248059 ], 623, 0 );
    const_dict_aa61dd133fb5a963fbe38a34e70b9d3b = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_aa61dd133fb5a963fbe38a34e70b9d3b, const_str_plain_sep, const_str_newline );
    PyDict_SetItem( const_dict_aa61dd133fb5a963fbe38a34e70b9d3b, const_str_plain_end, const_str_newline );
    assert( PyDict_Size( const_dict_aa61dd133fb5a963fbe38a34e70b9d3b ) == 2 );
    const_str_plain_tupleset = UNSTREAM_STRING_ASCII( &constant_bin[ 1949273 ], 8, 1 );
    const_str_plain_argdefs = UNSTREAM_STRING_ASCII( &constant_bin[ 4248682 ], 7, 1 );
    const_str_digest_08f1824039eff941c96a4872b353052d = UNSTREAM_STRING_ASCII( &constant_bin[ 4248689 ], 600, 0 );
    const_tuple_5ec0a94fdc440532cdf138dce94a4e2b_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4249289 ], 132 );
    const_tuple_none_float_1_0_int_neg_1_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_float_1_0_int_neg_1_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_float_1_0_int_neg_1_none_tuple, 1, const_float_1_0 ); Py_INCREF( const_float_1_0 );
    PyTuple_SET_ITEM( const_tuple_none_float_1_0_int_neg_1_none_tuple, 2, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_none_float_1_0_int_neg_1_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_digest_dceadfd43b3174028d0eb2eab9d30453 = UNSTREAM_STRING_ASCII( &constant_bin[ 4241412 ], 26, 0 );
    const_str_digest_991acca7f3791d03776a975e84db3df6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4249421 ], 50, 0 );
    const_tuple_602aafeb4e1ff1c7b44220127bb614ff_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_602aafeb4e1ff1c7b44220127bb614ff_tuple, 0, const_str_digest_bfc2d52b7bcc8306320d3aa91e584d7b ); Py_INCREF( const_str_digest_bfc2d52b7bcc8306320d3aa91e584d7b );
    PyTuple_SET_ITEM( const_tuple_602aafeb4e1ff1c7b44220127bb614ff_tuple, 1, const_str_digest_a917613a67ae98f5f1c2911bd45315a9 ); Py_INCREF( const_str_digest_a917613a67ae98f5f1c2911bd45315a9 );
    const_tuple_494ee96b6bb160bc3f7b59b311b52236_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4249471 ], 153 );
    const_tuple_str_plain_b_str_plain_c_str_plain_k_str_plain_tmp_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_c_str_plain_k_str_plain_tmp_tuple, 0, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_c_str_plain_k_str_plain_tmp_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_c_str_plain_k_str_plain_tmp_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_c_str_plain_k_str_plain_tmp_tuple, 3, const_str_plain_tmp ); Py_INCREF( const_str_plain_tmp );
    const_str_digest_445cd82d18d4ed836ea47ed31d78a119 = UNSTREAM_STRING_ASCII( &constant_bin[ 4249624 ], 56, 0 );
    const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 0, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 2, const_str_plain_dx ); Py_INCREF( const_str_plain_dx );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 3, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 4, const_str_plain_even ); Py_INCREF( const_str_plain_even );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 5, const_str_plain_nd ); Py_INCREF( const_str_plain_nd );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 6, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 7, const_str_plain_last_dx ); Py_INCREF( const_str_plain_last_dx );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 8, const_str_plain_first_dx ); Py_INCREF( const_str_plain_first_dx );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 9, const_str_plain_returnshape ); Py_INCREF( const_str_plain_returnshape );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 10, const_str_plain_shapex ); Py_INCREF( const_str_plain_shapex );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 11, const_str_plain_saveshape ); Py_INCREF( const_str_plain_saveshape );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 12, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 13, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 14, const_str_plain_slice1 ); Py_INCREF( const_str_plain_slice1 );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 15, const_str_plain_slice2 ); Py_INCREF( const_str_plain_slice2 );
    const_str_digest_2226ba70f074e45f2e28b1e4cec5bac4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4249680 ], 1775, 0 );
    const_str_digest_92b7e6ede236e22c4d8101f0b8aca038 = UNSTREAM_STRING_ASCII( &constant_bin[ 4251455 ], 2672, 0 );
    const_list_str_plain_avg_str_plain_last_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_avg_str_plain_last_list, 0, const_str_plain_avg ); Py_INCREF( const_str_plain_avg );
    PyList_SET_ITEM( const_list_str_plain_avg_str_plain_last_list, 1, const_str_plain_last ); Py_INCREF( const_str_plain_last );
    const_str_digest_b9da98666d4075a0b2ae3c2825761158 = UNSTREAM_STRING_ASCII( &constant_bin[ 4254127 ], 45, 0 );
    const_tuple_str_plain_f_str_plain_g_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_g_tuple, 0, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_g_tuple, 1, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    const_str_plain_vectorize1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4235740 ], 10, 1 );
    const_str_digest_a9e181bf37d270035fdf10c0460ac9ea = UNSTREAM_STRING_ASCII( &constant_bin[ 4254172 ], 7, 0 );
    const_str_digest_d918e52496d1cccc374c472894c7143c = UNSTREAM_STRING_ASCII( &constant_bin[ 4254176 ], 3, 0 );
    const_tuple_d003280b35f0e15a58de9ea72682b96b_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d003280b35f0e15a58de9ea72682b96b_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_d003280b35f0e15a58de9ea72682b96b_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_d003280b35f0e15a58de9ea72682b96b_tuple, 2, const_str_plain_vec_func ); Py_INCREF( const_str_plain_vec_func );
    PyTuple_SET_ITEM( const_tuple_d003280b35f0e15a58de9ea72682b96b_tuple, 3, const_str_plain_vfunc ); Py_INCREF( const_str_plain_vfunc );
    const_str_digest_25e3ee3c70206466e940939625fb6bf7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4253989 ], 19, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$integrate$quadrature( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_27b32b0ced6095c360a638ef2c10a7a9;
static PyCodeObject *codeobj_be5a46b25a9f285cba984c875bb00e8c;
static PyCodeObject *codeobj_001c9bdd51cbca5038916fa4f989b549;
static PyCodeObject *codeobj_6c2a4784df6b03c3a9bdb5947acc75ca;
static PyCodeObject *codeobj_0cb55818daf7f169e102a50a065da745;
static PyCodeObject *codeobj_87839c40b068e02c2ac0a4820482b0c6;
static PyCodeObject *codeobj_0452387954d6582f3c08a95887221bc9;
static PyCodeObject *codeobj_f464b5950f492b9f0e16fcc973b14513;
static PyCodeObject *codeobj_2921172795333748b976571bca04795b;
static PyCodeObject *codeobj_de86da9378010ad46a2a7a4ef1779960;
static PyCodeObject *codeobj_2f7f0525054ce1fed334081719f34901;
static PyCodeObject *codeobj_5a409b5f3ef8104b86da3271e00e780c;
static PyCodeObject *codeobj_13abb2d017c71c1bd430ba04d275038b;
static PyCodeObject *codeobj_7652565408dcb3cc6897e5eb7ef87be2;
static PyCodeObject *codeobj_f868df1b50284caa53fe52dca8f43633;
static PyCodeObject *codeobj_87eccbfce1e65bd77f2c05d88b40e645;
static PyCodeObject *codeobj_ce22288cfaf2389171ffab682acedd8d;
static PyCodeObject *codeobj_154a5a946253abdbfbb0ecde3b9361ac;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_f2d3414a13d0ccd773b98d6910f1fdd7 );
    codeobj_27b32b0ced6095c360a638ef2c10a7a9 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_92608c7269ef7b2baf3915fde22474ed, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_be5a46b25a9f285cba984c875bb00e8c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__basic_simps, 353, const_tuple_5ec0a94fdc440532cdf138dce94a4e2b_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_001c9bdd51cbca5038916fa4f989b549 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__cached_roots_legendre, 40, const_tuple_str_plain_n_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6c2a4784df6b03c3a9bdb5947acc75ca = MAKE_CODEOBJ( module_filename_obj, const_str_plain__copy_func, 22, const_tuple_str_plain_f_str_plain_g_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0cb55818daf7f169e102a50a065da745 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__difftrap, 637, const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_87839c40b068e02c2ac0a4820482b0c6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__printresmat, 672, const_tuple_e93eac2b7e67ab5f16774f0d8253c310_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0452387954d6582f3c08a95887221bc9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__romberg_diff, 663, const_tuple_str_plain_b_str_plain_c_str_plain_k_str_plain_tmp_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f464b5950f492b9f0e16fcc973b14513 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cumtrapz, 261, const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2921172795333748b976571bca04795b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fixed_quad, 55, const_tuple_267af263249ebdeef6dba10398594ad8_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_de86da9378010ad46a2a7a4ef1779960 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_newton_cotes, 870, const_tuple_9af1a4bf1aaa8894622db0f1beeab434_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2f7f0525054ce1fed334081719f34901 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_quadrature, 171, const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5a409b5f3ef8104b86da3271e00e780c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_romb, 509, const_tuple_494ee96b6bb160bc3f7b59b311b52236_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_13abb2d017c71c1bd430ba04d275038b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_romberg, 689, const_tuple_5b688e792989e0b4cb1fdf473280fe37_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7652565408dcb3cc6897e5eb7ef87be2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_simps, 384, const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f868df1b50284caa53fe52dca8f43633 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tupleset, 255, const_tuple_str_plain_t_str_plain_i_str_plain_value_str_plain_l_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_87eccbfce1e65bd77f2c05d88b40e645 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_vectorize1, 126, const_tuple_d003280b35f0e15a58de9ea72682b96b_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ce22288cfaf2389171ffab682acedd8d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_vfunc, 152, const_tuple_str_plain_x_str_plain_func_str_plain_args_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_154a5a946253abdbfbb0ecde3b9361ac = MAKE_CODEOBJ( module_filename_obj, const_str_plain_vfunc, 155, const_tuple_c17e699ae8d0429d4710b7ae04d4507e_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_10_romb( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_11__difftrap(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_12__romberg_diff(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_13__printresmat(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_14_romberg( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_15_newton_cotes( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_1__copy_func(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_2__cached_roots_legendre(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_3_fixed_quad( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_4_vectorize1( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_4_vectorize1$$$function_1_vfunc(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_4_vectorize1$$$function_2_vfunc(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_5_quadrature( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_6_tupleset(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_7_cumtrapz( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_8__basic_simps(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_9_simps( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$integrate$quadrature$$$function_1__copy_func( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *var_g = NULL;
    struct Nuitka_FrameObject *frame_6c2a4784df6b03c3a9bdb5947acc75ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6c2a4784df6b03c3a9bdb5947acc75ca = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6c2a4784df6b03c3a9bdb5947acc75ca, codeobj_6c2a4784df6b03c3a9bdb5947acc75ca, module_scipy$integrate$quadrature, sizeof(void *)+sizeof(void *) );
    frame_6c2a4784df6b03c3a9bdb5947acc75ca = cache_frame_6c2a4784df6b03c3a9bdb5947acc75ca;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6c2a4784df6b03c3a9bdb5947acc75ca );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6c2a4784df6b03c3a9bdb5947acc75ca ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_6;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_types );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_types );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_FunctionType );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_f );
        tmp_source_name_2 = par_f;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___code__ );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_f );
        tmp_source_name_3 = par_f;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___globals__ );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_name;
        CHECK_OBJECT( par_f );
        tmp_source_name_4 = par_f;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_argdefs;
        CHECK_OBJECT( par_f );
        tmp_source_name_5 = par_f;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___defaults__ );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_closure;
        CHECK_OBJECT( par_f );
        tmp_source_name_6 = par_f;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___closure__ );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_6c2a4784df6b03c3a9bdb5947acc75ca->m_frame.f_lineno = 24;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_g == NULL );
        var_g = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_functools );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "functools" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_g );
        tmp_args_element_name_1 = var_g;
        CHECK_OBJECT( par_f );
        tmp_args_element_name_2 = par_f;
        frame_6c2a4784df6b03c3a9bdb5947acc75ca->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_update_wrapper, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_g;
            assert( old != NULL );
            var_g = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_f );
        tmp_source_name_7 = par_f;
        tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___kwdefaults__ );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_g );
        tmp_assattr_target_1 = var_g;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___kwdefaults__, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c2a4784df6b03c3a9bdb5947acc75ca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c2a4784df6b03c3a9bdb5947acc75ca );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6c2a4784df6b03c3a9bdb5947acc75ca, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6c2a4784df6b03c3a9bdb5947acc75ca->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6c2a4784df6b03c3a9bdb5947acc75ca, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6c2a4784df6b03c3a9bdb5947acc75ca,
        type_description_1,
        par_f,
        var_g
    );


    // Release cached frame.
    if ( frame_6c2a4784df6b03c3a9bdb5947acc75ca == cache_frame_6c2a4784df6b03c3a9bdb5947acc75ca )
    {
        Py_DECREF( frame_6c2a4784df6b03c3a9bdb5947acc75ca );
    }
    cache_frame_6c2a4784df6b03c3a9bdb5947acc75ca = NULL;

    assertFrameObject( frame_6c2a4784df6b03c3a9bdb5947acc75ca );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_g );
    tmp_return_value = var_g;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_1__copy_func );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)var_g );
    Py_DECREF( var_g );
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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

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
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_1__copy_func );
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


static PyObject *impl_scipy$integrate$quadrature$$$function_2__cached_roots_legendre( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_001c9bdd51cbca5038916fa4f989b549;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_001c9bdd51cbca5038916fa4f989b549 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_001c9bdd51cbca5038916fa4f989b549, codeobj_001c9bdd51cbca5038916fa4f989b549, module_scipy$integrate$quadrature, sizeof(void *) );
    frame_001c9bdd51cbca5038916fa4f989b549 = cache_frame_001c9bdd51cbca5038916fa4f989b549;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_001c9bdd51cbca5038916fa4f989b549 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_001c9bdd51cbca5038916fa4f989b549 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__cached_roots_legendre );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cached_roots_legendre );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_cached_roots_legendre" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_cache );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__cached_roots_legendre );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cached_roots_legendre );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_cached_roots_legendre" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 46;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_cache );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_n );
            tmp_subscript_name_1 = par_n;
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_ass_subscript_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_roots_legendre );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_roots_legendre );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "roots_legendre" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_1 = par_n;
        frame_001c9bdd51cbca5038916fa4f989b549->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__cached_roots_legendre );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cached_roots_legendre );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_cached_roots_legendre" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cache );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_ass_subscript_1 = par_n;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__cached_roots_legendre );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cached_roots_legendre );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_cached_roots_legendre" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_cache );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_subscript_name_2 = par_n;
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_001c9bdd51cbca5038916fa4f989b549 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_001c9bdd51cbca5038916fa4f989b549 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_001c9bdd51cbca5038916fa4f989b549 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_001c9bdd51cbca5038916fa4f989b549, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_001c9bdd51cbca5038916fa4f989b549->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_001c9bdd51cbca5038916fa4f989b549, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_001c9bdd51cbca5038916fa4f989b549,
        type_description_1,
        par_n
    );


    // Release cached frame.
    if ( frame_001c9bdd51cbca5038916fa4f989b549 == cache_frame_001c9bdd51cbca5038916fa4f989b549 )
    {
        Py_DECREF( frame_001c9bdd51cbca5038916fa4f989b549 );
    }
    cache_frame_001c9bdd51cbca5038916fa4f989b549 = NULL;

    assertFrameObject( frame_001c9bdd51cbca5038916fa4f989b549 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_2__cached_roots_legendre );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_2__cached_roots_legendre );
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


static PyObject *impl_scipy$integrate$quadrature$$$function_3_fixed_quad( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *par_a = python_pars[ 1 ];
    PyObject *par_b = python_pars[ 2 ];
    PyObject *par_args = python_pars[ 3 ];
    PyObject *par_n = python_pars[ 4 ];
    PyObject *var_x = NULL;
    PyObject *var_w = NULL;
    PyObject *var_y = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2921172795333748b976571bca04795b;
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
    static struct Nuitka_FrameObject *cache_frame_2921172795333748b976571bca04795b = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2921172795333748b976571bca04795b, codeobj_2921172795333748b976571bca04795b, module_scipy$integrate$quadrature, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2921172795333748b976571bca04795b = cache_frame_2921172795333748b976571bca04795b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2921172795333748b976571bca04795b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2921172795333748b976571bca04795b ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__cached_roots_legendre );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cached_roots_legendre );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_cached_roots_legendre" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_1 = par_n;
        frame_2921172795333748b976571bca04795b->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
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


            type_description_1 = "oooooooo";
            exception_lineno = 117;
            goto try_except_handler_3;
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


            type_description_1 = "oooooooo";
            exception_lineno = 117;
            goto try_except_handler_3;
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

                    type_description_1 = "oooooooo";
                    exception_lineno = 117;
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

            type_description_1 = "oooooooo";
            exception_lineno = 117;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( var_x == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_x = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_w == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_w = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 118;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_2 = var_x;
        frame_2921172795333748b976571bca04795b->m_frame.f_lineno = 118;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_real, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x;
            assert( old != NULL );
            var_x = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        int tmp_truth_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 119;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_3 = par_a;
        frame_2921172795333748b976571bca04795b->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_isinf, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 119;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 119;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_4 = par_b;
        frame_2921172795333748b976571bca04795b->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_isinf, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 119;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            tmp_make_exception_arg_1 = const_str_digest_445cd82d18d4ed836ea47ed31d78a119;
            frame_2921172795333748b976571bca04795b->m_frame.f_lineno = 120;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 120;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( par_b );
        tmp_left_name_4 = par_b;
        CHECK_OBJECT( par_a );
        tmp_right_name_1 = par_a;
        tmp_left_name_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_1 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_left_name_5 = var_x;
        tmp_right_name_3 = const_int_pos_1;
        tmp_right_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 122;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_float_2_0;
        tmp_left_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT( tmp_left_name_2, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_right_name_5 = par_a;
        tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_y == NULL );
        var_y = tmp_assign_source_7;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( par_b );
        tmp_left_name_8 = par_b;
        CHECK_OBJECT( par_a );
        tmp_right_name_6 = par_a;
        tmp_left_name_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_6 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_7 = const_float_2_0;
        tmp_left_name_6 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_left_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 123;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_5;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sum );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 123;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_w );
        tmp_left_name_9 = var_w;
        CHECK_OBJECT( par_func );
        tmp_dircall_arg1_1 = par_func;
        CHECK_OBJECT( var_y );
        tmp_tuple_element_3 = var_y;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_right_name_9 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 123;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 123;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_22b54c5c9112a5c8c51dc4a23fd6481b );
        frame_2921172795333748b976571bca04795b->m_frame.f_lineno = 123;
        tmp_right_name_8 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 123;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2921172795333748b976571bca04795b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2921172795333748b976571bca04795b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2921172795333748b976571bca04795b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2921172795333748b976571bca04795b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2921172795333748b976571bca04795b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2921172795333748b976571bca04795b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2921172795333748b976571bca04795b,
        type_description_1,
        par_func,
        par_a,
        par_b,
        par_args,
        par_n,
        var_x,
        var_w,
        var_y
    );


    // Release cached frame.
    if ( frame_2921172795333748b976571bca04795b == cache_frame_2921172795333748b976571bca04795b )
    {
        Py_DECREF( frame_2921172795333748b976571bca04795b );
    }
    cache_frame_2921172795333748b976571bca04795b = NULL;

    assertFrameObject( frame_2921172795333748b976571bca04795b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_3_fixed_quad );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_w );
    Py_DECREF( var_w );
    var_w = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_3_fixed_quad );
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


static PyObject *impl_scipy$integrate$quadrature$$$function_4_vectorize1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_func = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_args = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *par_vec_func = python_pars[ 2 ];
    PyObject *var_vfunc = NULL;
    struct Nuitka_FrameObject *frame_87eccbfce1e65bd77f2c05d88b40e645;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_87eccbfce1e65bd77f2c05d88b40e645 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_87eccbfce1e65bd77f2c05d88b40e645, codeobj_87eccbfce1e65bd77f2c05d88b40e645, module_scipy$integrate$quadrature, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_87eccbfce1e65bd77f2c05d88b40e645 = cache_frame_87eccbfce1e65bd77f2c05d88b40e645;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_87eccbfce1e65bd77f2c05d88b40e645 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_87eccbfce1e65bd77f2c05d88b40e645 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_vec_func );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_vec_func );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ccoo";
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
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_4_vectorize1$$$function_1_vfunc(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_args;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] = par_func;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] );


            assert( var_vfunc == NULL );
            var_vfunc = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_4_vectorize1$$$function_2_vfunc(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] = par_args;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] = par_func;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] );


            assert( var_vfunc == NULL );
            var_vfunc = tmp_assign_source_2;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_87eccbfce1e65bd77f2c05d88b40e645 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_87eccbfce1e65bd77f2c05d88b40e645 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_87eccbfce1e65bd77f2c05d88b40e645, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_87eccbfce1e65bd77f2c05d88b40e645->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_87eccbfce1e65bd77f2c05d88b40e645, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_87eccbfce1e65bd77f2c05d88b40e645,
        type_description_1,
        par_func,
        par_args,
        par_vec_func,
        var_vfunc
    );


    // Release cached frame.
    if ( frame_87eccbfce1e65bd77f2c05d88b40e645 == cache_frame_87eccbfce1e65bd77f2c05d88b40e645 )
    {
        Py_DECREF( frame_87eccbfce1e65bd77f2c05d88b40e645 );
    }
    cache_frame_87eccbfce1e65bd77f2c05d88b40e645 = NULL;

    assertFrameObject( frame_87eccbfce1e65bd77f2c05d88b40e645 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_vfunc );
    tmp_return_value = var_vfunc;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_4_vectorize1 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_vec_func );
    Py_DECREF( par_vec_func );
    par_vec_func = NULL;

    CHECK_OBJECT( (PyObject *)var_vfunc );
    Py_DECREF( var_vfunc );
    var_vfunc = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_vec_func );
    Py_DECREF( par_vec_func );
    par_vec_func = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_4_vectorize1 );
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


static PyObject *impl_scipy$integrate$quadrature$$$function_4_vectorize1$$$function_1_vfunc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_ce22288cfaf2389171ffab682acedd8d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ce22288cfaf2389171ffab682acedd8d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ce22288cfaf2389171ffab682acedd8d, codeobj_ce22288cfaf2389171ffab682acedd8d, module_scipy$integrate$quadrature, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ce22288cfaf2389171ffab682acedd8d = cache_frame_ce22288cfaf2389171ffab682acedd8d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ce22288cfaf2389171ffab682acedd8d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ce22288cfaf2389171ffab682acedd8d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 153;
            type_description_1 = "occ";
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

            exception_lineno = 153;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = PyCell_GET( self->m_closure[0] );
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


            exception_lineno = 153;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce22288cfaf2389171ffab682acedd8d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce22288cfaf2389171ffab682acedd8d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce22288cfaf2389171ffab682acedd8d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ce22288cfaf2389171ffab682acedd8d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ce22288cfaf2389171ffab682acedd8d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ce22288cfaf2389171ffab682acedd8d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ce22288cfaf2389171ffab682acedd8d,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_ce22288cfaf2389171ffab682acedd8d == cache_frame_ce22288cfaf2389171ffab682acedd8d )
    {
        Py_DECREF( frame_ce22288cfaf2389171ffab682acedd8d );
    }
    cache_frame_ce22288cfaf2389171ffab682acedd8d = NULL;

    assertFrameObject( frame_ce22288cfaf2389171ffab682acedd8d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_4_vectorize1$$$function_1_vfunc );
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
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_4_vectorize1$$$function_1_vfunc );
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


static PyObject *impl_scipy$integrate$quadrature$$$function_4_vectorize1$$$function_2_vfunc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_y0 = NULL;
    PyObject *var_n = NULL;
    PyObject *var_dtype = NULL;
    PyObject *var_output = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_154a5a946253abdbfbb0ecde3b9361ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_154a5a946253abdbfbb0ecde3b9361ac = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_154a5a946253abdbfbb0ecde3b9361ac, codeobj_154a5a946253abdbfbb0ecde3b9361ac, module_scipy$integrate$quadrature, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_154a5a946253abdbfbb0ecde3b9361ac = cache_frame_154a5a946253abdbfbb0ecde3b9361ac;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_154a5a946253abdbfbb0ecde3b9361ac );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_154a5a946253abdbfbb0ecde3b9361ac ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 156;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_154a5a946253abdbfbb0ecde3b9361ac->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isscalar, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 156;
            type_description_1 = "oooooocc";
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
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_dircall_arg3_1;
            if ( PyCell_GET( self->m_closure[1] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 157;
                type_description_1 = "oooooocc";
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

                exception_lineno = 157;
                type_description_1 = "oooooocc";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg3_1 = PyCell_GET( self->m_closure[0] );
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


                exception_lineno = 157;
                type_description_1 = "oooooocc";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 158;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_154a5a946253abdbfbb0ecde3b9361ac->m_frame.f_lineno = 158;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_dircall_arg3_2;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 160;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_2 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_1 = par_x;
        tmp_subscript_name_1 = const_int_0;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_dircall_arg2_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 160;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_2 = PyCell_GET( self->m_closure[0] );
        Py_INCREF( tmp_dircall_arg1_2 );
        Py_INCREF( tmp_dircall_arg3_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_assign_source_2 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        assert( var_y0 == NULL );
        var_y0 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_x );
        tmp_len_arg_1 = par_x;
        tmp_assign_source_3 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT( var_y0 );
        tmp_getattr_target_1 = var_y0;
        tmp_getattr_attr_1 = const_str_plain_dtype;
        CHECK_OBJECT( var_y0 );
        tmp_type_arg_1 = var_y0;
        tmp_getattr_default_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_getattr_default_1 == NULL) );
        tmp_assign_source_4 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
        Py_DECREF( tmp_getattr_default_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        assert( var_dtype == NULL );
        var_dtype = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 163;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_empty );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_tuple_element_4 = var_n;
        tmp_tuple_element_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( var_dtype );
        tmp_dict_value_1 = var_dtype;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_154a5a946253abdbfbb0ecde3b9361ac->m_frame.f_lineno = 163;
        tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_5;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( var_y0 );
        tmp_ass_subvalue_1 = var_y0;
        CHECK_OBJECT( var_output );
        tmp_ass_subscribed_1 = var_output;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_xrange );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "xrange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 165;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        tmp_args_element_name_3 = const_int_pos_1;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_4 = var_n;
        frame_154a5a946253abdbfbb0ecde3b9361ac->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooocc";
                exception_lineno = 165;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_8 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_8;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_dircall_arg3_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 166;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }

        tmp_dircall_arg1_3 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_2 = par_x;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_2 = var_i;
        tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        tmp_dircall_arg2_3 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_5 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_dircall_arg2_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 166;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }

        tmp_dircall_arg3_3 = PyCell_GET( self->m_closure[0] );
        Py_INCREF( tmp_dircall_arg1_3 );
        Py_INCREF( tmp_dircall_arg3_3 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3};
            tmp_ass_subvalue_2 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_output );
        tmp_ass_subscribed_2 = var_output;
        CHECK_OBJECT( var_i );
        tmp_ass_subscript_2 = var_i;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "oooooocc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_154a5a946253abdbfbb0ecde3b9361ac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_154a5a946253abdbfbb0ecde3b9361ac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_154a5a946253abdbfbb0ecde3b9361ac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_154a5a946253abdbfbb0ecde3b9361ac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_154a5a946253abdbfbb0ecde3b9361ac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_154a5a946253abdbfbb0ecde3b9361ac, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_154a5a946253abdbfbb0ecde3b9361ac,
        type_description_1,
        par_x,
        var_y0,
        var_n,
        var_dtype,
        var_output,
        var_i,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_154a5a946253abdbfbb0ecde3b9361ac == cache_frame_154a5a946253abdbfbb0ecde3b9361ac )
    {
        Py_DECREF( frame_154a5a946253abdbfbb0ecde3b9361ac );
    }
    cache_frame_154a5a946253abdbfbb0ecde3b9361ac = NULL;

    assertFrameObject( frame_154a5a946253abdbfbb0ecde3b9361ac );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    CHECK_OBJECT( var_output );
    tmp_return_value = var_output;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_4_vectorize1$$$function_2_vfunc );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_y0 );
    var_y0 = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_y0 );
    var_y0 = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_4_vectorize1$$$function_2_vfunc );
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


static PyObject *impl_scipy$integrate$quadrature$$$function_5_quadrature( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *par_a = python_pars[ 1 ];
    PyObject *par_b = python_pars[ 2 ];
    PyObject *par_args = python_pars[ 3 ];
    PyObject *par_tol = python_pars[ 4 ];
    PyObject *par_rtol = python_pars[ 5 ];
    PyObject *par_maxiter = python_pars[ 6 ];
    PyObject *par_vec_func = python_pars[ 7 ];
    PyObject *par_miniter = python_pars[ 8 ];
    PyObject *var_vfunc = NULL;
    PyObject *var_val = NULL;
    PyObject *var_err = NULL;
    PyObject *var_n = NULL;
    PyObject *var_newval = NULL;
    nuitka_bool tmp_for_loop_1__break_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_2f7f0525054ce1fed334081719f34901;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2f7f0525054ce1fed334081719f34901 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2f7f0525054ce1fed334081719f34901, codeobj_2f7f0525054ce1fed334081719f34901, module_scipy$integrate$quadrature, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2f7f0525054ce1fed334081719f34901 = cache_frame_2f7f0525054ce1fed334081719f34901;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2f7f0525054ce1fed334081719f34901 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2f7f0525054ce1fed334081719f34901 ) == 2 ); // Frame stack

    // Framed code:
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


            exception_lineno = 235;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oooooooooooooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_args );
            tmp_tuple_element_1 = par_args;
            tmp_assign_source_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_1 );
            {
                PyObject *old = par_args;
                assert( old != NULL );
                par_args = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_vectorize1 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_vectorize1 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "vectorize1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 237;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_func );
        tmp_tuple_element_2 = par_func;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_args );
        tmp_tuple_element_2 = par_args;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
        tmp_dict_key_1 = const_str_plain_vec_func;
        CHECK_OBJECT( par_vec_func );
        tmp_dict_value_1 = par_vec_func;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_2f7f0525054ce1fed334081719f34901->m_frame.f_lineno = 237;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_vfunc == NULL );
        var_vfunc = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 238;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_val == NULL );
        var_val = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 239;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inf );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_err == NULL );
        var_err = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( par_miniter );
        tmp_left_name_1 = par_miniter;
        tmp_right_name_1 = const_int_pos_1;
        tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_maxiter );
        tmp_args_element_name_2 = par_maxiter;
        frame_2f7f0525054ce1fed334081719f34901->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_maxiter;
            assert( old != NULL );
            par_maxiter = tmp_assign_source_5;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_FALSE;
        tmp_for_loop_1__break_indicator = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_xrange );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "xrange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 241;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_miniter );
        tmp_args_element_name_3 = par_miniter;
        CHECK_OBJECT( par_maxiter );
        tmp_left_name_2 = par_maxiter;
        tmp_right_name_2 = const_int_pos_1;
        tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_2f7f0525054ce1fed334081719f34901->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_value_name_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT( tmp_value_name_1 );
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 241;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF( old );
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

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = exception_keeper_type_1;
        tmp_compexpr_right_1 = PyExc_StopIteration;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_1 );
            Py_XDECREF( exception_keeper_value_1 );
            Py_XDECREF( exception_keeper_tb_1 );

            exception_lineno = 241;
            type_description_1 = "oooooooooooooo";
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
            nuitka_bool tmp_assign_source_9;
            tmp_assign_source_9 = NUITKA_BOOL_TRUE;
            tmp_for_loop_1__break_indicator = tmp_assign_source_9;
        }
        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );
        goto loop_end_1;
        goto branch_end_2;
        branch_no_2:;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        branch_end_2:;
    }
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_n;
            var_n = tmp_assign_source_10;
            Py_INCREF( var_n );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_fixed_quad );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fixed_quad );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fixed_quad" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 242;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        CHECK_OBJECT( var_vfunc );
        tmp_args_element_name_5 = var_vfunc;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_6 = par_a;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_7 = par_b;
        tmp_args_element_name_8 = const_tuple_empty;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_9 = var_n;
        frame_2f7f0525054ce1fed334081719f34901->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_4, call_args );
        }

        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_newval;
            var_newval = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_5 != NULL );
        CHECK_OBJECT( var_newval );
        tmp_left_name_3 = var_newval;
        CHECK_OBJECT( var_val );
        tmp_right_name_3 = var_val;
        tmp_args_element_name_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        frame_2f7f0525054ce1fed334081719f34901->m_frame.f_lineno = 243;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_err;
            assert( old != NULL );
            var_err = tmp_assign_source_12;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( var_newval );
        tmp_assign_source_13 = var_newval;
        {
            PyObject *old = var_val;
            assert( old != NULL );
            var_val = tmp_assign_source_13;
            Py_INCREF( var_val );
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT( var_err );
        tmp_compexpr_left_2 = var_err;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_2 = par_tol;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
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
        CHECK_OBJECT( var_err );
        tmp_compexpr_left_3 = var_err;
        CHECK_OBJECT( par_rtol );
        tmp_left_name_4 = par_rtol;
        tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_6 != NULL );
        CHECK_OBJECT( var_val );
        tmp_args_element_name_11 = var_val;
        frame_2f7f0525054ce1fed334081719f34901->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        goto loop_end_1;
        branch_no_3:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert( tmp_for_loop_1__break_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_for_loop_1__break_indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
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
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 249;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_3 = tmp_mvar_value_6;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_warn );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 249;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_left_name_5 = const_str_digest_b9da98666d4075a0b2ae3c2825761158;
            CHECK_OBJECT( par_maxiter );
            tmp_tuple_element_3 = par_maxiter;
            tmp_right_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_3 );
            if ( var_err == NULL )
            {
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_right_name_5 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "err" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 250;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_tuple_element_3 = var_err;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_3 );
            tmp_args_element_name_12 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_args_element_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 250;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_AccuracyWarning );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AccuracyWarning );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_12 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AccuracyWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 251;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_args_element_name_13 = tmp_mvar_value_7;
            frame_2f7f0525054ce1fed334081719f34901->m_frame.f_lineno = 249;
            {
                PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_12 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 249;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_4:;
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

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_tuple_element_4;
        if ( var_val == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "val" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 252;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_4 = var_val;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
        if ( var_err == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "err" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 252;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_4 = var_err;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2f7f0525054ce1fed334081719f34901 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2f7f0525054ce1fed334081719f34901 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2f7f0525054ce1fed334081719f34901 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2f7f0525054ce1fed334081719f34901, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2f7f0525054ce1fed334081719f34901->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2f7f0525054ce1fed334081719f34901, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2f7f0525054ce1fed334081719f34901,
        type_description_1,
        par_func,
        par_a,
        par_b,
        par_args,
        par_tol,
        par_rtol,
        par_maxiter,
        par_vec_func,
        par_miniter,
        var_vfunc,
        var_val,
        var_err,
        var_n,
        var_newval
    );


    // Release cached frame.
    if ( frame_2f7f0525054ce1fed334081719f34901 == cache_frame_2f7f0525054ce1fed334081719f34901 )
    {
        Py_DECREF( frame_2f7f0525054ce1fed334081719f34901 );
    }
    cache_frame_2f7f0525054ce1fed334081719f34901 = NULL;

    assertFrameObject( frame_2f7f0525054ce1fed334081719f34901 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_5_quadrature );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_rtol );
    Py_DECREF( par_rtol );
    par_rtol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_vec_func );
    Py_DECREF( par_vec_func );
    par_vec_func = NULL;

    CHECK_OBJECT( (PyObject *)par_miniter );
    Py_DECREF( par_miniter );
    par_miniter = NULL;

    CHECK_OBJECT( (PyObject *)var_vfunc );
    Py_DECREF( var_vfunc );
    var_vfunc = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_newval );
    var_newval = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_rtol );
    Py_DECREF( par_rtol );
    par_rtol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_vec_func );
    Py_DECREF( par_vec_func );
    par_vec_func = NULL;

    CHECK_OBJECT( (PyObject *)par_miniter );
    Py_DECREF( par_miniter );
    par_miniter = NULL;

    Py_XDECREF( var_vfunc );
    var_vfunc = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_newval );
    var_newval = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_5_quadrature );
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


static PyObject *impl_scipy$integrate$quadrature$$$function_6_tupleset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *par_i = python_pars[ 1 ];
    PyObject *par_value = python_pars[ 2 ];
    PyObject *var_l = NULL;
    struct Nuitka_FrameObject *frame_f868df1b50284caa53fe52dca8f43633;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f868df1b50284caa53fe52dca8f43633 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f868df1b50284caa53fe52dca8f43633, codeobj_f868df1b50284caa53fe52dca8f43633, module_scipy$integrate$quadrature, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f868df1b50284caa53fe52dca8f43633 = cache_frame_f868df1b50284caa53fe52dca8f43633;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f868df1b50284caa53fe52dca8f43633 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f868df1b50284caa53fe52dca8f43633 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT( par_t );
        tmp_list_arg_1 = par_t;
        tmp_assign_source_1 = PySequence_List( tmp_list_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_l == NULL );
        var_l = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_value );
        tmp_ass_subvalue_1 = par_value;
        CHECK_OBJECT( var_l );
        tmp_ass_subscribed_1 = var_l;
        CHECK_OBJECT( par_i );
        tmp_ass_subscript_1 = par_i;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 257;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT( var_l );
        tmp_tuple_arg_1 = var_l;
        tmp_return_value = PySequence_Tuple( tmp_tuple_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f868df1b50284caa53fe52dca8f43633 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f868df1b50284caa53fe52dca8f43633 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f868df1b50284caa53fe52dca8f43633 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f868df1b50284caa53fe52dca8f43633, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f868df1b50284caa53fe52dca8f43633->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f868df1b50284caa53fe52dca8f43633, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f868df1b50284caa53fe52dca8f43633,
        type_description_1,
        par_t,
        par_i,
        par_value,
        var_l
    );


    // Release cached frame.
    if ( frame_f868df1b50284caa53fe52dca8f43633 == cache_frame_f868df1b50284caa53fe52dca8f43633 )
    {
        Py_DECREF( frame_f868df1b50284caa53fe52dca8f43633 );
    }
    cache_frame_f868df1b50284caa53fe52dca8f43633 = NULL;

    assertFrameObject( frame_f868df1b50284caa53fe52dca8f43633 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_6_tupleset );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_6_tupleset );
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


static PyObject *impl_scipy$integrate$quadrature$$$function_7_cumtrapz( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_y = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_dx = python_pars[ 2 ];
    PyObject *par_axis = python_pars[ 3 ];
    PyObject *par_initial = python_pars[ 4 ];
    PyObject *var_d = NULL;
    PyObject *var_shape = NULL;
    PyObject *var_nd = NULL;
    PyObject *var_slice1 = NULL;
    PyObject *var_slice2 = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_f464b5950f492b9f0e16fcc973b14513;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f464b5950f492b9f0e16fcc973b14513 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f464b5950f492b9f0e16fcc973b14513, codeobj_f464b5950f492b9f0e16fcc973b14513, module_scipy$integrate$quadrature, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f464b5950f492b9f0e16fcc973b14513 = cache_frame_f464b5950f492b9f0e16fcc973b14513;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f464b5950f492b9f0e16fcc973b14513 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f464b5950f492b9f0e16fcc973b14513 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 315;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_1 = par_y;
        frame_f464b5950f492b9f0e16fcc973b14513->m_frame.f_lineno = 315;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_y;
            assert( old != NULL );
            par_y = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_x );
        tmp_compexpr_left_1 = par_x;
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
            CHECK_OBJECT( par_dx );
            tmp_assign_source_2 = par_dx;
            assert( var_d == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_d = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 319;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_2 = par_x;
            frame_f464b5950f492b9f0e16fcc973b14513->m_frame.f_lineno = 319;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x;
                assert( old != NULL );
                par_x = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_x );
            tmp_source_name_1 = par_x;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 320;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 320;
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
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 321;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_3 = tmp_mvar_value_3;
                CHECK_OBJECT( par_x );
                tmp_args_element_name_3 = par_x;
                frame_f464b5950f492b9f0e16fcc973b14513->m_frame.f_lineno = 321;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_diff, call_args );
                }

                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 321;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_d == NULL );
                var_d = tmp_assign_source_4;
            }
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_source_name_2;
                tmp_left_name_1 = LIST_COPY( const_list_int_pos_1_list );
                CHECK_OBJECT( par_y );
                tmp_source_name_2 = par_y;
                tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_1 );

                    exception_lineno = 323;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_5 = BINARY_OPERATION_MUL_LIST_OBJECT( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_assign_source_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 323;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_shape == NULL );
                var_shape = tmp_assign_source_5;
            }
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                tmp_ass_subvalue_1 = const_int_neg_1;
                CHECK_OBJECT( var_shape );
                tmp_ass_subscribed_1 = var_shape;
                CHECK_OBJECT( par_axis );
                tmp_ass_subscript_1 = par_axis;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 324;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_args_element_name_4;
                CHECK_OBJECT( var_d );
                tmp_called_instance_4 = var_d;
                CHECK_OBJECT( var_shape );
                tmp_args_element_name_4 = var_shape;
                frame_f464b5950f492b9f0e16fcc973b14513->m_frame.f_lineno = 325;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_reshape, call_args );
                }

                if ( tmp_assign_source_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 325;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_d;
                    assert( old != NULL );
                    var_d = tmp_assign_source_6;
                    Py_DECREF( old );
                }

            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_len_arg_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_len_arg_2;
                PyObject *tmp_source_name_4;
                CHECK_OBJECT( par_x );
                tmp_source_name_3 = par_x;
                tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
                if ( tmp_len_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 326;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
                Py_DECREF( tmp_len_arg_1 );
                if ( tmp_compexpr_left_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 326;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_y );
                tmp_source_name_4 = par_y;
                tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
                if ( tmp_len_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_3 );

                    exception_lineno = 326;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_3 = BUILTIN_LEN( tmp_len_arg_2 );
                Py_DECREF( tmp_len_arg_2 );
                if ( tmp_compexpr_right_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_3 );

                    exception_lineno = 326;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                Py_DECREF( tmp_compexpr_right_3 );
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
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_make_exception_arg_1;
                    tmp_make_exception_arg_1 = const_str_digest_991acca7f3791d03776a975e84db3df6;
                    frame_f464b5950f492b9f0e16fcc973b14513->m_frame.f_lineno = 327;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_1 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_1 == NULL) );
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 327;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    PyObject *tmp_assign_source_7;
                    PyObject *tmp_called_name_1;
                    PyObject *tmp_source_name_5;
                    PyObject *tmp_mvar_value_4;
                    PyObject *tmp_args_name_1;
                    PyObject *tmp_tuple_element_1;
                    PyObject *tmp_kw_name_1;
                    PyObject *tmp_dict_key_1;
                    PyObject *tmp_dict_value_1;
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 330;
                        type_description_1 = "ooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_5 = tmp_mvar_value_4;
                    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_diff );
                    if ( tmp_called_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 330;
                        type_description_1 = "ooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_x );
                    tmp_tuple_element_1 = par_x;
                    tmp_args_name_1 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_1 );
                    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
                    tmp_dict_key_1 = const_str_plain_axis;
                    CHECK_OBJECT( par_axis );
                    tmp_dict_value_1 = par_axis;
                    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                    assert( !(tmp_res != 0) );
                    frame_f464b5950f492b9f0e16fcc973b14513->m_frame.f_lineno = 330;
                    tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
                    Py_DECREF( tmp_called_name_1 );
                    Py_DECREF( tmp_args_name_1 );
                    Py_DECREF( tmp_kw_name_1 );
                    if ( tmp_assign_source_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 330;
                        type_description_1 = "ooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_d == NULL );
                    var_d = tmp_assign_source_7;
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_right_name_2;
            if ( var_d == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 332;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = var_d;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 332;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 332;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_y );
            tmp_source_name_7 = par_y;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_4 );

                exception_lineno = 332;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_2 = par_axis;
            tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_2 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_4 );

                exception_lineno = 332;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_1;
            tmp_compexpr_right_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_compexpr_right_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_4 );

                exception_lineno = 332;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 332;
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_59323f47c6c24df31d9826cb307e660c;
                frame_f464b5950f492b9f0e16fcc973b14513->m_frame.f_lineno = 333;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 333;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_4:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_y );
        tmp_source_name_8 = par_y;
        tmp_len_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
        if ( tmp_len_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = BUILTIN_LEN( tmp_len_arg_3 );
        Py_DECREF( tmp_len_arg_3 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nd == NULL );
        var_nd = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tupleset" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 337;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_5;
        tmp_left_name_3 = const_tuple_slice_none_none_none_tuple;
        CHECK_OBJECT( var_nd );
        tmp_right_name_3 = var_nd;
        tmp_args_element_name_5 = BINARY_OPERATION_MUL_TUPLE_LONG( tmp_left_name_3, tmp_right_name_3 );
        assert( !(tmp_args_element_name_5 == NULL) );
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_6 = par_axis;
        tmp_args_element_name_7 = const_slice_int_pos_1_none_none;
        frame_f464b5950f492b9f0e16fcc973b14513->m_frame.f_lineno = 337;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_slice1 == NULL );
        var_slice1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tupleset" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 338;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_6;
        tmp_left_name_4 = const_tuple_slice_none_none_none_tuple;
        CHECK_OBJECT( var_nd );
        tmp_right_name_4 = var_nd;
        tmp_args_element_name_8 = BINARY_OPERATION_MUL_TUPLE_LONG( tmp_left_name_4, tmp_right_name_4 );
        assert( !(tmp_args_element_name_8 == NULL) );
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_9 = par_axis;
        tmp_args_element_name_10 = const_slice_none_int_neg_1_none;
        frame_f464b5950f492b9f0e16fcc973b14513->m_frame.f_lineno = 338;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_slice2 == NULL );
        var_slice2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_6;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_right_name_7;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 339;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_7;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_cumsum );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_d == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 339;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_6 = var_d;
        CHECK_OBJECT( par_y );
        tmp_subscribed_name_3 = par_y;
        CHECK_OBJECT( var_slice1 );
        tmp_subscript_name_3 = var_slice1;
        tmp_left_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 339;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_y );
        tmp_subscribed_name_4 = par_y;
        CHECK_OBJECT( var_slice2 );
        tmp_subscript_name_4 = var_slice2;
        tmp_right_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 339;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 339;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 339;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_7 = const_float_2_0;
        tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT( tmp_left_name_5, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 339;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_dict_key_2 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_2 = par_axis;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_f464b5950f492b9f0e16fcc973b14513->m_frame.f_lineno = 339;
        tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_11;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( par_initial );
        tmp_compexpr_left_5 = par_initial;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_5 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_11;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 342;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_5 = tmp_mvar_value_8;
            CHECK_OBJECT( par_initial );
            tmp_args_element_name_11 = par_initial;
            frame_f464b5950f492b9f0e16fcc973b14513->m_frame.f_lineno = 342;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_isscalar, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 342;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 342;
                type_description_1 = "ooooooooooo";
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
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_6aeaf93ab13a0721712c51524f1820fd;
                frame_f464b5950f492b9f0e16fcc973b14513->m_frame.f_lineno = 343;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 343;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_6:;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_list_arg_1;
            PyObject *tmp_source_name_10;
            CHECK_OBJECT( var_res );
            tmp_source_name_10 = var_res;
            tmp_list_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
            if ( tmp_list_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 345;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_12 = PySequence_List( tmp_list_arg_1 );
            Py_DECREF( tmp_list_arg_1 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 345;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_shape;
                var_shape = tmp_assign_source_12;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = const_int_pos_1;
            CHECK_OBJECT( var_shape );
            tmp_ass_subscribed_2 = var_shape;
            CHECK_OBJECT( par_axis );
            tmp_ass_subscript_2 = par_axis;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_11;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_list_element_1;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_12;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_source_name_13;
            PyObject *tmp_kw_name_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 347;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_11 = tmp_mvar_value_9;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_concatenate );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_10 == NULL )
            {
                Py_DECREF( tmp_called_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 347;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_12 = tmp_mvar_value_10;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_full );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 347;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_shape );
            tmp_tuple_element_4 = var_shape;
            tmp_args_name_4 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( par_initial );
            tmp_tuple_element_4 = par_initial;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_4 );
            tmp_dict_key_3 = const_str_plain_dtype;
            CHECK_OBJECT( var_res );
            tmp_source_name_13 = var_res;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_dtype );
            if ( tmp_dict_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_args_name_4 );

                exception_lineno = 347;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
            Py_DECREF( tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_f464b5950f492b9f0e16fcc973b14513->m_frame.f_lineno = 347;
            tmp_list_element_1 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_4, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_list_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 347;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_3 = PyList_New( 2 );
            PyList_SET_ITEM( tmp_tuple_element_3, 0, tmp_list_element_1 );
            CHECK_OBJECT( var_res );
            tmp_list_element_1 = var_res;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_tuple_element_3, 1, tmp_list_element_1 );
            tmp_args_name_3 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
            tmp_dict_key_4 = const_str_plain_axis;
            CHECK_OBJECT( par_axis );
            tmp_dict_value_4 = par_axis;
            tmp_kw_name_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            frame_f464b5950f492b9f0e16fcc973b14513->m_frame.f_lineno = 347;
            tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_3, tmp_kw_name_4 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_res;
                assert( old != NULL );
                var_res = tmp_assign_source_13;
                Py_DECREF( old );
            }

        }
        branch_no_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f464b5950f492b9f0e16fcc973b14513 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f464b5950f492b9f0e16fcc973b14513 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f464b5950f492b9f0e16fcc973b14513, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f464b5950f492b9f0e16fcc973b14513->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f464b5950f492b9f0e16fcc973b14513, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f464b5950f492b9f0e16fcc973b14513,
        type_description_1,
        par_y,
        par_x,
        par_dx,
        par_axis,
        par_initial,
        var_d,
        var_shape,
        var_nd,
        var_slice1,
        var_slice2,
        var_res
    );


    // Release cached frame.
    if ( frame_f464b5950f492b9f0e16fcc973b14513 == cache_frame_f464b5950f492b9f0e16fcc973b14513 )
    {
        Py_DECREF( frame_f464b5950f492b9f0e16fcc973b14513 );
    }
    cache_frame_f464b5950f492b9f0e16fcc973b14513 = NULL;

    assertFrameObject( frame_f464b5950f492b9f0e16fcc973b14513 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_res );
    tmp_return_value = var_res;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_7_cumtrapz );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_dx );
    Py_DECREF( par_dx );
    par_dx = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_initial );
    Py_DECREF( par_initial );
    par_initial = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_nd );
    Py_DECREF( var_nd );
    var_nd = NULL;

    CHECK_OBJECT( (PyObject *)var_slice1 );
    Py_DECREF( var_slice1 );
    var_slice1 = NULL;

    CHECK_OBJECT( (PyObject *)var_slice2 );
    Py_DECREF( var_slice2 );
    var_slice2 = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_dx );
    Py_DECREF( par_dx );
    par_dx = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_initial );
    Py_DECREF( par_initial );
    par_initial = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_nd );
    var_nd = NULL;

    Py_XDECREF( var_slice1 );
    var_slice1 = NULL;

    Py_XDECREF( var_slice2 );
    var_slice2 = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_7_cumtrapz );
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


static PyObject *impl_scipy$integrate$quadrature$$$function_8__basic_simps( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_y = python_pars[ 0 ];
    PyObject *par_start = python_pars[ 1 ];
    PyObject *par_stop = python_pars[ 2 ];
    PyObject *par_x = python_pars[ 3 ];
    PyObject *par_dx = python_pars[ 4 ];
    PyObject *par_axis = python_pars[ 5 ];
    PyObject *var_nd = NULL;
    PyObject *var_slice_all = NULL;
    PyObject *var_slice0 = NULL;
    PyObject *var_slice1 = NULL;
    PyObject *var_slice2 = NULL;
    PyObject *var_result = NULL;
    PyObject *var_h = NULL;
    PyObject *var_sl0 = NULL;
    PyObject *var_sl1 = NULL;
    PyObject *var_h0 = NULL;
    PyObject *var_h1 = NULL;
    PyObject *var_hsum = NULL;
    PyObject *var_hprod = NULL;
    PyObject *var_h0divh1 = NULL;
    PyObject *var_tmp = NULL;
    struct Nuitka_FrameObject *frame_be5a46b25a9f285cba984c875bb00e8c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_be5a46b25a9f285cba984c875bb00e8c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_be5a46b25a9f285cba984c875bb00e8c, codeobj_be5a46b25a9f285cba984c875bb00e8c, module_scipy$integrate$quadrature, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_be5a46b25a9f285cba984c875bb00e8c = cache_frame_be5a46b25a9f285cba984c875bb00e8c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_be5a46b25a9f285cba984c875bb00e8c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_be5a46b25a9f285cba984c875bb00e8c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_y );
        tmp_source_name_1 = par_y;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 354;
            type_description_1 = "oooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 354;
            type_description_1 = "oooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nd == NULL );
        var_nd = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_start );
        tmp_compexpr_left_1 = par_start;
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
            tmp_assign_source_2 = const_int_0;
            {
                PyObject *old = par_start;
                assert( old != NULL );
                par_start = tmp_assign_source_2;
                Py_INCREF( par_start );
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_tuple_slice_none_none_none_tuple;
        CHECK_OBJECT( var_nd );
        tmp_right_name_1 = var_nd;
        tmp_assign_source_3 = BINARY_OPERATION_MUL_TUPLE_LONG( tmp_left_name_1, tmp_right_name_1 );
        assert( !(tmp_assign_source_3 == NULL) );
        assert( var_slice_all == NULL );
        var_slice_all = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tupleset" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 359;
            type_description_1 = "oooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_slice_all );
        tmp_args_element_name_1 = var_slice_all;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_2 = par_axis;
        CHECK_OBJECT( par_start );
        tmp_start_name_1 = par_start;
        CHECK_OBJECT( par_stop );
        tmp_stop_name_1 = par_stop;
        tmp_step_name_1 = const_int_pos_2;
        tmp_args_element_name_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_args_element_name_3 == NULL) );
        frame_be5a46b25a9f285cba984c875bb00e8c->m_frame.f_lineno = 359;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "oooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_slice0 == NULL );
        var_slice0 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_start_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_step_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tupleset" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 360;
            type_description_1 = "oooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_slice_all );
        tmp_args_element_name_4 = var_slice_all;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_5 = par_axis;
        CHECK_OBJECT( par_start );
        tmp_left_name_2 = par_start;
        tmp_right_name_2 = const_int_pos_1;
        tmp_start_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_start_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
            type_description_1 = "oooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_stop );
        tmp_left_name_3 = par_stop;
        tmp_right_name_3 = const_int_pos_1;
        tmp_stop_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_stop_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_start_name_2 );

            exception_lineno = 360;
            type_description_1 = "oooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_2 = const_int_pos_2;
        tmp_args_element_name_6 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_start_name_2 );
        Py_DECREF( tmp_stop_name_2 );
        assert( !(tmp_args_element_name_6 == NULL) );
        frame_be5a46b25a9f285cba984c875bb00e8c->m_frame.f_lineno = 360;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
            type_description_1 = "oooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_slice1 == NULL );
        var_slice1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_start_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_step_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tupleset" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 361;
            type_description_1 = "oooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_slice_all );
        tmp_args_element_name_7 = var_slice_all;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_8 = par_axis;
        CHECK_OBJECT( par_start );
        tmp_left_name_4 = par_start;
        tmp_right_name_4 = const_int_pos_2;
        tmp_start_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_start_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_1 = "oooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_stop );
        tmp_left_name_5 = par_stop;
        tmp_right_name_5 = const_int_pos_2;
        tmp_stop_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_stop_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_start_name_3 );

            exception_lineno = 361;
            type_description_1 = "oooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_3 = const_int_pos_2;
        tmp_args_element_name_9 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        Py_DECREF( tmp_start_name_3 );
        Py_DECREF( tmp_stop_name_3 );
        assert( !(tmp_args_element_name_9 == NULL) );
        frame_be5a46b25a9f285cba984c875bb00e8c->m_frame.f_lineno = 361;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_1 = "oooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_slice2 == NULL );
        var_slice2 = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_x );
        tmp_compexpr_left_2 = par_x;
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_left_name_6;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_6;
            PyObject *tmp_right_name_7;
            PyObject *tmp_left_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_8;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_9;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_right_name_10;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 364;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_4;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sum );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 364;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_dx );
            tmp_left_name_7 = par_dx;
            tmp_right_name_6 = const_float_3_0;
            tmp_left_name_6 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT( tmp_left_name_7, tmp_right_name_6 );
            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 364;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_y );
            tmp_subscribed_name_1 = par_y;
            CHECK_OBJECT( var_slice0 );
            tmp_subscript_name_1 = var_slice0;
            tmp_left_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_left_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_left_name_6 );

                exception_lineno = 364;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_10 = const_int_pos_4;
            CHECK_OBJECT( par_y );
            tmp_subscribed_name_2 = par_y;
            CHECK_OBJECT( var_slice1 );
            tmp_subscript_name_2 = var_slice1;
            tmp_right_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_right_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_left_name_6 );
                Py_DECREF( tmp_left_name_9 );

                exception_lineno = 364;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_8 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_10, tmp_right_name_9 );
            Py_DECREF( tmp_right_name_9 );
            if ( tmp_right_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_left_name_6 );
                Py_DECREF( tmp_left_name_9 );

                exception_lineno = 364;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_9 );
            Py_DECREF( tmp_right_name_8 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_left_name_6 );

                exception_lineno = 364;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_y );
            tmp_subscribed_name_3 = par_y;
            CHECK_OBJECT( var_slice2 );
            tmp_subscript_name_3 = var_slice2;
            tmp_right_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_right_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_left_name_6 );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 364;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_10 );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_left_name_6 );

                exception_lineno = 364;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 364;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_axis;
            CHECK_OBJECT( par_axis );
            tmp_dict_value_1 = par_axis;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_be5a46b25a9f285cba984c875bb00e8c->m_frame.f_lineno = 364;
            tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 364;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_result == NULL );
            var_result = tmp_assign_source_7;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 369;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_5;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_diff );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 369;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_x );
            tmp_tuple_element_2 = par_x;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_dict_key_2 = const_str_plain_axis;
            CHECK_OBJECT( par_axis );
            tmp_dict_value_2 = par_axis;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_be5a46b25a9f285cba984c875bb00e8c->m_frame.f_lineno = 369;
            tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 369;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_h == NULL );
            var_h = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_start_name_4;
            PyObject *tmp_stop_name_4;
            PyObject *tmp_step_name_4;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tupleset" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 370;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_6;
            CHECK_OBJECT( var_slice_all );
            tmp_args_element_name_10 = var_slice_all;
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_11 = par_axis;
            CHECK_OBJECT( par_start );
            tmp_start_name_4 = par_start;
            CHECK_OBJECT( par_stop );
            tmp_stop_name_4 = par_stop;
            tmp_step_name_4 = const_int_pos_2;
            tmp_args_element_name_12 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
            assert( !(tmp_args_element_name_12 == NULL) );
            frame_be5a46b25a9f285cba984c875bb00e8c->m_frame.f_lineno = 370;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_args_element_name_12 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 370;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_sl0 == NULL );
            var_sl0 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_start_name_5;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            PyObject *tmp_stop_name_5;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            PyObject *tmp_step_name_5;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tupleset" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 371;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_7;
            CHECK_OBJECT( var_slice_all );
            tmp_args_element_name_13 = var_slice_all;
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_14 = par_axis;
            CHECK_OBJECT( par_start );
            tmp_left_name_11 = par_start;
            tmp_right_name_11 = const_int_pos_1;
            tmp_start_name_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_11, tmp_right_name_11 );
            if ( tmp_start_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 371;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_stop );
            tmp_left_name_12 = par_stop;
            tmp_right_name_12 = const_int_pos_1;
            tmp_stop_name_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_12, tmp_right_name_12 );
            if ( tmp_stop_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_start_name_5 );

                exception_lineno = 371;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_5 = const_int_pos_2;
            tmp_args_element_name_15 = MAKE_SLICEOBJ3( tmp_start_name_5, tmp_stop_name_5, tmp_step_name_5 );
            Py_DECREF( tmp_start_name_5 );
            Py_DECREF( tmp_stop_name_5 );
            assert( !(tmp_args_element_name_15 == NULL) );
            frame_be5a46b25a9f285cba984c875bb00e8c->m_frame.f_lineno = 371;
            {
                PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
                tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 371;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_sl1 == NULL );
            var_sl1 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            CHECK_OBJECT( var_h );
            tmp_subscribed_name_4 = var_h;
            CHECK_OBJECT( var_sl0 );
            tmp_subscript_name_4 = var_sl0;
            tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 372;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_h0 == NULL );
            var_h0 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( var_h );
            tmp_subscribed_name_5 = var_h;
            CHECK_OBJECT( var_sl1 );
            tmp_subscript_name_5 = var_sl1;
            tmp_assign_source_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 373;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_h1 == NULL );
            var_h1 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_left_name_13;
            PyObject *tmp_right_name_13;
            CHECK_OBJECT( var_h0 );
            tmp_left_name_13 = var_h0;
            CHECK_OBJECT( var_h1 );
            tmp_right_name_13 = var_h1;
            tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 374;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_hsum == NULL );
            var_hsum = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_left_name_14;
            PyObject *tmp_right_name_14;
            CHECK_OBJECT( var_h0 );
            tmp_left_name_14 = var_h0;
            CHECK_OBJECT( var_h1 );
            tmp_right_name_14 = var_h1;
            tmp_assign_source_14 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 375;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_hprod == NULL );
            var_hprod = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_left_name_15;
            PyObject *tmp_right_name_15;
            CHECK_OBJECT( var_h0 );
            tmp_left_name_15 = var_h0;
            CHECK_OBJECT( var_h1 );
            tmp_right_name_15 = var_h1;
            tmp_assign_source_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 376;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_h0divh1 == NULL );
            var_h0divh1 = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_left_name_16;
            PyObject *tmp_left_name_17;
            PyObject *tmp_right_name_16;
            PyObject *tmp_right_name_17;
            PyObject *tmp_left_name_18;
            PyObject *tmp_left_name_19;
            PyObject *tmp_left_name_20;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_right_name_18;
            PyObject *tmp_left_name_21;
            PyObject *tmp_right_name_19;
            PyObject *tmp_left_name_22;
            PyObject *tmp_right_name_20;
            PyObject *tmp_right_name_21;
            PyObject *tmp_left_name_23;
            PyObject *tmp_left_name_24;
            PyObject *tmp_left_name_25;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            PyObject *tmp_right_name_22;
            PyObject *tmp_right_name_23;
            PyObject *tmp_right_name_24;
            PyObject *tmp_right_name_25;
            PyObject *tmp_left_name_26;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            PyObject *tmp_right_name_26;
            PyObject *tmp_left_name_27;
            PyObject *tmp_right_name_27;
            CHECK_OBJECT( var_hsum );
            tmp_left_name_17 = var_hsum;
            tmp_right_name_16 = const_float_6_0;
            tmp_left_name_16 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT( tmp_left_name_17, tmp_right_name_16 );
            if ( tmp_left_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 377;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_y );
            tmp_subscribed_name_6 = par_y;
            CHECK_OBJECT( var_slice0 );
            tmp_subscript_name_6 = var_slice0;
            tmp_left_name_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            if ( tmp_left_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );

                exception_lineno = 377;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_21 = const_int_pos_2;
            tmp_left_name_22 = const_float_1_0;
            CHECK_OBJECT( var_h0divh1 );
            tmp_right_name_20 = var_h0divh1;
            tmp_right_name_19 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_22, tmp_right_name_20 );
            if ( tmp_right_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );
                Py_DECREF( tmp_left_name_20 );

                exception_lineno = 377;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_18 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_21, tmp_right_name_19 );
            Py_DECREF( tmp_right_name_19 );
            if ( tmp_right_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );
                Py_DECREF( tmp_left_name_20 );

                exception_lineno = 377;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_19 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_18 );
            Py_DECREF( tmp_left_name_20 );
            Py_DECREF( tmp_right_name_18 );
            if ( tmp_left_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );

                exception_lineno = 377;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_y );
            tmp_subscribed_name_7 = par_y;
            CHECK_OBJECT( var_slice1 );
            tmp_subscript_name_7 = var_slice1;
            tmp_left_name_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
            if ( tmp_left_name_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );
                Py_DECREF( tmp_left_name_19 );

                exception_lineno = 378;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_hsum );
            tmp_right_name_22 = var_hsum;
            tmp_left_name_24 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_25, tmp_right_name_22 );
            Py_DECREF( tmp_left_name_25 );
            if ( tmp_left_name_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );
                Py_DECREF( tmp_left_name_19 );

                exception_lineno = 378;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_hsum );
            tmp_right_name_23 = var_hsum;
            tmp_left_name_23 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_23 );
            Py_DECREF( tmp_left_name_24 );
            if ( tmp_left_name_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );
                Py_DECREF( tmp_left_name_19 );

                exception_lineno = 378;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_hprod );
            tmp_right_name_24 = var_hprod;
            tmp_right_name_21 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_23, tmp_right_name_24 );
            Py_DECREF( tmp_left_name_23 );
            if ( tmp_right_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );
                Py_DECREF( tmp_left_name_19 );

                exception_lineno = 378;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_21 );
            Py_DECREF( tmp_left_name_19 );
            Py_DECREF( tmp_right_name_21 );
            if ( tmp_left_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );

                exception_lineno = 377;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_y );
            tmp_subscribed_name_8 = par_y;
            CHECK_OBJECT( var_slice2 );
            tmp_subscript_name_8 = var_slice2;
            tmp_left_name_26 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
            if ( tmp_left_name_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );
                Py_DECREF( tmp_left_name_18 );

                exception_lineno = 379;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_27 = const_int_pos_2;
            CHECK_OBJECT( var_h0divh1 );
            tmp_right_name_27 = var_h0divh1;
            tmp_right_name_26 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_27, tmp_right_name_27 );
            if ( tmp_right_name_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );
                Py_DECREF( tmp_left_name_18 );
                Py_DECREF( tmp_left_name_26 );

                exception_lineno = 379;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_25 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_26, tmp_right_name_26 );
            Py_DECREF( tmp_left_name_26 );
            Py_DECREF( tmp_right_name_26 );
            if ( tmp_right_name_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );
                Py_DECREF( tmp_left_name_18 );

                exception_lineno = 379;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_25 );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_right_name_25 );
            if ( tmp_right_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );

                exception_lineno = 378;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_16 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_17 );
            Py_DECREF( tmp_left_name_16 );
            Py_DECREF( tmp_right_name_17 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 377;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_tmp == NULL );
            var_tmp = tmp_assign_source_16;
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 380;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_8;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sum );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 380;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_tmp );
            tmp_tuple_element_3 = var_tmp;
            tmp_args_name_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
            tmp_dict_key_3 = const_str_plain_axis;
            CHECK_OBJECT( par_axis );
            tmp_dict_value_3 = par_axis;
            tmp_kw_name_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_be5a46b25a9f285cba984c875bb00e8c->m_frame.f_lineno = 380;
            tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 380;
                type_description_1 = "oooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_result == NULL );
            var_result = tmp_assign_source_17;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be5a46b25a9f285cba984c875bb00e8c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be5a46b25a9f285cba984c875bb00e8c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_be5a46b25a9f285cba984c875bb00e8c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_be5a46b25a9f285cba984c875bb00e8c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_be5a46b25a9f285cba984c875bb00e8c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_be5a46b25a9f285cba984c875bb00e8c,
        type_description_1,
        par_y,
        par_start,
        par_stop,
        par_x,
        par_dx,
        par_axis,
        var_nd,
        NULL,
        var_slice_all,
        var_slice0,
        var_slice1,
        var_slice2,
        var_result,
        var_h,
        var_sl0,
        var_sl1,
        var_h0,
        var_h1,
        var_hsum,
        var_hprod,
        var_h0divh1,
        var_tmp
    );


    // Release cached frame.
    if ( frame_be5a46b25a9f285cba984c875bb00e8c == cache_frame_be5a46b25a9f285cba984c875bb00e8c )
    {
        Py_DECREF( frame_be5a46b25a9f285cba984c875bb00e8c );
    }
    cache_frame_be5a46b25a9f285cba984c875bb00e8c = NULL;

    assertFrameObject( frame_be5a46b25a9f285cba984c875bb00e8c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_8__basic_simps );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_dx );
    Py_DECREF( par_dx );
    par_dx = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_nd );
    Py_DECREF( var_nd );
    var_nd = NULL;

    CHECK_OBJECT( (PyObject *)var_slice_all );
    Py_DECREF( var_slice_all );
    var_slice_all = NULL;

    CHECK_OBJECT( (PyObject *)var_slice0 );
    Py_DECREF( var_slice0 );
    var_slice0 = NULL;

    CHECK_OBJECT( (PyObject *)var_slice1 );
    Py_DECREF( var_slice1 );
    var_slice1 = NULL;

    CHECK_OBJECT( (PyObject *)var_slice2 );
    Py_DECREF( var_slice2 );
    var_slice2 = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_sl0 );
    var_sl0 = NULL;

    Py_XDECREF( var_sl1 );
    var_sl1 = NULL;

    Py_XDECREF( var_h0 );
    var_h0 = NULL;

    Py_XDECREF( var_h1 );
    var_h1 = NULL;

    Py_XDECREF( var_hsum );
    var_hsum = NULL;

    Py_XDECREF( var_hprod );
    var_hprod = NULL;

    Py_XDECREF( var_h0divh1 );
    var_h0divh1 = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

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

    Py_XDECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_dx );
    Py_DECREF( par_dx );
    par_dx = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_nd );
    var_nd = NULL;

    Py_XDECREF( var_slice_all );
    var_slice_all = NULL;

    Py_XDECREF( var_slice0 );
    var_slice0 = NULL;

    Py_XDECREF( var_slice1 );
    var_slice1 = NULL;

    Py_XDECREF( var_slice2 );
    var_slice2 = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_sl0 );
    var_sl0 = NULL;

    Py_XDECREF( var_sl1 );
    var_sl1 = NULL;

    Py_XDECREF( var_h0 );
    var_h0 = NULL;

    Py_XDECREF( var_h1 );
    var_h1 = NULL;

    Py_XDECREF( var_hsum );
    var_hsum = NULL;

    Py_XDECREF( var_hprod );
    var_hprod = NULL;

    Py_XDECREF( var_h0divh1 );
    var_h0divh1 = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_8__basic_simps );
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


static PyObject *impl_scipy$integrate$quadrature$$$function_9_simps( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_y = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_dx = python_pars[ 2 ];
    PyObject *par_axis = python_pars[ 3 ];
    PyObject *par_even = python_pars[ 4 ];
    PyObject *var_nd = NULL;
    PyObject *var_N = NULL;
    PyObject *var_last_dx = NULL;
    PyObject *var_first_dx = NULL;
    PyObject *var_returnshape = NULL;
    PyObject *var_shapex = NULL;
    PyObject *var_saveshape = NULL;
    PyObject *var_val = NULL;
    PyObject *var_result = NULL;
    PyObject *var_slice1 = NULL;
    PyObject *var_slice2 = NULL;
    struct Nuitka_FrameObject *frame_7652565408dcb3cc6897e5eb7ef87be2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7652565408dcb3cc6897e5eb7ef87be2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7652565408dcb3cc6897e5eb7ef87be2, codeobj_7652565408dcb3cc6897e5eb7ef87be2, module_scipy$integrate$quadrature, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7652565408dcb3cc6897e5eb7ef87be2 = cache_frame_7652565408dcb3cc6897e5eb7ef87be2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7652565408dcb3cc6897e5eb7ef87be2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7652565408dcb3cc6897e5eb7ef87be2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 454;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_1 = par_y;
        frame_7652565408dcb3cc6897e5eb7ef87be2->m_frame.f_lineno = 454;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_y;
            assert( old != NULL );
            par_y = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_y );
        tmp_source_name_1 = par_y;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 455;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 455;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nd == NULL );
        var_nd = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_y );
        tmp_source_name_2 = par_y;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axis );
        tmp_subscript_name_1 = par_axis;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_N == NULL );
        var_N = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( par_dx );
        tmp_assign_source_4 = par_dx;
        assert( var_last_dx == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_last_dx = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( par_dx );
        tmp_assign_source_5 = par_dx;
        assert( var_first_dx == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_first_dx = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_int_0;
        assert( var_returnshape == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_returnshape = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_x );
        tmp_compexpr_left_1 = par_x;
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 461;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_2 = par_x;
            frame_7652565408dcb3cc6897e5eb7ef87be2->m_frame.f_lineno = 461;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray, call_args );
            }

            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 461;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x;
                assert( old != NULL );
                par_x = tmp_assign_source_7;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_len_arg_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_x );
            tmp_source_name_3 = par_x;
            tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
            if ( tmp_len_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 462;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
            Py_DECREF( tmp_len_arg_2 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 462;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
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
                PyObject *tmp_assign_source_8;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                tmp_left_name_1 = LIST_COPY( const_list_int_pos_1_list );
                CHECK_OBJECT( var_nd );
                tmp_right_name_1 = var_nd;
                tmp_assign_source_8 = BINARY_OPERATION_MUL_LIST_LONG( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_left_name_1 );
                assert( !(tmp_assign_source_8 == NULL) );
                assert( var_shapex == NULL );
                var_shapex = tmp_assign_source_8;
            }
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_source_name_4;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                CHECK_OBJECT( par_x );
                tmp_source_name_4 = par_x;
                tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
                if ( tmp_subscribed_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 464;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_2 = const_int_0;
                tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
                Py_DECREF( tmp_subscribed_name_2 );
                if ( tmp_ass_subvalue_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 464;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_shapex );
                tmp_ass_subscribed_1 = var_shapex;
                CHECK_OBJECT( par_axis );
                tmp_ass_subscript_1 = par_axis;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subvalue_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 464;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_source_name_5;
                CHECK_OBJECT( par_x );
                tmp_source_name_5 = par_x;
                tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 465;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_saveshape == NULL );
                var_saveshape = tmp_assign_source_9;
            }
            {
                PyObject *tmp_assign_source_10;
                tmp_assign_source_10 = const_int_pos_1;
                {
                    PyObject *old = var_returnshape;
                    assert( old != NULL );
                    var_returnshape = tmp_assign_source_10;
                    Py_INCREF( var_returnshape );
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_11;
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_6;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_tuple_arg_1;
                CHECK_OBJECT( par_x );
                tmp_source_name_6 = par_x;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_reshape );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 467;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_shapex );
                tmp_tuple_arg_1 = var_shapex;
                tmp_args_element_name_3 = PySequence_Tuple( tmp_tuple_arg_1 );
                if ( tmp_args_element_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 467;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_7652565408dcb3cc6897e5eb7ef87be2->m_frame.f_lineno = 467;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_3 );
                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 467;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_x;
                    assert( old != NULL );
                    par_x = tmp_assign_source_11;
                    Py_DECREF( old );
                }

            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_len_arg_3;
                PyObject *tmp_source_name_7;
                PyObject *tmp_len_arg_4;
                PyObject *tmp_source_name_8;
                CHECK_OBJECT( par_x );
                tmp_source_name_7 = par_x;
                tmp_len_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
                if ( tmp_len_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 468;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_3 );
                Py_DECREF( tmp_len_arg_3 );
                if ( tmp_compexpr_left_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 468;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_y );
                tmp_source_name_8 = par_y;
                tmp_len_arg_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
                if ( tmp_len_arg_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_3 );

                    exception_lineno = 468;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_3 = BUILTIN_LEN( tmp_len_arg_4 );
                Py_DECREF( tmp_len_arg_4 );
                if ( tmp_compexpr_right_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_3 );

                    exception_lineno = 468;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                Py_DECREF( tmp_compexpr_right_3 );
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
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_make_exception_arg_1;
                    tmp_make_exception_arg_1 = const_str_digest_991acca7f3791d03776a975e84db3df6;
                    frame_7652565408dcb3cc6897e5eb7ef87be2->m_frame.f_lineno = 469;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_1 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_1 == NULL) );
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 469;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_3:;
            }
            branch_end_2:;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_source_name_9;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( par_x );
            tmp_source_name_9 = par_x;
            tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
            if ( tmp_subscribed_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 471;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_3 = par_axis;
            tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            Py_DECREF( tmp_subscribed_name_3 );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 471;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_N );
            tmp_compexpr_right_4 = var_N;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 471;
                type_description_1 = "oooooooooooooooo";
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_59323f47c6c24df31d9826cb307e660c;
                frame_7652565408dcb3cc6897e5eb7ef87be2->m_frame.f_lineno = 472;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 472;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_4:;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_N );
        tmp_left_name_2 = var_N;
        tmp_right_name_2 = const_int_pos_2;
        tmp_compexpr_left_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 474;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 474;
            type_description_1 = "oooooooooooooooo";
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
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = const_float_0_0;
            assert( var_val == NULL );
            Py_INCREF( tmp_assign_source_12 );
            var_val = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = const_float_0_0;
            assert( var_result == NULL );
            Py_INCREF( tmp_assign_source_13 );
            var_result = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            tmp_left_name_3 = const_tuple_slice_none_none_none_tuple;
            CHECK_OBJECT( var_nd );
            tmp_right_name_3 = var_nd;
            tmp_assign_source_14 = BINARY_OPERATION_MUL_TUPLE_LONG( tmp_left_name_3, tmp_right_name_3 );
            assert( !(tmp_assign_source_14 == NULL) );
            assert( var_slice1 == NULL );
            var_slice1 = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            tmp_left_name_4 = const_tuple_slice_none_none_none_tuple;
            CHECK_OBJECT( var_nd );
            tmp_right_name_4 = var_nd;
            tmp_assign_source_15 = BINARY_OPERATION_MUL_TUPLE_LONG( tmp_left_name_4, tmp_right_name_4 );
            assert( !(tmp_assign_source_15 == NULL) );
            assert( var_slice2 == NULL );
            var_slice2 = tmp_assign_source_15;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT( par_even );
            tmp_compexpr_left_6 = par_even;
            tmp_compexpr_right_6 = LIST_COPY( const_list_str_plain_avg_str_plain_last_str_plain_first_list );
            tmp_res = PySequence_Contains( tmp_compexpr_right_6, tmp_compexpr_left_6 );
            Py_DECREF( tmp_compexpr_right_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 479;
                type_description_1 = "oooooooooooooooo";
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
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_798a2ba265316c2560fce132e38cd672;
                frame_7652565408dcb3cc6897e5eb7ef87be2->m_frame.f_lineno = 480;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 480;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_6:;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT( par_even );
            tmp_compexpr_left_7 = par_even;
            tmp_compexpr_right_7 = LIST_COPY( const_list_str_plain_avg_str_plain_first_list );
            tmp_res = PySequence_Contains( tmp_compexpr_right_7, tmp_compexpr_left_7 );
            Py_DECREF( tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 483;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_7 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_16;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tupleset" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 484;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_3;
                CHECK_OBJECT( var_slice1 );
                tmp_args_element_name_4 = var_slice1;
                CHECK_OBJECT( par_axis );
                tmp_args_element_name_5 = par_axis;
                tmp_args_element_name_6 = const_int_neg_1;
                frame_7652565408dcb3cc6897e5eb7ef87be2->m_frame.f_lineno = 484;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
                }

                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 484;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_slice1;
                    assert( old != NULL );
                    var_slice1 = tmp_assign_source_16;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_17;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_args_element_name_9;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tupleset" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 485;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_4;
                CHECK_OBJECT( var_slice2 );
                tmp_args_element_name_7 = var_slice2;
                CHECK_OBJECT( par_axis );
                tmp_args_element_name_8 = par_axis;
                tmp_args_element_name_9 = const_int_neg_2;
                frame_7652565408dcb3cc6897e5eb7ef87be2->m_frame.f_lineno = 485;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
                    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
                }

                if ( tmp_assign_source_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 485;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_slice2;
                    assert( old != NULL );
                    var_slice2 = tmp_assign_source_17;
                    Py_DECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_8;
                PyObject *tmp_compexpr_left_8;
                PyObject *tmp_compexpr_right_8;
                if ( par_x == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 486;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_left_8 = par_x;
                tmp_compexpr_right_8 = Py_None;
                tmp_condition_result_8 = ( tmp_compexpr_left_8 != tmp_compexpr_right_8 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_18;
                    PyObject *tmp_left_name_5;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_subscript_name_4;
                    PyObject *tmp_right_name_5;
                    PyObject *tmp_subscribed_name_5;
                    PyObject *tmp_subscript_name_5;
                    if ( par_x == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 487;
                        type_description_1 = "oooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_subscribed_name_4 = par_x;
                    CHECK_OBJECT( var_slice1 );
                    tmp_subscript_name_4 = var_slice1;
                    tmp_left_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                    if ( tmp_left_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 487;
                        type_description_1 = "oooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    if ( par_x == NULL )
                    {
                        Py_DECREF( tmp_left_name_5 );
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 487;
                        type_description_1 = "oooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_subscribed_name_5 = par_x;
                    CHECK_OBJECT( var_slice2 );
                    tmp_subscript_name_5 = var_slice2;
                    tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                    if ( tmp_right_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_5 );

                        exception_lineno = 487;
                        type_description_1 = "oooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_18 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
                    Py_DECREF( tmp_left_name_5 );
                    Py_DECREF( tmp_right_name_5 );
                    if ( tmp_assign_source_18 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 487;
                        type_description_1 = "oooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_last_dx;
                        assert( old != NULL );
                        var_last_dx = tmp_assign_source_18;
                        Py_DECREF( old );
                    }

                }
                branch_no_8:;
            }
            {
                PyObject *tmp_assign_source_19;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_left_name_7;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_7;
                PyObject *tmp_right_name_8;
                PyObject *tmp_left_name_9;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_subscript_name_6;
                PyObject *tmp_right_name_9;
                PyObject *tmp_subscribed_name_7;
                PyObject *tmp_subscript_name_7;
                tmp_left_name_6 = const_float_0_0;
                tmp_left_name_8 = const_float_0_5;
                CHECK_OBJECT( var_last_dx );
                tmp_right_name_7 = var_last_dx;
                tmp_left_name_7 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_8, tmp_right_name_7 );
                if ( tmp_left_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 488;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_y );
                tmp_subscribed_name_6 = par_y;
                CHECK_OBJECT( var_slice1 );
                tmp_subscript_name_6 = var_slice1;
                tmp_left_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
                if ( tmp_left_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_7 );

                    exception_lineno = 488;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_y );
                tmp_subscribed_name_7 = par_y;
                CHECK_OBJECT( var_slice2 );
                tmp_subscript_name_7 = var_slice2;
                tmp_right_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
                if ( tmp_right_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_7 );
                    Py_DECREF( tmp_left_name_9 );

                    exception_lineno = 488;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
                Py_DECREF( tmp_left_name_9 );
                Py_DECREF( tmp_right_name_9 );
                if ( tmp_right_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_7 );

                    exception_lineno = 488;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_8 );
                Py_DECREF( tmp_left_name_7 );
                Py_DECREF( tmp_right_name_8 );
                if ( tmp_right_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 488;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_19 = BINARY_OPERATION_ADD_FLOAT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_assign_source_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 488;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_val;
                    assert( old != NULL );
                    var_val = tmp_assign_source_19;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_20;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_element_name_10;
                PyObject *tmp_args_element_name_11;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_left_name_10;
                PyObject *tmp_right_name_10;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_args_element_name_14;
                PyObject *tmp_args_element_name_15;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__basic_simps );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_simps );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_basic_simps" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 489;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_5;
                CHECK_OBJECT( par_y );
                tmp_args_element_name_10 = par_y;
                tmp_args_element_name_11 = const_int_0;
                CHECK_OBJECT( var_N );
                tmp_left_name_10 = var_N;
                tmp_right_name_10 = const_int_pos_3;
                tmp_args_element_name_12 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_10, tmp_right_name_10 );
                if ( tmp_args_element_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 489;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                if ( par_x == NULL )
                {
                    Py_DECREF( tmp_args_element_name_12 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 489;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_13 = par_x;
                CHECK_OBJECT( par_dx );
                tmp_args_element_name_14 = par_dx;
                CHECK_OBJECT( par_axis );
                tmp_args_element_name_15 = par_axis;
                frame_7652565408dcb3cc6897e5eb7ef87be2->m_frame.f_lineno = 489;
                {
                    PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
                    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_args_element_name_12 );
                if ( tmp_assign_source_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 489;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_result;
                    assert( old != NULL );
                    var_result = tmp_assign_source_20;
                    Py_DECREF( old );
                }

            }
            branch_no_7:;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            CHECK_OBJECT( par_even );
            tmp_compexpr_left_9 = par_even;
            tmp_compexpr_right_9 = LIST_COPY( const_list_str_plain_avg_str_plain_last_list );
            tmp_res = PySequence_Contains( tmp_compexpr_right_9, tmp_compexpr_left_9 );
            Py_DECREF( tmp_compexpr_right_9 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 491;
                type_description_1 = "oooooooooooooooo";
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
                PyObject *tmp_assign_source_21;
                PyObject *tmp_called_name_5;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_16;
                PyObject *tmp_args_element_name_17;
                PyObject *tmp_args_element_name_18;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tupleset" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 492;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_5 = tmp_mvar_value_6;
                CHECK_OBJECT( var_slice1 );
                tmp_args_element_name_16 = var_slice1;
                CHECK_OBJECT( par_axis );
                tmp_args_element_name_17 = par_axis;
                tmp_args_element_name_18 = const_int_0;
                frame_7652565408dcb3cc6897e5eb7ef87be2->m_frame.f_lineno = 492;
                {
                    PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
                    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
                }

                if ( tmp_assign_source_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 492;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_slice1;
                    assert( old != NULL );
                    var_slice1 = tmp_assign_source_21;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_22;
                PyObject *tmp_called_name_6;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_args_element_name_19;
                PyObject *tmp_args_element_name_20;
                PyObject *tmp_args_element_name_21;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tupleset" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 493;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_6 = tmp_mvar_value_7;
                CHECK_OBJECT( var_slice2 );
                tmp_args_element_name_19 = var_slice2;
                CHECK_OBJECT( par_axis );
                tmp_args_element_name_20 = par_axis;
                tmp_args_element_name_21 = const_int_pos_1;
                frame_7652565408dcb3cc6897e5eb7ef87be2->m_frame.f_lineno = 493;
                {
                    PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
                    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
                }

                if ( tmp_assign_source_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 493;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_slice2;
                    assert( old != NULL );
                    var_slice2 = tmp_assign_source_22;
                    Py_DECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_10;
                PyObject *tmp_compexpr_left_10;
                PyObject *tmp_compexpr_right_10;
                if ( par_x == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 494;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_left_10 = par_x;
                tmp_compexpr_right_10 = Py_None;
                tmp_condition_result_10 = ( tmp_compexpr_left_10 != tmp_compexpr_right_10 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_23;
                    PyObject *tmp_left_name_11;
                    PyObject *tmp_subscribed_name_8;
                    PyObject *tmp_subscript_name_8;
                    PyObject *tmp_tuple_arg_2;
                    PyObject *tmp_right_name_11;
                    PyObject *tmp_subscribed_name_9;
                    PyObject *tmp_subscript_name_9;
                    PyObject *tmp_tuple_arg_3;
                    if ( par_x == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 495;
                        type_description_1 = "oooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_subscribed_name_8 = par_x;
                    CHECK_OBJECT( var_slice2 );
                    tmp_tuple_arg_2 = var_slice2;
                    tmp_subscript_name_8 = PySequence_Tuple( tmp_tuple_arg_2 );
                    if ( tmp_subscript_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 495;
                        type_description_1 = "oooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_left_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
                    Py_DECREF( tmp_subscript_name_8 );
                    if ( tmp_left_name_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 495;
                        type_description_1 = "oooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    if ( par_x == NULL )
                    {
                        Py_DECREF( tmp_left_name_11 );
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 495;
                        type_description_1 = "oooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_subscribed_name_9 = par_x;
                    CHECK_OBJECT( var_slice1 );
                    tmp_tuple_arg_3 = var_slice1;
                    tmp_subscript_name_9 = PySequence_Tuple( tmp_tuple_arg_3 );
                    if ( tmp_subscript_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_11 );

                        exception_lineno = 495;
                        type_description_1 = "oooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_right_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
                    Py_DECREF( tmp_subscript_name_9 );
                    if ( tmp_right_name_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_11 );

                        exception_lineno = 495;
                        type_description_1 = "oooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_23 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
                    Py_DECREF( tmp_left_name_11 );
                    Py_DECREF( tmp_right_name_11 );
                    if ( tmp_assign_source_23 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 495;
                        type_description_1 = "oooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_first_dx;
                        assert( old != NULL );
                        var_first_dx = tmp_assign_source_23;
                        Py_DECREF( old );
                    }

                }
                branch_no_10:;
            }
            {
                PyObject *tmp_assign_source_24;
                PyObject *tmp_left_name_12;
                PyObject *tmp_right_name_12;
                PyObject *tmp_left_name_13;
                PyObject *tmp_left_name_14;
                PyObject *tmp_right_name_13;
                PyObject *tmp_right_name_14;
                PyObject *tmp_left_name_15;
                PyObject *tmp_subscribed_name_10;
                PyObject *tmp_subscript_name_10;
                PyObject *tmp_right_name_15;
                PyObject *tmp_subscribed_name_11;
                PyObject *tmp_subscript_name_11;
                CHECK_OBJECT( var_val );
                tmp_left_name_12 = var_val;
                tmp_left_name_14 = const_float_0_5;
                CHECK_OBJECT( var_first_dx );
                tmp_right_name_13 = var_first_dx;
                tmp_left_name_13 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_14, tmp_right_name_13 );
                if ( tmp_left_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 496;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_y );
                tmp_subscribed_name_10 = par_y;
                CHECK_OBJECT( var_slice2 );
                tmp_subscript_name_10 = var_slice2;
                tmp_left_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
                if ( tmp_left_name_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_13 );

                    exception_lineno = 496;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_y );
                tmp_subscribed_name_11 = par_y;
                CHECK_OBJECT( var_slice1 );
                tmp_subscript_name_11 = var_slice1;
                tmp_right_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
                if ( tmp_right_name_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_13 );
                    Py_DECREF( tmp_left_name_15 );

                    exception_lineno = 496;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
                Py_DECREF( tmp_left_name_15 );
                Py_DECREF( tmp_right_name_15 );
                if ( tmp_right_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_13 );

                    exception_lineno = 496;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_14 );
                Py_DECREF( tmp_left_name_13 );
                Py_DECREF( tmp_right_name_14 );
                if ( tmp_right_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 496;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_12, tmp_right_name_12 );
                Py_DECREF( tmp_right_name_12 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 496;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_24 = tmp_left_name_12;
                var_val = tmp_assign_source_24;

            }
            {
                PyObject *tmp_assign_source_25;
                PyObject *tmp_left_name_16;
                PyObject *tmp_right_name_16;
                PyObject *tmp_called_name_7;
                PyObject *tmp_mvar_value_8;
                PyObject *tmp_args_element_name_22;
                PyObject *tmp_args_element_name_23;
                PyObject *tmp_args_element_name_24;
                PyObject *tmp_left_name_17;
                PyObject *tmp_right_name_17;
                PyObject *tmp_args_element_name_25;
                PyObject *tmp_args_element_name_26;
                PyObject *tmp_args_element_name_27;
                CHECK_OBJECT( var_result );
                tmp_left_name_16 = var_result;
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__basic_simps );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_simps );
                }

                if ( tmp_mvar_value_8 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_basic_simps" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 497;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_7 = tmp_mvar_value_8;
                CHECK_OBJECT( par_y );
                tmp_args_element_name_22 = par_y;
                tmp_args_element_name_23 = const_int_pos_1;
                CHECK_OBJECT( var_N );
                tmp_left_name_17 = var_N;
                tmp_right_name_17 = const_int_pos_2;
                tmp_args_element_name_24 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_17, tmp_right_name_17 );
                if ( tmp_args_element_name_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 497;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                if ( par_x == NULL )
                {
                    Py_DECREF( tmp_args_element_name_24 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 497;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_25 = par_x;
                CHECK_OBJECT( par_dx );
                tmp_args_element_name_26 = par_dx;
                CHECK_OBJECT( par_axis );
                tmp_args_element_name_27 = par_axis;
                frame_7652565408dcb3cc6897e5eb7ef87be2->m_frame.f_lineno = 497;
                {
                    PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27 };
                    tmp_right_name_16 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_7, call_args );
                }

                Py_DECREF( tmp_args_element_name_24 );
                if ( tmp_right_name_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 497;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_16, tmp_right_name_16 );
                Py_DECREF( tmp_right_name_16 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 497;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_25 = tmp_left_name_16;
                var_result = tmp_assign_source_25;

            }
            branch_no_9:;
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            CHECK_OBJECT( par_even );
            tmp_compexpr_left_11 = par_even;
            tmp_compexpr_right_11 = const_str_plain_avg;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 498;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_26;
                PyObject *tmp_left_name_18;
                PyObject *tmp_right_name_18;
                if ( var_val == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "val" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 499;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_18 = var_val;
                tmp_right_name_18 = const_float_2_0;
                tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_18, tmp_right_name_18 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 499;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_26 = tmp_left_name_18;
                var_val = tmp_assign_source_26;

            }
            {
                PyObject *tmp_assign_source_27;
                PyObject *tmp_left_name_19;
                PyObject *tmp_right_name_19;
                if ( var_result == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 500;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_19 = var_result;
                tmp_right_name_19 = const_float_2_0;
                tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_19, tmp_right_name_19 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 500;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_27 = tmp_left_name_19;
                var_result = tmp_assign_source_27;

            }
            branch_no_11:;
        }
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_left_name_20;
            PyObject *tmp_right_name_20;
            if ( var_result == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 501;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_20 = var_result;
            if ( var_val == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "val" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 501;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_20 = var_val;
            tmp_assign_source_28 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_20 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 501;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_result;
                var_result = tmp_assign_source_28;
                Py_XDECREF( old );
            }

        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_28;
            PyObject *tmp_args_element_name_29;
            PyObject *tmp_args_element_name_30;
            PyObject *tmp_left_name_21;
            PyObject *tmp_right_name_21;
            PyObject *tmp_args_element_name_31;
            PyObject *tmp_args_element_name_32;
            PyObject *tmp_args_element_name_33;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__basic_simps );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_simps );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_basic_simps" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 503;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_8 = tmp_mvar_value_9;
            CHECK_OBJECT( par_y );
            tmp_args_element_name_28 = par_y;
            tmp_args_element_name_29 = const_int_0;
            CHECK_OBJECT( var_N );
            tmp_left_name_21 = var_N;
            tmp_right_name_21 = const_int_pos_2;
            tmp_args_element_name_30 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_21, tmp_right_name_21 );
            if ( tmp_args_element_name_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 503;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( par_x == NULL )
            {
                Py_DECREF( tmp_args_element_name_30 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 503;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_31 = par_x;
            CHECK_OBJECT( par_dx );
            tmp_args_element_name_32 = par_dx;
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_33 = par_axis;
            frame_7652565408dcb3cc6897e5eb7ef87be2->m_frame.f_lineno = 503;
            {
                PyObject *call_args[] = { tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31, tmp_args_element_name_32, tmp_args_element_name_33 };
                tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_args_element_name_30 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 503;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_result == NULL );
            var_result = tmp_assign_source_29;
        }
        branch_end_5:;
    }
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_1;
        if ( var_returnshape == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "returnshape" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 504;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( var_returnshape );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 504;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_element_name_34;
            if ( par_x == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 505;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_10 = par_x;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_reshape );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 505;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_saveshape == NULL )
            {
                Py_DECREF( tmp_called_name_9 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "saveshape" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 505;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_34 = var_saveshape;
            frame_7652565408dcb3cc6897e5eb7ef87be2->m_frame.f_lineno = 505;
            {
                PyObject *call_args[] = { tmp_args_element_name_34 };
                tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_called_name_9 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 505;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x;
                par_x = tmp_assign_source_30;
                Py_XDECREF( old );
            }

        }
        branch_no_12:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7652565408dcb3cc6897e5eb7ef87be2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7652565408dcb3cc6897e5eb7ef87be2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7652565408dcb3cc6897e5eb7ef87be2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7652565408dcb3cc6897e5eb7ef87be2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7652565408dcb3cc6897e5eb7ef87be2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7652565408dcb3cc6897e5eb7ef87be2,
        type_description_1,
        par_y,
        par_x,
        par_dx,
        par_axis,
        par_even,
        var_nd,
        var_N,
        var_last_dx,
        var_first_dx,
        var_returnshape,
        var_shapex,
        var_saveshape,
        var_val,
        var_result,
        var_slice1,
        var_slice2
    );


    // Release cached frame.
    if ( frame_7652565408dcb3cc6897e5eb7ef87be2 == cache_frame_7652565408dcb3cc6897e5eb7ef87be2 )
    {
        Py_DECREF( frame_7652565408dcb3cc6897e5eb7ef87be2 );
    }
    cache_frame_7652565408dcb3cc6897e5eb7ef87be2 = NULL;

    assertFrameObject( frame_7652565408dcb3cc6897e5eb7ef87be2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_9_simps );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    Py_XDECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_dx );
    Py_DECREF( par_dx );
    par_dx = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_even );
    Py_DECREF( par_even );
    par_even = NULL;

    CHECK_OBJECT( (PyObject *)var_nd );
    Py_DECREF( var_nd );
    var_nd = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_last_dx );
    var_last_dx = NULL;

    Py_XDECREF( var_first_dx );
    var_first_dx = NULL;

    Py_XDECREF( var_returnshape );
    var_returnshape = NULL;

    Py_XDECREF( var_shapex );
    var_shapex = NULL;

    Py_XDECREF( var_saveshape );
    var_saveshape = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_slice1 );
    var_slice1 = NULL;

    Py_XDECREF( var_slice2 );
    var_slice2 = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_dx );
    Py_DECREF( par_dx );
    par_dx = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_even );
    Py_DECREF( par_even );
    par_even = NULL;

    Py_XDECREF( var_nd );
    var_nd = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_last_dx );
    var_last_dx = NULL;

    Py_XDECREF( var_first_dx );
    var_first_dx = NULL;

    Py_XDECREF( var_returnshape );
    var_returnshape = NULL;

    Py_XDECREF( var_shapex );
    var_shapex = NULL;

    Py_XDECREF( var_saveshape );
    var_saveshape = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_slice1 );
    var_slice1 = NULL;

    Py_XDECREF( var_slice2 );
    var_slice2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_9_simps );
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


static PyObject *impl_scipy$integrate$quadrature$$$function_10_romb( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_y = python_pars[ 0 ];
    PyObject *par_dx = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_show = python_pars[ 3 ];
    PyObject *var_nd = NULL;
    PyObject *var_Nsamps = NULL;
    PyObject *var_Ninterv = NULL;
    PyObject *var_n = NULL;
    PyObject *var_k = NULL;
    PyObject *var_R = NULL;
    PyObject *var_slice_all = NULL;
    PyObject *var_slice0 = NULL;
    PyObject *var_slicem1 = NULL;
    PyObject *var_h = NULL;
    PyObject *var_slice_R = NULL;
    PyObject *var_start = NULL;
    PyObject *var_stop = NULL;
    PyObject *var_step = NULL;
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *var_prev = NULL;
    PyObject *var_precis = NULL;
    PyObject *var_width = NULL;
    PyObject *var_formstr = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    struct Nuitka_FrameObject *frame_5a409b5f3ef8104b86da3271e00e780c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5a409b5f3ef8104b86da3271e00e780c = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a409b5f3ef8104b86da3271e00e780c, codeobj_5a409b5f3ef8104b86da3271e00e780c, module_scipy$integrate$quadrature, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5a409b5f3ef8104b86da3271e00e780c = cache_frame_5a409b5f3ef8104b86da3271e00e780c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a409b5f3ef8104b86da3271e00e780c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a409b5f3ef8104b86da3271e00e780c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 568;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_1 = par_y;
        frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 568;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 568;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_y;
            assert( old != NULL );
            par_y = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_y );
        tmp_source_name_1 = par_y;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 569;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 569;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert( var_nd == NULL );
        var_nd = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_y );
        tmp_source_name_2 = par_y;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 570;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axis );
        tmp_subscript_name_1 = par_axis;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 570;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert( var_Nsamps == NULL );
        var_Nsamps = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_Nsamps );
        tmp_left_name_1 = var_Nsamps;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 571;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert( var_Ninterv == NULL );
        var_Ninterv = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_int_pos_1;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_n = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_int_0;
        assert( var_k == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_k = tmp_assign_source_6;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_n );
        tmp_compexpr_left_1 = var_n;
        CHECK_OBJECT( var_Ninterv );
        tmp_compexpr_right_1 = var_Ninterv;
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 574;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 574;
            type_description_1 = "ooooooooooooooooooooooooN";
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_n );
        tmp_left_name_2 = var_n;
        tmp_right_name_2 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceLshift, &tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 575;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = tmp_left_name_2;
        var_n = tmp_assign_source_7;

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_k );
        tmp_left_name_3 = var_k;
        tmp_right_name_3 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 576;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = tmp_left_name_3;
        var_k = tmp_assign_source_8;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 574;
        type_description_1 = "ooooooooooooooooooooooooN";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_n );
        tmp_compexpr_left_2 = var_n;
        CHECK_OBJECT( var_Ninterv );
        tmp_compexpr_right_2 = var_Ninterv;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 577;
            type_description_1 = "ooooooooooooooooooooooooN";
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
            tmp_make_exception_arg_1 = const_str_digest_955ab92a0abff440476bf2c4e30cfdd3;
            frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 578;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 578;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = PyDict_New();
        assert( var_R == NULL );
        var_R = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        tmp_left_name_4 = const_tuple_slice_none_none_none_tuple;
        CHECK_OBJECT( var_nd );
        tmp_right_name_4 = var_nd;
        tmp_assign_source_10 = BINARY_OPERATION_MUL_TUPLE_LONG( tmp_left_name_4, tmp_right_name_4 );
        assert( !(tmp_assign_source_10 == NULL) );
        assert( var_slice_all == NULL );
        var_slice_all = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tupleset" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 583;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_slice_all );
        tmp_args_element_name_2 = var_slice_all;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_3 = par_axis;
        tmp_args_element_name_4 = const_int_0;
        frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 583;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 583;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert( var_slice0 == NULL );
        var_slice0 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tupleset" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 584;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_slice_all );
        tmp_args_element_name_5 = var_slice_all;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_6 = par_axis;
        tmp_args_element_name_7 = const_int_neg_1;
        frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 584;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 584;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert( var_slicem1 == NULL );
        var_slicem1 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( var_Ninterv );
        tmp_left_name_5 = var_Ninterv;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 585;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_asarray );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 585;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_dx );
        tmp_tuple_element_1 = par_dx;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
        frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 585;
        tmp_right_name_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 585;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 585;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert( var_h == NULL );
        var_h = tmp_assign_source_13;
    }
    {
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_6;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( par_y );
        tmp_subscribed_name_2 = par_y;
        CHECK_OBJECT( var_slice0 );
        tmp_subscript_name_2 = var_slice0;
        tmp_left_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 586;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_y );
        tmp_subscribed_name_3 = par_y;
        CHECK_OBJECT( var_slicem1 );
        tmp_subscript_name_3 = var_slicem1;
        tmp_right_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 586;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_left_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 586;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_right_name_7 = const_float_2_0;
        tmp_left_name_6 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 586;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_h );
        tmp_right_name_8 = var_h;
        tmp_dictset_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 586;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_R );
        tmp_dictset_dict = var_R;
        tmp_dictset_key = const_tuple_int_0_int_0_tuple;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( var_slice_all );
        tmp_assign_source_14 = var_slice_all;
        assert( var_slice_R == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_slice_R = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( var_Ninterv );
        tmp_assign_source_15 = var_Ninterv;
        assert( tmp_assign_unpack_1__assign_source == NULL );
        Py_INCREF( tmp_assign_source_15 );
        tmp_assign_unpack_1__assign_source = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_16 = tmp_assign_unpack_1__assign_source;
        assert( var_start == NULL );
        Py_INCREF( tmp_assign_source_16 );
        var_start = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_17 = tmp_assign_unpack_1__assign_source;
        assert( var_stop == NULL );
        Py_INCREF( tmp_assign_source_17 );
        var_stop = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_18 = tmp_assign_unpack_1__assign_source;
        assert( var_step == NULL );
        Py_INCREF( tmp_assign_source_18 );
        var_step = tmp_assign_source_18;
    }
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_xrange );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "xrange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 589;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        tmp_args_element_name_8 = const_int_pos_1;
        CHECK_OBJECT( var_k );
        tmp_left_name_9 = var_k;
        tmp_right_name_9 = const_int_pos_1;
        tmp_args_element_name_9 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 589;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 589;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 589;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 589;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_19;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_20 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooN";
                exception_lineno = 589;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_20;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_21 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_21;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT( var_start );
        tmp_left_name_10 = var_start;
        tmp_right_name_10 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceRshift, &tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 590;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_assign_source_22 = tmp_left_name_10;
        var_start = tmp_assign_source_22;

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tupleset" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 591;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_called_name_5 = tmp_mvar_value_6;
        CHECK_OBJECT( var_slice_R );
        tmp_args_element_name_10 = var_slice_R;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_11 = par_axis;
        CHECK_OBJECT( var_start );
        tmp_start_name_1 = var_start;
        CHECK_OBJECT( var_stop );
        tmp_stop_name_1 = var_stop;
        CHECK_OBJECT( var_step );
        tmp_step_name_1 = var_step;
        tmp_args_element_name_12 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_args_element_name_12 == NULL) );
        frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 591;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 591;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_slice_R;
            assert( old != NULL );
            var_slice_R = tmp_assign_source_23;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        CHECK_OBJECT( var_step );
        tmp_left_name_11 = var_step;
        tmp_right_name_11 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceRshift, &tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 592;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_assign_source_24 = tmp_left_name_11;
        var_step = tmp_assign_source_24;

    }
    {
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_13;
        PyObject *tmp_right_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_3;
        tmp_left_name_12 = const_float_0_5;
        CHECK_OBJECT( var_R );
        tmp_dict_name_1 = var_R;
        CHECK_OBJECT( var_i );
        tmp_left_name_14 = var_i;
        tmp_right_name_13 = const_int_pos_1;
        tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_14, tmp_right_name_13 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 593;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_key_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_key_name_1, 0, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_int_0;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_key_name_1, 1, tmp_tuple_element_2 );
        tmp_left_name_13 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
        Py_DECREF( tmp_key_name_1 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 593;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_h );
        tmp_left_name_15 = var_h;
        CHECK_OBJECT( par_y );
        tmp_subscribed_name_4 = par_y;
        CHECK_OBJECT( var_slice_R );
        tmp_subscript_name_4 = var_slice_R;
        tmp_source_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 593;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sum );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 593;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_dict_key_1 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_1 = par_axis;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 593;
        tmp_right_name_15 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_6, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 593;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_right_name_14 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 593;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_right_name_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_13 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 593;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_dictset_value = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 593;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_R );
        tmp_dictset_dict = var_R;
        CHECK_OBJECT( var_i );
        tmp_tuple_element_3 = var_i;
        tmp_dictset_key = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dictset_key, 0, tmp_tuple_element_3 );
        tmp_tuple_element_3 = const_int_0;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dictset_key, 1, tmp_tuple_element_3 );
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        Py_DECREF( tmp_dictset_key );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 593;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_xrange );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "xrange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 594;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_called_name_7 = tmp_mvar_value_7;
        tmp_args_element_name_13 = const_int_pos_1;
        CHECK_OBJECT( var_i );
        tmp_left_name_16 = var_i;
        tmp_right_name_16 = const_int_pos_1;
        tmp_args_element_name_14 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_16, tmp_right_name_16 );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 594;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }
        frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 594;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 594;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 594;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_25;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_26 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_26 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_3;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooN";
                exception_lineno = 594;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_26;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_27 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_27;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        CHECK_OBJECT( var_R );
        tmp_dict_name_2 = var_R;
        CHECK_OBJECT( var_i );
        tmp_tuple_element_4 = var_i;
        tmp_key_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_key_name_2, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_j );
        tmp_left_name_17 = var_j;
        tmp_right_name_17 = const_int_pos_1;
        tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_17, tmp_right_name_17 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_key_name_2 );

            exception_lineno = 595;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_3;
        }
        PyTuple_SET_ITEM( tmp_key_name_2, 1, tmp_tuple_element_4 );
        tmp_assign_source_28 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        Py_DECREF( tmp_key_name_2 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 595;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_prev;
            var_prev = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_19;
        PyObject *tmp_dict_name_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_20;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_21;
        PyObject *tmp_right_name_22;
        PyObject *tmp_left_name_23;
        PyObject *tmp_left_name_24;
        PyObject *tmp_right_name_23;
        PyObject *tmp_left_name_25;
        PyObject *tmp_right_name_24;
        PyObject *tmp_right_name_25;
        PyObject *tmp_tuple_element_6;
        CHECK_OBJECT( var_prev );
        tmp_left_name_18 = var_prev;
        CHECK_OBJECT( var_prev );
        tmp_left_name_20 = var_prev;
        CHECK_OBJECT( var_R );
        tmp_dict_name_3 = var_R;
        CHECK_OBJECT( var_i );
        tmp_left_name_21 = var_i;
        tmp_right_name_20 = const_int_pos_1;
        tmp_tuple_element_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_21, tmp_right_name_20 );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 596;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_3;
        }
        tmp_key_name_3 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_key_name_3, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_j );
        tmp_left_name_22 = var_j;
        tmp_right_name_21 = const_int_pos_1;
        tmp_tuple_element_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_22, tmp_right_name_21 );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_key_name_3 );

            exception_lineno = 596;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_3;
        }
        PyTuple_SET_ITEM( tmp_key_name_3, 1, tmp_tuple_element_5 );
        tmp_right_name_19 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
        Py_DECREF( tmp_key_name_3 );
        if ( tmp_right_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 596;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_3;
        }
        tmp_left_name_19 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_19 );
        Py_DECREF( tmp_right_name_19 );
        if ( tmp_left_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 596;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_3;
        }
        tmp_left_name_24 = const_int_pos_1;
        tmp_left_name_25 = const_int_pos_2;
        CHECK_OBJECT( var_j );
        tmp_right_name_24 = var_j;
        tmp_right_name_23 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_25, tmp_right_name_24 );
        if ( tmp_right_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_19 );

            exception_lineno = 596;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_3;
        }
        tmp_left_name_23 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_24, tmp_right_name_23 );
        Py_DECREF( tmp_right_name_23 );
        if ( tmp_left_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_19 );

            exception_lineno = 596;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_3;
        }
        tmp_right_name_25 = const_int_pos_1;
        tmp_right_name_22 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_23, tmp_right_name_25 );
        Py_DECREF( tmp_left_name_23 );
        if ( tmp_right_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_19 );

            exception_lineno = 596;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_3;
        }
        tmp_right_name_18 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_22 );
        Py_DECREF( tmp_left_name_19 );
        Py_DECREF( tmp_right_name_22 );
        if ( tmp_right_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 596;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_3;
        }
        tmp_dictset_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
        Py_DECREF( tmp_right_name_18 );
        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 596;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_R );
        tmp_dictset_dict = var_R;
        CHECK_OBJECT( var_i );
        tmp_tuple_element_6 = var_i;
        tmp_dictset_key = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_dictset_key, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_j );
        tmp_tuple_element_6 = var_j;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_dictset_key, 1, tmp_tuple_element_6 );
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        Py_DECREF( tmp_dictset_key );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 596;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 594;
        type_description_1 = "ooooooooooooooooooooooooN";
        goto try_except_handler_3;
    }
    goto loop_start_3;
    loop_end_3:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_left_name_26;
        PyObject *tmp_right_name_26;
        CHECK_OBJECT( var_h );
        tmp_left_name_26 = var_h;
        tmp_right_name_26 = const_float_2_0;
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_26, tmp_right_name_26 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 597;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_assign_source_29 = tmp_left_name_26;
        var_h = tmp_assign_source_29;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 589;
        type_description_1 = "ooooooooooooooooooooooooN";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_show );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_show );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 599;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_dict_name_4;
            PyObject *tmp_key_name_4;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 600;
                type_description_1 = "ooooooooooooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_8;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_isscalar );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 600;
                type_description_1 = "ooooooooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_R );
            tmp_dict_name_4 = var_R;
            tmp_key_name_4 = const_tuple_int_0_int_0_tuple;
            tmp_args_element_name_15 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_8 );

                exception_lineno = 600;
                type_description_1 = "ooooooooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 600;
            {
                PyObject *call_args[] = { tmp_args_element_name_15 };
                tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 600;
                type_description_1 = "ooooooooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 600;
                type_description_1 = "ooooooooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_9;
                PyObject *tmp_call_result_1;
                tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_print );
                assert( tmp_called_name_9 != NULL );
                frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 601;
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_str_digest_74a412e987f090816381ff18e90b10d1_tuple, 0 ) );

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 601;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            goto branch_end_4;
            branch_no_4:;
            // Tried code:
            {
                PyObject *tmp_assign_source_30;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                CHECK_OBJECT( par_show );
                tmp_subscribed_name_5 = par_show;
                tmp_subscript_name_5 = const_int_0;
                tmp_assign_source_30 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
                if ( tmp_assign_source_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 605;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto try_except_handler_4;
                }
                assert( var_precis == NULL );
                var_precis = tmp_assign_source_30;
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
                exception_keeper_tb_3 = MAKE_TRACEBACK( frame_5a409b5f3ef8104b86da3271e00e780c, exception_keeper_lineno_3 );
            }
            else if ( exception_keeper_lineno_3 != 0 )
            {
                exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_5a409b5f3ef8104b86da3271e00e780c, exception_keeper_lineno_3 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
            PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
            PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
            // Tried code:
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_3 = const_tuple_type_TypeError_type_IndexError_tuple;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 606;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto try_except_handler_5;
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
                    PyObject *tmp_assign_source_31;
                    tmp_assign_source_31 = const_int_pos_5;
                    assert( var_precis == NULL );
                    Py_INCREF( tmp_assign_source_31 );
                    var_precis = tmp_assign_source_31;
                }
                goto branch_end_5;
                branch_no_5:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 604;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_5a409b5f3ef8104b86da3271e00e780c->m_frame) frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooooooooooooooooooooooN";
                goto try_except_handler_5;
                branch_end_5:;
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
            NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_10_romb );
            return NULL;
            // End of try:
            try_end_3:;
            // Tried code:
            {
                PyObject *tmp_assign_source_32;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_subscript_name_6;
                CHECK_OBJECT( par_show );
                tmp_subscribed_name_6 = par_show;
                tmp_subscript_name_6 = const_int_pos_1;
                tmp_assign_source_32 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 1 );
                if ( tmp_assign_source_32 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 609;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto try_except_handler_6;
                }
                assert( var_width == NULL );
                var_width = tmp_assign_source_32;
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
            exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
            Py_XINCREF( exception_preserved_type_2 );
            exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
            Py_XINCREF( exception_preserved_value_2 );
            exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
            Py_XINCREF( exception_preserved_tb_2 );

            if ( exception_keeper_tb_5 == NULL )
            {
                exception_keeper_tb_5 = MAKE_TRACEBACK( frame_5a409b5f3ef8104b86da3271e00e780c, exception_keeper_lineno_5 );
            }
            else if ( exception_keeper_lineno_5 != 0 )
            {
                exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_5a409b5f3ef8104b86da3271e00e780c, exception_keeper_lineno_5 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
            PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
            PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
            // Tried code:
            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_4 = const_tuple_type_TypeError_type_IndexError_tuple;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 610;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto try_except_handler_7;
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
                    PyObject *tmp_assign_source_33;
                    tmp_assign_source_33 = const_int_pos_8;
                    assert( var_width == NULL );
                    Py_INCREF( tmp_assign_source_33 );
                    var_width = tmp_assign_source_33;
                }
                goto branch_end_6;
                branch_no_6:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 608;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_5a409b5f3ef8104b86da3271e00e780c->m_frame) frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooooooooooooooooooooooN";
                goto try_except_handler_7;
                branch_end_6:;
            }
            goto try_end_6;
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
            SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
            // Re-raise.
            exception_type = exception_keeper_type_6;
            exception_value = exception_keeper_value_6;
            exception_tb = exception_keeper_tb_6;
            exception_lineno = exception_keeper_lineno_6;

            goto frame_exception_exit_1;
            // End of try:
            try_end_6:;
            // Restore previous exception.
            SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
            goto try_end_5;
            // exception handler codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_10_romb );
            return NULL;
            // End of try:
            try_end_5:;
            {
                PyObject *tmp_assign_source_34;
                PyObject *tmp_left_name_27;
                PyObject *tmp_right_name_27;
                PyObject *tmp_tuple_element_7;
                tmp_left_name_27 = const_str_digest_1ce622cc2873fea69e8f4cee1901e78a;
                if ( var_width == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "width" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 612;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_7 = var_width;
                tmp_right_name_27 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_7 );
                PyTuple_SET_ITEM( tmp_right_name_27, 0, tmp_tuple_element_7 );
                if ( var_precis == NULL )
                {
                    Py_DECREF( tmp_right_name_27 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "precis" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 612;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_7 = var_precis;
                Py_INCREF( tmp_tuple_element_7 );
                PyTuple_SET_ITEM( tmp_right_name_27, 1, tmp_tuple_element_7 );
                tmp_assign_source_34 = BINARY_OPERATION_REMAINDER( tmp_left_name_27, tmp_right_name_27 );
                Py_DECREF( tmp_right_name_27 );
                if ( tmp_assign_source_34 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 612;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                assert( var_formstr == NULL );
                var_formstr = tmp_assign_source_34;
            }
            {
                PyObject *tmp_called_name_10;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_kw_name_3;
                tmp_called_name_10 = LOOKUP_BUILTIN( const_str_plain_print );
                assert( tmp_called_name_10 != NULL );
                tmp_tuple_element_8 = const_str_empty;
                tmp_args_name_2 = PyTuple_New( 3 );
                Py_INCREF( tmp_tuple_element_8 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_8 );
                tmp_called_instance_2 = const_str_digest_6944d20248bdbd2b3e56da0846e4d939;
                frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 615;
                tmp_tuple_element_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_center, &PyTuple_GET_ITEM( const_tuple_int_pos_68_tuple, 0 ) );

                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_name_2 );

                    exception_lineno = 615;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_8 );
                tmp_tuple_element_8 = const_str_digest_992bd0a1c27df010086b8cf339642d48;
                Py_INCREF( tmp_tuple_element_8 );
                PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_8 );
                tmp_kw_name_3 = PyDict_Copy( const_dict_aa61dd133fb5a963fbe38a34e70b9d3b );
                frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 615;
                tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_2, tmp_kw_name_3 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_3 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 615;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            {
                PyObject *tmp_assign_source_35;
                PyObject *tmp_iter_arg_3;
                PyObject *tmp_called_name_11;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_args_element_name_16;
                PyObject *tmp_left_name_28;
                PyObject *tmp_right_name_28;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_xrange );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "xrange" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 616;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_11 = tmp_mvar_value_9;
                CHECK_OBJECT( var_k );
                tmp_left_name_28 = var_k;
                tmp_right_name_28 = const_int_pos_1;
                tmp_args_element_name_16 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_28, tmp_right_name_28 );
                if ( tmp_args_element_name_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 616;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 616;
                {
                    PyObject *call_args[] = { tmp_args_element_name_16 };
                    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
                }

                Py_DECREF( tmp_args_element_name_16 );
                if ( tmp_iter_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 616;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_35 = MAKE_ITERATOR( tmp_iter_arg_3 );
                Py_DECREF( tmp_iter_arg_3 );
                if ( tmp_assign_source_35 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 616;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                assert( tmp_for_loop_3__for_iterator == NULL );
                tmp_for_loop_3__for_iterator = tmp_assign_source_35;
            }
            // Tried code:
            loop_start_4:;
            {
                PyObject *tmp_next_source_3;
                PyObject *tmp_assign_source_36;
                CHECK_OBJECT( tmp_for_loop_3__for_iterator );
                tmp_next_source_3 = tmp_for_loop_3__for_iterator;
                tmp_assign_source_36 = ITERATOR_NEXT( tmp_next_source_3 );
                if ( tmp_assign_source_36 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_4;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooooooooooooooooooooN";
                        exception_lineno = 616;
                        goto try_except_handler_8;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_3__iter_value;
                    tmp_for_loop_3__iter_value = tmp_assign_source_36;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_37;
                CHECK_OBJECT( tmp_for_loop_3__iter_value );
                tmp_assign_source_37 = tmp_for_loop_3__iter_value;
                {
                    PyObject *old = var_i;
                    var_i = tmp_assign_source_37;
                    Py_INCREF( var_i );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_38;
                PyObject *tmp_iter_arg_4;
                PyObject *tmp_called_name_12;
                PyObject *tmp_mvar_value_10;
                PyObject *tmp_args_element_name_17;
                PyObject *tmp_left_name_29;
                PyObject *tmp_right_name_29;
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_xrange );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "xrange" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 617;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto try_except_handler_8;
                }

                tmp_called_name_12 = tmp_mvar_value_10;
                CHECK_OBJECT( var_i );
                tmp_left_name_29 = var_i;
                tmp_right_name_29 = const_int_pos_1;
                tmp_args_element_name_17 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_29, tmp_right_name_29 );
                if ( tmp_args_element_name_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 617;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto try_except_handler_8;
                }
                frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 617;
                {
                    PyObject *call_args[] = { tmp_args_element_name_17 };
                    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
                }

                Py_DECREF( tmp_args_element_name_17 );
                if ( tmp_iter_arg_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 617;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto try_except_handler_8;
                }
                tmp_assign_source_38 = MAKE_ITERATOR( tmp_iter_arg_4 );
                Py_DECREF( tmp_iter_arg_4 );
                if ( tmp_assign_source_38 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 617;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto try_except_handler_8;
                }
                {
                    PyObject *old = tmp_for_loop_4__for_iterator;
                    tmp_for_loop_4__for_iterator = tmp_assign_source_38;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            loop_start_5:;
            {
                PyObject *tmp_next_source_4;
                PyObject *tmp_assign_source_39;
                CHECK_OBJECT( tmp_for_loop_4__for_iterator );
                tmp_next_source_4 = tmp_for_loop_4__for_iterator;
                tmp_assign_source_39 = ITERATOR_NEXT( tmp_next_source_4 );
                if ( tmp_assign_source_39 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_5;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooooooooooooooooooooN";
                        exception_lineno = 617;
                        goto try_except_handler_9;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_4__iter_value;
                    tmp_for_loop_4__iter_value = tmp_assign_source_39;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_40;
                CHECK_OBJECT( tmp_for_loop_4__iter_value );
                tmp_assign_source_40 = tmp_for_loop_4__iter_value;
                {
                    PyObject *old = var_j;
                    var_j = tmp_assign_source_40;
                    Py_INCREF( var_j );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_called_name_13;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_name_3;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_left_name_30;
                PyObject *tmp_right_name_30;
                PyObject *tmp_dict_name_5;
                PyObject *tmp_key_name_5;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_kw_name_4;
                tmp_called_name_13 = LOOKUP_BUILTIN( const_str_plain_print );
                assert( tmp_called_name_13 != NULL );
                CHECK_OBJECT( var_formstr );
                tmp_left_name_30 = var_formstr;
                CHECK_OBJECT( var_R );
                tmp_dict_name_5 = var_R;
                CHECK_OBJECT( var_i );
                tmp_tuple_element_10 = var_i;
                tmp_key_name_5 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_10 );
                PyTuple_SET_ITEM( tmp_key_name_5, 0, tmp_tuple_element_10 );
                CHECK_OBJECT( var_j );
                tmp_tuple_element_10 = var_j;
                Py_INCREF( tmp_tuple_element_10 );
                PyTuple_SET_ITEM( tmp_key_name_5, 1, tmp_tuple_element_10 );
                tmp_right_name_30 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
                Py_DECREF( tmp_key_name_5 );
                if ( tmp_right_name_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 618;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto try_except_handler_9;
                }
                tmp_tuple_element_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_30, tmp_right_name_30 );
                Py_DECREF( tmp_right_name_30 );
                if ( tmp_tuple_element_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 618;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto try_except_handler_9;
                }
                tmp_args_name_3 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_9 );
                tmp_kw_name_4 = PyDict_Copy( const_dict_fb4ddbadafbecbaef28aef989e4b600e );
                frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 618;
                tmp_call_result_3 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_3, tmp_kw_name_4 );
                Py_DECREF( tmp_args_name_3 );
                Py_DECREF( tmp_kw_name_4 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 618;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto try_except_handler_9;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 617;
                type_description_1 = "ooooooooooooooooooooooooN";
                goto try_except_handler_9;
            }
            goto loop_start_5;
            loop_end_5:;
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

            Py_XDECREF( tmp_for_loop_4__iter_value );
            tmp_for_loop_4__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
            Py_DECREF( tmp_for_loop_4__for_iterator );
            tmp_for_loop_4__for_iterator = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto try_except_handler_8;
            // End of try:
            try_end_7:;
            Py_XDECREF( tmp_for_loop_4__iter_value );
            tmp_for_loop_4__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
            Py_DECREF( tmp_for_loop_4__for_iterator );
            tmp_for_loop_4__for_iterator = NULL;

            {
                PyObject *tmp_called_name_14;
                PyObject *tmp_call_result_4;
                tmp_called_name_14 = LOOKUP_BUILTIN( const_str_plain_print );
                assert( tmp_called_name_14 != NULL );
                frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 619;
                tmp_call_result_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_14 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 619;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto try_except_handler_8;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 616;
                type_description_1 = "ooooooooooooooooooooooooN";
                goto try_except_handler_8;
            }
            goto loop_start_4;
            loop_end_4:;
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

            Py_XDECREF( tmp_for_loop_3__iter_value );
            tmp_for_loop_3__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
            Py_DECREF( tmp_for_loop_3__for_iterator );
            tmp_for_loop_3__for_iterator = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto frame_exception_exit_1;
            // End of try:
            try_end_8:;
            Py_XDECREF( tmp_for_loop_3__iter_value );
            tmp_for_loop_3__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
            Py_DECREF( tmp_for_loop_3__for_iterator );
            tmp_for_loop_3__for_iterator = NULL;

            {
                PyObject *tmp_called_name_15;
                PyObject *tmp_call_result_5;
                tmp_called_name_15 = LOOKUP_BUILTIN( const_str_plain_print );
                assert( tmp_called_name_15 != NULL );
                frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 620;
                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, &PyTuple_GET_ITEM( const_tuple_str_digest_992bd0a1c27df010086b8cf339642d48_tuple, 0 ) );

                if ( tmp_call_result_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 620;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_5 );
            }
            {
                PyObject *tmp_called_name_16;
                PyObject *tmp_call_result_6;
                tmp_called_name_16 = LOOKUP_BUILTIN( const_str_plain_print );
                assert( tmp_called_name_16 != NULL );
                frame_5a409b5f3ef8104b86da3271e00e780c->m_frame.f_lineno = 621;
                tmp_call_result_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_16 );
                if ( tmp_call_result_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 621;
                    type_description_1 = "ooooooooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_6 );
            }
            branch_end_4:;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_dict_name_6;
        PyObject *tmp_key_name_6;
        PyObject *tmp_tuple_element_11;
        CHECK_OBJECT( var_R );
        tmp_dict_name_6 = var_R;
        CHECK_OBJECT( var_k );
        tmp_tuple_element_11 = var_k;
        tmp_key_name_6 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_key_name_6, 0, tmp_tuple_element_11 );
        CHECK_OBJECT( var_k );
        tmp_tuple_element_11 = var_k;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_key_name_6, 1, tmp_tuple_element_11 );
        tmp_return_value = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        Py_DECREF( tmp_key_name_6 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 623;
            type_description_1 = "ooooooooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a409b5f3ef8104b86da3271e00e780c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a409b5f3ef8104b86da3271e00e780c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a409b5f3ef8104b86da3271e00e780c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a409b5f3ef8104b86da3271e00e780c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a409b5f3ef8104b86da3271e00e780c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a409b5f3ef8104b86da3271e00e780c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a409b5f3ef8104b86da3271e00e780c,
        type_description_1,
        par_y,
        par_dx,
        par_axis,
        par_show,
        var_nd,
        var_Nsamps,
        var_Ninterv,
        var_n,
        var_k,
        var_R,
        var_slice_all,
        var_slice0,
        var_slicem1,
        var_h,
        var_slice_R,
        var_start,
        var_stop,
        var_step,
        var_i,
        var_j,
        var_prev,
        var_precis,
        var_width,
        var_formstr,
        NULL
    );


    // Release cached frame.
    if ( frame_5a409b5f3ef8104b86da3271e00e780c == cache_frame_5a409b5f3ef8104b86da3271e00e780c )
    {
        Py_DECREF( frame_5a409b5f3ef8104b86da3271e00e780c );
    }
    cache_frame_5a409b5f3ef8104b86da3271e00e780c = NULL;

    assertFrameObject( frame_5a409b5f3ef8104b86da3271e00e780c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_10_romb );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_dx );
    Py_DECREF( par_dx );
    par_dx = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_show );
    Py_DECREF( par_show );
    par_show = NULL;

    CHECK_OBJECT( (PyObject *)var_nd );
    Py_DECREF( var_nd );
    var_nd = NULL;

    CHECK_OBJECT( (PyObject *)var_Nsamps );
    Py_DECREF( var_Nsamps );
    var_Nsamps = NULL;

    CHECK_OBJECT( (PyObject *)var_Ninterv );
    Py_DECREF( var_Ninterv );
    var_Ninterv = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_k );
    Py_DECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)var_R );
    Py_DECREF( var_R );
    var_R = NULL;

    CHECK_OBJECT( (PyObject *)var_slice_all );
    Py_DECREF( var_slice_all );
    var_slice_all = NULL;

    CHECK_OBJECT( (PyObject *)var_slice0 );
    Py_DECREF( var_slice0 );
    var_slice0 = NULL;

    CHECK_OBJECT( (PyObject *)var_slicem1 );
    Py_DECREF( var_slicem1 );
    var_slicem1 = NULL;

    CHECK_OBJECT( (PyObject *)var_h );
    Py_DECREF( var_h );
    var_h = NULL;

    CHECK_OBJECT( (PyObject *)var_slice_R );
    Py_DECREF( var_slice_R );
    var_slice_R = NULL;

    CHECK_OBJECT( (PyObject *)var_start );
    Py_DECREF( var_start );
    var_start = NULL;

    CHECK_OBJECT( (PyObject *)var_stop );
    Py_DECREF( var_stop );
    var_stop = NULL;

    CHECK_OBJECT( (PyObject *)var_step );
    Py_DECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_prev );
    var_prev = NULL;

    Py_XDECREF( var_precis );
    var_precis = NULL;

    Py_XDECREF( var_width );
    var_width = NULL;

    Py_XDECREF( var_formstr );
    var_formstr = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_dx );
    Py_DECREF( par_dx );
    par_dx = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_show );
    Py_DECREF( par_show );
    par_show = NULL;

    Py_XDECREF( var_nd );
    var_nd = NULL;

    Py_XDECREF( var_Nsamps );
    var_Nsamps = NULL;

    Py_XDECREF( var_Ninterv );
    var_Ninterv = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_slice_all );
    var_slice_all = NULL;

    Py_XDECREF( var_slice0 );
    var_slice0 = NULL;

    Py_XDECREF( var_slicem1 );
    var_slicem1 = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_slice_R );
    var_slice_R = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_prev );
    var_prev = NULL;

    Py_XDECREF( var_precis );
    var_precis = NULL;

    Py_XDECREF( var_width );
    var_width = NULL;

    Py_XDECREF( var_formstr );
    var_formstr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_10_romb );
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


static PyObject *impl_scipy$integrate$quadrature$$$function_11__difftrap( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_function = python_pars[ 0 ];
    PyObject *par_interval = python_pars[ 1 ];
    PyObject *par_numtraps = python_pars[ 2 ];
    PyObject *var_numtosum = NULL;
    PyObject *var_h = NULL;
    PyObject *var_lox = NULL;
    PyObject *var_points = NULL;
    PyObject *var_s = NULL;
    struct Nuitka_FrameObject *frame_0cb55818daf7f169e102a50a065da745;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0cb55818daf7f169e102a50a065da745 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0cb55818daf7f169e102a50a065da745, codeobj_0cb55818daf7f169e102a50a065da745, module_scipy$integrate$quadrature, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0cb55818daf7f169e102a50a065da745 = cache_frame_0cb55818daf7f169e102a50a065da745;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0cb55818daf7f169e102a50a065da745 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0cb55818daf7f169e102a50a065da745 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_numtraps );
        tmp_compexpr_left_1 = par_numtraps;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 650;
            type_description_1 = "oooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_c2f591070e288bb70a50b1c720294c4a;
            frame_0cb55818daf7f169e102a50a065da745->m_frame.f_lineno = 651;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 651;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_numtraps );
            tmp_compexpr_left_2 = par_numtraps;
            tmp_compexpr_right_2 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 652;
                type_description_1 = "oooooooo";
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
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_called_name_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_right_name_2;
                PyObject *tmp_called_name_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                tmp_left_name_1 = const_float_0_5;
                CHECK_OBJECT( par_function );
                tmp_called_name_1 = par_function;
                CHECK_OBJECT( par_interval );
                tmp_subscribed_name_1 = par_interval;
                tmp_subscript_name_1 = const_int_0;
                tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 653;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                frame_0cb55818daf7f169e102a50a065da745->m_frame.f_lineno = 653;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_left_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 653;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_function );
                tmp_called_name_2 = par_function;
                CHECK_OBJECT( par_interval );
                tmp_subscribed_name_2 = par_interval;
                tmp_subscript_name_2 = const_int_pos_1;
                tmp_args_element_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 653;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                frame_0cb55818daf7f169e102a50a065da745->m_frame.f_lineno = 653;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 653;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 653;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 653;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_1;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                CHECK_OBJECT( par_numtraps );
                tmp_left_name_3 = par_numtraps;
                tmp_right_name_3 = const_int_pos_2;
                tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
                if ( tmp_assign_source_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 655;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_numtosum == NULL );
                var_numtosum = tmp_assign_source_1;
            }
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_left_name_4;
                PyObject *tmp_float_arg_1;
                PyObject *tmp_left_name_5;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_right_name_4;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_right_name_5;
                CHECK_OBJECT( par_interval );
                tmp_subscribed_name_3 = par_interval;
                tmp_subscript_name_3 = const_int_pos_1;
                tmp_left_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
                if ( tmp_left_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 656;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_interval );
                tmp_subscribed_name_4 = par_interval;
                tmp_subscript_name_4 = const_int_0;
                tmp_right_name_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
                if ( tmp_right_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_5 );

                    exception_lineno = 656;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_float_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_4 );
                Py_DECREF( tmp_left_name_5 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_float_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 656;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_4 = TO_FLOAT( tmp_float_arg_1 );
                Py_DECREF( tmp_float_arg_1 );
                if ( tmp_left_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 656;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_numtosum );
                tmp_right_name_5 = var_numtosum;
                tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_5 );
                Py_DECREF( tmp_left_name_4 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 656;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_h == NULL );
                var_h = tmp_assign_source_2;
            }
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_left_name_6;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_right_name_6;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                CHECK_OBJECT( par_interval );
                tmp_subscribed_name_5 = par_interval;
                tmp_subscript_name_5 = const_int_0;
                tmp_left_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
                if ( tmp_left_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 657;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_7 = const_float_0_5;
                CHECK_OBJECT( var_h );
                tmp_right_name_7 = var_h;
                tmp_right_name_6 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
                if ( tmp_right_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_6 );

                    exception_lineno = 657;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_left_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 657;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_lox == NULL );
                var_lox = tmp_assign_source_3;
            }
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_8;
                PyObject *tmp_left_name_9;
                PyObject *tmp_right_name_9;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT( var_lox );
                tmp_left_name_8 = var_lox;
                CHECK_OBJECT( var_h );
                tmp_left_name_9 = var_h;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 658;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_1 = tmp_mvar_value_1;
                CHECK_OBJECT( var_numtosum );
                tmp_args_element_name_3 = var_numtosum;
                frame_0cb55818daf7f169e102a50a065da745->m_frame.f_lineno = 658;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_right_name_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_arange, call_args );
                }

                if ( tmp_right_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 658;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
                Py_DECREF( tmp_right_name_9 );
                if ( tmp_right_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 658;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
                Py_DECREF( tmp_right_name_8 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 658;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_points == NULL );
                var_points = tmp_assign_source_4;
            }
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_called_name_4;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_kw_name_1;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 659;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_1 = tmp_mvar_value_2;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sum );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 659;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_function );
                tmp_called_name_4 = par_function;
                CHECK_OBJECT( var_points );
                tmp_args_element_name_4 = var_points;
                frame_0cb55818daf7f169e102a50a065da745->m_frame.f_lineno = 659;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 659;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_name_1 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
                tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
                frame_0cb55818daf7f169e102a50a065da745->m_frame.f_lineno = 659;
                tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_assign_source_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 659;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_s == NULL );
                var_s = tmp_assign_source_5;
            }
            CHECK_OBJECT( var_s );
            tmp_return_value = var_s;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0cb55818daf7f169e102a50a065da745 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0cb55818daf7f169e102a50a065da745 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0cb55818daf7f169e102a50a065da745 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0cb55818daf7f169e102a50a065da745, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0cb55818daf7f169e102a50a065da745->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0cb55818daf7f169e102a50a065da745, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0cb55818daf7f169e102a50a065da745,
        type_description_1,
        par_function,
        par_interval,
        par_numtraps,
        var_numtosum,
        var_h,
        var_lox,
        var_points,
        var_s
    );


    // Release cached frame.
    if ( frame_0cb55818daf7f169e102a50a065da745 == cache_frame_0cb55818daf7f169e102a50a065da745 )
    {
        Py_DECREF( frame_0cb55818daf7f169e102a50a065da745 );
    }
    cache_frame_0cb55818daf7f169e102a50a065da745 = NULL;

    assertFrameObject( frame_0cb55818daf7f169e102a50a065da745 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_11__difftrap );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_function );
    Py_DECREF( par_function );
    par_function = NULL;

    CHECK_OBJECT( (PyObject *)par_interval );
    Py_DECREF( par_interval );
    par_interval = NULL;

    CHECK_OBJECT( (PyObject *)par_numtraps );
    Py_DECREF( par_numtraps );
    par_numtraps = NULL;

    Py_XDECREF( var_numtosum );
    var_numtosum = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_lox );
    var_lox = NULL;

    Py_XDECREF( var_points );
    var_points = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_function );
    Py_DECREF( par_function );
    par_function = NULL;

    CHECK_OBJECT( (PyObject *)par_interval );
    Py_DECREF( par_interval );
    par_interval = NULL;

    CHECK_OBJECT( (PyObject *)par_numtraps );
    Py_DECREF( par_numtraps );
    par_numtraps = NULL;

    Py_XDECREF( var_numtosum );
    var_numtosum = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_lox );
    var_lox = NULL;

    Py_XDECREF( var_points );
    var_points = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_11__difftrap );
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


static PyObject *impl_scipy$integrate$quadrature$$$function_12__romberg_diff( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_b = python_pars[ 0 ];
    PyObject *par_c = python_pars[ 1 ];
    PyObject *par_k = python_pars[ 2 ];
    PyObject *var_tmp = NULL;
    struct Nuitka_FrameObject *frame_0452387954d6582f3c08a95887221bc9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0452387954d6582f3c08a95887221bc9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0452387954d6582f3c08a95887221bc9, codeobj_0452387954d6582f3c08a95887221bc9, module_scipy$integrate$quadrature, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0452387954d6582f3c08a95887221bc9 = cache_frame_0452387954d6582f3c08a95887221bc9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0452387954d6582f3c08a95887221bc9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0452387954d6582f3c08a95887221bc9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_float_4_0;
        CHECK_OBJECT( par_k );
        tmp_right_name_1 = par_k;
        tmp_assign_source_1 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 668;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_tmp == NULL );
        var_tmp = tmp_assign_source_1;
    }
    {
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( var_tmp );
        tmp_left_name_4 = var_tmp;
        CHECK_OBJECT( par_c );
        tmp_right_name_2 = par_c;
        tmp_left_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_2 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 669;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_right_name_3 = par_b;
        tmp_left_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 669;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_tmp );
        tmp_left_name_5 = var_tmp;
        tmp_right_name_5 = const_float_1_0;
        tmp_right_name_4 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 669;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 669;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0452387954d6582f3c08a95887221bc9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0452387954d6582f3c08a95887221bc9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0452387954d6582f3c08a95887221bc9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0452387954d6582f3c08a95887221bc9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0452387954d6582f3c08a95887221bc9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0452387954d6582f3c08a95887221bc9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0452387954d6582f3c08a95887221bc9,
        type_description_1,
        par_b,
        par_c,
        par_k,
        var_tmp
    );


    // Release cached frame.
    if ( frame_0452387954d6582f3c08a95887221bc9 == cache_frame_0452387954d6582f3c08a95887221bc9 )
    {
        Py_DECREF( frame_0452387954d6582f3c08a95887221bc9 );
    }
    cache_frame_0452387954d6582f3c08a95887221bc9 = NULL;

    assertFrameObject( frame_0452387954d6582f3c08a95887221bc9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_12__romberg_diff );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)var_tmp );
    Py_DECREF( var_tmp );
    var_tmp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_12__romberg_diff );
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


static PyObject *impl_scipy$integrate$quadrature$$$function_13__printresmat( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_function = python_pars[ 0 ];
    PyObject *par_interval = python_pars[ 1 ];
    PyObject *par_resmat = python_pars[ 2 ];
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_87839c40b068e02c2ac0a4820482b0c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_87839c40b068e02c2ac0a4820482b0c6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_0;
        assert( var_i == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_i = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_0;
        assert( var_j == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_j = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_87839c40b068e02c2ac0a4820482b0c6, codeobj_87839c40b068e02c2ac0a4820482b0c6, module_scipy$integrate$quadrature, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_87839c40b068e02c2ac0a4820482b0c6 = cache_frame_87839c40b068e02c2ac0a4820482b0c6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_87839c40b068e02c2ac0a4820482b0c6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_87839c40b068e02c2ac0a4820482b0c6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_kw_name_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_1 != NULL );
        tmp_tuple_element_1 = const_str_digest_bf6304af5d04609bb914ac43d4fd6093;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_function );
        tmp_operand_name_1 = par_function;
        tmp_tuple_element_1 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 675;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_fb4ddbadafbecbaef28aef989e4b600e );
        frame_87839c40b068e02c2ac0a4820482b0c6->m_frame.f_lineno = 675;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 675;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_2 != NULL );
        tmp_args_element_name_1 = const_str_plain_from;
        CHECK_OBJECT( par_interval );
        tmp_args_element_name_2 = par_interval;
        frame_87839c40b068e02c2ac0a4820482b0c6->m_frame.f_lineno = 676;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 676;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_3;
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_3 != NULL );
        frame_87839c40b068e02c2ac0a4820482b0c6->m_frame.f_lineno = 677;
        tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 677;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_4;
        tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_4 != NULL );
        frame_87839c40b068e02c2ac0a4820482b0c6->m_frame.f_lineno = 678;
        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_digest_05dd2d2881970c0cc0696ff83c3adcff_tuple, 0 ) );

        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 678;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_len_arg_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_xrange );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "xrange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 679;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_1;
        CHECK_OBJECT( par_resmat );
        tmp_len_arg_1 = par_resmat;
        tmp_args_element_name_3 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 679;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_87839c40b068e02c2ac0a4820482b0c6->m_frame.f_lineno = 679;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 679;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 679;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
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
                type_description_1 = "ooooo";
                exception_lineno = 679;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            assert( old != NULL );
            var_i = tmp_assign_source_5;
            Py_INCREF( var_i );
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_kw_name_2;
        tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_6 != NULL );
        tmp_left_name_1 = const_str_digest_a9e181bf37d270035fdf10c0460ac9ea;
        tmp_left_name_2 = const_int_pos_2;
        CHECK_OBJECT( var_i );
        tmp_right_name_2 = var_i;
        tmp_tuple_element_3 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 680;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_interval );
        tmp_subscribed_name_1 = par_interval;
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_left_name_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 680;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_interval );
        tmp_subscribed_name_2 = par_interval;
        tmp_subscript_name_2 = const_int_0;
        tmp_right_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 680;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 680;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_5 = const_float_2_0;
        CHECK_OBJECT( var_i );
        tmp_right_name_5 = var_i;
        tmp_right_name_4 = POWER_OPERATION( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 680;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 680;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
        tmp_tuple_element_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 680;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_fb4ddbadafbecbaef28aef989e4b600e );
        frame_87839c40b068e02c2ac0a4820482b0c6->m_frame.f_lineno = 680;
        tmp_call_result_5 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 680;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_xrange );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "xrange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 681;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_7 = tmp_mvar_value_2;
        CHECK_OBJECT( var_i );
        tmp_left_name_6 = var_i;
        tmp_right_name_6 = const_int_pos_1;
        tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 681;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_87839c40b068e02c2ac0a4820482b0c6->m_frame.f_lineno = 681;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 681;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 681;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                exception_lineno = 681;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_8 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_j;
            assert( old != NULL );
            var_j = tmp_assign_source_8;
            Py_INCREF( var_j );
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_kw_name_3;
        tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_8 != NULL );
        tmp_left_name_7 = const_str_digest_d918e52496d1cccc374c472894c7143c;
        CHECK_OBJECT( par_resmat );
        tmp_subscribed_name_4 = par_resmat;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_3 = var_i;
        tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_3 );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 682;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_j );
        tmp_subscript_name_4 = var_j;
        tmp_right_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 682;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 682;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_args_name_3 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
        tmp_kw_name_3 = PyDict_Copy( const_dict_fb4ddbadafbecbaef28aef989e4b600e );
        frame_87839c40b068e02c2ac0a4820482b0c6->m_frame.f_lineno = 682;
        tmp_call_result_6 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_call_result_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 682;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_6 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 681;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_call_result_7;
        tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_9 != NULL );
        frame_87839c40b068e02c2ac0a4820482b0c6->m_frame.f_lineno = 683;
        tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

        if ( tmp_call_result_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 683;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_7 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 679;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_call_result_8;
        tmp_called_name_10 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_10 != NULL );
        frame_87839c40b068e02c2ac0a4820482b0c6->m_frame.f_lineno = 684;
        tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

        if ( tmp_call_result_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 684;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_8 );
    }
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_kw_name_4;
        tmp_called_name_11 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_11 != NULL );
        tmp_tuple_element_5 = const_str_digest_25e3ee3c70206466e940939625fb6bf7;
        tmp_args_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( par_resmat );
        tmp_subscribed_name_6 = par_resmat;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_5 = var_i;
        tmp_subscribed_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_5 );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_4 );

            exception_lineno = 685;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_j );
        tmp_subscript_name_6 = var_j;
        tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_4 );

            exception_lineno = 685;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_5 );
        tmp_kw_name_4 = PyDict_Copy( const_dict_fb4ddbadafbecbaef28aef989e4b600e );
        frame_87839c40b068e02c2ac0a4820482b0c6->m_frame.f_lineno = 685;
        tmp_call_result_9 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_call_result_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 685;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_9 );
    }
    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_10;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        PyObject *tmp_args_element_name_7;
        tmp_called_name_12 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_12 != NULL );
        tmp_args_element_name_5 = const_str_plain_after;
        tmp_left_name_9 = const_int_pos_2;
        CHECK_OBJECT( par_resmat );
        tmp_len_arg_2 = par_resmat;
        tmp_left_name_10 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 686;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_9 = const_int_pos_1;
        tmp_right_name_8 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_10, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_10 );
        assert( !(tmp_right_name_8 == NULL) );
        tmp_left_name_8 = POWER_OPERATION( tmp_left_name_9, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 686;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_10 = const_int_pos_1;
        tmp_args_element_name_6 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_8, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_8 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 686;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = const_str_digest_21db9de32a9c38f59a6877147f173fa4;
        frame_87839c40b068e02c2ac0a4820482b0c6->m_frame.f_lineno = 686;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_call_result_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 686;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_10 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_87839c40b068e02c2ac0a4820482b0c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_87839c40b068e02c2ac0a4820482b0c6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_87839c40b068e02c2ac0a4820482b0c6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_87839c40b068e02c2ac0a4820482b0c6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_87839c40b068e02c2ac0a4820482b0c6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_87839c40b068e02c2ac0a4820482b0c6,
        type_description_1,
        par_function,
        par_interval,
        par_resmat,
        var_i,
        var_j
    );


    // Release cached frame.
    if ( frame_87839c40b068e02c2ac0a4820482b0c6 == cache_frame_87839c40b068e02c2ac0a4820482b0c6 )
    {
        Py_DECREF( frame_87839c40b068e02c2ac0a4820482b0c6 );
    }
    cache_frame_87839c40b068e02c2ac0a4820482b0c6 = NULL;

    assertFrameObject( frame_87839c40b068e02c2ac0a4820482b0c6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_13__printresmat );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_function );
    Py_DECREF( par_function );
    par_function = NULL;

    CHECK_OBJECT( (PyObject *)par_interval );
    Py_DECREF( par_interval );
    par_interval = NULL;

    CHECK_OBJECT( (PyObject *)par_resmat );
    Py_DECREF( par_resmat );
    par_resmat = NULL;

    CHECK_OBJECT( (PyObject *)var_i );
    Py_DECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)var_j );
    Py_DECREF( var_j );
    var_j = NULL;

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

    CHECK_OBJECT( (PyObject *)par_function );
    Py_DECREF( par_function );
    par_function = NULL;

    CHECK_OBJECT( (PyObject *)par_interval );
    Py_DECREF( par_interval );
    par_interval = NULL;

    CHECK_OBJECT( (PyObject *)par_resmat );
    Py_DECREF( par_resmat );
    par_resmat = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_13__printresmat );
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


static PyObject *impl_scipy$integrate$quadrature$$$function_14_romberg( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_function = python_pars[ 0 ];
    PyObject *par_a = python_pars[ 1 ];
    PyObject *par_b = python_pars[ 2 ];
    PyObject *par_args = python_pars[ 3 ];
    PyObject *par_tol = python_pars[ 4 ];
    PyObject *par_rtol = python_pars[ 5 ];
    PyObject *par_show = python_pars[ 6 ];
    PyObject *par_divmax = python_pars[ 7 ];
    PyObject *par_vec_func = python_pars[ 8 ];
    PyObject *var_vfunc = NULL;
    PyObject *var_n = NULL;
    PyObject *var_interval = NULL;
    PyObject *var_intrange = NULL;
    PyObject *var_ordsum = NULL;
    PyObject *var_result = NULL;
    PyObject *var_resmat = NULL;
    PyObject *var_err = NULL;
    PyObject *var_last_row = NULL;
    PyObject *var_i = NULL;
    PyObject *var_row = NULL;
    PyObject *var_k = NULL;
    PyObject *var_lastresult = NULL;
    nuitka_bool tmp_for_loop_1__break_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_13abb2d017c71c1bd430ba04d275038b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_13abb2d017c71c1bd430ba04d275038b = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_13abb2d017c71c1bd430ba04d275038b, codeobj_13abb2d017c71c1bd430ba04d275038b, module_scipy$integrate$quadrature, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_13abb2d017c71c1bd430ba04d275038b = cache_frame_13abb2d017c71c1bd430ba04d275038b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_13abb2d017c71c1bd430ba04d275038b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_13abb2d017c71c1bd430ba04d275038b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 773;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_13abb2d017c71c1bd430ba04d275038b->m_frame.f_lineno = 773;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isinf, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 773;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 773;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 773;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_2 = par_b;
        frame_13abb2d017c71c1bd430ba04d275038b->m_frame.f_lineno = 773;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_isinf, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 773;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 773;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            tmp_make_exception_arg_1 = const_str_digest_cbf7cf14a51f8dcf3b5f1e45f9ddb751;
            frame_13abb2d017c71c1bd430ba04d275038b->m_frame.f_lineno = 774;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 774;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_vectorize1 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_vectorize1 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "vectorize1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 776;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_function );
        tmp_tuple_element_1 = par_function;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_args );
        tmp_tuple_element_1 = par_args;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_vec_func;
        CHECK_OBJECT( par_vec_func );
        tmp_dict_value_1 = par_vec_func;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_13abb2d017c71c1bd430ba04d275038b->m_frame.f_lineno = 776;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 776;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_vfunc == NULL );
        var_vfunc = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_pos_1;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_n = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT( par_a );
        tmp_list_element_1 = par_a;
        tmp_assign_source_3 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
        CHECK_OBJECT( par_b );
        tmp_list_element_1 = par_b;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
        assert( var_interval == NULL );
        var_interval = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_b );
        tmp_left_name_1 = par_b;
        CHECK_OBJECT( par_a );
        tmp_right_name_1 = par_a;
        tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 779;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_intrange == NULL );
        var_intrange = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__difftrap );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__difftrap );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_difftrap" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 780;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_vfunc );
        tmp_args_element_name_3 = var_vfunc;
        CHECK_OBJECT( var_interval );
        tmp_args_element_name_4 = var_interval;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_5 = var_n;
        frame_13abb2d017c71c1bd430ba04d275038b->m_frame.f_lineno = 780;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 780;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ordsum == NULL );
        var_ordsum = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_intrange );
        tmp_left_name_2 = var_intrange;
        CHECK_OBJECT( var_ordsum );
        tmp_right_name_2 = var_ordsum;
        tmp_assign_source_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 781;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_list_element_2;
        PyObject *tmp_list_element_3;
        CHECK_OBJECT( var_result );
        tmp_list_element_3 = var_result;
        tmp_list_element_2 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_3 );
        PyList_SET_ITEM( tmp_list_element_2, 0, tmp_list_element_3 );
        tmp_assign_source_7 = PyList_New( 1 );
        PyList_SET_ITEM( tmp_assign_source_7, 0, tmp_list_element_2 );
        assert( var_resmat == NULL );
        var_resmat = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 783;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_5;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 783;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_err == NULL );
        var_err = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_resmat );
        tmp_subscribed_name_1 = var_resmat;
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 784;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_last_row == NULL );
        var_last_row = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_assign_source_10;
        tmp_assign_source_10 = NUITKA_BOOL_FALSE;
        tmp_for_loop_1__break_indicator = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_xrange );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "xrange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 785;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_3 = tmp_mvar_value_6;
        tmp_args_element_name_6 = const_int_pos_1;
        CHECK_OBJECT( par_divmax );
        tmp_left_name_3 = par_divmax;
        tmp_right_name_3 = const_int_pos_1;
        tmp_args_element_name_7 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 785;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_13abb2d017c71c1bd430ba04d275038b->m_frame.f_lineno = 785;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 785;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 785;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_value_name_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT( tmp_value_name_1 );
        if ( tmp_assign_source_12 == NULL )
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


            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 785;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_12;
            Py_XDECREF( old );
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

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = exception_keeper_type_1;
        tmp_compexpr_right_1 = PyExc_StopIteration;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_1 );
            Py_XDECREF( exception_keeper_value_1 );
            Py_XDECREF( exception_keeper_tb_1 );

            exception_lineno = 785;
            type_description_1 = "oooooooooooooooooooooo";
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
            nuitka_bool tmp_assign_source_13;
            tmp_assign_source_13 = NUITKA_BOOL_TRUE;
            tmp_for_loop_1__break_indicator = tmp_assign_source_13;
        }
        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );
        goto loop_end_1;
        goto branch_end_2;
        branch_no_2:;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        branch_end_2:;
    }
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_14 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_14;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_n );
        tmp_left_name_4 = var_n;
        tmp_right_name_4 = const_int_pos_2;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 786;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_15 = tmp_left_name_4;
        var_n = tmp_assign_source_15;

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        CHECK_OBJECT( var_ordsum );
        tmp_left_name_5 = var_ordsum;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__difftrap );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__difftrap );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_difftrap" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 787;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_4 = tmp_mvar_value_7;
        CHECK_OBJECT( var_vfunc );
        tmp_args_element_name_8 = var_vfunc;
        CHECK_OBJECT( var_interval );
        tmp_args_element_name_9 = var_interval;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_10 = var_n;
        frame_13abb2d017c71c1bd430ba04d275038b->m_frame.f_lineno = 787;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_right_name_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 787;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 787;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_16 = tmp_left_name_5;
        var_ordsum = tmp_assign_source_16;

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_list_element_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_intrange );
        tmp_left_name_7 = var_intrange;
        CHECK_OBJECT( var_ordsum );
        tmp_right_name_6 = var_ordsum;
        tmp_left_name_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_6 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 788;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_n );
        tmp_right_name_7 = var_n;
        tmp_list_element_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_list_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 788;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_17 = PyList_New( 1 );
        PyList_SET_ITEM( tmp_assign_source_17, 0, tmp_list_element_4 );
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_xrange );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "xrange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 789;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_5 = tmp_mvar_value_8;
        CHECK_OBJECT( var_i );
        tmp_args_element_name_11 = var_i;
        frame_13abb2d017c71c1bd430ba04d275038b->m_frame.f_lineno = 789;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 789;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 789;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_18;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_1 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_19 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_19 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooo";
                exception_lineno = 789;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_20 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_20;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( var_row );
        tmp_source_name_2 = var_row;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 790;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__romberg_diff );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__romberg_diff );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_romberg_diff" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 790;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_name_7 = tmp_mvar_value_9;
        CHECK_OBJECT( var_last_row );
        tmp_subscribed_name_2 = var_last_row;
        CHECK_OBJECT( var_k );
        tmp_subscript_name_2 = var_k;
        tmp_args_element_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 790;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_row );
        tmp_subscribed_name_3 = var_row;
        CHECK_OBJECT( var_k );
        tmp_subscript_name_3 = var_k;
        tmp_args_element_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_13 );

            exception_lineno = 790;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_k );
        tmp_left_name_8 = var_k;
        tmp_right_name_8 = const_int_pos_1;
        tmp_args_element_name_15 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_args_element_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_13 );
            Py_DECREF( tmp_args_element_name_14 );

            exception_lineno = 790;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_13abb2d017c71c1bd430ba04d275038b->m_frame.f_lineno = 790;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_args_element_name_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_13 );
        Py_DECREF( tmp_args_element_name_14 );
        Py_DECREF( tmp_args_element_name_15 );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 790;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_13abb2d017c71c1bd430ba04d275038b->m_frame.f_lineno = 790;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 790;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 789;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( var_row );
        tmp_subscribed_name_4 = var_row;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_4 = var_i;
        tmp_assign_source_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 791;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_result;
            assert( old != NULL );
            var_result = tmp_assign_source_21;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT( var_last_row );
        tmp_subscribed_name_5 = var_last_row;
        CHECK_OBJECT( var_i );
        tmp_left_name_9 = var_i;
        tmp_right_name_9 = const_int_pos_1;
        tmp_subscript_name_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_subscript_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 792;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscript_name_5 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 792;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_lastresult;
            var_lastresult = tmp_assign_source_22;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_show );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_show );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 793;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_16;
            CHECK_OBJECT( var_resmat );
            tmp_called_instance_3 = var_resmat;
            CHECK_OBJECT( var_row );
            tmp_args_element_name_16 = var_row;
            frame_13abb2d017c71c1bd430ba04d275038b->m_frame.f_lineno = 794;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_append, call_args );
            }

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 794;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_3;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_8 != NULL );
        CHECK_OBJECT( var_result );
        tmp_left_name_10 = var_result;
        CHECK_OBJECT( var_lastresult );
        tmp_right_name_10 = var_lastresult;
        tmp_args_element_name_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_args_element_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 795;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_13abb2d017c71c1bd430ba04d275038b->m_frame.f_lineno = 795;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_args_element_name_17 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 795;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_err;
            assert( old != NULL );
            var_err = tmp_assign_source_23;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_18;
        CHECK_OBJECT( var_err );
        tmp_compexpr_left_2 = var_err;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_2 = par_tol;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 796;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
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
        CHECK_OBJECT( var_err );
        tmp_compexpr_left_3 = var_err;
        CHECK_OBJECT( par_rtol );
        tmp_left_name_11 = par_rtol;
        tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_9 != NULL );
        CHECK_OBJECT( var_result );
        tmp_args_element_name_18 = var_result;
        frame_13abb2d017c71c1bd430ba04d275038b->m_frame.f_lineno = 796;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_right_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 796;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 796;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 796;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_4 = tmp_or_left_value_2;
        or_end_2:;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        goto loop_end_1;
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( var_row );
        tmp_assign_source_24 = var_row;
        {
            PyObject *old = var_last_row;
            assert( old != NULL );
            var_last_row = tmp_assign_source_24;
            Py_INCREF( var_last_row );
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 785;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert( tmp_for_loop_1__break_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_for_loop_1__break_indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_mvar_value_11;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 800;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_3 = tmp_mvar_value_10;
            tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_warn );
            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 800;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_left_name_12 = const_str_digest_f4b73c03e9c7704d929603a3b17e538b;
            CHECK_OBJECT( par_divmax );
            tmp_tuple_element_2 = par_divmax;
            tmp_right_name_12 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_right_name_12, 0, tmp_tuple_element_2 );
            if ( var_err == NULL )
            {
                Py_DECREF( tmp_called_name_10 );
                Py_DECREF( tmp_right_name_12 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "err" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 801;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_tuple_element_2 = var_err;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_right_name_12, 1, tmp_tuple_element_2 );
            tmp_args_element_name_19 = BINARY_OPERATION_REMAINDER( tmp_left_name_12, tmp_right_name_12 );
            Py_DECREF( tmp_right_name_12 );
            if ( tmp_args_element_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 801;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_AccuracyWarning );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AccuracyWarning );
            }

            if ( tmp_mvar_value_11 == NULL )
            {
                Py_DECREF( tmp_called_name_10 );
                Py_DECREF( tmp_args_element_name_19 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AccuracyWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 802;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_args_element_name_20 = tmp_mvar_value_11;
            frame_13abb2d017c71c1bd430ba04d275038b->m_frame.f_lineno = 800;
            {
                PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20 };
                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_19 );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 800;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        branch_no_5:;
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

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_4;
        CHECK_OBJECT( par_show );
        tmp_truth_name_4 = CHECK_IF_TRUE( par_show );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 804;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_11;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_args_element_name_23;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__printresmat );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__printresmat );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_printresmat" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 805;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_11 = tmp_mvar_value_12;
            CHECK_OBJECT( var_vfunc );
            tmp_args_element_name_21 = var_vfunc;
            CHECK_OBJECT( var_interval );
            tmp_args_element_name_22 = var_interval;
            CHECK_OBJECT( var_resmat );
            tmp_args_element_name_23 = var_resmat;
            frame_13abb2d017c71c1bd430ba04d275038b->m_frame.f_lineno = 805;
            {
                PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23 };
                tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
            }

            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 805;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        branch_no_6:;
    }
    if ( var_result == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 806;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13abb2d017c71c1bd430ba04d275038b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_13abb2d017c71c1bd430ba04d275038b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13abb2d017c71c1bd430ba04d275038b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_13abb2d017c71c1bd430ba04d275038b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_13abb2d017c71c1bd430ba04d275038b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_13abb2d017c71c1bd430ba04d275038b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_13abb2d017c71c1bd430ba04d275038b,
        type_description_1,
        par_function,
        par_a,
        par_b,
        par_args,
        par_tol,
        par_rtol,
        par_show,
        par_divmax,
        par_vec_func,
        var_vfunc,
        var_n,
        var_interval,
        var_intrange,
        var_ordsum,
        var_result,
        var_resmat,
        var_err,
        var_last_row,
        var_i,
        var_row,
        var_k,
        var_lastresult
    );


    // Release cached frame.
    if ( frame_13abb2d017c71c1bd430ba04d275038b == cache_frame_13abb2d017c71c1bd430ba04d275038b )
    {
        Py_DECREF( frame_13abb2d017c71c1bd430ba04d275038b );
    }
    cache_frame_13abb2d017c71c1bd430ba04d275038b = NULL;

    assertFrameObject( frame_13abb2d017c71c1bd430ba04d275038b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_14_romberg );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_function );
    Py_DECREF( par_function );
    par_function = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_rtol );
    Py_DECREF( par_rtol );
    par_rtol = NULL;

    CHECK_OBJECT( (PyObject *)par_show );
    Py_DECREF( par_show );
    par_show = NULL;

    CHECK_OBJECT( (PyObject *)par_divmax );
    Py_DECREF( par_divmax );
    par_divmax = NULL;

    CHECK_OBJECT( (PyObject *)par_vec_func );
    Py_DECREF( par_vec_func );
    par_vec_func = NULL;

    CHECK_OBJECT( (PyObject *)var_vfunc );
    Py_DECREF( var_vfunc );
    var_vfunc = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_interval );
    Py_DECREF( var_interval );
    var_interval = NULL;

    CHECK_OBJECT( (PyObject *)var_intrange );
    Py_DECREF( var_intrange );
    var_intrange = NULL;

    Py_XDECREF( var_ordsum );
    var_ordsum = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    CHECK_OBJECT( (PyObject *)var_resmat );
    Py_DECREF( var_resmat );
    var_resmat = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    CHECK_OBJECT( (PyObject *)var_last_row );
    Py_DECREF( var_last_row );
    var_last_row = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_lastresult );
    var_lastresult = NULL;

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

    CHECK_OBJECT( (PyObject *)par_function );
    Py_DECREF( par_function );
    par_function = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_rtol );
    Py_DECREF( par_rtol );
    par_rtol = NULL;

    CHECK_OBJECT( (PyObject *)par_show );
    Py_DECREF( par_show );
    par_show = NULL;

    CHECK_OBJECT( (PyObject *)par_divmax );
    Py_DECREF( par_divmax );
    par_divmax = NULL;

    CHECK_OBJECT( (PyObject *)par_vec_func );
    Py_DECREF( par_vec_func );
    par_vec_func = NULL;

    Py_XDECREF( var_vfunc );
    var_vfunc = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_interval );
    var_interval = NULL;

    Py_XDECREF( var_intrange );
    var_intrange = NULL;

    Py_XDECREF( var_ordsum );
    var_ordsum = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_resmat );
    var_resmat = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_last_row );
    var_last_row = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_lastresult );
    var_lastresult = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_14_romberg );
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


static PyObject *impl_scipy$integrate$quadrature$$$function_15_newton_cotes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rn = python_pars[ 0 ];
    PyObject *par_equal = python_pars[ 1 ];
    PyObject *var_N = NULL;
    PyObject *var_na = NULL;
    PyObject *var_da = NULL;
    PyObject *var_vi = NULL;
    PyObject *var_nb = NULL;
    PyObject *var_db = NULL;
    PyObject *var_an = NULL;
    PyObject *var_yi = NULL;
    PyObject *var_ti = NULL;
    PyObject *var_nvec = NULL;
    PyObject *var_C = NULL;
    PyObject *var_Cinv = NULL;
    PyObject *var_i = NULL;
    PyObject *var_vec = NULL;
    PyObject *var_ai = NULL;
    PyObject *var_BN = NULL;
    PyObject *var_power = NULL;
    PyObject *var_p1 = NULL;
    PyObject *var_fac = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_de86da9378010ad46a2a7a4ef1779960;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_de86da9378010ad46a2a7a4ef1779960 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_de86da9378010ad46a2a7a4ef1779960, codeobj_de86da9378010ad46a2a7a4ef1779960, module_scipy$integrate$quadrature, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_de86da9378010ad46a2a7a4ef1779960 = cache_frame_de86da9378010ad46a2a7a4ef1779960;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_de86da9378010ad46a2a7a4ef1779960 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_de86da9378010ad46a2a7a4ef1779960 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_rn );
        tmp_len_arg_1 = par_rn;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 935;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_1 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        assert( !(tmp_assign_source_1 == NULL) );
        assert( var_N == NULL );
        var_N = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_equal );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_equal );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 936;
            type_description_1 = "ooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 937;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_arange );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 937;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_N );
            tmp_left_name_2 = var_N;
            tmp_right_name_2 = const_int_pos_1;
            tmp_args_element_name_1 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_2, tmp_right_name_2 );
            assert( !(tmp_args_element_name_1 == NULL) );
            frame_de86da9378010ad46a2a7a4ef1779960->m_frame.f_lineno = 937;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 937;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = par_rn;
                assert( old != NULL );
                par_rn = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            int tmp_truth_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 938;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_all );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 938;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 938;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_rn );
            tmp_args_element_name_3 = par_rn;
            frame_de86da9378010ad46a2a7a4ef1779960->m_frame.f_lineno = 938;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_diff, call_args );
            }

            if ( tmp_compexpr_left_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 938;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_compexpr_right_1 = const_int_pos_1;
            tmp_args_element_name_2 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            Py_DECREF( tmp_compexpr_left_1 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 938;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            frame_de86da9378010ad46a2a7a4ef1779960->m_frame.f_lineno = 938;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 938;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 938;
                type_description_1 = "ooooooooooooooooooooo";
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
            {
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = const_int_pos_1;
                {
                    PyObject *old = par_equal;
                    assert( old != NULL );
                    par_equal = tmp_assign_source_3;
                    Py_INCREF( par_equal );
                    Py_DECREF( old );
                }

            }
            branch_no_2:;
        }
        branch_end_1:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_de86da9378010ad46a2a7a4ef1779960, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_de86da9378010ad46a2a7a4ef1779960, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 940;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
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
            CHECK_OBJECT( par_rn );
            tmp_assign_source_4 = par_rn;
            {
                PyObject *old = var_N;
                var_N = tmp_assign_source_4;
                Py_INCREF( var_N );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 942;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_3;
            }

            tmp_source_name_3 = tmp_mvar_value_4;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_arange );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 942;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( var_N );
            tmp_left_name_3 = var_N;
            tmp_right_name_3 = const_int_pos_1;
            tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 942;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_3;
            }
            frame_de86da9378010ad46a2a7a4ef1779960->m_frame.f_lineno = 942;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 942;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = par_rn;
                assert( old != NULL );
                par_rn = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = const_int_pos_1;
            {
                PyObject *old = par_equal;
                assert( old != NULL );
                par_equal = tmp_assign_source_6;
                Py_INCREF( par_equal );
                Py_DECREF( old );
            }

        }
        goto branch_end_3;
        branch_no_3:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 934;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_de86da9378010ad46a2a7a4ef1779960->m_frame) frame_de86da9378010ad46a2a7a4ef1779960->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_3;
        branch_end_3:;
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
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_15_newton_cotes );
    return NULL;
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_mvar_value_5;
        if ( par_equal == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "equal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 945;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE( par_equal );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 945;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        if ( var_N == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "N" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 945;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = var_N;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__builtincoeffs );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__builtincoeffs );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_builtincoeffs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 945;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_3 = tmp_mvar_value_5;
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 945;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__builtincoeffs );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__builtincoeffs );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_builtincoeffs" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 946;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_subscribed_name_1 = tmp_mvar_value_6;
            if ( var_N == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "N" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 946;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_subscript_name_1 = var_N;
            tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 946;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 946;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_4;
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
            tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0, 5 );
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


                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 946;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1, 5 );
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
                exception_lineno = 946;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_3, 2, 5 );
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
                exception_lineno = 946;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_3 == NULL );
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_4, 3, 5 );
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


                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 946;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_4 == NULL );
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_5, 4, 5 );
            if ( tmp_assign_source_12 == NULL )
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
                exception_lineno = 946;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_5 == NULL );
            tmp_tuple_unpack_1__element_5 = tmp_assign_source_12;
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
                        exception_lineno = 946;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 946;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

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

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_4 );
        tmp_tuple_unpack_1__element_4 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_5 );
        tmp_tuple_unpack_1__element_5 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
            assert( var_na == NULL );
            Py_INCREF( tmp_assign_source_13 );
            var_na = tmp_assign_source_13;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
            assert( var_da == NULL );
            Py_INCREF( tmp_assign_source_14 );
            var_da = tmp_assign_source_14;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
            tmp_assign_source_15 = tmp_tuple_unpack_1__element_3;
            assert( var_vi == NULL );
            Py_INCREF( tmp_assign_source_15 );
            var_vi = tmp_assign_source_15;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
            tmp_assign_source_16 = tmp_tuple_unpack_1__element_4;
            assert( var_nb == NULL );
            Py_INCREF( tmp_assign_source_16 );
            var_nb = tmp_assign_source_16;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_4 );
        tmp_tuple_unpack_1__element_4 = NULL;

        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_5 );
            tmp_assign_source_17 = tmp_tuple_unpack_1__element_5;
            assert( var_db == NULL );
            Py_INCREF( tmp_assign_source_17 );
            var_db = tmp_assign_source_17;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_5 );
        tmp_tuple_unpack_1__element_5 = NULL;

        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_left_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( var_na );
            tmp_left_name_5 = var_na;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 947;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_7;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_array );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 947;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_vi );
            tmp_tuple_element_1 = var_vi;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
            frame_de86da9378010ad46a2a7a4ef1779960->m_frame.f_lineno = 947;
            tmp_right_name_4 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 947;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 947;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_da );
            tmp_right_name_5 = var_da;
            tmp_assign_source_18 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_4 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 947;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_an == NULL );
            var_an = tmp_assign_source_18;
        }
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_left_name_6;
            PyObject *tmp_float_arg_1;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( var_an );
            tmp_tuple_element_2 = var_an;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_nb );
            tmp_float_arg_1 = var_nb;
            tmp_left_name_6 = TO_FLOAT( tmp_float_arg_1 );
            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 948;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_db );
            tmp_right_name_6 = var_db;
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_6 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 948;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
            goto frame_return_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        if ( par_rn == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rn" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 950;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_2 = par_rn;
        tmp_subscript_name_2 = const_int_0;
        tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 950;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 950;
            type_description_1 = "ooooooooooooooooooooo";
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
        if ( par_rn == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rn" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 950;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_3 = par_rn;
        tmp_subscript_name_3 = const_int_neg_1;
        tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, -1 );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 950;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_N == NULL )
        {
            Py_DECREF( tmp_compexpr_left_5 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "N" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 950;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_5 = var_N;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 950;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_f6f58a114455f77592e6c9e15eaefea3;
            frame_de86da9378010ad46a2a7a4ef1779960->m_frame.f_lineno = 951;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 951;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_float_arg_2;
        if ( par_rn == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rn" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 953;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_7 = par_rn;
        if ( var_N == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "N" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 953;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_float_arg_2 = var_N;
        tmp_right_name_7 = TO_FLOAT( tmp_float_arg_2 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 953;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 953;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_yi == NULL );
        var_yi = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        tmp_left_name_9 = const_int_pos_2;
        CHECK_OBJECT( var_yi );
        tmp_right_name_8 = var_yi;
        tmp_left_name_8 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_9, tmp_right_name_8 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 954;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_9 = const_int_pos_1;
        tmp_assign_source_20 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_8, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_8 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 954;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ti == NULL );
        var_ti = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 955;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_8;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_arange );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 955;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_N == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "N" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 955;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_10 = var_N;
        tmp_right_name_10 = const_int_pos_1;
        tmp_args_element_name_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 955;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_de86da9378010ad46a2a7a4ef1779960->m_frame.f_lineno = 955;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 955;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nvec == NULL );
        var_nvec = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_9;
        CHECK_OBJECT( var_ti );
        tmp_left_name_11 = var_ti;
        CHECK_OBJECT( var_nvec );
        tmp_subscribed_name_4 = var_nvec;
        tmp_tuple_element_3 = const_slice_none_none_none;
        tmp_subscript_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_subscript_name_4, 0, tmp_tuple_element_3 );
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_subscript_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 956;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_9;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_newaxis );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscript_name_4 );

            exception_lineno = 956;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_subscript_name_4, 1, tmp_tuple_element_3 );
        tmp_right_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 956;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = POWER_OPERATION( tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 956;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_C == NULL );
        var_C = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 957;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_10;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_linalg );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 957;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_C );
        tmp_args_element_name_6 = var_C;
        frame_de86da9378010ad46a2a7a4ef1779960->m_frame.f_lineno = 957;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_23 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_inv, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 957;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Cinv == NULL );
        var_Cinv = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = const_xrange_0_2;
        tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_2 );
        assert( !(tmp_assign_source_24 == NULL) );
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_24;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_25 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_25 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 959;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_25;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_26 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_26;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_12;
        PyObject *tmp_right_name_13;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_left_name_13 = const_int_pos_2;
        CHECK_OBJECT( var_Cinv );
        tmp_right_name_12 = var_Cinv;
        tmp_left_name_12 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_13, tmp_right_name_12 );
        if ( tmp_left_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 960;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_Cinv );
        tmp_called_instance_4 = var_Cinv;
        CHECK_OBJECT( var_C );
        tmp_args_element_name_7 = var_C;
        frame_de86da9378010ad46a2a7a4ef1779960->m_frame.f_lineno = 960;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_called_instance_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_dot, call_args );
        }

        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_12 );

            exception_lineno = 960;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_Cinv );
        tmp_args_element_name_8 = var_Cinv;
        frame_de86da9378010ad46a2a7a4ef1779960->m_frame.f_lineno = 960;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_right_name_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_12 );

            exception_lineno = 960;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_27 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_12 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 960;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_Cinv;
            assert( old != NULL );
            var_Cinv = tmp_assign_source_27;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 959;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
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
        PyObject *tmp_assign_source_28;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_right_name_15;
        tmp_left_name_14 = const_float_2_0;
        CHECK_OBJECT( var_nvec );
        tmp_subscribed_name_5 = var_nvec;
        tmp_subscript_name_5 = const_slice_none_none_int_pos_2;
        tmp_left_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 961;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_15 = const_int_pos_1;
        tmp_right_name_14 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_15 );
        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 961;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 961;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_vec == NULL );
        var_vec = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_left_name_16;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_right_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        CHECK_OBJECT( var_Cinv );
        tmp_subscribed_name_6 = var_Cinv;
        tmp_subscript_name_6 = const_tuple_slice_none_none_none_slice_none_none_int_pos_2_tuple;
        tmp_called_instance_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 962;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_vec );
        tmp_args_element_name_9 = var_vec;
        frame_de86da9378010ad46a2a7a4ef1779960->m_frame.f_lineno = 962;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_left_name_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_left_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 962;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_N == NULL )
        {
            Py_DECREF( tmp_left_name_16 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "N" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 962;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_17 = var_N;
        tmp_right_name_17 = const_float_2_0;
        tmp_right_name_16 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT( tmp_left_name_17, tmp_right_name_17 );
        if ( tmp_right_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_16 );

            exception_lineno = 962;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_16 );
        Py_DECREF( tmp_left_name_16 );
        Py_DECREF( tmp_right_name_16 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 962;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ai == NULL );
        var_ai = tmp_assign_source_29;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_18;
        int tmp_truth_name_4;
        if ( var_N == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "N" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 964;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_18 = var_N;
        tmp_right_name_18 = const_int_pos_2;
        tmp_compexpr_left_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_18, tmp_right_name_18 );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 964;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 964;
            type_description_1 = "ooooooooooooooooooooo";
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
        if ( par_equal == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "equal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 964;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE( par_equal );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 964;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_6 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_assign_source_30;
            PyObject *tmp_left_name_19;
            PyObject *tmp_right_name_19;
            PyObject *tmp_left_name_20;
            PyObject *tmp_right_name_20;
            if ( var_N == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "N" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 965;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_19 = var_N;
            if ( var_N == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "N" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 965;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_20 = var_N;
            tmp_right_name_20 = const_float_3_0;
            tmp_right_name_19 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_20, tmp_right_name_20 );
            if ( tmp_right_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 965;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_30 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_19 );
            Py_DECREF( tmp_right_name_19 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 965;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_BN == NULL );
            var_BN = tmp_assign_source_30;
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_left_name_21;
            PyObject *tmp_right_name_21;
            if ( var_N == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "N" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 966;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_21 = var_N;
            tmp_right_name_21 = const_int_pos_2;
            tmp_assign_source_31 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_21, tmp_right_name_21 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 966;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_power == NULL );
            var_power = tmp_assign_source_31;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_left_name_22;
            PyObject *tmp_right_name_22;
            PyObject *tmp_left_name_23;
            PyObject *tmp_right_name_23;
            if ( var_N == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "N" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 968;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_22 = var_N;
            if ( var_N == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "N" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 968;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_23 = var_N;
            tmp_right_name_23 = const_float_2_0;
            tmp_right_name_22 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_23, tmp_right_name_23 );
            if ( tmp_right_name_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 968;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_32 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_22, tmp_right_name_22 );
            Py_DECREF( tmp_right_name_22 );
            if ( tmp_assign_source_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 968;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_BN == NULL );
            var_BN = tmp_assign_source_32;
        }
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_left_name_24;
            PyObject *tmp_right_name_24;
            if ( var_N == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "N" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 969;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_24 = var_N;
            tmp_right_name_24 = const_int_pos_1;
            tmp_assign_source_33 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_24, tmp_right_name_24 );
            if ( tmp_assign_source_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 969;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_power == NULL );
            var_power = tmp_assign_source_33;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_left_name_25;
        PyObject *tmp_right_name_25;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_left_name_26;
        PyObject *tmp_right_name_26;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT( var_BN );
        tmp_left_name_25 = var_BN;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 971;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_11;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dot );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 971;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_yi );
        tmp_left_name_26 = var_yi;
        CHECK_OBJECT( var_power );
        tmp_right_name_26 = var_power;
        tmp_args_element_name_10 = POWER_OPERATION( tmp_left_name_26, tmp_right_name_26 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 971;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ai );
        tmp_args_element_name_11 = var_ai;
        frame_de86da9378010ad46a2a7a4ef1779960->m_frame.f_lineno = 971;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_right_name_25 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_right_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 971;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_34 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_25, tmp_right_name_25 );
        Py_DECREF( tmp_right_name_25 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 971;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_BN;
            assert( old != NULL );
            var_BN = tmp_assign_source_34;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_left_name_27;
        PyObject *tmp_right_name_27;
        CHECK_OBJECT( var_power );
        tmp_left_name_27 = var_power;
        tmp_right_name_27 = const_int_pos_1;
        tmp_assign_source_35 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_27, tmp_right_name_27 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 972;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_p1 == NULL );
        var_p1 = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_left_name_28;
        PyObject *tmp_left_name_29;
        PyObject *tmp_right_name_28;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_right_name_29;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_13;
        CHECK_OBJECT( var_power );
        tmp_left_name_29 = var_power;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_math );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "math" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 973;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_12;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_log );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 973;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_N == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "N" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 973;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_12 = var_N;
        frame_de86da9378010ad46a2a7a4ef1779960->m_frame.f_lineno = 973;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_right_name_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        if ( tmp_right_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 973;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_28 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_29, tmp_right_name_28 );
        Py_DECREF( tmp_right_name_28 );
        if ( tmp_left_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 973;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_gammaln );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gammaln );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_left_name_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gammaln" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 973;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_13;
        CHECK_OBJECT( var_p1 );
        tmp_args_element_name_13 = var_p1;
        frame_de86da9378010ad46a2a7a4ef1779960->m_frame.f_lineno = 973;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_right_name_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        if ( tmp_right_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_28 );

            exception_lineno = 973;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_36 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_28, tmp_right_name_29 );
        Py_DECREF( tmp_left_name_28 );
        Py_DECREF( tmp_right_name_29 );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 973;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_fac == NULL );
        var_fac = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_math );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "math" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 974;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_14;
        CHECK_OBJECT( var_fac );
        tmp_args_element_name_14 = var_fac;
        frame_de86da9378010ad46a2a7a4ef1779960->m_frame.f_lineno = 974;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_37 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_exp, call_args );
        }

        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 974;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_fac;
            assert( old != NULL );
            var_fac = tmp_assign_source_37;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_left_name_30;
        PyObject *tmp_right_name_30;
        CHECK_OBJECT( var_ai );
        tmp_tuple_element_4 = var_ai;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_BN );
        tmp_left_name_30 = var_BN;
        CHECK_OBJECT( var_fac );
        tmp_right_name_30 = var_fac;
        tmp_tuple_element_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_30, tmp_right_name_30 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 975;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de86da9378010ad46a2a7a4ef1779960 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_de86da9378010ad46a2a7a4ef1779960 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de86da9378010ad46a2a7a4ef1779960 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_de86da9378010ad46a2a7a4ef1779960, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_de86da9378010ad46a2a7a4ef1779960->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_de86da9378010ad46a2a7a4ef1779960, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_de86da9378010ad46a2a7a4ef1779960,
        type_description_1,
        par_rn,
        par_equal,
        var_N,
        var_na,
        var_da,
        var_vi,
        var_nb,
        var_db,
        var_an,
        var_yi,
        var_ti,
        var_nvec,
        var_C,
        var_Cinv,
        var_i,
        var_vec,
        var_ai,
        var_BN,
        var_power,
        var_p1,
        var_fac
    );


    // Release cached frame.
    if ( frame_de86da9378010ad46a2a7a4ef1779960 == cache_frame_de86da9378010ad46a2a7a4ef1779960 )
    {
        Py_DECREF( frame_de86da9378010ad46a2a7a4ef1779960 );
    }
    cache_frame_de86da9378010ad46a2a7a4ef1779960 = NULL;

    assertFrameObject( frame_de86da9378010ad46a2a7a4ef1779960 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_15_newton_cotes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_rn );
    par_rn = NULL;

    Py_XDECREF( par_equal );
    par_equal = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_na );
    var_na = NULL;

    Py_XDECREF( var_da );
    var_da = NULL;

    Py_XDECREF( var_vi );
    var_vi = NULL;

    Py_XDECREF( var_nb );
    var_nb = NULL;

    Py_XDECREF( var_db );
    var_db = NULL;

    Py_XDECREF( var_an );
    var_an = NULL;

    Py_XDECREF( var_yi );
    var_yi = NULL;

    Py_XDECREF( var_ti );
    var_ti = NULL;

    Py_XDECREF( var_nvec );
    var_nvec = NULL;

    Py_XDECREF( var_C );
    var_C = NULL;

    Py_XDECREF( var_Cinv );
    var_Cinv = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_vec );
    var_vec = NULL;

    Py_XDECREF( var_ai );
    var_ai = NULL;

    Py_XDECREF( var_BN );
    var_BN = NULL;

    Py_XDECREF( var_power );
    var_power = NULL;

    Py_XDECREF( var_p1 );
    var_p1 = NULL;

    Py_XDECREF( var_fac );
    var_fac = NULL;

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

    Py_XDECREF( par_rn );
    par_rn = NULL;

    Py_XDECREF( par_equal );
    par_equal = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_na );
    var_na = NULL;

    Py_XDECREF( var_da );
    var_da = NULL;

    Py_XDECREF( var_vi );
    var_vi = NULL;

    Py_XDECREF( var_nb );
    var_nb = NULL;

    Py_XDECREF( var_db );
    var_db = NULL;

    Py_XDECREF( var_an );
    var_an = NULL;

    Py_XDECREF( var_yi );
    var_yi = NULL;

    Py_XDECREF( var_ti );
    var_ti = NULL;

    Py_XDECREF( var_nvec );
    var_nvec = NULL;

    Py_XDECREF( var_C );
    var_C = NULL;

    Py_XDECREF( var_Cinv );
    var_Cinv = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_vec );
    var_vec = NULL;

    Py_XDECREF( var_ai );
    var_ai = NULL;

    Py_XDECREF( var_BN );
    var_BN = NULL;

    Py_XDECREF( var_power );
    var_power = NULL;

    Py_XDECREF( var_p1 );
    var_p1 = NULL;

    Py_XDECREF( var_fac );
    var_fac = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature$$$function_15_newton_cotes );
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



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_10_romb( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_10_romb,
        const_str_plain_romb,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5a409b5f3ef8104b86da3271e00e780c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_7ecdb06e81ef8341b46741f934783c46,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_11__difftrap(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_11__difftrap,
        const_str_plain__difftrap,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0cb55818daf7f169e102a50a065da745,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_08f1824039eff941c96a4872b353052d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_12__romberg_diff(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_12__romberg_diff,
        const_str_plain__romberg_diff,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0452387954d6582f3c08a95887221bc9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_216dbc19b5a25ff03c644f00cdd348ce,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_13__printresmat(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_13__printresmat,
        const_str_plain__printresmat,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_87839c40b068e02c2ac0a4820482b0c6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_14_romberg( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_14_romberg,
        const_str_plain_romberg,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_13abb2d017c71c1bd430ba04d275038b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_92b7e6ede236e22c4d8101f0b8aca038,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_15_newton_cotes( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_15_newton_cotes,
        const_str_plain_newton_cotes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_de86da9378010ad46a2a7a4ef1779960,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_cf538e2ebc3b8d2b232a3e41e7b9a98e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_1__copy_func(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_1__copy_func,
        const_str_plain__copy_func,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6c2a4784df6b03c3a9bdb5947acc75ca,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_8fc4cbabe71e76531a878ca953ff013e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_2__cached_roots_legendre(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_2__cached_roots_legendre,
        const_str_plain__cached_roots_legendre,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_001c9bdd51cbca5038916fa4f989b549,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_c28aa5192b2c55d2c031a997003d6691,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_3_fixed_quad( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_3_fixed_quad,
        const_str_plain_fixed_quad,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2921172795333748b976571bca04795b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_2226ba70f074e45f2e28b1e4cec5bac4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_4_vectorize1( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_4_vectorize1,
        const_str_plain_vectorize1,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_87eccbfce1e65bd77f2c05d88b40e645,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_9e868f12b276703354fba6b4ec9f12c3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_4_vectorize1$$$function_1_vfunc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_4_vectorize1$$$function_1_vfunc,
        const_str_plain_vfunc,
#if PYTHON_VERSION >= 300
        const_str_digest_5ad398a52239f38a0428f845379c7a60,
#endif
        codeobj_ce22288cfaf2389171ffab682acedd8d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_4_vectorize1$$$function_2_vfunc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_4_vectorize1$$$function_2_vfunc,
        const_str_plain_vfunc,
#if PYTHON_VERSION >= 300
        const_str_digest_5ad398a52239f38a0428f845379c7a60,
#endif
        codeobj_154a5a946253abdbfbb0ecde3b9361ac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_5_quadrature( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_5_quadrature,
        const_str_plain_quadrature,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2f7f0525054ce1fed334081719f34901,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_c12878d1e530c96345d751f2cd0b14b4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_6_tupleset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_6_tupleset,
        const_str_plain_tupleset,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f868df1b50284caa53fe52dca8f43633,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_7_cumtrapz( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_7_cumtrapz,
        const_str_plain_cumtrapz,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f464b5950f492b9f0e16fcc973b14513,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_46ac34b758178710f1a10e115b563949,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_8__basic_simps(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_8__basic_simps,
        const_str_plain__basic_simps,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_be5a46b25a9f285cba984c875bb00e8c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$quadrature$$$function_9_simps( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$quadrature$$$function_9_simps,
        const_str_plain_simps,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7652565408dcb3cc6897e5eb7ef87be2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_623c8c62d0332bbb2f6448d90cfb4d61,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$integrate$quadrature =
{
    PyModuleDef_HEAD_INIT,
    "scipy.integrate.quadrature",
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

MOD_INIT_DECL( scipy$integrate$quadrature )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$integrate$quadrature );
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
    puts("scipy.integrate.quadrature: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.integrate.quadrature: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.integrate.quadrature: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$integrate$quadrature" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$integrate$quadrature = Py_InitModule4(
        "scipy.integrate.quadrature",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$integrate$quadrature = PyModule_Create( &mdef_scipy$integrate$quadrature );
#endif

    moduledict_scipy$integrate$quadrature = MODULE_DICT( module_scipy$integrate$quadrature );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$integrate$quadrature,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$integrate$quadrature,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$integrate$quadrature,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$integrate$quadrature,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$integrate$quadrature );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_dceadfd43b3174028d0eb2eab9d30453, module_scipy$integrate$quadrature );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_27b32b0ced6095c360a638ef2c10a7a9;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_scipy$integrate$quadrature_36 = NULL;
    PyObject *tmp_dictset_value;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_27b32b0ced6095c360a638ef2c10a7a9 = MAKE_MODULE_FRAME( codeobj_27b32b0ced6095c360a638ef2c10a7a9, module_scipy$integrate$quadrature );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_27b32b0ced6095c360a638ef2c10a7a9 );
    assert( Py_REFCNT( frame_27b32b0ced6095c360a638ef2c10a7a9 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_27b32b0ced6095c360a638ef2c10a7a9->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_name_name_1 = const_str_plain_functools;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$integrate$quadrature;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_27b32b0ced6095c360a638ef2c10a7a9->m_frame.f_lineno = 3;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$integrate$quadrature;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_27b32b0ced6095c360a638ef2c10a7a9->m_frame.f_lineno = 4;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_math;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$integrate$quadrature;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_27b32b0ced6095c360a638ef2c10a7a9->m_frame.f_lineno = 5;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        assert( !(tmp_assign_source_10 == NULL) );
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_math, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_sys;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$integrate$quadrature;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_27b32b0ced6095c360a638ef2c10a7a9->m_frame.f_lineno = 6;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        assert( !(tmp_assign_source_11 == NULL) );
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_types;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$integrate$quadrature;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = const_int_0;
        frame_27b32b0ced6095c360a638ef2c10a7a9->m_frame.f_lineno = 7;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_warnings;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$integrate$quadrature;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = const_int_0;
        frame_27b32b0ced6095c360a638ef2c10a7a9->m_frame.f_lineno = 8;
        tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_numpy;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$integrate$quadrature;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_trapz_tuple;
        tmp_level_name_7 = const_int_0;
        frame_27b32b0ced6095c360a638ef2c10a7a9->m_frame.f_lineno = 12;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_trapz );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_trapz, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_digest_9de53a552350350635235a4e21f12d7a;
        tmp_globals_name_8 = (PyObject *)moduledict_scipy$integrate$quadrature;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_roots_legendre_tuple;
        tmp_level_name_8 = const_int_0;
        frame_27b32b0ced6095c360a638ef2c10a7a9->m_frame.f_lineno = 13;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_roots_legendre );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_roots_legendre, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_digest_9de53a552350350635235a4e21f12d7a;
        tmp_globals_name_9 = (PyObject *)moduledict_scipy$integrate$quadrature;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_gammaln_tuple;
        tmp_level_name_9 = const_int_0;
        frame_27b32b0ced6095c360a638ef2c10a7a9->m_frame.f_lineno = 14;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_gammaln );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_gammaln, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_digest_c88389693d9d476899c1c6e170568469;
        tmp_globals_name_10 = (PyObject *)moduledict_scipy$integrate$quadrature;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_xrange_tuple;
        tmp_level_name_10 = const_int_0;
        frame_27b32b0ced6095c360a638ef2c10a7a9->m_frame.f_lineno = 15;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_xrange );
        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = LIST_COPY( const_list_abd4608d2db02e99c3dfbf05942624db_list );
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_1__copy_func(  );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__copy_func, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__copy_func );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__copy_func );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_called_name_1 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_trapz );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trapz );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "trapz" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_4;
        frame_27b32b0ced6095c360a638ef2c10a7a9->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_trapz, tmp_assign_source_20 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_5;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_flags );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_optimize );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

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
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_assattr_target_3;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_trapz );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trapz );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "trapz" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 33;

                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_6;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___doc__ );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;

                goto frame_exception_exit_1;
            }
            frame_27b32b0ced6095c360a638ef2c10a7a9->m_frame.f_lineno = 33;
            tmp_assattr_name_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_602aafeb4e1ff1c7b44220127bb614ff_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;

                goto frame_exception_exit_1;
            }
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_trapz );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trapz );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_assattr_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "trapz" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 33;

                goto frame_exception_exit_1;
            }

            tmp_assattr_target_3 = tmp_mvar_value_7;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain___doc__, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;

                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_Warning );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 36;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_8;
        tmp_assign_source_21 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_21, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = const_str_plain_metaclass;
        tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_subscribed_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_type_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_2;
        }
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_23 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_2;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_2;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_4 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_4, const_str_plain___prepare__ );
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_5 = tmp_class_creation_1__metaclass;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_2;
            }
            tmp_tuple_element_2 = const_str_plain_AccuracyWarning;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_27b32b0ced6095c360a638ef2c10a7a9->m_frame.f_lineno = 36;
            tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_24;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_6 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_6, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_2;
            }
            tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_7;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 36;

                    goto try_except_handler_2;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_7 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_7 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_7 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 36;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 36;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 36;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_25;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$integrate$quadrature_36 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_dceadfd43b3174028d0eb2eab9d30453;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$quadrature_36, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_AccuracyWarning;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$quadrature_36, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_4;
        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_AccuracyWarning;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_scipy$integrate$quadrature_36;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_27b32b0ced6095c360a638ef2c10a7a9->m_frame.f_lineno = 36;
            tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_26 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_26 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_scipy$integrate$quadrature_36 );
        locals_scipy$integrate$quadrature_36 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_scipy$integrate$quadrature_36 );
        locals_scipy$integrate$quadrature_36 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$integrate$quadrature );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 36;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_AccuracyWarning, tmp_assign_source_26 );
    }
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_2__cached_roots_legendre(  );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__cached_roots_legendre, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_mvar_value_9;
        tmp_assattr_name_4 = PyDict_New();
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__cached_roots_legendre );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cached_roots_legendre );
        }

        CHECK_OBJECT( tmp_mvar_value_9 );
        tmp_assattr_target_4 = tmp_mvar_value_9;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_cache, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_27b32b0ced6095c360a638ef2c10a7a9 );
#endif
    popFrameStack();

    assertFrameObject( frame_27b32b0ced6095c360a638ef2c10a7a9 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_27b32b0ced6095c360a638ef2c10a7a9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_27b32b0ced6095c360a638ef2c10a7a9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_27b32b0ced6095c360a638ef2c10a7a9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_27b32b0ced6095c360a638ef2c10a7a9, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_tuple_empty_int_pos_5_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_29 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_3_fixed_quad( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_fixed_quad, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_tuple_empty_false_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_30 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_4_vectorize1( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_vectorize1, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_c61e3331c604dfee164016e29c4809c2_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_31 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_5_quadrature( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_quadrature, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_6_tupleset(  );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_none_float_1_0_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_33 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_7_cumtrapz( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_cumtrapz, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_8__basic_simps(  );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__basic_simps, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = const_tuple_none_int_pos_1_int_neg_1_str_plain_avg_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_assign_source_35 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_9_simps( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_simps, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = const_tuple_float_1_0_int_neg_1_false_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_assign_source_36 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_10_romb( tmp_defaults_6 );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_romb, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_11__difftrap(  );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__difftrap, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_12__romberg_diff(  );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__romberg_diff, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_13__printresmat(  );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__printresmat, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_defaults_7;
        tmp_defaults_7 = const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple;
        Py_INCREF( tmp_defaults_7 );
        tmp_assign_source_40 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_14_romberg( tmp_defaults_7 );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_romberg, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = DEEP_COPY( const_dict_781521607e0786098475f1bcd1891db7 );
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__builtincoeffs, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_defaults_8;
        tmp_defaults_8 = const_tuple_int_0_tuple;
        Py_INCREF( tmp_defaults_8 );
        tmp_assign_source_42 = MAKE_FUNCTION_scipy$integrate$quadrature$$$function_15_newton_cotes( tmp_defaults_8 );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_newton_cotes, tmp_assign_source_42 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$integrate$quadrature );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
