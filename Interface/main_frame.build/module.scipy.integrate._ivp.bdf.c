/* Generated code for Python module 'scipy.integrate._ivp.bdf'
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

/* The "_module_scipy$integrate$_ivp$bdf" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$integrate$_ivp$bdf;
PyDictObject *moduledict_scipy$integrate$_ivp$bdf;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_group_columns;
extern PyObject *const_float_minus_0_1111111111111111;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_true_none_tuple;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain_n_equal_steps;
extern PyObject *const_str_plain_NEWTON_MAXITER;
extern PyObject *const_str_plain_isfinite;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_select_initial_step;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_gamma;
extern PyObject *const_float_0_001;
extern PyObject *const_str_plain_inf;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain_D;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_h;
extern PyObject *const_str_plain__step_impl;
extern PyObject *const_str_plain_solve;
extern PyObject *const_str_plain_warn_extraneous;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
extern PyObject *const_str_plain_scale;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_njev;
extern PyObject *const_str_plain_jac;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_division;
static PyObject *const_tuple_85158cebf343a96a883bca62885c258a_tuple;
extern PyObject *const_int_neg_1;
static PyObject *const_tuple_64b643b2b4ee4abfe255afb62045fd6b_tuple;
extern PyObject *const_str_plain_ignore;
extern PyObject *const_str_plain_overwrite_a;
extern PyObject *const_str_plain_validate_first_step;
static PyObject *const_str_digest_3eeccfe3d31bd2105a3c4719d1a1f0c9;
extern PyObject *const_str_plain_atol;
static PyObject *const_str_digest_6cf608b0cbec929ea25e3fa0931f9176;
extern PyObject *const_str_plain_error_norm_old;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_EPS;
extern PyObject *const_str_plain_num_jac;
extern PyObject *const_str_digest_b45be6e078995041cc113ab76fa71535;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain_callable;
extern PyObject *const_str_plain_nlu;
extern PyObject *const_float_0_5;
static PyObject *const_tuple_str_plain_issparse_str_plain_csc_matrix_str_plain_eye_tuple;
extern PyObject *const_int_pos_5;
static PyObject *const_str_digest_23e81b823749276ddf62bcccc4466e87;
extern PyObject *const_tuple_0dd640bbdfe6652435c5cada2fe2fc31_tuple;
static PyObject *const_float_minus_0_0823;
static PyObject *const_str_plain_t_shift;
extern PyObject *const_str_plain_hstack;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_dict_c30cd1cbacf46de598ee536504e727f3;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_dict_298d89659f37555f5fbef3ddd7a920af;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_MIN_FACTOR;
extern PyObject *const_tuple_str_plain_group_columns_tuple;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_factor;
extern PyObject *const_str_plain_U;
extern PyObject *const_str_plain_DenseOutput;
extern PyObject *const_str_plain_rtol;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_lu;
extern PyObject *const_str_plain_n;
static PyObject *const_str_digest_bf6fc3dd999c1466e32022e13ebd0a43;
extern PyObject *const_str_plain_rate;
extern PyObject *const_str_plain_J;
extern PyObject *const_str_plain_min;
static PyObject *const_tuple_e98a66a898b077261cbe9bb0cf1b8118_tuple;
extern PyObject *const_str_plain_y0;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_direction;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_tuple_slice_none_none_none_none_tuple;
extern PyObject *const_str_plain_sparsity;
extern PyObject *const_str_plain_csc;
extern PyObject *const_float_1eminus_06;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_fun_vectorized;
extern PyObject *const_str_plain_alpha;
extern PyObject *const_str_plain__validate_jac;
extern PyObject *const_str_plain_lu_factor;
static PyObject *const_str_digest_761c3bf293b5e9ed06681634e83f7368;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain_MAX_FACTOR;
extern PyObject *const_str_plain_divide;
static PyObject *const_str_digest_92a3c2ea898196b01415210a8c9d3664;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_fun;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_denom;
extern PyObject *const_str_plain_LU;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_solve_lu;
extern PyObject *const_str_plain_reversed;
extern PyObject *const_tuple_slice_int_pos_1_none_none_slice_int_pos_1_none_none_tuple;
static PyObject *const_str_plain_dy_norm_old;
static PyObject *const_tuple_4fac299d67396064d628d3618606d9a6_tuple;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_t0;
static PyObject *const_str_digest_6ce30345ef2e34fde0f3a2955226effa;
static PyObject *const_str_digest_6be6fb98190e18abffc5e32c08e5949a;
extern PyObject *const_str_plain_lu_solve;
static PyObject *const_tuple_int_0_slice_none_none_none_none_tuple;
extern PyObject *const_str_plain__call_impl;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain__dense_output_impl;
static PyObject *const_str_digest_8f53e8f7ece812708b8e4489d1cb5b03;
extern PyObject *const_str_plain_converged;
extern PyObject *const_str_plain_overwrite_b;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_OdeSolver;
extern PyObject *const_str_plain_issparse;
extern PyObject *const_str_plain_jac_wrapped;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_argmax;
extern PyObject *const_str_plain_TOO_SMALL_STEP;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_digest_8783708b6421c71a0892a844e756fb02;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_validate_max_step;
extern PyObject *const_str_plain_newton_tol;
static PyObject *const_str_digest_f758010d8db7d4a3ca0c6876a3691b75;
extern PyObject *const_str_plain_t_old;
extern PyObject *const_tuple_str_plain_lu_factor_str_plain_lu_solve_tuple;
static PyObject *const_str_digest_509e47ab625d232d5b05061eb075619c;
extern PyObject *const_str_digest_52d7d48bcb5881cf5fb85bf73f99ad81;
extern PyObject *const_tuple_56a4b3b2e65ac9adc55440ee96b7c34c_tuple;
extern PyObject *const_str_plain_I;
extern PyObject *const_str_plain_dy;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_splu;
static PyObject *const_tuple_a0ccf0f16e8f0c4b9018ed9980c482a1_tuple;
extern PyObject *const_str_plain_eye;
static PyObject *const_tuple_bdd347893f2c34ab2097fd21c48c2869_tuple;
static PyObject *const_str_plain_solve_bdf_system;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_psi;
extern PyObject *const_dict_ec6cc0116ef299a274b2baadbcdeac09;
extern PyObject *const_float_0_2;
static PyObject *const_str_digest_e4d5a10a3826cab391e130e10a568ac4;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_str_plain_splu_tuple;
extern PyObject *const_str_plain_c;
static PyObject *const_float_minus_0_0415;
extern PyObject *const_str_plain_identity;
extern PyObject *const_str_plain_base;
extern PyObject *const_int_pos_4;
static PyObject *const_str_digest_8b68e630264a8b1d201696d9fc85881a;
static PyObject *const_float_minus_0_185;
static PyObject *const_str_digest_637f770f1d55785ccc12a98833f5e6da;
extern PyObject *const_str_plain_t_new;
extern PyObject *const_str_plain_h_abs_old;
static PyObject *const_str_plain_error_const;
extern PyObject *const_str_plain_t_bound;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_BdfDenseOutput;
extern PyObject *const_str_plain_cumsum;
static PyObject *const_tuple_78166efa4355fc4833309bc26a7202e1_tuple;
extern PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
extern PyObject *const_str_plain_csc_matrix;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_jac_factor;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_dict_8837fe4bb3a549694f7f0fd86cdb8b13;
extern PyObject *const_str_plain_nextafter;
static PyObject *const_str_plain_MAX_ORDER;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
extern PyObject *const_str_plain_y;
extern PyObject *const_tuple_str_plain_A_str_plain_self_tuple;
extern PyObject *const_str_plain_validate_tol;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_M;
extern PyObject *const_str_plain_axis;
extern PyObject *const_float_0_03;
extern PyObject *const_str_plain_cumprod;
static PyObject *const_str_digest_a35e574e546e494431332be4571f9322;
extern PyObject *const_str_plain_h_abs;
extern PyObject *const_str_plain_max_step;
static PyObject *const_str_plain_dy_norm;
extern PyObject *const_str_plain___init__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_errstate;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_tuple_str_plain_OdeSolver_str_plain_DenseOutput_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_y_predict;
extern PyObject *const_str_plain_R;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_groups;
extern PyObject *const_str_plain_BDF;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_support_complex;
extern PyObject *const_float_0_9;
static PyObject *const_str_plain_compute_R;
static PyObject *const_list_17a67a4727f751ae51e4cbaf07d563a0_list;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
extern PyObject *const_int_pos_2;
extern PyObject *const_tuple_75546ce2d60f2907037f619a65fc8879_tuple;
extern PyObject *const_str_plain_format;
static PyObject *const_str_plain_change_D;
static PyObject *const_str_digest_760ce18441b7dbf86b16d801f5b6cdea;
extern PyObject *const_str_plain_common;
static PyObject *const_tuple_309f3cf8258c622bbee7385fa13bf7d9_tuple;
static PyObject *const_str_plain_RU;
extern PyObject *const_str_plain_fun_single;
extern PyObject *const_tuple_str_plain_LU_str_plain_b_tuple;
extern PyObject *const_str_plain_order;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_n_equal_steps = UNSTREAM_STRING_ASCII( &constant_bin[ 4126806 ], 13, 1 );
    const_tuple_85158cebf343a96a883bca62885c258a_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_85158cebf343a96a883bca62885c258a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_85158cebf343a96a883bca62885c258a_tuple, 1, const_str_plain_t_old ); Py_INCREF( const_str_plain_t_old );
    PyTuple_SET_ITEM( const_tuple_85158cebf343a96a883bca62885c258a_tuple, 2, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_85158cebf343a96a883bca62885c258a_tuple, 3, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    PyTuple_SET_ITEM( const_tuple_85158cebf343a96a883bca62885c258a_tuple, 4, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    PyTuple_SET_ITEM( const_tuple_85158cebf343a96a883bca62885c258a_tuple, 5, const_str_plain_D ); Py_INCREF( const_str_plain_D );
    PyTuple_SET_ITEM( const_tuple_85158cebf343a96a883bca62885c258a_tuple, 6, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_tuple_64b643b2b4ee4abfe255afb62045fd6b_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_64b643b2b4ee4abfe255afb62045fd6b_tuple, 0, const_str_plain_D ); Py_INCREF( const_str_plain_D );
    PyTuple_SET_ITEM( const_tuple_64b643b2b4ee4abfe255afb62045fd6b_tuple, 1, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    PyTuple_SET_ITEM( const_tuple_64b643b2b4ee4abfe255afb62045fd6b_tuple, 2, const_str_plain_factor ); Py_INCREF( const_str_plain_factor );
    PyTuple_SET_ITEM( const_tuple_64b643b2b4ee4abfe255afb62045fd6b_tuple, 3, const_str_plain_R ); Py_INCREF( const_str_plain_R );
    PyTuple_SET_ITEM( const_tuple_64b643b2b4ee4abfe255afb62045fd6b_tuple, 4, const_str_plain_U ); Py_INCREF( const_str_plain_U );
    const_str_plain_RU = UNSTREAM_STRING_ASCII( &constant_bin[ 81308 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_64b643b2b4ee4abfe255afb62045fd6b_tuple, 5, const_str_plain_RU ); Py_INCREF( const_str_plain_RU );
    const_str_digest_3eeccfe3d31bd2105a3c4719d1a1f0c9 = UNSTREAM_STRING_ASCII( &constant_bin[ 4126819 ], 27, 0 );
    const_str_digest_6cf608b0cbec929ea25e3fa0931f9176 = UNSTREAM_STRING_ASCII( &constant_bin[ 4126846 ], 17, 0 );
    const_tuple_str_plain_issparse_str_plain_csc_matrix_str_plain_eye_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_issparse_str_plain_csc_matrix_str_plain_eye_tuple, 0, const_str_plain_issparse ); Py_INCREF( const_str_plain_issparse );
    PyTuple_SET_ITEM( const_tuple_str_plain_issparse_str_plain_csc_matrix_str_plain_eye_tuple, 1, const_str_plain_csc_matrix ); Py_INCREF( const_str_plain_csc_matrix );
    PyTuple_SET_ITEM( const_tuple_str_plain_issparse_str_plain_csc_matrix_str_plain_eye_tuple, 2, const_str_plain_eye ); Py_INCREF( const_str_plain_eye );
    const_str_digest_23e81b823749276ddf62bcccc4466e87 = UNSTREAM_STRING_ASCII( &constant_bin[ 4126863 ], 5470, 0 );
    const_float_minus_0_0823 = UNSTREAM_FLOAT( &constant_bin[ 4132333 ] );
    const_str_plain_t_shift = UNSTREAM_STRING_ASCII( &constant_bin[ 798050 ], 7, 1 );
    const_str_digest_bf6fc3dd999c1466e32022e13ebd0a43 = UNSTREAM_STRING_ASCII( &constant_bin[ 4132341 ], 24, 0 );
    const_tuple_e98a66a898b077261cbe9bb0cf1b8118_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_e98a66a898b077261cbe9bb0cf1b8118_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_e98a66a898b077261cbe9bb0cf1b8118_tuple, 1, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_e98a66a898b077261cbe9bb0cf1b8118_tuple, 2, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e98a66a898b077261cbe9bb0cf1b8118_tuple, 3, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_e98a66a898b077261cbe9bb0cf1b8118_tuple, 4, const_str_plain_y0 ); Py_INCREF( const_str_plain_y0 );
    const_str_digest_761c3bf293b5e9ed06681634e83f7368 = UNSTREAM_STRING_ASCII( &constant_bin[ 4132365 ], 38, 0 );
    const_str_digest_92a3c2ea898196b01415210a8c9d3664 = UNSTREAM_STRING_ASCII( &constant_bin[ 4132403 ], 54, 0 );
    const_str_plain_dy_norm_old = UNSTREAM_STRING_ASCII( &constant_bin[ 4132457 ], 11, 1 );
    const_tuple_4fac299d67396064d628d3618606d9a6_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 0, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 1, const_str_plain_t_new ); Py_INCREF( const_str_plain_t_new );
    const_str_plain_y_predict = UNSTREAM_STRING_ASCII( &constant_bin[ 4132468 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 2, const_str_plain_y_predict ); Py_INCREF( const_str_plain_y_predict );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 3, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 4, const_str_plain_psi ); Py_INCREF( const_str_plain_psi );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 5, const_str_plain_LU ); Py_INCREF( const_str_plain_LU );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 6, const_str_plain_solve_lu ); Py_INCREF( const_str_plain_solve_lu );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 7, const_str_plain_scale ); Py_INCREF( const_str_plain_scale );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 8, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 9, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 10, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 11, const_str_plain_dy_norm_old ); Py_INCREF( const_str_plain_dy_norm_old );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 12, const_str_plain_converged ); Py_INCREF( const_str_plain_converged );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 13, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 14, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 15, const_str_plain_dy ); Py_INCREF( const_str_plain_dy );
    const_str_plain_dy_norm = UNSTREAM_STRING_ASCII( &constant_bin[ 4132457 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 16, const_str_plain_dy_norm ); Py_INCREF( const_str_plain_dy_norm );
    PyTuple_SET_ITEM( const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 17, const_str_plain_rate ); Py_INCREF( const_str_plain_rate );
    const_str_digest_6ce30345ef2e34fde0f3a2955226effa = UNSTREAM_STRING_ASCII( &constant_bin[ 4132477 ], 14, 0 );
    const_str_digest_6be6fb98190e18abffc5e32c08e5949a = UNSTREAM_STRING_ASCII( &constant_bin[ 4132491 ], 60, 0 );
    const_tuple_int_0_slice_none_none_none_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_0_slice_none_none_none_none_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_slice_none_none_none_none_tuple, 1, const_slice_none_none_none ); Py_INCREF( const_slice_none_none_none );
    PyTuple_SET_ITEM( const_tuple_int_0_slice_none_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_str_digest_8f53e8f7ece812708b8e4489d1cb5b03 = UNSTREAM_STRING_ASCII( &constant_bin[ 4132551 ], 23, 0 );
    const_str_digest_f758010d8db7d4a3ca0c6876a3691b75 = UNSTREAM_STRING_ASCII( &constant_bin[ 4132574 ], 33, 0 );
    const_str_digest_509e47ab625d232d5b05061eb075619c = UNSTREAM_STRING_ASCII( &constant_bin[ 4132607 ], 25, 0 );
    const_tuple_a0ccf0f16e8f0c4b9018ed9980c482a1_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4132632 ], 306 );
    const_tuple_bdd347893f2c34ab2097fd21c48c2869_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_bdd347893f2c34ab2097fd21c48c2869_tuple, 0, const_str_plain_validate_max_step ); Py_INCREF( const_str_plain_validate_max_step );
    PyTuple_SET_ITEM( const_tuple_bdd347893f2c34ab2097fd21c48c2869_tuple, 1, const_str_plain_validate_tol ); Py_INCREF( const_str_plain_validate_tol );
    PyTuple_SET_ITEM( const_tuple_bdd347893f2c34ab2097fd21c48c2869_tuple, 2, const_str_plain_select_initial_step ); Py_INCREF( const_str_plain_select_initial_step );
    PyTuple_SET_ITEM( const_tuple_bdd347893f2c34ab2097fd21c48c2869_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_bdd347893f2c34ab2097fd21c48c2869_tuple, 4, const_str_plain_EPS ); Py_INCREF( const_str_plain_EPS );
    PyTuple_SET_ITEM( const_tuple_bdd347893f2c34ab2097fd21c48c2869_tuple, 5, const_str_plain_num_jac ); Py_INCREF( const_str_plain_num_jac );
    PyTuple_SET_ITEM( const_tuple_bdd347893f2c34ab2097fd21c48c2869_tuple, 6, const_str_plain_validate_first_step ); Py_INCREF( const_str_plain_validate_first_step );
    PyTuple_SET_ITEM( const_tuple_bdd347893f2c34ab2097fd21c48c2869_tuple, 7, const_str_plain_warn_extraneous ); Py_INCREF( const_str_plain_warn_extraneous );
    const_str_plain_solve_bdf_system = UNSTREAM_STRING_ASCII( &constant_bin[ 4132938 ], 16, 1 );
    const_str_digest_e4d5a10a3826cab391e130e10a568ac4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4132954 ], 22, 0 );
    const_float_minus_0_0415 = UNSTREAM_FLOAT( &constant_bin[ 4132976 ] );
    const_str_digest_8b68e630264a8b1d201696d9fc85881a = UNSTREAM_STRING_ASCII( &constant_bin[ 4132984 ], 12, 0 );
    const_float_minus_0_185 = UNSTREAM_FLOAT( &constant_bin[ 4132996 ] );
    const_str_digest_637f770f1d55785ccc12a98833f5e6da = UNSTREAM_STRING_ASCII( &constant_bin[ 4133004 ], 53, 0 );
    const_str_plain_error_const = UNSTREAM_STRING_ASCII( &constant_bin[ 4132708 ], 11, 1 );
    const_str_plain_BdfDenseOutput = UNSTREAM_STRING_ASCII( &constant_bin[ 4132551 ], 14, 1 );
    const_tuple_78166efa4355fc4833309bc26a7202e1_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_78166efa4355fc4833309bc26a7202e1_tuple, 0, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    PyTuple_SET_ITEM( const_tuple_78166efa4355fc4833309bc26a7202e1_tuple, 1, const_str_plain_factor ); Py_INCREF( const_str_plain_factor );
    PyTuple_SET_ITEM( const_tuple_78166efa4355fc4833309bc26a7202e1_tuple, 2, const_str_plain_I ); Py_INCREF( const_str_plain_I );
    PyTuple_SET_ITEM( const_tuple_78166efa4355fc4833309bc26a7202e1_tuple, 3, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    PyTuple_SET_ITEM( const_tuple_78166efa4355fc4833309bc26a7202e1_tuple, 4, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    const_str_plain_MAX_ORDER = UNSTREAM_STRING_ASCII( &constant_bin[ 4133057 ], 9, 1 );
    const_str_digest_a35e574e546e494431332be4571f9322 = UNSTREAM_STRING_ASCII( &constant_bin[ 4133066 ], 30, 0 );
    const_str_plain_compute_R = UNSTREAM_STRING_ASCII( &constant_bin[ 4133096 ], 9, 1 );
    const_list_17a67a4727f751ae51e4cbaf07d563a0_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_17a67a4727f751ae51e4cbaf07d563a0_list, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_17a67a4727f751ae51e4cbaf07d563a0_list, 1, const_float_minus_0_185 ); Py_INCREF( const_float_minus_0_185 );
    PyList_SET_ITEM( const_list_17a67a4727f751ae51e4cbaf07d563a0_list, 2, const_float_minus_0_1111111111111111 ); Py_INCREF( const_float_minus_0_1111111111111111 );
    PyList_SET_ITEM( const_list_17a67a4727f751ae51e4cbaf07d563a0_list, 3, const_float_minus_0_0823 ); Py_INCREF( const_float_minus_0_0823 );
    PyList_SET_ITEM( const_list_17a67a4727f751ae51e4cbaf07d563a0_list, 4, const_float_minus_0_0415 ); Py_INCREF( const_float_minus_0_0415 );
    PyList_SET_ITEM( const_list_17a67a4727f751ae51e4cbaf07d563a0_list, 5, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_plain_change_D = UNSTREAM_STRING_ASCII( &constant_bin[ 4133105 ], 8, 1 );
    const_str_digest_760ce18441b7dbf86b16d801f5b6cdea = UNSTREAM_STRING_ASCII( &constant_bin[ 4133113 ], 24, 0 );
    const_tuple_309f3cf8258c622bbee7385fa13bf7d9_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4133137 ], 148 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$integrate$_ivp$bdf( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ce1a50ec0879a4d471d8478f0e726d0b;
static PyCodeObject *codeobj_525e54c5e1fc95479230229c57a28aa8;
static PyCodeObject *codeobj_4172348d4417625a52dfe4a77286e6b9;
static PyCodeObject *codeobj_c17f3bbdee480a4156149add0a094586;
static PyCodeObject *codeobj_60b005de39e2edb9e5e6543c70baf5d3;
static PyCodeObject *codeobj_ecf4487f9b06b87f9d3cdcb373664288;
static PyCodeObject *codeobj_b67dd469d1d4de0720a41275a42d512e;
static PyCodeObject *codeobj_a0db20aff1310f08134c1c2edb5f1f12;
static PyCodeObject *codeobj_1bdbc33bacebda932096501eb70314f9;
static PyCodeObject *codeobj_9f12ad5ab4a23985db2ba8aa73a0ed02;
static PyCodeObject *codeobj_9613e1ad58a6b2b30a2bbef17f78c4af;
static PyCodeObject *codeobj_76e9fb26bd703142089e04284d95d022;
static PyCodeObject *codeobj_ad40374362cb1154b16f15240b01ac4b;
static PyCodeObject *codeobj_36f09ffbcdc6f54fb757cd2957710124;
static PyCodeObject *codeobj_cf4752f34c3e2c98d8d09dc233e8d64f;
static PyCodeObject *codeobj_78b254c9cc2f069c4ff5e161a04b65b2;
static PyCodeObject *codeobj_56bdf31cd98302ea2e6f7906542b354e;
static PyCodeObject *codeobj_95f5cf08c9b36566790da9b252f5da7e;
static PyCodeObject *codeobj_9f12684d3cf3d17155e8be202d7c806f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_3eeccfe3d31bd2105a3c4719d1a1f0c9 );
    codeobj_ce1a50ec0879a4d471d8478f0e726d0b = MAKE_CODEOBJ( module_filename_obj, const_str_digest_f758010d8db7d4a3ca0c6876a3691b75, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_525e54c5e1fc95479230229c57a28aa8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_BDF, 73, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_4172348d4417625a52dfe4a77286e6b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_BdfDenseOutput, 445, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_c17f3bbdee480a4156149add0a094586 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 185, const_tuple_309f3cf8258c622bbee7385fa13bf7d9_tuple, 12, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS );
    codeobj_60b005de39e2edb9e5e6543c70baf5d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 446, const_tuple_85158cebf343a96a883bca62885c258a_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_ecf4487f9b06b87f9d3cdcb373664288 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__call_impl, 453, const_tuple_75546ce2d60f2907037f619a65fc8879_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b67dd469d1d4de0720a41275a42d512e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__dense_output_impl, 440, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a0db20aff1310f08134c1c2edb5f1f12 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__step_impl, 297, const_tuple_a0ccf0f16e8f0c4b9018ed9980c482a1_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1bdbc33bacebda932096501eb70314f9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__validate_jac, 244, const_tuple_0dd640bbdfe6652435c5cada2fe2fc31_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9f12ad5ab4a23985db2ba8aa73a0ed02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_change_D, 29, const_tuple_64b643b2b4ee4abfe255afb62045fd6b_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9613e1ad58a6b2b30a2bbef17f78c4af = MAKE_CODEOBJ( module_filename_obj, const_str_plain_compute_R, 19, const_tuple_78166efa4355fc4833309bc26a7202e1_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_76e9fb26bd703142089e04284d95d022 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac_wrapped, 255, const_tuple_56a4b3b2e65ac9adc55440ee96b7c34c_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_ad40374362cb1154b16f15240b01ac4b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac_wrapped, 269, const_tuple_e98a66a898b077261cbe9bb0cf1b8118_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_36f09ffbcdc6f54fb757cd2957710124 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac_wrapped, 275, const_tuple_e98a66a898b077261cbe9bb0cf1b8118_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_cf4752f34c3e2c98d8d09dc233e8d64f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_lu, 208, const_tuple_str_plain_A_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_78b254c9cc2f069c4ff5e161a04b65b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_lu, 217, const_tuple_str_plain_A_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_56bdf31cd98302ea2e6f7906542b354e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve_bdf_system, 37, const_tuple_4fac299d67396064d628d3618606d9a6_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_95f5cf08c9b36566790da9b252f5da7e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve_lu, 212, const_tuple_str_plain_LU_str_plain_b_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9f12684d3cf3d17155e8be202d7c806f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve_lu, 221, const_tuple_str_plain_LU_str_plain_b_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_1_compute_R(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_2_change_D(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_3_solve_bdf_system(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_4___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_1_lu(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_2_solve_lu(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_3_lu(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_4_solve_lu(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_5__validate_jac(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_1_jac_wrapped(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_2_jac_wrapped(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_3_jac_wrapped(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_6__step_impl(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_7__dense_output_impl(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_8___init__(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_9__call_impl(  );


// The module function definitions.
static PyObject *impl_scipy$integrate$_ivp$bdf$$$function_1_compute_R( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_order = python_pars[ 0 ];
    PyObject *par_factor = python_pars[ 1 ];
    PyObject *var_I = NULL;
    PyObject *var_J = NULL;
    PyObject *var_M = NULL;
    struct Nuitka_FrameObject *frame_9613e1ad58a6b2b30a2bbef17f78c4af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9613e1ad58a6b2b30a2bbef17f78c4af = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9613e1ad58a6b2b30a2bbef17f78c4af, codeobj_9613e1ad58a6b2b30a2bbef17f78c4af, module_scipy$integrate$_ivp$bdf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9613e1ad58a6b2b30a2bbef17f78c4af = cache_frame_9613e1ad58a6b2b30a2bbef17f78c4af;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9613e1ad58a6b2b30a2bbef17f78c4af );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9613e1ad58a6b2b30a2bbef17f78c4af ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_arange );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_int_pos_1;
        CHECK_OBJECT( par_order );
        tmp_left_name_1 = par_order;
        tmp_right_name_1 = const_int_pos_1;
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_9613e1ad58a6b2b30a2bbef17f78c4af->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_tuple_slice_none_none_none_none_tuple;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_I == NULL );
        var_I = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 22;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_arange );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_int_pos_1;
        CHECK_OBJECT( par_order );
        tmp_left_name_2 = par_order;
        tmp_right_name_2 = const_int_pos_1;
        tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 22;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_9613e1ad58a6b2b30a2bbef17f78c4af->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_J == NULL );
        var_J = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 23;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zeros );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_order );
        tmp_left_name_3 = par_order;
        tmp_right_name_3 = const_int_pos_1;
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 23;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_order );
        tmp_left_name_4 = par_order;
        tmp_right_name_4 = const_int_pos_1;
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 23;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_1 );
        frame_9613e1ad58a6b2b30a2bbef17f78c4af->m_frame.f_lineno = 23;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M == NULL );
        var_M = tmp_assign_source_3;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( var_I );
        tmp_left_name_7 = var_I;
        tmp_right_name_5 = const_int_pos_1;
        tmp_left_name_6 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_7, tmp_right_name_5 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_factor );
        tmp_left_name_8 = par_factor;
        CHECK_OBJECT( var_J );
        tmp_right_name_7 = var_J;
        tmp_right_name_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 24;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_I );
        tmp_right_name_8 = var_I;
        tmp_ass_subvalue_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_M );
        tmp_ass_subscribed_1 = var_M;
        tmp_ass_subscript_1 = const_tuple_slice_int_pos_1_none_none_slice_int_pos_1_none_none_tuple;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_1;
        tmp_ass_subvalue_2 = const_int_pos_1;
        CHECK_OBJECT( var_M );
        tmp_ass_subscribed_2 = var_M;
        tmp_ass_subscript_2 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 0, tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 26;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_cumprod );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_M );
        tmp_tuple_element_2 = var_M;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
        frame_9613e1ad58a6b2b30a2bbef17f78c4af->m_frame.f_lineno = 26;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9613e1ad58a6b2b30a2bbef17f78c4af );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9613e1ad58a6b2b30a2bbef17f78c4af );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9613e1ad58a6b2b30a2bbef17f78c4af );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9613e1ad58a6b2b30a2bbef17f78c4af, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9613e1ad58a6b2b30a2bbef17f78c4af->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9613e1ad58a6b2b30a2bbef17f78c4af, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9613e1ad58a6b2b30a2bbef17f78c4af,
        type_description_1,
        par_order,
        par_factor,
        var_I,
        var_J,
        var_M
    );


    // Release cached frame.
    if ( frame_9613e1ad58a6b2b30a2bbef17f78c4af == cache_frame_9613e1ad58a6b2b30a2bbef17f78c4af )
    {
        Py_DECREF( frame_9613e1ad58a6b2b30a2bbef17f78c4af );
    }
    cache_frame_9613e1ad58a6b2b30a2bbef17f78c4af = NULL;

    assertFrameObject( frame_9613e1ad58a6b2b30a2bbef17f78c4af );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_1_compute_R );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    CHECK_OBJECT( (PyObject *)par_factor );
    Py_DECREF( par_factor );
    par_factor = NULL;

    CHECK_OBJECT( (PyObject *)var_I );
    Py_DECREF( var_I );
    var_I = NULL;

    CHECK_OBJECT( (PyObject *)var_J );
    Py_DECREF( var_J );
    var_J = NULL;

    CHECK_OBJECT( (PyObject *)var_M );
    Py_DECREF( var_M );
    var_M = NULL;

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

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    CHECK_OBJECT( (PyObject *)par_factor );
    Py_DECREF( par_factor );
    par_factor = NULL;

    Py_XDECREF( var_I );
    var_I = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_1_compute_R );
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


static PyObject *impl_scipy$integrate$_ivp$bdf$$$function_2_change_D( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_D = python_pars[ 0 ];
    PyObject *par_order = python_pars[ 1 ];
    PyObject *par_factor = python_pars[ 2 ];
    PyObject *var_R = NULL;
    PyObject *var_U = NULL;
    PyObject *var_RU = NULL;
    struct Nuitka_FrameObject *frame_9f12ad5ab4a23985db2ba8aa73a0ed02;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9f12ad5ab4a23985db2ba8aa73a0ed02 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9f12ad5ab4a23985db2ba8aa73a0ed02, codeobj_9f12ad5ab4a23985db2ba8aa73a0ed02, module_scipy$integrate$_ivp$bdf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9f12ad5ab4a23985db2ba8aa73a0ed02 = cache_frame_9f12ad5ab4a23985db2ba8aa73a0ed02;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9f12ad5ab4a23985db2ba8aa73a0ed02 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9f12ad5ab4a23985db2ba8aa73a0ed02 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_compute_R );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_R );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_R" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 31;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_order );
        tmp_args_element_name_1 = par_order;
        CHECK_OBJECT( par_factor );
        tmp_args_element_name_2 = par_factor;
        frame_9f12ad5ab4a23985db2ba8aa73a0ed02->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_R == NULL );
        var_R = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_compute_R );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_R );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_R" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 32;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_order );
        tmp_args_element_name_3 = par_order;
        tmp_args_element_name_4 = const_int_pos_1;
        frame_9f12ad5ab4a23985db2ba8aa73a0ed02->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_U == NULL );
        var_U = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( var_R );
        tmp_called_instance_1 = var_R;
        CHECK_OBJECT( var_U );
        tmp_args_element_name_5 = var_U;
        frame_9f12ad5ab4a23985db2ba8aa73a0ed02->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_RU == NULL );
        var_RU = tmp_assign_source_3;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_step_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dot );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_RU );
        tmp_source_name_2 = var_RU;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_D );
        tmp_subscribed_name_1 = par_D;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( par_order );
        tmp_left_name_1 = par_order;
        tmp_right_name_1 = const_int_pos_1;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_args_element_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_9f12ad5ab4a23985db2ba8aa73a0ed02->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_D );
        tmp_ass_subscribed_1 = par_D;
        tmp_start_name_2 = Py_None;
        CHECK_OBJECT( par_order );
        tmp_left_name_2 = par_order;
        tmp_right_name_2 = const_int_pos_1;
        tmp_stop_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_stop_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_2 = Py_None;
        tmp_ass_subscript_1 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_stop_name_2 );
        assert( !(tmp_ass_subscript_1 == NULL) );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f12ad5ab4a23985db2ba8aa73a0ed02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f12ad5ab4a23985db2ba8aa73a0ed02 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9f12ad5ab4a23985db2ba8aa73a0ed02, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9f12ad5ab4a23985db2ba8aa73a0ed02->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9f12ad5ab4a23985db2ba8aa73a0ed02, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9f12ad5ab4a23985db2ba8aa73a0ed02,
        type_description_1,
        par_D,
        par_order,
        par_factor,
        var_R,
        var_U,
        var_RU
    );


    // Release cached frame.
    if ( frame_9f12ad5ab4a23985db2ba8aa73a0ed02 == cache_frame_9f12ad5ab4a23985db2ba8aa73a0ed02 )
    {
        Py_DECREF( frame_9f12ad5ab4a23985db2ba8aa73a0ed02 );
    }
    cache_frame_9f12ad5ab4a23985db2ba8aa73a0ed02 = NULL;

    assertFrameObject( frame_9f12ad5ab4a23985db2ba8aa73a0ed02 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_2_change_D );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_D );
    Py_DECREF( par_D );
    par_D = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    CHECK_OBJECT( (PyObject *)par_factor );
    Py_DECREF( par_factor );
    par_factor = NULL;

    CHECK_OBJECT( (PyObject *)var_R );
    Py_DECREF( var_R );
    var_R = NULL;

    CHECK_OBJECT( (PyObject *)var_U );
    Py_DECREF( var_U );
    var_U = NULL;

    CHECK_OBJECT( (PyObject *)var_RU );
    Py_DECREF( var_RU );
    var_RU = NULL;

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

    CHECK_OBJECT( (PyObject *)par_D );
    Py_DECREF( par_D );
    par_D = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    CHECK_OBJECT( (PyObject *)par_factor );
    Py_DECREF( par_factor );
    par_factor = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_RU );
    var_RU = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_2_change_D );
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


static PyObject *impl_scipy$integrate$_ivp$bdf$$$function_3_solve_bdf_system( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[ 0 ];
    PyObject *par_t_new = python_pars[ 1 ];
    PyObject *par_y_predict = python_pars[ 2 ];
    PyObject *par_c = python_pars[ 3 ];
    PyObject *par_psi = python_pars[ 4 ];
    PyObject *par_LU = python_pars[ 5 ];
    PyObject *par_solve_lu = python_pars[ 6 ];
    PyObject *par_scale = python_pars[ 7 ];
    PyObject *par_tol = python_pars[ 8 ];
    PyObject *var_d = NULL;
    PyObject *var_y = NULL;
    PyObject *var_dy_norm_old = NULL;
    PyObject *var_converged = NULL;
    PyObject *var_k = NULL;
    PyObject *var_f = NULL;
    PyObject *var_dy = NULL;
    PyObject *var_dy_norm = NULL;
    PyObject *var_rate = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_56bdf31cd98302ea2e6f7906542b354e;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_56bdf31cd98302ea2e6f7906542b354e = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_0;
        assert( var_d == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_d = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_56bdf31cd98302ea2e6f7906542b354e, codeobj_56bdf31cd98302ea2e6f7906542b354e, module_scipy$integrate$_ivp$bdf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_56bdf31cd98302ea2e6f7906542b354e = cache_frame_56bdf31cd98302ea2e6f7906542b354e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_56bdf31cd98302ea2e6f7906542b354e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_56bdf31cd98302ea2e6f7906542b354e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_y_predict );
        tmp_called_instance_1 = par_y_predict;
        frame_56bdf31cd98302ea2e6f7906542b354e->m_frame.f_lineno = 40;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_y == NULL );
        var_y = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        assert( var_dy_norm_old == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_dy_norm_old = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_False;
        assert( var_converged == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_converged = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NEWTON_MAXITER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_xrange_low_1 = tmp_mvar_value_1;
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 43;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_7;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_fun );
        tmp_called_name_1 = par_fun;
        CHECK_OBJECT( par_t_new );
        tmp_args_element_name_1 = par_t_new;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_2 = var_y;
        frame_56bdf31cd98302ea2e6f7906542b354e->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_f;
            var_f = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 45;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_all );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 45;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_f );
        tmp_args_element_name_4 = var_f;
        frame_56bdf31cd98302ea2e6f7906542b354e->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_isfinite, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 45;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_56bdf31cd98302ea2e6f7906542b354e->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_solve_lu );
        tmp_called_name_3 = par_solve_lu;
        CHECK_OBJECT( par_LU );
        tmp_args_element_name_5 = par_LU;
        CHECK_OBJECT( par_c );
        tmp_left_name_3 = par_c;
        CHECK_OBJECT( var_f );
        tmp_right_name_1 = var_f;
        tmp_left_name_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_psi );
        tmp_right_name_2 = par_psi;
        tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_d );
        tmp_right_name_3 = var_d;
        tmp_args_element_name_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_56bdf31cd98302ea2e6f7906542b354e->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_dy;
            var_dy = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 49;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( var_dy );
        tmp_left_name_4 = var_dy;
        CHECK_OBJECT( par_scale );
        tmp_right_name_4 = par_scale;
        tmp_args_element_name_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_56bdf31cd98302ea2e6f7906542b354e->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_dy_norm;
            var_dy_norm = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_dy_norm_old );
        tmp_compexpr_left_1 = var_dy_norm_old;
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
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = Py_None;
            {
                PyObject *old = var_rate;
                var_rate = tmp_assign_source_11;
                Py_INCREF( var_rate );
                Py_XDECREF( old );
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( var_dy_norm );
            tmp_left_name_5 = var_dy_norm;
            CHECK_OBJECT( var_dy_norm_old );
            tmp_right_name_5 = var_dy_norm_old;
            tmp_assign_source_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_rate;
                var_rate = tmp_assign_source_12;
                Py_XDECREF( old );
            }

        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_9;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT( var_rate );
        tmp_compexpr_left_2 = var_rate;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_rate );
        tmp_compexpr_left_3 = var_rate;
        tmp_compexpr_right_3 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
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
        CHECK_OBJECT( var_rate );
        tmp_left_name_8 = var_rate;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NEWTON_MAXITER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_9 = tmp_mvar_value_5;
        CHECK_OBJECT( var_k );
        tmp_right_name_7 = var_k;
        tmp_right_name_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_7 = POWER_OPERATION( tmp_left_name_8, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_10 = const_int_pos_1;
        CHECK_OBJECT( var_rate );
        tmp_right_name_9 = var_rate;
        tmp_right_name_8 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_10, tmp_right_name_9 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_dy_norm );
        tmp_right_name_10 = var_dy_norm;
        tmp_compexpr_left_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_4 = par_tol;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_right_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
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
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        CHECK_OBJECT( var_y );
        tmp_left_name_11 = var_y;
        CHECK_OBJECT( var_dy );
        tmp_right_name_11 = var_dy;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_13 = tmp_left_name_11;
        var_y = tmp_assign_source_13;

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        CHECK_OBJECT( var_d );
        tmp_left_name_12 = var_d;
        CHECK_OBJECT( var_dy );
        tmp_right_name_12 = var_dy;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_14 = tmp_left_name_12;
        var_d = tmp_assign_source_14;

    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_13;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_14;
        PyObject *tmp_right_name_15;
        CHECK_OBJECT( var_dy_norm );
        tmp_compexpr_left_5 = var_dy_norm;
        tmp_compexpr_right_5 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
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
        CHECK_OBJECT( var_rate );
        tmp_compexpr_left_6 = var_rate;
        tmp_compexpr_right_6 = Py_None;
        tmp_and_left_value_2 = ( tmp_compexpr_left_6 != tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_rate );
        tmp_left_name_14 = var_rate;
        tmp_left_name_15 = const_int_pos_1;
        CHECK_OBJECT( var_rate );
        tmp_right_name_14 = var_rate;
        tmp_right_name_13 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_15, tmp_right_name_14 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_13 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_dy_norm );
        tmp_right_name_15 = var_dy_norm;
        tmp_compexpr_left_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_13 );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_7 = par_tol;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_or_right_value_2 = tmp_and_left_value_2;
        and_end_2:;
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
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = Py_True;
            {
                PyObject *old = var_converged;
                assert( old != NULL );
                var_converged = tmp_assign_source_15;
                Py_INCREF( var_converged );
                Py_DECREF( old );
            }

        }
        goto loop_end_1;
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( var_dy_norm );
        tmp_assign_source_16 = var_dy_norm;
        {
            PyObject *old = var_dy_norm_old;
            assert( old != NULL );
            var_dy_norm_old = tmp_assign_source_16;
            Py_INCREF( var_dy_norm_old );
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "oooooooooooooooooo";
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
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        if ( var_converged == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "converged" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_converged;
        tmp_return_value = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( var_k == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "k" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_16 = var_k;
        tmp_right_name_16 = const_int_pos_1;
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_16, tmp_right_name_16 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        if ( var_y == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_y;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        if ( var_d == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_d;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_56bdf31cd98302ea2e6f7906542b354e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_56bdf31cd98302ea2e6f7906542b354e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_56bdf31cd98302ea2e6f7906542b354e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_56bdf31cd98302ea2e6f7906542b354e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_56bdf31cd98302ea2e6f7906542b354e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_56bdf31cd98302ea2e6f7906542b354e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_56bdf31cd98302ea2e6f7906542b354e,
        type_description_1,
        par_fun,
        par_t_new,
        par_y_predict,
        par_c,
        par_psi,
        par_LU,
        par_solve_lu,
        par_scale,
        par_tol,
        var_d,
        var_y,
        var_dy_norm_old,
        var_converged,
        var_k,
        var_f,
        var_dy,
        var_dy_norm,
        var_rate
    );


    // Release cached frame.
    if ( frame_56bdf31cd98302ea2e6f7906542b354e == cache_frame_56bdf31cd98302ea2e6f7906542b354e )
    {
        Py_DECREF( frame_56bdf31cd98302ea2e6f7906542b354e );
    }
    cache_frame_56bdf31cd98302ea2e6f7906542b354e = NULL;

    assertFrameObject( frame_56bdf31cd98302ea2e6f7906542b354e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_3_solve_bdf_system );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_t_new );
    Py_DECREF( par_t_new );
    par_t_new = NULL;

    CHECK_OBJECT( (PyObject *)par_y_predict );
    Py_DECREF( par_y_predict );
    par_y_predict = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_psi );
    Py_DECREF( par_psi );
    par_psi = NULL;

    CHECK_OBJECT( (PyObject *)par_LU );
    Py_DECREF( par_LU );
    par_LU = NULL;

    CHECK_OBJECT( (PyObject *)par_solve_lu );
    Py_DECREF( par_solve_lu );
    par_solve_lu = NULL;

    CHECK_OBJECT( (PyObject *)par_scale );
    Py_DECREF( par_scale );
    par_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)var_dy_norm_old );
    Py_DECREF( var_dy_norm_old );
    var_dy_norm_old = NULL;

    Py_XDECREF( var_converged );
    var_converged = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_dy );
    var_dy = NULL;

    Py_XDECREF( var_dy_norm );
    var_dy_norm = NULL;

    Py_XDECREF( var_rate );
    var_rate = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_t_new );
    Py_DECREF( par_t_new );
    par_t_new = NULL;

    CHECK_OBJECT( (PyObject *)par_y_predict );
    Py_DECREF( par_y_predict );
    par_y_predict = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_psi );
    Py_DECREF( par_psi );
    par_psi = NULL;

    CHECK_OBJECT( (PyObject *)par_LU );
    Py_DECREF( par_LU );
    par_LU = NULL;

    CHECK_OBJECT( (PyObject *)par_solve_lu );
    Py_DECREF( par_solve_lu );
    par_solve_lu = NULL;

    CHECK_OBJECT( (PyObject *)par_scale );
    Py_DECREF( par_scale );
    par_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_dy_norm_old );
    var_dy_norm_old = NULL;

    Py_XDECREF( var_converged );
    var_converged = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_dy );
    var_dy = NULL;

    Py_XDECREF( var_dy_norm );
    var_dy_norm = NULL;

    Py_XDECREF( var_rate );
    var_rate = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_3_solve_bdf_system );
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


static PyObject *impl_scipy$integrate$_ivp$bdf$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_fun = python_pars[ 1 ];
    PyObject *par_t0 = python_pars[ 2 ];
    PyObject *par_y0 = python_pars[ 3 ];
    PyObject *par_t_bound = python_pars[ 4 ];
    PyObject *par_max_step = python_pars[ 5 ];
    PyObject *par_rtol = python_pars[ 6 ];
    PyObject *par_atol = python_pars[ 7 ];
    PyObject *par_jac = python_pars[ 8 ];
    PyObject *par_jac_sparsity = python_pars[ 9 ];
    PyObject *par_vectorized = python_pars[ 10 ];
    PyObject *par_first_step = python_pars[ 11 ];
    PyObject *par_extraneous = python_pars[ 12 ];
    PyObject *var_f = NULL;
    PyObject *var_lu = NULL;
    PyObject *var_solve_lu = NULL;
    PyObject *var_I = NULL;
    PyObject *var_kappa = NULL;
    PyObject *var_D = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c17f3bbdee480a4156149add0a094586;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c17f3bbdee480a4156149add0a094586 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c17f3bbdee480a4156149add0a094586, codeobj_c17f3bbdee480a4156149add0a094586, module_scipy$integrate$_ivp$bdf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c17f3bbdee480a4156149add0a094586 = cache_frame_c17f3bbdee480a4156149add0a094586;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c17f3bbdee480a4156149add0a094586 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c17f3bbdee480a4156149add0a094586 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_warn_extraneous );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn_extraneous );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn_extraneous" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 188;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_extraneous );
        tmp_args_element_name_1 = par_extraneous;
        frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_BDF );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BDF );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BDF" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 189;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_object_name_1 = PyCell_GET( par_self );
        tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_fun );
        tmp_tuple_element_1 = par_fun;
        tmp_args_name_1 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_t0 );
        tmp_tuple_element_1 = par_t0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_y0 );
        tmp_tuple_element_1 = par_y0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( par_t_bound );
        tmp_tuple_element_1 = par_t_bound;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 3, tmp_tuple_element_1 );
        CHECK_OBJECT( par_vectorized );
        tmp_tuple_element_1 = par_vectorized;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 4, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_c30cd1cbacf46de598ee536504e727f3 );
        frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 189;
        tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_validate_max_step );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_max_step );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "validate_max_step" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 191;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_max_step );
        tmp_args_element_name_2 = par_max_step;
        frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_1 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_max_step, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_validate_tol );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_tol );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "validate_tol" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 192;
            type_description_1 = "cooooooooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_rtol );
        tmp_args_element_name_3 = par_rtol;
        CHECK_OBJECT( par_atol );
        tmp_args_element_name_4 = par_atol;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_2 = PyCell_GET( par_self );
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "cooooooooooooooooooN";
            goto try_except_handler_2;
        }
        frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "cooooooooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "cooooooooooooooooooN";
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


            type_description_1 = "cooooooooooooooooooN";
            exception_lineno = 192;
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


            type_description_1 = "cooooooooooooooooooN";
            exception_lineno = 192;
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

                    type_description_1 = "cooooooooooooooooooN";
                    exception_lineno = 192;
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

            type_description_1 = "cooooooooooooooooooN";
            exception_lineno = 192;
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
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assattr_name_2 = tmp_tuple_unpack_1__element_1;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_2 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_rtol, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "cooooooooooooooooooN";
            goto try_except_handler_2;
        }
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assattr_name_3 = tmp_tuple_unpack_1__element_2;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_3 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_atol, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "cooooooooooooooooooN";
            goto try_except_handler_2;
        }
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
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_3 = PyCell_GET( par_self );
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_fun );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_4 = PyCell_GET( par_self );
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_t );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 193;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_5 = PyCell_GET( par_self );
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_y );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 193;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert( var_f == NULL );
        var_f = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_first_step );
        tmp_compexpr_left_1 = par_first_step;
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
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_source_name_8;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_source_name_9;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_source_name_11;
            PyObject *tmp_assattr_target_4;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_select_initial_step );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select_initial_step );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "select_initial_step" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 195;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_5;
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_6 = PyCell_GET( par_self );
            tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_fun );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_7 = PyCell_GET( par_self );
            tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_t );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_8 );

                exception_lineno = 195;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_8 = PyCell_GET( par_self );
            tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_y );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_8 );
                Py_DECREF( tmp_args_element_name_9 );

                exception_lineno = 195;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_f );
            tmp_args_element_name_11 = var_f;
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_9 = PyCell_GET( par_self );
            tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_direction );
            if ( tmp_args_element_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_8 );
                Py_DECREF( tmp_args_element_name_9 );
                Py_DECREF( tmp_args_element_name_10 );

                exception_lineno = 196;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_13 = const_int_pos_1;
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_10 = PyCell_GET( par_self );
            tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_rtol );
            if ( tmp_args_element_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_8 );
                Py_DECREF( tmp_args_element_name_9 );
                Py_DECREF( tmp_args_element_name_10 );
                Py_DECREF( tmp_args_element_name_12 );

                exception_lineno = 197;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_11 = PyCell_GET( par_self );
            tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_atol );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_8 );
                Py_DECREF( tmp_args_element_name_9 );
                Py_DECREF( tmp_args_element_name_10 );
                Py_DECREF( tmp_args_element_name_12 );
                Py_DECREF( tmp_args_element_name_14 );

                exception_lineno = 197;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 195;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
                tmp_assattr_name_4 = CALL_FUNCTION_WITH_ARGS8( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_args_element_name_8 );
            Py_DECREF( tmp_args_element_name_9 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_args_element_name_12 );
            Py_DECREF( tmp_args_element_name_14 );
            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_assattr_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_assattr_target_4 = PyCell_GET( par_self );
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_h_abs, tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_assattr_target_5;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_validate_first_step );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_first_step );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "validate_first_step" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 199;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_6;
            CHECK_OBJECT( par_first_step );
            tmp_args_element_name_16 = par_first_step;
            CHECK_OBJECT( par_t0 );
            tmp_args_element_name_17 = par_t0;
            CHECK_OBJECT( par_t_bound );
            tmp_args_element_name_18 = par_t_bound;
            frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 199;
            {
                PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
                tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
            }

            if ( tmp_assattr_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_assattr_target_5 = PyCell_GET( par_self );
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_h_abs, tmp_assattr_name_5 );
            Py_DECREF( tmp_assattr_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = Py_None;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_6 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_h_abs_old, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_name_7 = Py_None;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_7 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_error_norm_old, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_right_name_2;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_assattr_target_8;
        tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_8 != NULL );
        tmp_left_name_2 = const_int_pos_10;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_EPS );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EPS );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EPS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 203;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = tmp_mvar_value_7;
        tmp_left_name_1 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rtol );
        tmp_right_name_2 = par_rtol;
        tmp_args_element_name_19 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_args_element_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_9 != NULL );
        tmp_args_element_name_21 = const_float_0_03;
        CHECK_OBJECT( par_rtol );
        tmp_left_name_3 = par_rtol;
        tmp_right_name_3 = const_float_0_5;
        tmp_args_element_name_22 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_args_element_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_19 );

            exception_lineno = 203;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
            tmp_args_element_name_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_args_element_name_22 );
        if ( tmp_args_element_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_19 );

            exception_lineno = 203;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20 };
            tmp_assattr_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_args_element_name_19 );
        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_assattr_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_8 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_newton_tol, tmp_assattr_name_8 );
        Py_DECREF( tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_name_9 = Py_None;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_9 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_jac_factor, tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_called_instance_1 = PyCell_GET( par_self );
        CHECK_OBJECT( par_jac );
        tmp_args_element_name_23 = par_jac;
        CHECK_OBJECT( par_jac_sparsity );
        tmp_args_element_name_24 = par_jac_sparsity;
        frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
            tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__validate_jac, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "cooooooooooooooooooN";
            goto try_except_handler_4;
        }
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "cooooooooooooooooooN";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


            type_description_1 = "cooooooooooooooooooN";
            exception_lineno = 206;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


            type_description_1 = "cooooooooooooooooooN";
            exception_lineno = 206;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "cooooooooooooooooooN";
                    exception_lineno = 206;
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

            type_description_1 = "cooooooooooooooooooN";
            exception_lineno = 206;
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
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assattr_name_10 = tmp_tuple_unpack_2__element_1;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_10 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_jac, tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "cooooooooooooooooooN";
            goto try_except_handler_4;
        }
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assattr_name_11 = tmp_tuple_unpack_2__element_2;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_11 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_J, tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "cooooooooooooooooooN";
            goto try_except_handler_4;
        }
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
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_source_name_12;
        int tmp_truth_name_1;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_issparse );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issparse );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "issparse" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 207;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_8;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_12 = PyCell_GET( par_self );
        tmp_args_element_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_J );
        if ( tmp_args_element_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_args_element_name_25 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 207;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
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
            tmp_assign_source_8 = MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_1_lu(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] = par_self;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] );


            assert( var_lu == NULL );
            var_lu = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_2_solve_lu(  );



            assert( var_solve_lu == NULL );
            var_solve_lu = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_11;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_13;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_source_name_14;
            PyObject *tmp_source_name_15;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_eye );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eye );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eye" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 215;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_called_name_11 = tmp_mvar_value_9;
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_13 = PyCell_GET( par_self );
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_n );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_args_name_2 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_dict_key_1 = const_str_plain_format;
            tmp_dict_value_1 = const_str_plain_csc;
            tmp_kw_name_2 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_dtype;
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_15 = PyCell_GET( par_self );
            tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_y );
            if ( tmp_source_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );

                exception_lineno = 215;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_dtype );
            Py_DECREF( tmp_source_name_14 );
            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );

                exception_lineno = 215;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 215;
            tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            assert( var_I == NULL );
            var_I = tmp_assign_source_10;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_3_lu(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_11)->m_closure[0] = par_self;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_11)->m_closure[0] );


            assert( var_lu == NULL );
            var_lu = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_4_solve_lu(  );



            assert( var_solve_lu == NULL );
            var_solve_lu = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_name_12;
            PyObject *tmp_source_name_16;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_source_name_17;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_source_name_18;
            PyObject *tmp_source_name_19;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 224;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_source_name_16 = tmp_mvar_value_10;
            tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_identity );
            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 224;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_17 = PyCell_GET( par_self );
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_n );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );

                exception_lineno = 224;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_args_name_3 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
            tmp_dict_key_3 = const_str_plain_dtype;
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_19 = PyCell_GET( par_self );
            tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_y );
            if ( tmp_source_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );
                Py_DECREF( tmp_args_name_3 );

                exception_lineno = 224;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_dtype );
            Py_DECREF( tmp_source_name_18 );
            if ( tmp_dict_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );
                Py_DECREF( tmp_args_name_3 );

                exception_lineno = 224;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
            Py_DECREF( tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 224;
            tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 224;
                type_description_1 = "cooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            assert( var_I == NULL );
            var_I = tmp_assign_source_13;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT( var_lu );
        tmp_assattr_name_12 = var_lu;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_12 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_lu, tmp_assattr_name_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT( var_solve_lu );
        tmp_assattr_name_13 = var_solve_lu;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_13 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_solve_lu, tmp_assattr_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT( var_I );
        tmp_assattr_name_14 = var_I;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_14 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_I, tmp_assattr_name_14 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_call_arg_element_1;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 230;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_11;
        tmp_call_arg_element_1 = LIST_COPY( const_list_17a67a4727f751ae51e4cbaf07d563a0_list );
        frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = { tmp_call_arg_element_1 };
            tmp_assign_source_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_array, call_args );
        }

        Py_DECREF( tmp_call_arg_element_1 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert( var_kappa == NULL );
        var_kappa = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_called_name_13;
        PyObject *tmp_source_name_20;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_called_name_14;
        PyObject *tmp_source_name_21;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_name_15;
        PyObject *tmp_source_name_22;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_left_name_5;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_right_name_5;
        PyObject *tmp_assattr_target_15;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 231;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_20 = tmp_mvar_value_12;
        tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_hstack );
        if ( tmp_called_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = const_int_0;
        tmp_args_element_name_26 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_element_name_26, 0, tmp_tuple_element_4 );
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_26 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 231;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_21 = tmp_mvar_value_13;
        tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_cumsum );
        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_26 );

            exception_lineno = 231;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = const_int_pos_1;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_26 );
            Py_DECREF( tmp_called_name_14 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 231;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_22 = tmp_mvar_value_14;
        tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_arange );
        if ( tmp_called_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_26 );
            Py_DECREF( tmp_called_name_14 );

            exception_lineno = 231;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_28 = const_int_pos_1;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_MAX_ORDER );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAX_ORDER );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_26 );
            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_called_name_15 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAX_ORDER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 231;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_left_name_5 = tmp_mvar_value_15;
        tmp_right_name_5 = const_int_pos_1;
        tmp_args_element_name_29 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_args_element_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_26 );
            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_called_name_15 );

            exception_lineno = 231;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = { tmp_args_element_name_28, tmp_args_element_name_29 };
            tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
        }

        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_29 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_26 );
            Py_DECREF( tmp_called_name_14 );

            exception_lineno = 231;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_27 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_args_element_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_26 );
            Py_DECREF( tmp_called_name_14 );

            exception_lineno = 231;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = { tmp_args_element_name_27 };
            tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_27 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_26 );

            exception_lineno = 231;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_26, 1, tmp_tuple_element_4 );
        frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = { tmp_args_element_name_26 };
            tmp_assattr_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_26 );
        if ( tmp_assattr_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_15 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_gamma, tmp_assattr_name_15 );
        Py_DECREF( tmp_assattr_name_15 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_16;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_source_name_23;
        PyObject *tmp_assattr_target_16;
        tmp_left_name_7 = const_int_pos_1;
        CHECK_OBJECT( var_kappa );
        tmp_right_name_6 = var_kappa;
        tmp_left_name_6 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_7, tmp_right_name_6 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_23 = PyCell_GET( par_self );
        tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_gamma );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 232;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_16 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_assattr_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_16 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_alpha, tmp_assattr_name_16 );
        Py_DECREF( tmp_assattr_name_16 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_17;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_source_name_24;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_called_name_16;
        PyObject *tmp_source_name_25;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_left_name_11;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_right_name_11;
        PyObject *tmp_assattr_target_17;
        CHECK_OBJECT( var_kappa );
        tmp_left_name_9 = var_kappa;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_24 = PyCell_GET( par_self );
        tmp_right_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_gamma );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_left_name_10 = const_int_pos_1;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_left_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 233;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_25 = tmp_mvar_value_16;
        tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_arange );
        if ( tmp_called_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 233;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_30 = const_int_pos_1;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_MAX_ORDER );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAX_ORDER );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_called_name_16 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAX_ORDER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 233;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_left_name_11 = tmp_mvar_value_17;
        tmp_right_name_11 = const_int_pos_2;
        tmp_args_element_name_31 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_args_element_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_called_name_16 );

            exception_lineno = 233;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = { tmp_args_element_name_30, tmp_args_element_name_31 };
            tmp_right_name_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_31 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 233;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_right_name_9 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 233;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_assattr_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_17 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_error_const, tmp_assattr_name_17 );
        Py_DECREF( tmp_assattr_name_17 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_17;
        PyObject *tmp_source_name_26;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_left_name_12;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_right_name_12;
        PyObject *tmp_source_name_27;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_28;
        PyObject *tmp_source_name_29;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 235;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_26 = tmp_mvar_value_18;
        tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_empty );
        if ( tmp_called_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_MAX_ORDER );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAX_ORDER );
        }

        if ( tmp_mvar_value_19 == NULL )
        {
            Py_DECREF( tmp_called_name_17 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAX_ORDER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 235;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_left_name_12 = tmp_mvar_value_19;
        tmp_right_name_12 = const_int_pos_3;
        tmp_tuple_element_6 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_tuple_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_17 );

            exception_lineno = 235;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_tuple_element_5, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_27 = PyCell_GET( par_self );
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_n );
        if ( tmp_tuple_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_17 );
            Py_DECREF( tmp_tuple_element_5 );

            exception_lineno = 235;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_5, 1, tmp_tuple_element_6 );
        tmp_args_name_4 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
        tmp_dict_key_4 = const_str_plain_dtype;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_29 = PyCell_GET( par_self );
        tmp_source_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_y );
        if ( tmp_source_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_17 );
            Py_DECREF( tmp_args_name_4 );

            exception_lineno = 235;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_dtype );
        Py_DECREF( tmp_source_name_28 );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_17 );
            Py_DECREF( tmp_args_name_4 );

            exception_lineno = 235;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        frame_c17f3bbdee480a4156149add0a094586->m_frame.f_lineno = 235;
        tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert( var_D == NULL );
        var_D = tmp_assign_source_15;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_source_name_30;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_30 = PyCell_GET( par_self );
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_y );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_D );
        tmp_ass_subscribed_1 = var_D;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_13;
        PyObject *tmp_source_name_31;
        PyObject *tmp_right_name_14;
        PyObject *tmp_source_name_32;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT( var_f );
        tmp_left_name_14 = var_f;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_31 = PyCell_GET( par_self );
        tmp_right_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_h_abs );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_left_name_13 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_32 = PyCell_GET( par_self );
        tmp_right_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_direction );
        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 237;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_13 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_D );
        tmp_ass_subscribed_2 = var_D;
        tmp_ass_subscript_2 = const_int_pos_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_18;
        PyObject *tmp_assattr_target_18;
        CHECK_OBJECT( var_D );
        tmp_assattr_name_18 = var_D;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_18 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_D, tmp_assattr_name_18 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_19;
        PyObject *tmp_assattr_target_19;
        tmp_assattr_name_19 = const_int_pos_1;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_19 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain_order, tmp_assattr_name_19 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_20;
        PyObject *tmp_assattr_target_20;
        tmp_assattr_name_20 = const_int_0;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_20 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain_n_equal_steps, tmp_assattr_name_20 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_21;
        PyObject *tmp_assattr_target_21;
        tmp_assattr_name_21 = Py_None;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_21 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_21, const_str_plain_LU, tmp_assattr_name_21 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "cooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c17f3bbdee480a4156149add0a094586 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c17f3bbdee480a4156149add0a094586 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c17f3bbdee480a4156149add0a094586, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c17f3bbdee480a4156149add0a094586->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c17f3bbdee480a4156149add0a094586, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c17f3bbdee480a4156149add0a094586,
        type_description_1,
        par_self,
        par_fun,
        par_t0,
        par_y0,
        par_t_bound,
        par_max_step,
        par_rtol,
        par_atol,
        par_jac,
        par_jac_sparsity,
        par_vectorized,
        par_first_step,
        par_extraneous,
        var_f,
        var_lu,
        var_solve_lu,
        var_I,
        var_kappa,
        var_D,
        NULL
    );


    // Release cached frame.
    if ( frame_c17f3bbdee480a4156149add0a094586 == cache_frame_c17f3bbdee480a4156149add0a094586 )
    {
        Py_DECREF( frame_c17f3bbdee480a4156149add0a094586 );
    }
    cache_frame_c17f3bbdee480a4156149add0a094586 = NULL;

    assertFrameObject( frame_c17f3bbdee480a4156149add0a094586 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_4___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_t0 );
    Py_DECREF( par_t0 );
    par_t0 = NULL;

    CHECK_OBJECT( (PyObject *)par_y0 );
    Py_DECREF( par_y0 );
    par_y0 = NULL;

    CHECK_OBJECT( (PyObject *)par_t_bound );
    Py_DECREF( par_t_bound );
    par_t_bound = NULL;

    CHECK_OBJECT( (PyObject *)par_max_step );
    Py_DECREF( par_max_step );
    par_max_step = NULL;

    CHECK_OBJECT( (PyObject *)par_rtol );
    Py_DECREF( par_rtol );
    par_rtol = NULL;

    CHECK_OBJECT( (PyObject *)par_atol );
    Py_DECREF( par_atol );
    par_atol = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_jac_sparsity );
    Py_DECREF( par_jac_sparsity );
    par_jac_sparsity = NULL;

    CHECK_OBJECT( (PyObject *)par_vectorized );
    Py_DECREF( par_vectorized );
    par_vectorized = NULL;

    CHECK_OBJECT( (PyObject *)par_first_step );
    Py_DECREF( par_first_step );
    par_first_step = NULL;

    CHECK_OBJECT( (PyObject *)par_extraneous );
    Py_DECREF( par_extraneous );
    par_extraneous = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

    CHECK_OBJECT( (PyObject *)var_lu );
    Py_DECREF( var_lu );
    var_lu = NULL;

    CHECK_OBJECT( (PyObject *)var_solve_lu );
    Py_DECREF( var_solve_lu );
    var_solve_lu = NULL;

    CHECK_OBJECT( (PyObject *)var_I );
    Py_DECREF( var_I );
    var_I = NULL;

    CHECK_OBJECT( (PyObject *)var_kappa );
    Py_DECREF( var_kappa );
    var_kappa = NULL;

    CHECK_OBJECT( (PyObject *)var_D );
    Py_DECREF( var_D );
    var_D = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_t0 );
    Py_DECREF( par_t0 );
    par_t0 = NULL;

    CHECK_OBJECT( (PyObject *)par_y0 );
    Py_DECREF( par_y0 );
    par_y0 = NULL;

    CHECK_OBJECT( (PyObject *)par_t_bound );
    Py_DECREF( par_t_bound );
    par_t_bound = NULL;

    CHECK_OBJECT( (PyObject *)par_max_step );
    Py_DECREF( par_max_step );
    par_max_step = NULL;

    CHECK_OBJECT( (PyObject *)par_rtol );
    Py_DECREF( par_rtol );
    par_rtol = NULL;

    CHECK_OBJECT( (PyObject *)par_atol );
    Py_DECREF( par_atol );
    par_atol = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_jac_sparsity );
    Py_DECREF( par_jac_sparsity );
    par_jac_sparsity = NULL;

    CHECK_OBJECT( (PyObject *)par_vectorized );
    Py_DECREF( par_vectorized );
    par_vectorized = NULL;

    CHECK_OBJECT( (PyObject *)par_first_step );
    Py_DECREF( par_first_step );
    par_first_step = NULL;

    CHECK_OBJECT( (PyObject *)par_extraneous );
    Py_DECREF( par_extraneous );
    par_extraneous = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_lu );
    var_lu = NULL;

    Py_XDECREF( var_solve_lu );
    var_solve_lu = NULL;

    Py_XDECREF( var_I );
    var_I = NULL;

    Py_XDECREF( var_kappa );
    var_kappa = NULL;

    Py_XDECREF( var_D );
    var_D = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_4___init__ );
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


static PyObject *impl_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_1_lu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_cf4752f34c3e2c98d8d09dc233e8d64f;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cf4752f34c3e2c98d8d09dc233e8d64f = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cf4752f34c3e2c98d8d09dc233e8d64f, codeobj_cf4752f34c3e2c98d8d09dc233e8d64f, module_scipy$integrate$_ivp$bdf, sizeof(void *)+sizeof(void *) );
    frame_cf4752f34c3e2c98d8d09dc233e8d64f = cache_frame_cf4752f34c3e2c98d8d09dc233e8d64f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cf4752f34c3e2c98d8d09dc233e8d64f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cf4752f34c3e2c98d8d09dc233e8d64f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 209;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nlu );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oc";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 209;
            type_description_1 = "oc";
            goto try_except_handler_3;
        }

        tmp_assattr_target_1 = PyCell_GET( self->m_closure[0] );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_nlu, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oc";
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

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_splu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_splu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "splu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 210;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_cf4752f34c3e2c98d8d09dc233e8d64f->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf4752f34c3e2c98d8d09dc233e8d64f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf4752f34c3e2c98d8d09dc233e8d64f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf4752f34c3e2c98d8d09dc233e8d64f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cf4752f34c3e2c98d8d09dc233e8d64f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cf4752f34c3e2c98d8d09dc233e8d64f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cf4752f34c3e2c98d8d09dc233e8d64f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cf4752f34c3e2c98d8d09dc233e8d64f,
        type_description_1,
        par_A,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_cf4752f34c3e2c98d8d09dc233e8d64f == cache_frame_cf4752f34c3e2c98d8d09dc233e8d64f )
    {
        Py_DECREF( frame_cf4752f34c3e2c98d8d09dc233e8d64f );
    }
    cache_frame_cf4752f34c3e2c98d8d09dc233e8d64f = NULL;

    assertFrameObject( frame_cf4752f34c3e2c98d8d09dc233e8d64f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_1_lu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_1_lu );
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


static PyObject *impl_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_2_solve_lu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_LU = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_95f5cf08c9b36566790da9b252f5da7e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_95f5cf08c9b36566790da9b252f5da7e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_95f5cf08c9b36566790da9b252f5da7e, codeobj_95f5cf08c9b36566790da9b252f5da7e, module_scipy$integrate$_ivp$bdf, sizeof(void *)+sizeof(void *) );
    frame_95f5cf08c9b36566790da9b252f5da7e = cache_frame_95f5cf08c9b36566790da9b252f5da7e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_95f5cf08c9b36566790da9b252f5da7e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_95f5cf08c9b36566790da9b252f5da7e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_LU );
        tmp_called_instance_1 = par_LU;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_1 = par_b;
        frame_95f5cf08c9b36566790da9b252f5da7e->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_solve, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95f5cf08c9b36566790da9b252f5da7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_95f5cf08c9b36566790da9b252f5da7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95f5cf08c9b36566790da9b252f5da7e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_95f5cf08c9b36566790da9b252f5da7e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_95f5cf08c9b36566790da9b252f5da7e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_95f5cf08c9b36566790da9b252f5da7e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_95f5cf08c9b36566790da9b252f5da7e,
        type_description_1,
        par_LU,
        par_b
    );


    // Release cached frame.
    if ( frame_95f5cf08c9b36566790da9b252f5da7e == cache_frame_95f5cf08c9b36566790da9b252f5da7e )
    {
        Py_DECREF( frame_95f5cf08c9b36566790da9b252f5da7e );
    }
    cache_frame_95f5cf08c9b36566790da9b252f5da7e = NULL;

    assertFrameObject( frame_95f5cf08c9b36566790da9b252f5da7e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_2_solve_lu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_LU );
    Py_DECREF( par_LU );
    par_LU = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

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

    CHECK_OBJECT( (PyObject *)par_LU );
    Py_DECREF( par_LU );
    par_LU = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_2_solve_lu );
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


static PyObject *impl_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_3_lu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_78b254c9cc2f069c4ff5e161a04b65b2;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_78b254c9cc2f069c4ff5e161a04b65b2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_78b254c9cc2f069c4ff5e161a04b65b2, codeobj_78b254c9cc2f069c4ff5e161a04b65b2, module_scipy$integrate$_ivp$bdf, sizeof(void *)+sizeof(void *) );
    frame_78b254c9cc2f069c4ff5e161a04b65b2 = cache_frame_78b254c9cc2f069c4ff5e161a04b65b2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_78b254c9cc2f069c4ff5e161a04b65b2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_78b254c9cc2f069c4ff5e161a04b65b2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 218;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nlu );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oc";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 218;
            type_description_1 = "oc";
            goto try_except_handler_3;
        }

        tmp_assattr_target_1 = PyCell_GET( self->m_closure[0] );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_nlu, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oc";
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

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_lu_factor );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lu_factor );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "lu_factor" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 219;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_ec6cc0116ef299a274b2baadbcdeac09 );
        frame_78b254c9cc2f069c4ff5e161a04b65b2->m_frame.f_lineno = 219;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78b254c9cc2f069c4ff5e161a04b65b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_78b254c9cc2f069c4ff5e161a04b65b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78b254c9cc2f069c4ff5e161a04b65b2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_78b254c9cc2f069c4ff5e161a04b65b2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_78b254c9cc2f069c4ff5e161a04b65b2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_78b254c9cc2f069c4ff5e161a04b65b2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_78b254c9cc2f069c4ff5e161a04b65b2,
        type_description_1,
        par_A,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_78b254c9cc2f069c4ff5e161a04b65b2 == cache_frame_78b254c9cc2f069c4ff5e161a04b65b2 )
    {
        Py_DECREF( frame_78b254c9cc2f069c4ff5e161a04b65b2 );
    }
    cache_frame_78b254c9cc2f069c4ff5e161a04b65b2 = NULL;

    assertFrameObject( frame_78b254c9cc2f069c4ff5e161a04b65b2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_3_lu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_3_lu );
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


static PyObject *impl_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_4_solve_lu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_LU = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_9f12684d3cf3d17155e8be202d7c806f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9f12684d3cf3d17155e8be202d7c806f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9f12684d3cf3d17155e8be202d7c806f, codeobj_9f12684d3cf3d17155e8be202d7c806f, module_scipy$integrate$_ivp$bdf, sizeof(void *)+sizeof(void *) );
    frame_9f12684d3cf3d17155e8be202d7c806f = cache_frame_9f12684d3cf3d17155e8be202d7c806f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9f12684d3cf3d17155e8be202d7c806f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9f12684d3cf3d17155e8be202d7c806f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_lu_solve );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lu_solve );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "lu_solve" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_LU );
        tmp_tuple_element_1 = par_LU;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_b );
        tmp_tuple_element_1 = par_b;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_8837fe4bb3a549694f7f0fd86cdb8b13 );
        frame_9f12684d3cf3d17155e8be202d7c806f->m_frame.f_lineno = 222;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f12684d3cf3d17155e8be202d7c806f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f12684d3cf3d17155e8be202d7c806f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f12684d3cf3d17155e8be202d7c806f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9f12684d3cf3d17155e8be202d7c806f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9f12684d3cf3d17155e8be202d7c806f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9f12684d3cf3d17155e8be202d7c806f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9f12684d3cf3d17155e8be202d7c806f,
        type_description_1,
        par_LU,
        par_b
    );


    // Release cached frame.
    if ( frame_9f12684d3cf3d17155e8be202d7c806f == cache_frame_9f12684d3cf3d17155e8be202d7c806f )
    {
        Py_DECREF( frame_9f12684d3cf3d17155e8be202d7c806f );
    }
    cache_frame_9f12684d3cf3d17155e8be202d7c806f = NULL;

    assertFrameObject( frame_9f12684d3cf3d17155e8be202d7c806f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_4_solve_lu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_LU );
    Py_DECREF( par_LU );
    par_LU = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

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

    CHECK_OBJECT( (PyObject *)par_LU );
    Py_DECREF( par_LU );
    par_LU = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_4_solve_lu );
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


static PyObject *impl_scipy$integrate$_ivp$bdf$$$function_5__validate_jac( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_jac = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_sparsity = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *var_t0 = NULL;
    struct Nuitka_CellObject *var_y0 = PyCell_EMPTY();
    PyObject *var_groups = NULL;
    PyObject *var_jac_wrapped = NULL;
    PyObject *var_J = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_1bdbc33bacebda932096501eb70314f9;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1bdbc33bacebda932096501eb70314f9 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1bdbc33bacebda932096501eb70314f9, codeobj_1bdbc33bacebda932096501eb70314f9, module_scipy$integrate$_ivp$bdf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1bdbc33bacebda932096501eb70314f9 = cache_frame_1bdbc33bacebda932096501eb70314f9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1bdbc33bacebda932096501eb70314f9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1bdbc33bacebda932096501eb70314f9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_1 = PyCell_GET( par_self );
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_t );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 245;
            type_description_1 = "cccocooo";
            goto frame_exception_exit_1;
        }
        assert( var_t0 == NULL );
        var_t0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_2 = PyCell_GET( par_self );
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_y );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "cccocooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_y0 ) == NULL );
        PyCell_SET( var_y0, tmp_assign_source_2 );

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( PyCell_GET( par_jac ) );
        tmp_compexpr_left_1 = PyCell_GET( par_jac );
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( PyCell_GET( par_sparsity ) );
            tmp_compexpr_left_2 = PyCell_GET( par_sparsity );
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
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                int tmp_truth_name_1;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_issparse );

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

                    exception_lineno = 250;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_1;
                CHECK_OBJECT( PyCell_GET( par_sparsity ) );
                tmp_args_element_name_1 = PyCell_GET( par_sparsity );
                frame_1bdbc33bacebda932096501eb70314f9->m_frame.f_lineno = 250;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 250;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
                if ( tmp_truth_name_1 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_1 );

                    exception_lineno = 250;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_1 );
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
                    PyObject *tmp_assign_source_3;
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_mvar_value_2;
                    PyObject *tmp_args_element_name_2;
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_csc_matrix );

                    if (unlikely( tmp_mvar_value_2 == NULL ))
                    {
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
                    }

                    if ( tmp_mvar_value_2 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csc_matrix" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 251;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_2 = tmp_mvar_value_2;
                    CHECK_OBJECT( PyCell_GET( par_sparsity ) );
                    tmp_args_element_name_2 = PyCell_GET( par_sparsity );
                    frame_1bdbc33bacebda932096501eb70314f9->m_frame.f_lineno = 251;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2 };
                        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                    }

                    if ( tmp_assign_source_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 251;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = PyCell_GET( par_sparsity );
                        PyCell_SET( par_sparsity, tmp_assign_source_3 );
                        Py_XDECREF( old );
                    }

                }
                branch_no_3:;
            }
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_group_columns );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_group_columns );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "group_columns" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 252;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_3;
                CHECK_OBJECT( PyCell_GET( par_sparsity ) );
                tmp_args_element_name_3 = PyCell_GET( par_sparsity );
                frame_1bdbc33bacebda932096501eb70314f9->m_frame.f_lineno = 252;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 252;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                assert( var_groups == NULL );
                var_groups = tmp_assign_source_4;
            }
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_tuple_element_1;
                CHECK_OBJECT( PyCell_GET( par_sparsity ) );
                tmp_tuple_element_1 = PyCell_GET( par_sparsity );
                tmp_assign_source_5 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( var_groups );
                tmp_tuple_element_1 = var_groups;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_assign_source_5, 1, tmp_tuple_element_1 );
                {
                    PyObject *old = PyCell_GET( par_sparsity );
                    PyCell_SET( par_sparsity, tmp_assign_source_5 );
                    Py_XDECREF( old );
                }

            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_1_jac_wrapped(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[0] = par_self;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[1] = par_sparsity;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[1] );


            assert( var_jac_wrapped == NULL );
            var_jac_wrapped = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( var_jac_wrapped );
            tmp_called_name_4 = var_jac_wrapped;
            CHECK_OBJECT( var_t0 );
            tmp_args_element_name_4 = var_t0;
            CHECK_OBJECT( PyCell_GET( var_y0 ) );
            tmp_args_element_name_5 = PyCell_GET( var_y0 );
            frame_1bdbc33bacebda932096501eb70314f9->m_frame.f_lineno = 262;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;
                type_description_1 = "cccocooo";
                goto frame_exception_exit_1;
            }
            assert( var_J == NULL );
            var_J = tmp_assign_source_7;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_6;
            int tmp_truth_name_2;
            tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_callable );
            assert( tmp_called_name_5 != NULL );
            CHECK_OBJECT( PyCell_GET( par_jac ) );
            tmp_args_element_name_6 = PyCell_GET( par_jac );
            frame_1bdbc33bacebda932096501eb70314f9->m_frame.f_lineno = 263;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_1 = "cccocooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 263;
                type_description_1 = "cccocooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
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
                PyObject *tmp_assign_source_8;
                PyObject *tmp_called_name_6;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_args_element_name_8;
                CHECK_OBJECT( PyCell_GET( par_jac ) );
                tmp_called_name_6 = PyCell_GET( par_jac );
                CHECK_OBJECT( var_t0 );
                tmp_args_element_name_7 = var_t0;
                CHECK_OBJECT( PyCell_GET( var_y0 ) );
                tmp_args_element_name_8 = PyCell_GET( var_y0 );
                frame_1bdbc33bacebda932096501eb70314f9->m_frame.f_lineno = 264;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
                }

                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 264;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                assert( var_J == NULL );
                var_J = tmp_assign_source_8;
            }
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_source_name_3;
                CHECK_OBJECT( PyCell_GET( par_self ) );
                tmp_source_name_3 = PyCell_GET( par_self );
                tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_njev );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 265;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_inplace_assign_attr_1__start == NULL );
                tmp_inplace_assign_attr_1__start = tmp_assign_source_9;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
                tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
                tmp_right_name_1 = const_int_pos_1;
                tmp_assign_source_10 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 265;
                    type_description_1 = "cccocooo";
                    goto try_except_handler_2;
                }
                assert( tmp_inplace_assign_attr_1__end == NULL );
                tmp_inplace_assign_attr_1__end = tmp_assign_source_10;
            }
            // Tried code:
            {
                PyObject *tmp_assattr_name_1;
                PyObject *tmp_assattr_target_1;
                CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
                tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
                CHECK_OBJECT( PyCell_GET( par_self ) );
                tmp_assattr_target_1 = PyCell_GET( par_self );
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_njev, tmp_assattr_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 265;
                    type_description_1 = "cccocooo";
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

            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_called_name_7;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_9;
                int tmp_truth_name_3;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_issparse );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issparse );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "issparse" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 266;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_7 = tmp_mvar_value_4;
                CHECK_OBJECT( var_J );
                tmp_args_element_name_9 = var_J;
                frame_1bdbc33bacebda932096501eb70314f9->m_frame.f_lineno = 266;
                {
                    PyObject *call_args[] = { tmp_args_element_name_9 };
                    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                }

                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 266;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_3 );
                if ( tmp_truth_name_3 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_3 );

                    exception_lineno = 266;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_5 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_3 );
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
                    PyObject *tmp_called_name_8;
                    PyObject *tmp_mvar_value_5;
                    PyObject *tmp_args_name_1;
                    PyObject *tmp_tuple_element_2;
                    PyObject *tmp_kw_name_1;
                    PyObject *tmp_dict_key_1;
                    PyObject *tmp_dict_value_1;
                    PyObject *tmp_source_name_4;
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_csc_matrix );

                    if (unlikely( tmp_mvar_value_5 == NULL ))
                    {
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
                    }

                    if ( tmp_mvar_value_5 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csc_matrix" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 267;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_8 = tmp_mvar_value_5;
                    CHECK_OBJECT( var_J );
                    tmp_tuple_element_2 = var_J;
                    tmp_args_name_1 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_2 );
                    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
                    tmp_dict_key_1 = const_str_plain_dtype;
                    CHECK_OBJECT( PyCell_GET( var_y0 ) );
                    tmp_source_name_4 = PyCell_GET( var_y0 );
                    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
                    if ( tmp_dict_value_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_args_name_1 );

                        exception_lineno = 267;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                    Py_DECREF( tmp_dict_value_1 );
                    assert( !(tmp_res != 0) );
                    frame_1bdbc33bacebda932096501eb70314f9->m_frame.f_lineno = 267;
                    tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_1, tmp_kw_name_1 );
                    Py_DECREF( tmp_args_name_1 );
                    Py_DECREF( tmp_kw_name_1 );
                    if ( tmp_assign_source_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 267;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_J;
                        assert( old != NULL );
                        var_J = tmp_assign_source_11;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_12;
                    tmp_assign_source_12 = MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_2_jac_wrapped(  );

                    ((struct Nuitka_FunctionObject *)tmp_assign_source_12)->m_closure[0] = par_jac;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_12)->m_closure[0] );
                    ((struct Nuitka_FunctionObject *)tmp_assign_source_12)->m_closure[1] = par_self;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_12)->m_closure[1] );
                    ((struct Nuitka_FunctionObject *)tmp_assign_source_12)->m_closure[2] = var_y0;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_12)->m_closure[2] );


                    assert( var_jac_wrapped == NULL );
                    var_jac_wrapped = tmp_assign_source_12;
                }
                goto branch_end_5;
                branch_no_5:;
                {
                    PyObject *tmp_assign_source_13;
                    PyObject *tmp_called_name_9;
                    PyObject *tmp_source_name_5;
                    PyObject *tmp_mvar_value_6;
                    PyObject *tmp_args_name_2;
                    PyObject *tmp_tuple_element_3;
                    PyObject *tmp_kw_name_2;
                    PyObject *tmp_dict_key_2;
                    PyObject *tmp_dict_value_2;
                    PyObject *tmp_source_name_6;
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 273;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_5 = tmp_mvar_value_6;
                    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_asarray );
                    if ( tmp_called_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 273;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_J );
                    tmp_tuple_element_3 = var_J;
                    tmp_args_name_2 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_3 );
                    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
                    tmp_dict_key_2 = const_str_plain_dtype;
                    CHECK_OBJECT( PyCell_GET( var_y0 ) );
                    tmp_source_name_6 = PyCell_GET( var_y0 );
                    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
                    if ( tmp_dict_value_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_9 );
                        Py_DECREF( tmp_args_name_2 );

                        exception_lineno = 273;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
                    Py_DECREF( tmp_dict_value_2 );
                    assert( !(tmp_res != 0) );
                    frame_1bdbc33bacebda932096501eb70314f9->m_frame.f_lineno = 273;
                    tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_2, tmp_kw_name_2 );
                    Py_DECREF( tmp_called_name_9 );
                    Py_DECREF( tmp_args_name_2 );
                    Py_DECREF( tmp_kw_name_2 );
                    if ( tmp_assign_source_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 273;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_J;
                        assert( old != NULL );
                        var_J = tmp_assign_source_13;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_14;
                    tmp_assign_source_14 = MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_3_jac_wrapped(  );

                    ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[0] = par_jac;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[0] );
                    ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[1] = par_self;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[1] );
                    ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[2] = var_y0;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[2] );


                    assert( var_jac_wrapped == NULL );
                    var_jac_wrapped = tmp_assign_source_14;
                }
                branch_end_5:;
            }
            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_source_name_7;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_source_name_8;
                PyObject *tmp_source_name_9;
                CHECK_OBJECT( var_J );
                tmp_source_name_7 = var_J;
                tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
                if ( tmp_compexpr_left_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 279;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( PyCell_GET( par_self ) );
                tmp_source_name_8 = PyCell_GET( par_self );
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_n );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_3 );

                    exception_lineno = 279;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_compexpr_right_3, 0, tmp_tuple_element_4 );
                CHECK_OBJECT( PyCell_GET( par_self ) );
                tmp_source_name_9 = PyCell_GET( par_self );
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_n );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_3 );
                    Py_DECREF( tmp_compexpr_right_3 );

                    exception_lineno = 279;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_compexpr_right_3, 1, tmp_tuple_element_4 );
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                Py_DECREF( tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 279;
                    type_description_1 = "cccocooo";
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
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_make_exception_arg_1;
                    PyObject *tmp_called_name_10;
                    PyObject *tmp_source_name_10;
                    PyObject *tmp_args_element_name_10;
                    PyObject *tmp_tuple_element_5;
                    PyObject *tmp_source_name_11;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_args_element_name_11;
                    PyObject *tmp_source_name_13;
                    tmp_source_name_10 = const_str_digest_b45be6e078995041cc113ab76fa71535;
                    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_format );
                    assert( !(tmp_called_name_10 == NULL) );
                    CHECK_OBJECT( PyCell_GET( par_self ) );
                    tmp_source_name_11 = PyCell_GET( par_self );
                    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_n );
                    if ( tmp_tuple_element_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );

                        exception_lineno = 282;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_element_name_10 = PyTuple_New( 2 );
                    PyTuple_SET_ITEM( tmp_args_element_name_10, 0, tmp_tuple_element_5 );
                    CHECK_OBJECT( PyCell_GET( par_self ) );
                    tmp_source_name_12 = PyCell_GET( par_self );
                    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_n );
                    if ( tmp_tuple_element_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );
                        Py_DECREF( tmp_args_element_name_10 );

                        exception_lineno = 282;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    PyTuple_SET_ITEM( tmp_args_element_name_10, 1, tmp_tuple_element_5 );
                    CHECK_OBJECT( var_J );
                    tmp_source_name_13 = var_J;
                    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_shape );
                    if ( tmp_args_element_name_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );
                        Py_DECREF( tmp_args_element_name_10 );

                        exception_lineno = 282;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    frame_1bdbc33bacebda932096501eb70314f9->m_frame.f_lineno = 280;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
                        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
                    }

                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_args_element_name_10 );
                    Py_DECREF( tmp_args_element_name_11 );
                    if ( tmp_make_exception_arg_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 280;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    frame_1bdbc33bacebda932096501eb70314f9->m_frame.f_lineno = 280;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_1 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_1 );
                    assert( !(tmp_raise_type_1 == NULL) );
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 280;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                branch_no_6:;
            }
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_called_name_11;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_12;
                int tmp_truth_name_4;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_issparse );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issparse );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "issparse" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 284;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_11 = tmp_mvar_value_7;
                CHECK_OBJECT( PyCell_GET( par_jac ) );
                tmp_args_element_name_12 = PyCell_GET( par_jac );
                frame_1bdbc33bacebda932096501eb70314f9->m_frame.f_lineno = 284;
                {
                    PyObject *call_args[] = { tmp_args_element_name_12 };
                    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
                }

                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 284;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_4 );
                if ( tmp_truth_name_4 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_4 );

                    exception_lineno = 284;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_7 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_4 );
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
                    PyObject *tmp_assign_source_15;
                    PyObject *tmp_called_name_12;
                    PyObject *tmp_mvar_value_8;
                    PyObject *tmp_args_name_3;
                    PyObject *tmp_tuple_element_6;
                    PyObject *tmp_kw_name_3;
                    PyObject *tmp_dict_key_3;
                    PyObject *tmp_dict_value_3;
                    PyObject *tmp_source_name_14;
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_csc_matrix );

                    if (unlikely( tmp_mvar_value_8 == NULL ))
                    {
                        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
                    }

                    if ( tmp_mvar_value_8 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csc_matrix" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 285;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_12 = tmp_mvar_value_8;
                    CHECK_OBJECT( PyCell_GET( par_jac ) );
                    tmp_tuple_element_6 = PyCell_GET( par_jac );
                    tmp_args_name_3 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_6 );
                    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
                    tmp_dict_key_3 = const_str_plain_dtype;
                    CHECK_OBJECT( PyCell_GET( var_y0 ) );
                    tmp_source_name_14 = PyCell_GET( var_y0 );
                    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_dtype );
                    if ( tmp_dict_value_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_args_name_3 );

                        exception_lineno = 285;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
                    Py_DECREF( tmp_dict_value_3 );
                    assert( !(tmp_res != 0) );
                    frame_1bdbc33bacebda932096501eb70314f9->m_frame.f_lineno = 285;
                    tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_3, tmp_kw_name_3 );
                    Py_DECREF( tmp_args_name_3 );
                    Py_DECREF( tmp_kw_name_3 );
                    if ( tmp_assign_source_15 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 285;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_J == NULL );
                    var_J = tmp_assign_source_15;
                }
                goto branch_end_7;
                branch_no_7:;
                {
                    PyObject *tmp_assign_source_16;
                    PyObject *tmp_called_name_13;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_mvar_value_9;
                    PyObject *tmp_args_name_4;
                    PyObject *tmp_tuple_element_7;
                    PyObject *tmp_kw_name_4;
                    PyObject *tmp_dict_key_4;
                    PyObject *tmp_dict_value_4;
                    PyObject *tmp_source_name_16;
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 287;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_15 = tmp_mvar_value_9;
                    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_asarray );
                    if ( tmp_called_name_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 287;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( PyCell_GET( par_jac ) );
                    tmp_tuple_element_7 = PyCell_GET( par_jac );
                    tmp_args_name_4 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_7 );
                    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_7 );
                    tmp_dict_key_4 = const_str_plain_dtype;
                    CHECK_OBJECT( PyCell_GET( var_y0 ) );
                    tmp_source_name_16 = PyCell_GET( var_y0 );
                    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_dtype );
                    if ( tmp_dict_value_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_13 );
                        Py_DECREF( tmp_args_name_4 );

                        exception_lineno = 287;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_kw_name_4 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4 );
                    Py_DECREF( tmp_dict_value_4 );
                    assert( !(tmp_res != 0) );
                    frame_1bdbc33bacebda932096501eb70314f9->m_frame.f_lineno = 287;
                    tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_4, tmp_kw_name_4 );
                    Py_DECREF( tmp_called_name_13 );
                    Py_DECREF( tmp_args_name_4 );
                    Py_DECREF( tmp_kw_name_4 );
                    if ( tmp_assign_source_16 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 287;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_J == NULL );
                    var_J = tmp_assign_source_16;
                }
                branch_end_7:;
            }
            {
                nuitka_bool tmp_condition_result_8;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_source_name_17;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_source_name_18;
                PyObject *tmp_source_name_19;
                CHECK_OBJECT( var_J );
                tmp_source_name_17 = var_J;
                tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_shape );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 289;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( PyCell_GET( par_self ) );
                tmp_source_name_18 = PyCell_GET( par_self );
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_n );
                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );

                    exception_lineno = 289;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_compexpr_right_4, 0, tmp_tuple_element_8 );
                CHECK_OBJECT( PyCell_GET( par_self ) );
                tmp_source_name_19 = PyCell_GET( par_self );
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_n );
                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );
                    Py_DECREF( tmp_compexpr_right_4 );

                    exception_lineno = 289;
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_compexpr_right_4, 1, tmp_tuple_element_8 );
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                Py_DECREF( tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 289;
                    type_description_1 = "cccocooo";
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
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_make_exception_arg_2;
                    PyObject *tmp_called_name_14;
                    PyObject *tmp_source_name_20;
                    PyObject *tmp_args_element_name_13;
                    PyObject *tmp_tuple_element_9;
                    PyObject *tmp_source_name_21;
                    PyObject *tmp_source_name_22;
                    PyObject *tmp_args_element_name_14;
                    PyObject *tmp_source_name_23;
                    tmp_source_name_20 = const_str_digest_b45be6e078995041cc113ab76fa71535;
                    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_format );
                    assert( !(tmp_called_name_14 == NULL) );
                    CHECK_OBJECT( PyCell_GET( par_self ) );
                    tmp_source_name_21 = PyCell_GET( par_self );
                    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_n );
                    if ( tmp_tuple_element_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_14 );

                        exception_lineno = 292;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_element_name_13 = PyTuple_New( 2 );
                    PyTuple_SET_ITEM( tmp_args_element_name_13, 0, tmp_tuple_element_9 );
                    CHECK_OBJECT( PyCell_GET( par_self ) );
                    tmp_source_name_22 = PyCell_GET( par_self );
                    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_n );
                    if ( tmp_tuple_element_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_14 );
                        Py_DECREF( tmp_args_element_name_13 );

                        exception_lineno = 292;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    PyTuple_SET_ITEM( tmp_args_element_name_13, 1, tmp_tuple_element_9 );
                    CHECK_OBJECT( var_J );
                    tmp_source_name_23 = var_J;
                    tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_shape );
                    if ( tmp_args_element_name_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_14 );
                        Py_DECREF( tmp_args_element_name_13 );

                        exception_lineno = 292;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    frame_1bdbc33bacebda932096501eb70314f9->m_frame.f_lineno = 290;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                        tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
                    }

                    Py_DECREF( tmp_called_name_14 );
                    Py_DECREF( tmp_args_element_name_13 );
                    Py_DECREF( tmp_args_element_name_14 );
                    if ( tmp_make_exception_arg_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 290;
                        type_description_1 = "cccocooo";
                        goto frame_exception_exit_1;
                    }
                    frame_1bdbc33bacebda932096501eb70314f9->m_frame.f_lineno = 290;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_2 };
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_2 );
                    assert( !(tmp_raise_type_2 == NULL) );
                    exception_type = tmp_raise_type_2;
                    exception_lineno = 290;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "cccocooo";
                    goto frame_exception_exit_1;
                }
                branch_no_8:;
            }
            {
                PyObject *tmp_assign_source_17;
                tmp_assign_source_17 = Py_None;
                assert( var_jac_wrapped == NULL );
                Py_INCREF( tmp_assign_source_17 );
                var_jac_wrapped = tmp_assign_source_17;
            }
            branch_end_4:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_tuple_element_10;
        if ( var_jac_wrapped == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac_wrapped" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 295;
            type_description_1 = "cccocooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_10 = var_jac_wrapped;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_10 );
        if ( var_J == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 295;
            type_description_1 = "cccocooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_10 = var_J;
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_10 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1bdbc33bacebda932096501eb70314f9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1bdbc33bacebda932096501eb70314f9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1bdbc33bacebda932096501eb70314f9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1bdbc33bacebda932096501eb70314f9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1bdbc33bacebda932096501eb70314f9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1bdbc33bacebda932096501eb70314f9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1bdbc33bacebda932096501eb70314f9,
        type_description_1,
        par_self,
        par_jac,
        par_sparsity,
        var_t0,
        var_y0,
        var_groups,
        var_jac_wrapped,
        var_J
    );


    // Release cached frame.
    if ( frame_1bdbc33bacebda932096501eb70314f9 == cache_frame_1bdbc33bacebda932096501eb70314f9 )
    {
        Py_DECREF( frame_1bdbc33bacebda932096501eb70314f9 );
    }
    cache_frame_1bdbc33bacebda932096501eb70314f9 = NULL;

    assertFrameObject( frame_1bdbc33bacebda932096501eb70314f9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_5__validate_jac );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_sparsity );
    Py_DECREF( par_sparsity );
    par_sparsity = NULL;

    CHECK_OBJECT( (PyObject *)var_t0 );
    Py_DECREF( var_t0 );
    var_t0 = NULL;

    CHECK_OBJECT( (PyObject *)var_y0 );
    Py_DECREF( var_y0 );
    var_y0 = NULL;

    Py_XDECREF( var_groups );
    var_groups = NULL;

    Py_XDECREF( var_jac_wrapped );
    var_jac_wrapped = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_sparsity );
    Py_DECREF( par_sparsity );
    par_sparsity = NULL;

    Py_XDECREF( var_t0 );
    var_t0 = NULL;

    CHECK_OBJECT( (PyObject *)var_y0 );
    Py_DECREF( var_y0 );
    var_y0 = NULL;

    Py_XDECREF( var_groups );
    var_groups = NULL;

    Py_XDECREF( var_jac_wrapped );
    var_jac_wrapped = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_5__validate_jac );
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


static PyObject *impl_scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_1_jac_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *var_f = NULL;
    PyObject *var_J = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_76e9fb26bd703142089e04284d95d022;
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
    static struct Nuitka_FrameObject *cache_frame_76e9fb26bd703142089e04284d95d022 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_76e9fb26bd703142089e04284d95d022, codeobj_76e9fb26bd703142089e04284d95d022, module_scipy$integrate$_ivp$bdf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_76e9fb26bd703142089e04284d95d022 = cache_frame_76e9fb26bd703142089e04284d95d022;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_76e9fb26bd703142089e04284d95d022 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_76e9fb26bd703142089e04284d95d022 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 256;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_njev );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 256;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }

        tmp_assattr_target_1 = PyCell_GET( self->m_closure[0] );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_njev, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "oooocc";
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

    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 257;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_t );
        tmp_args_element_name_1 = par_t;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_2 = par_y;
        frame_76e9fb26bd703142089e04284d95d022->m_frame.f_lineno = 257;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_fun_single, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 257;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert( var_f == NULL );
        var_f = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_num_jac );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_num_jac );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "num_jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 258;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 258;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }

        tmp_source_name_2 = PyCell_GET( self->m_closure[0] );
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fun_vectorized );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_t );
        tmp_args_element_name_4 = par_t;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_5 = par_y;
        CHECK_OBJECT( var_f );
        tmp_args_element_name_6 = var_f;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_args_element_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 259;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }

        tmp_source_name_3 = PyCell_GET( self->m_closure[0] );
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_atol );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 259;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 259;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }

        tmp_source_name_4 = PyCell_GET( self->m_closure[0] );
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_jac_factor );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 259;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_args_element_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "sparsity" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 260;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }

        tmp_args_element_name_9 = PyCell_GET( self->m_closure[1] );
        frame_76e9fb26bd703142089e04284d95d022->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
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


            type_description_1 = "oooocc";
            exception_lineno = 258;
            goto try_except_handler_5;
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


            type_description_1 = "oooocc";
            exception_lineno = 258;
            goto try_except_handler_5;
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

                    type_description_1 = "oooocc";
                    exception_lineno = 258;
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

            type_description_1 = "oooocc";
            exception_lineno = 258;
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
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert( var_J == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_J = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assattr_name_2 = tmp_tuple_unpack_1__element_2;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 258;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }

        tmp_assattr_target_2 = PyCell_GET( self->m_closure[0] );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_jac_factor, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
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
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76e9fb26bd703142089e04284d95d022 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76e9fb26bd703142089e04284d95d022 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_76e9fb26bd703142089e04284d95d022, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_76e9fb26bd703142089e04284d95d022->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_76e9fb26bd703142089e04284d95d022, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_76e9fb26bd703142089e04284d95d022,
        type_description_1,
        par_t,
        par_y,
        var_f,
        var_J,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_76e9fb26bd703142089e04284d95d022 == cache_frame_76e9fb26bd703142089e04284d95d022 )
    {
        Py_DECREF( frame_76e9fb26bd703142089e04284d95d022 );
    }
    cache_frame_76e9fb26bd703142089e04284d95d022 = NULL;

    assertFrameObject( frame_76e9fb26bd703142089e04284d95d022 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    CHECK_OBJECT( var_J );
    tmp_return_value = var_J;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_1_jac_wrapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

    CHECK_OBJECT( (PyObject *)var_J );
    Py_DECREF( var_J );
    var_J = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_1_jac_wrapped );
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


static PyObject *impl_scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_2_jac_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_ad40374362cb1154b16f15240b01ac4b;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ad40374362cb1154b16f15240b01ac4b = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ad40374362cb1154b16f15240b01ac4b, codeobj_ad40374362cb1154b16f15240b01ac4b, module_scipy$integrate$_ivp$bdf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ad40374362cb1154b16f15240b01ac4b = cache_frame_ad40374362cb1154b16f15240b01ac4b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ad40374362cb1154b16f15240b01ac4b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ad40374362cb1154b16f15240b01ac4b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 270;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_njev );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "ooccc";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 270;
            type_description_1 = "ooccc";
            goto try_except_handler_3;
        }

        tmp_assattr_target_1 = PyCell_GET( self->m_closure[1] );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_njev, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "ooccc";
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

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_csc_matrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csc_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 271;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 271;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_t );
        tmp_args_element_name_1 = par_t;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_2 = par_y;
        frame_ad40374362cb1154b16f15240b01ac4b->m_frame.f_lineno = 271;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 271;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_dtype;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "y0" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 271;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = PyCell_GET( self->m_closure[2] );
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 271;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_ad40374362cb1154b16f15240b01ac4b->m_frame.f_lineno = 271;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 271;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad40374362cb1154b16f15240b01ac4b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad40374362cb1154b16f15240b01ac4b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad40374362cb1154b16f15240b01ac4b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ad40374362cb1154b16f15240b01ac4b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ad40374362cb1154b16f15240b01ac4b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ad40374362cb1154b16f15240b01ac4b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ad40374362cb1154b16f15240b01ac4b,
        type_description_1,
        par_t,
        par_y,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_ad40374362cb1154b16f15240b01ac4b == cache_frame_ad40374362cb1154b16f15240b01ac4b )
    {
        Py_DECREF( frame_ad40374362cb1154b16f15240b01ac4b );
    }
    cache_frame_ad40374362cb1154b16f15240b01ac4b = NULL;

    assertFrameObject( frame_ad40374362cb1154b16f15240b01ac4b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_2_jac_wrapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_2_jac_wrapped );
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


static PyObject *impl_scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_3_jac_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_36f09ffbcdc6f54fb757cd2957710124;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_36f09ffbcdc6f54fb757cd2957710124 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_36f09ffbcdc6f54fb757cd2957710124, codeobj_36f09ffbcdc6f54fb757cd2957710124, module_scipy$integrate$_ivp$bdf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_36f09ffbcdc6f54fb757cd2957710124 = cache_frame_36f09ffbcdc6f54fb757cd2957710124;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_36f09ffbcdc6f54fb757cd2957710124 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_36f09ffbcdc6f54fb757cd2957710124 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 276;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_njev );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "ooccc";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 276;
            type_description_1 = "ooccc";
            goto try_except_handler_3;
        }

        tmp_assattr_target_1 = PyCell_GET( self->m_closure[1] );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_njev, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "ooccc";
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

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 277;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_t );
        tmp_args_element_name_1 = par_t;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_2 = par_y;
        frame_36f09ffbcdc6f54fb757cd2957710124->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 277;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_dtype;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "y0" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = PyCell_GET( self->m_closure[2] );
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 277;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_36f09ffbcdc6f54fb757cd2957710124->m_frame.f_lineno = 277;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_36f09ffbcdc6f54fb757cd2957710124 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_36f09ffbcdc6f54fb757cd2957710124 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_36f09ffbcdc6f54fb757cd2957710124 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_36f09ffbcdc6f54fb757cd2957710124, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_36f09ffbcdc6f54fb757cd2957710124->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_36f09ffbcdc6f54fb757cd2957710124, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_36f09ffbcdc6f54fb757cd2957710124,
        type_description_1,
        par_t,
        par_y,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_36f09ffbcdc6f54fb757cd2957710124 == cache_frame_36f09ffbcdc6f54fb757cd2957710124 )
    {
        Py_DECREF( frame_36f09ffbcdc6f54fb757cd2957710124 );
    }
    cache_frame_36f09ffbcdc6f54fb757cd2957710124 = NULL;

    assertFrameObject( frame_36f09ffbcdc6f54fb757cd2957710124 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_3_jac_wrapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_3_jac_wrapped );
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


static PyObject *impl_scipy$integrate$_ivp$bdf$$$function_6__step_impl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_t = NULL;
    PyObject *var_D = NULL;
    PyObject *var_max_step = NULL;
    PyObject *var_min_step = NULL;
    PyObject *var_h_abs = NULL;
    PyObject *var_atol = NULL;
    PyObject *var_rtol = NULL;
    PyObject *var_order = NULL;
    PyObject *var_alpha = NULL;
    PyObject *var_gamma = NULL;
    PyObject *var_error_const = NULL;
    PyObject *var_J = NULL;
    PyObject *var_LU = NULL;
    PyObject *var_current_jac = NULL;
    PyObject *var_step_accepted = NULL;
    PyObject *var_h = NULL;
    PyObject *var_t_new = NULL;
    PyObject *var_y_predict = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_psi = NULL;
    PyObject *var_converged = NULL;
    PyObject *var_c = NULL;
    PyObject *var_n_iter = NULL;
    PyObject *var_y_new = NULL;
    PyObject *var_d = NULL;
    PyObject *var_factor = NULL;
    PyObject *var_safety = NULL;
    PyObject *var_error = NULL;
    PyObject *var_error_norm = NULL;
    PyObject *var_i = NULL;
    PyObject *var_error_m = NULL;
    PyObject *var_error_m_norm = NULL;
    PyObject *var_error_p = NULL;
    PyObject *var_error_p_norm = NULL;
    PyObject *var_error_norms = NULL;
    PyObject *var_factors = NULL;
    PyObject *var_delta_order = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_a0db20aff1310f08134c1c2edb5f1f12;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
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
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    static struct Nuitka_FrameObject *cache_frame_a0db20aff1310f08134c1c2edb5f1f12 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a0db20aff1310f08134c1c2edb5f1f12, codeobj_a0db20aff1310f08134c1c2edb5f1f12, module_scipy$integrate$_ivp$bdf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a0db20aff1310f08134c1c2edb5f1f12 = cache_frame_a0db20aff1310f08134c1c2edb5f1f12;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a0db20aff1310f08134c1c2edb5f1f12 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a0db20aff1310f08134c1c2edb5f1f12 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_t );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_t == NULL );
        var_t = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_D );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_D == NULL );
        var_D = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_max_step );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_max_step == NULL );
        var_max_step = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_right_name_3;
        tmp_left_name_1 = const_int_pos_10;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_abs );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_nextafter );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_t );
        tmp_args_element_name_2 = var_t;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_direction );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_3;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_inf );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 302;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_t );
        tmp_right_name_3 = var_t;
        tmp_args_element_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 302;
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


            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_min_step == NULL );
        var_min_step = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_h_abs );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_max_step );
        tmp_compexpr_right_1 = var_max_step;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( var_max_step );
            tmp_assign_source_5 = var_max_step;
            assert( var_h_abs == NULL );
            Py_INCREF( tmp_assign_source_5 );
            var_h_abs = tmp_assign_source_5;
        }
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_9;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_source_name_10;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_change_D );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_change_D );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "change_D" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 305;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_4;
            CHECK_OBJECT( var_D );
            tmp_args_element_name_4 = var_D;
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_order );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_max_step );
            tmp_left_name_4 = var_max_step;
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_h_abs );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_5 );

                exception_lineno = 305;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_5 );

                exception_lineno = 305;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 305;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = const_int_0;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_n_equal_steps, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_h_abs );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_min_step );
            tmp_compexpr_right_2 = var_min_step;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
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
                PyObject *tmp_assign_source_6;
                CHECK_OBJECT( var_min_step );
                tmp_assign_source_6 = var_min_step;
                assert( var_h_abs == NULL );
                Py_INCREF( tmp_assign_source_6 );
                var_h_abs = tmp_assign_source_6;
            }
            {
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_source_name_12;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                PyObject *tmp_source_name_13;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_change_D );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_change_D );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "change_D" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 309;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_5;
                CHECK_OBJECT( var_D );
                tmp_args_element_name_7 = var_D;
                CHECK_OBJECT( par_self );
                tmp_source_name_12 = par_self;
                tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_order );
                if ( tmp_args_element_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 309;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_min_step );
                tmp_left_name_5 = var_min_step;
                CHECK_OBJECT( par_self );
                tmp_source_name_13 = par_self;
                tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_h_abs );
                if ( tmp_right_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_8 );

                    exception_lineno = 309;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_args_element_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_8 );

                    exception_lineno = 309;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 309;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
                    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_args_element_name_8 );
                Py_DECREF( tmp_args_element_name_9 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 309;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                tmp_assattr_name_2 = const_int_0;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_n_equal_steps, tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 310;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_source_name_14;
                CHECK_OBJECT( par_self );
                tmp_source_name_14 = par_self;
                tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_h_abs );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 312;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_h_abs == NULL );
                var_h_abs = tmp_assign_source_7;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_source_name_15;
        CHECK_OBJECT( par_self );
        tmp_source_name_15 = par_self;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_atol );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_atol == NULL );
        var_atol = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_source_name_16;
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_rtol );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rtol == NULL );
        var_rtol = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT( par_self );
        tmp_source_name_17 = par_self;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_order );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_order == NULL );
        var_order = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_source_name_18;
        CHECK_OBJECT( par_self );
        tmp_source_name_18 = par_self;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_alpha );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_alpha == NULL );
        var_alpha = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_source_name_19;
        CHECK_OBJECT( par_self );
        tmp_source_name_19 = par_self;
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_gamma );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_gamma == NULL );
        var_gamma = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_source_name_20;
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_error_const );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_error_const == NULL );
        var_error_const = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_source_name_21;
        CHECK_OBJECT( par_self );
        tmp_source_name_21 = par_self;
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_J );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_J == NULL );
        var_J = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_source_name_22;
        CHECK_OBJECT( par_self );
        tmp_source_name_22 = par_self;
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_LU );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_LU == NULL );
        var_LU = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_23;
        CHECK_OBJECT( par_self );
        tmp_source_name_23 = par_self;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_jac );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = Py_None;
        tmp_assign_source_16 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? Py_True : Py_False;
        Py_DECREF( tmp_compexpr_left_3 );
        assert( var_current_jac == NULL );
        Py_INCREF( tmp_assign_source_16 );
        var_current_jac = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = Py_False;
        assert( var_step_accepted == NULL );
        Py_INCREF( tmp_assign_source_17 );
        var_step_accepted = tmp_assign_source_17;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_operand_name_2;
        if ( var_step_accepted == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "step_accepted" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 327;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_2 = var_step_accepted;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res == 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
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
        goto loop_end_1;
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        if ( var_h_abs == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "h_abs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 328;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = var_h_abs;
        CHECK_OBJECT( var_min_step );
        tmp_compexpr_right_4 = var_min_step;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_24;
            tmp_tuple_element_1 = Py_False;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_self );
            tmp_source_name_24 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_TOO_SMALL_STEP );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 329;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_source_name_25;
        if ( var_h_abs == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "h_abs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 331;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_6 = var_h_abs;
        CHECK_OBJECT( par_self );
        tmp_source_name_25 = par_self;
        tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_direction );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_h;
            var_h = tmp_assign_source_18;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_t );
        tmp_left_name_7 = var_t;
        CHECK_OBJECT( var_h );
        tmp_right_name_7 = var_h;
        tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 332;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_t_new;
            var_t_new = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_left_name_8;
        PyObject *tmp_source_name_26;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_source_name_27;
        CHECK_OBJECT( par_self );
        tmp_source_name_26 = par_self;
        tmp_left_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_direction );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_t_new );
        tmp_left_name_9 = var_t_new;
        CHECK_OBJECT( par_self );
        tmp_source_name_27 = par_self;
        tmp_right_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_t_bound );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 334;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 334;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_20;
            PyObject *tmp_source_name_28;
            CHECK_OBJECT( par_self );
            tmp_source_name_28 = par_self;
            tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_t_bound );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_t_new;
                assert( old != NULL );
                var_t_new = tmp_assign_source_20;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_left_name_10;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_29;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_10;
            PyObject *tmp_right_name_11;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_change_D );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_change_D );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "change_D" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 336;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_6;
            CHECK_OBJECT( var_D );
            tmp_args_element_name_10 = var_D;
            CHECK_OBJECT( var_order );
            tmp_args_element_name_11 = var_order;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 336;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_29 = tmp_mvar_value_7;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_abs );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 336;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_t_new );
            tmp_left_name_11 = var_t_new;
            CHECK_OBJECT( var_t );
            tmp_right_name_10 = var_t;
            tmp_args_element_name_13 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_10 );
            if ( tmp_args_element_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 336;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 336;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_left_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_13 );
            if ( tmp_left_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 336;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_h_abs == NULL )
            {
                Py_DECREF( tmp_left_name_10 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "h_abs" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 336;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_11 = var_h_abs;
            tmp_args_element_name_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_11 );
            Py_DECREF( tmp_left_name_10 );
            if ( tmp_args_element_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 336;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 336;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_12 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 336;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            tmp_assattr_name_3 = const_int_0;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_n_equal_steps, tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 337;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = Py_None;
            {
                PyObject *old = var_LU;
                var_LU = tmp_assign_source_21;
                Py_INCREF( var_LU );
                Py_XDECREF( old );
            }

        }
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        CHECK_OBJECT( var_t_new );
        tmp_left_name_12 = var_t_new;
        CHECK_OBJECT( var_t );
        tmp_right_name_12 = var_t;
        tmp_assign_source_22 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_h;
            assert( old != NULL );
            var_h = tmp_assign_source_22;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 341;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_8;
        CHECK_OBJECT( var_h );
        tmp_args_element_name_14 = var_h;
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 341;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_23 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abs, call_args );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_h_abs;
            var_h_abs = tmp_assign_source_23;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_30;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_step_name_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 343;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_30 = tmp_mvar_value_9;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_sum );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_D );
        tmp_subscribed_name_1 = var_D;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_order );
        tmp_left_name_13 = var_order;
        tmp_right_name_13 = const_int_pos_1;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 343;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 343;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 343;
        tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_y_predict;
            var_y_predict = tmp_assign_source_24;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_15;
        CHECK_OBJECT( var_atol );
        tmp_left_name_14 = var_atol;
        CHECK_OBJECT( var_rtol );
        tmp_left_name_15 = var_rtol;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_10;
        CHECK_OBJECT( var_y_predict );
        tmp_args_element_name_15 = var_y_predict;
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 345;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_right_name_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_abs, call_args );
        }

        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_14 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_scale;
            var_scale = tmp_assign_source_25;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_left_name_16;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_31;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_source_name_32;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_16;
        PyObject *tmp_step_name_2;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_17;
        PyObject *tmp_step_name_3;
        PyObject *tmp_right_name_18;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_31 = tmp_mvar_value_11;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_dot );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_D );
        tmp_subscribed_name_2 = var_D;
        tmp_start_name_2 = const_int_pos_1;
        CHECK_OBJECT( var_order );
        tmp_left_name_17 = var_order;
        tmp_right_name_16 = const_int_pos_1;
        tmp_stop_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_17, tmp_right_name_16 );
        if ( tmp_stop_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_stop_name_2 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_source_name_32 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_source_name_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_T );
        Py_DECREF( tmp_source_name_32 );
        if ( tmp_args_element_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_gamma );
        tmp_subscribed_name_3 = var_gamma;
        tmp_start_name_3 = const_int_pos_1;
        CHECK_OBJECT( var_order );
        tmp_left_name_18 = var_order;
        tmp_right_name_17 = const_int_pos_1;
        tmp_stop_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_18, tmp_right_name_17 );
        if ( tmp_stop_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_16 );

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_3 = Py_None;
        tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        Py_DECREF( tmp_stop_name_3 );
        assert( !(tmp_subscript_name_3 == NULL) );
        tmp_args_element_name_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_args_element_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_16 );

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 346;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_left_name_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_16 );
        Py_DECREF( tmp_args_element_name_17 );
        if ( tmp_left_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_alpha );
        tmp_subscribed_name_4 = var_alpha;
        CHECK_OBJECT( var_order );
        tmp_subscript_name_4 = var_order;
        tmp_right_name_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_right_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_16 );

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_26 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_18 );
        Py_DECREF( tmp_left_name_16 );
        Py_DECREF( tmp_right_name_18 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_psi;
            var_psi = tmp_assign_source_26;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = Py_False;
        {
            PyObject *old = var_converged;
            var_converged = tmp_assign_source_27;
            Py_INCREF( var_converged );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( var_h );
        tmp_left_name_19 = var_h;
        CHECK_OBJECT( var_alpha );
        tmp_subscribed_name_5 = var_alpha;
        CHECK_OBJECT( var_order );
        tmp_subscript_name_5 = var_order;
        tmp_right_name_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_right_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_19 );
        Py_DECREF( tmp_right_name_19 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    loop_start_2:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_operand_name_4;
        CHECK_OBJECT( var_converged );
        tmp_operand_name_4 = var_converged;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_3 = ( tmp_res == 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
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
        goto loop_end_2;
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        if ( var_LU == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "LU" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 351;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_6 = var_LU;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_7 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_33;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_left_name_20;
            PyObject *tmp_source_name_34;
            PyObject *tmp_right_name_20;
            PyObject *tmp_left_name_21;
            PyObject *tmp_right_name_21;
            CHECK_OBJECT( par_self );
            tmp_source_name_33 = par_self;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_lu );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_34 = par_self;
            tmp_left_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_I );
            if ( tmp_left_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_9 );

                exception_lineno = 352;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_c );
            tmp_left_name_21 = var_c;
            if ( var_J == NULL )
            {
                Py_DECREF( tmp_called_name_9 );
                Py_DECREF( tmp_left_name_20 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 352;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_21 = var_J;
            tmp_right_name_20 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_21, tmp_right_name_21 );
            if ( tmp_right_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_9 );
                Py_DECREF( tmp_left_name_20 );

                exception_lineno = 352;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_18 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_20 );
            Py_DECREF( tmp_left_name_20 );
            Py_DECREF( tmp_right_name_20 );
            if ( tmp_args_element_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_9 );

                exception_lineno = 352;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 352;
            {
                PyObject *call_args[] = { tmp_args_element_name_18 };
                tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_18 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_LU;
                var_LU = tmp_assign_source_29;
                Py_XDECREF( old );
            }

        }
        branch_no_7:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_source_name_35;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_source_name_36;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_source_name_37;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_solve_bdf_system );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_bdf_system );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_bdf_system" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_10 = tmp_mvar_value_12;
        CHECK_OBJECT( par_self );
        tmp_source_name_35 = par_self;
        tmp_args_element_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_fun );
        if ( tmp_args_element_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 355;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_t_new );
        tmp_args_element_name_20 = var_t_new;
        CHECK_OBJECT( var_y_predict );
        tmp_args_element_name_21 = var_y_predict;
        CHECK_OBJECT( var_c );
        tmp_args_element_name_22 = var_c;
        CHECK_OBJECT( var_psi );
        tmp_args_element_name_23 = var_psi;
        if ( var_LU == NULL )
        {
            Py_DECREF( tmp_args_element_name_19 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "LU" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 355;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_24 = var_LU;
        CHECK_OBJECT( par_self );
        tmp_source_name_36 = par_self;
        tmp_args_element_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_solve_lu );
        if ( tmp_args_element_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_19 );

            exception_lineno = 355;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_scale );
        tmp_args_element_name_26 = var_scale;
        CHECK_OBJECT( par_self );
        tmp_source_name_37 = par_self;
        tmp_args_element_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_newton_tol );
        if ( tmp_args_element_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_19 );
            Py_DECREF( tmp_args_element_name_25 );

            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 354;
        {
            PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS9( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_args_element_name_19 );
        Py_DECREF( tmp_args_element_name_25 );
        Py_DECREF( tmp_args_element_name_27 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_30 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_30;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_1, 0, 4 );
        if ( tmp_assign_source_31 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 354;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_31;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_32 = UNPACK_NEXT( tmp_unpack_2, 1, 4 );
        if ( tmp_assign_source_32 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 354;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_32;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT( tmp_unpack_3, 2, 4 );
        if ( tmp_assign_source_33 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 354;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_33;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_4, 3, 4 );
        if ( tmp_assign_source_34 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 354;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_4;
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_34;
            Py_XDECREF( old );
        }

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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 354;
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

            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 354;
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
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_35 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_converged;
            assert( old != NULL );
            var_converged = tmp_assign_source_35;
            Py_INCREF( var_converged );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_36 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_n_iter;
            var_n_iter = tmp_assign_source_36;
            Py_INCREF( var_n_iter );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_37 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_y_new;
            var_y_new = tmp_assign_source_37;
            Py_INCREF( var_y_new );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_38 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = var_d;
            var_d = tmp_assign_source_38;
            Py_INCREF( var_d );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_operand_name_5;
        CHECK_OBJECT( var_converged );
        tmp_operand_name_5 = var_converged;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            int tmp_truth_name_1;
            if ( var_current_jac == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "current_jac" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 359;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_truth_name_1 = CHECK_IF_TRUE( var_current_jac );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 359;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_9 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_9;
            }
            else
            {
                goto branch_no_9;
            }
            branch_yes_9:;
            goto loop_end_2;
            branch_no_9:;
        }
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_28;
            PyObject *tmp_args_element_name_29;
            CHECK_OBJECT( par_self );
            tmp_called_instance_3 = par_self;
            CHECK_OBJECT( var_t_new );
            tmp_args_element_name_28 = var_t_new;
            CHECK_OBJECT( var_y_predict );
            tmp_args_element_name_29 = var_y_predict;
            frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 361;
            {
                PyObject *call_args[] = { tmp_args_element_name_28, tmp_args_element_name_29 };
                tmp_assign_source_39 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_jac, call_args );
            }

            if ( tmp_assign_source_39 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 361;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_J;
                var_J = tmp_assign_source_39;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_40;
            tmp_assign_source_40 = Py_None;
            {
                PyObject *old = var_LU;
                var_LU = tmp_assign_source_40;
                Py_INCREF( var_LU );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = Py_True;
            {
                PyObject *old = var_current_jac;
                var_current_jac = tmp_assign_source_41;
                Py_INCREF( var_current_jac );
                Py_XDECREF( old );
            }

        }
        branch_no_8:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_operand_name_6;
        if ( var_converged == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "converged" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 365;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_6 = var_converged;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
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
        {
            PyObject *tmp_assign_source_42;
            tmp_assign_source_42 = const_float_0_5;
            {
                PyObject *old = var_factor;
                var_factor = tmp_assign_source_42;
                Py_INCREF( var_factor );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_left_name_22;
            PyObject *tmp_right_name_22;
            CHECK_OBJECT( var_h_abs );
            tmp_left_name_22 = var_h_abs;
            CHECK_OBJECT( var_factor );
            tmp_right_name_22 = var_factor;
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_22, tmp_right_name_22 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 367;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_43 = tmp_left_name_22;
            var_h_abs = tmp_assign_source_43;

        }
        {
            PyObject *tmp_called_name_11;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_30;
            PyObject *tmp_args_element_name_31;
            PyObject *tmp_args_element_name_32;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_change_D );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_change_D );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "change_D" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 368;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_11 = tmp_mvar_value_13;
            CHECK_OBJECT( var_D );
            tmp_args_element_name_30 = var_D;
            CHECK_OBJECT( var_order );
            tmp_args_element_name_31 = var_order;
            CHECK_OBJECT( var_factor );
            tmp_args_element_name_32 = var_factor;
            frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 368;
            {
                PyObject *call_args[] = { tmp_args_element_name_30, tmp_args_element_name_31, tmp_args_element_name_32 };
                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
            }

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 368;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            tmp_assattr_name_4 = const_int_0;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_n_equal_steps, tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 369;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_44;
            tmp_assign_source_44 = Py_None;
            {
                PyObject *old = var_LU;
                var_LU = tmp_assign_source_44;
                Py_INCREF( var_LU );
                Py_XDECREF( old );
            }

        }
        goto loop_start_1;
        branch_no_10:;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_left_name_23;
        PyObject *tmp_left_name_24;
        PyObject *tmp_right_name_23;
        PyObject *tmp_left_name_25;
        PyObject *tmp_left_name_26;
        PyObject *tmp_right_name_24;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_right_name_25;
        PyObject *tmp_right_name_26;
        PyObject *tmp_left_name_27;
        PyObject *tmp_left_name_28;
        PyObject *tmp_right_name_27;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_right_name_28;
        tmp_left_name_24 = const_float_0_9;
        tmp_left_name_26 = const_int_pos_2;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NEWTON_MAXITER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_24 = tmp_mvar_value_14;
        tmp_left_name_25 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_26, tmp_right_name_24 );
        if ( tmp_left_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_25 = const_int_pos_1;
        tmp_right_name_23 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_25, tmp_right_name_25 );
        Py_DECREF( tmp_left_name_25 );
        if ( tmp_right_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_23 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_24, tmp_right_name_23 );
        Py_DECREF( tmp_right_name_23 );
        if ( tmp_left_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_28 = const_int_pos_2;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_left_name_23 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NEWTON_MAXITER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_27 = tmp_mvar_value_15;
        tmp_left_name_27 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_28, tmp_right_name_27 );
        if ( tmp_left_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_23 );

            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_n_iter == NULL )
        {
            Py_DECREF( tmp_left_name_23 );
            Py_DECREF( tmp_left_name_27 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n_iter" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 374;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_28 = var_n_iter;
        tmp_right_name_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_27, tmp_right_name_28 );
        Py_DECREF( tmp_left_name_27 );
        if ( tmp_right_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_23 );

            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_45 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_23, tmp_right_name_26 );
        Py_DECREF( tmp_left_name_23 );
        Py_DECREF( tmp_right_name_26 );
        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_safety;
            var_safety = tmp_assign_source_45;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_left_name_29;
        PyObject *tmp_right_name_29;
        PyObject *tmp_left_name_30;
        PyObject *tmp_right_name_30;
        PyObject *tmp_called_name_12;
        PyObject *tmp_source_name_38;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_33;
        CHECK_OBJECT( var_atol );
        tmp_left_name_29 = var_atol;
        CHECK_OBJECT( var_rtol );
        tmp_left_name_30 = var_rtol;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 376;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_38 = tmp_mvar_value_16;
        tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_abs );
        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_y_new == NULL )
        {
            Py_DECREF( tmp_called_name_12 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y_new" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 376;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_33 = var_y_new;
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 376;
        {
            PyObject *call_args[] = { tmp_args_element_name_33 };
            tmp_right_name_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_called_name_12 );
        if ( tmp_right_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_29 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_30, tmp_right_name_30 );
        Py_DECREF( tmp_right_name_30 );
        if ( tmp_right_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_46 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_29, tmp_right_name_29 );
        Py_DECREF( tmp_right_name_29 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_scale;
            assert( old != NULL );
            var_scale = tmp_assign_source_46;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_left_name_31;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_right_name_31;
        CHECK_OBJECT( var_error_const );
        tmp_subscribed_name_6 = var_error_const;
        CHECK_OBJECT( var_order );
        tmp_subscript_name_6 = var_order;
        tmp_left_name_31 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_left_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_d == NULL )
        {
            Py_DECREF( tmp_left_name_31 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_31 = var_d;
        tmp_assign_source_47 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_31, tmp_right_name_31 );
        Py_DECREF( tmp_left_name_31 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_error;
            var_error = tmp_assign_source_47;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_left_name_32;
        PyObject *tmp_right_name_32;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_17;
        CHECK_OBJECT( var_error );
        tmp_left_name_32 = var_error;
        CHECK_OBJECT( var_scale );
        tmp_right_name_32 = var_scale;
        tmp_args_element_name_34 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_32, tmp_right_name_32 );
        if ( tmp_args_element_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 378;
        {
            PyObject *call_args[] = { tmp_args_element_name_34 };
            tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_args_element_name_34 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_error_norm;
            var_error_norm = tmp_assign_source_48;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( var_error_norm );
        tmp_compexpr_left_7 = var_error_norm;
        tmp_compexpr_right_7 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_49;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_element_name_35;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_args_element_name_36;
            PyObject *tmp_left_name_33;
            PyObject *tmp_right_name_33;
            PyObject *tmp_left_name_34;
            PyObject *tmp_right_name_34;
            PyObject *tmp_left_name_35;
            PyObject *tmp_right_name_35;
            PyObject *tmp_left_name_36;
            PyObject *tmp_right_name_36;
            tmp_called_name_14 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_14 != NULL );
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_MIN_FACTOR );

            if (unlikely( tmp_mvar_value_18 == NULL ))
            {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MIN_FACTOR );
            }

            if ( tmp_mvar_value_18 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MIN_FACTOR" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 381;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_35 = tmp_mvar_value_18;
            CHECK_OBJECT( var_safety );
            tmp_left_name_33 = var_safety;
            CHECK_OBJECT( var_error_norm );
            tmp_left_name_34 = var_error_norm;
            tmp_left_name_35 = const_int_neg_1;
            CHECK_OBJECT( var_order );
            tmp_left_name_36 = var_order;
            tmp_right_name_36 = const_int_pos_1;
            tmp_right_name_35 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_36, tmp_right_name_36 );
            if ( tmp_right_name_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_34 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_35, tmp_right_name_35 );
            Py_DECREF( tmp_right_name_35 );
            if ( tmp_right_name_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_33 = POWER_OPERATION( tmp_left_name_34, tmp_right_name_34 );
            Py_DECREF( tmp_right_name_34 );
            if ( tmp_right_name_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_36 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_33, tmp_right_name_33 );
            Py_DECREF( tmp_right_name_33 );
            if ( tmp_args_element_name_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 381;
            {
                PyObject *call_args[] = { tmp_args_element_name_35, tmp_args_element_name_36 };
                tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
            }

            Py_DECREF( tmp_args_element_name_36 );
            if ( tmp_assign_source_49 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 381;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_factor;
                var_factor = tmp_assign_source_49;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_left_name_37;
            PyObject *tmp_right_name_37;
            CHECK_OBJECT( var_h_abs );
            tmp_left_name_37 = var_h_abs;
            CHECK_OBJECT( var_factor );
            tmp_right_name_37 = var_factor;
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_37, tmp_right_name_37 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 383;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_50 = tmp_left_name_37;
            var_h_abs = tmp_assign_source_50;

        }
        {
            PyObject *tmp_called_name_15;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_37;
            PyObject *tmp_args_element_name_38;
            PyObject *tmp_args_element_name_39;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_change_D );

            if (unlikely( tmp_mvar_value_19 == NULL ))
            {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_change_D );
            }

            if ( tmp_mvar_value_19 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "change_D" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 384;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_15 = tmp_mvar_value_19;
            CHECK_OBJECT( var_D );
            tmp_args_element_name_37 = var_D;
            CHECK_OBJECT( var_order );
            tmp_args_element_name_38 = var_order;
            CHECK_OBJECT( var_factor );
            tmp_args_element_name_39 = var_factor;
            frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 384;
            {
                PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38, tmp_args_element_name_39 };
                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_15, call_args );
            }

            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 384;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_assattr_target_5;
            tmp_assattr_name_5 = const_int_0;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_5 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_n_equal_steps, tmp_assattr_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 385;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_11;
        branch_no_11:;
        {
            PyObject *tmp_assign_source_51;
            tmp_assign_source_51 = Py_True;
            {
                PyObject *old = var_step_accepted;
                var_step_accepted = tmp_assign_source_51;
                Py_INCREF( var_step_accepted );
                Py_XDECREF( old );
            }

        }
        branch_end_11:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_source_name_39;
        CHECK_OBJECT( par_self );
        tmp_source_name_39 = par_self;
        tmp_assign_source_52 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_n_equal_steps );
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_52;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_left_name_38;
        PyObject *tmp_right_name_38;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_38 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_38 = const_int_pos_1;
        tmp_assign_source_53 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_38, tmp_right_name_38 );
        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_53;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_6 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_n_equal_steps, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        if ( var_t_new == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t_new" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_7 = var_t_new;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_t, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        if ( var_y_new == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y_new" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_8 = var_y_new;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_y, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        if ( var_h_abs == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "h_abs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 396;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_9 = var_h_abs;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_h_abs, tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        if ( var_J == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 397;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_10 = var_J;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_J, tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_assattr_target_11;
        if ( var_LU == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "LU" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 398;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_11 = var_LU;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_LU, tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_39;
        PyObject *tmp_right_name_39;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_left_name_40;
        PyObject *tmp_right_name_40;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_left_name_41;
        PyObject *tmp_right_name_41;
        if ( var_d == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 404;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_39 = var_d;
        CHECK_OBJECT( var_D );
        tmp_subscribed_name_7 = var_D;
        CHECK_OBJECT( var_order );
        tmp_left_name_40 = var_order;
        tmp_right_name_40 = const_int_pos_1;
        tmp_subscript_name_7 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_40, tmp_right_name_40 );
        if ( tmp_subscript_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 404;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_39 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        Py_DECREF( tmp_subscript_name_7 );
        if ( tmp_right_name_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 404;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_39, tmp_right_name_39 );
        Py_DECREF( tmp_right_name_39 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 404;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_D );
        tmp_ass_subscribed_1 = var_D;
        CHECK_OBJECT( var_order );
        tmp_left_name_41 = var_order;
        tmp_right_name_41 = const_int_pos_2;
        tmp_ass_subscript_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_41, tmp_right_name_41 );
        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 404;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 404;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_left_name_42;
        PyObject *tmp_right_name_42;
        if ( var_d == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 405;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_2 = var_d;
        CHECK_OBJECT( var_D );
        tmp_ass_subscribed_2 = var_D;
        CHECK_OBJECT( var_order );
        tmp_left_name_42 = var_order;
        tmp_right_name_42 = const_int_pos_1;
        tmp_ass_subscript_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_42, tmp_right_name_42 );
        if ( tmp_ass_subscript_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscript_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_16;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_left_name_43;
        PyObject *tmp_right_name_43;
        tmp_called_name_16 = (PyObject *)&PyReversed_Type;
        CHECK_OBJECT( var_order );
        tmp_left_name_43 = var_order;
        tmp_right_name_43 = const_int_pos_1;
        tmp_xrange_low_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_43, tmp_right_name_43 );
        if ( tmp_xrange_low_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_40 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_args_element_name_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = { tmp_args_element_name_40 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_args_element_name_40 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_54 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_54;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_55 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_55 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_3;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 406;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_55;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_56 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_56;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT( var_D );
        tmp_assign_source_57 = var_D;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_57;
            Py_INCREF( tmp_inplace_assign_subscr_1__target );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT( var_i );
        tmp_assign_source_58 = var_i;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_58;
            Py_INCREF( tmp_inplace_assign_subscr_1__subscript );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_44;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_right_name_44;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_left_name_45;
        PyObject *tmp_right_name_45;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_8 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_subscript_name_8 = tmp_inplace_assign_subscr_1__subscript;
        tmp_left_name_44 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        if ( tmp_left_name_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_D );
        tmp_subscribed_name_9 = var_D;
        CHECK_OBJECT( var_i );
        tmp_left_name_45 = var_i;
        tmp_right_name_45 = const_int_pos_1;
        tmp_subscript_name_9 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_45, tmp_right_name_45 );
        if ( tmp_subscript_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_44 );

            exception_lineno = 407;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_right_name_44 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        Py_DECREF( tmp_subscript_name_9 );
        if ( tmp_right_name_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_44 );

            exception_lineno = 407;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_ass_subvalue_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_44, tmp_right_name_44 );
        Py_DECREF( tmp_left_name_44 );
        Py_DECREF( tmp_right_name_44 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_ass_subscribed_3 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_ass_subscript_3 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 406;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_source_name_40;
        PyObject *tmp_left_name_46;
        PyObject *tmp_right_name_46;
        CHECK_OBJECT( par_self );
        tmp_source_name_40 = par_self;
        tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_n_equal_steps );
        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 409;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_order );
        tmp_left_name_46 = var_order;
        tmp_right_name_46 = const_int_pos_1;
        tmp_compexpr_right_8 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_46, tmp_right_name_46 );
        if ( tmp_compexpr_right_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_8 );

            exception_lineno = 409;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_left_8 );
        Py_DECREF( tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 409;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
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
        tmp_return_value = const_tuple_true_none_tuple;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_12:;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT( var_order );
        tmp_compexpr_left_9 = var_order;
        tmp_compexpr_right_9 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
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
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_left_name_47;
            PyObject *tmp_subscribed_name_10;
            PyObject *tmp_subscript_name_10;
            PyObject *tmp_left_name_48;
            PyObject *tmp_right_name_47;
            PyObject *tmp_right_name_48;
            PyObject *tmp_subscribed_name_11;
            PyObject *tmp_subscript_name_11;
            CHECK_OBJECT( var_error_const );
            tmp_subscribed_name_10 = var_error_const;
            CHECK_OBJECT( var_order );
            tmp_left_name_48 = var_order;
            tmp_right_name_47 = const_int_pos_1;
            tmp_subscript_name_10 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_48, tmp_right_name_47 );
            if ( tmp_subscript_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 413;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_47 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
            Py_DECREF( tmp_subscript_name_10 );
            if ( tmp_left_name_47 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 413;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_D );
            tmp_subscribed_name_11 = var_D;
            CHECK_OBJECT( var_order );
            tmp_subscript_name_11 = var_order;
            tmp_right_name_48 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
            if ( tmp_right_name_48 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_47 );

                exception_lineno = 413;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_59 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_47, tmp_right_name_48 );
            Py_DECREF( tmp_left_name_47 );
            Py_DECREF( tmp_right_name_48 );
            if ( tmp_assign_source_59 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 413;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_error_m == NULL );
            var_error_m = tmp_assign_source_59;
        }
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_name_17;
            PyObject *tmp_mvar_value_20;
            PyObject *tmp_args_element_name_41;
            PyObject *tmp_left_name_49;
            PyObject *tmp_right_name_49;
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_norm );

            if (unlikely( tmp_mvar_value_20 == NULL ))
            {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
            }

            if ( tmp_mvar_value_20 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 414;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_17 = tmp_mvar_value_20;
            CHECK_OBJECT( var_error_m );
            tmp_left_name_49 = var_error_m;
            if ( var_scale == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 414;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_49 = var_scale;
            tmp_args_element_name_41 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_49, tmp_right_name_49 );
            if ( tmp_args_element_name_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 414;
            {
                PyObject *call_args[] = { tmp_args_element_name_41 };
                tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
            }

            Py_DECREF( tmp_args_element_name_41 );
            if ( tmp_assign_source_60 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_error_m_norm == NULL );
            var_error_m_norm = tmp_assign_source_60;
        }
        goto branch_end_13;
        branch_no_13:;
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_source_name_41;
            PyObject *tmp_mvar_value_21;
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 416;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_41 = tmp_mvar_value_21;
            tmp_assign_source_61 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_inf );
            if ( tmp_assign_source_61 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 416;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_error_m_norm == NULL );
            var_error_m_norm = tmp_assign_source_61;
        }
        branch_end_13:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_mvar_value_22;
        CHECK_OBJECT( var_order );
        tmp_compexpr_left_10 = var_order;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_MAX_ORDER );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAX_ORDER );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAX_ORDER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 418;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_10 = tmp_mvar_value_22;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_assign_source_62;
            PyObject *tmp_left_name_50;
            PyObject *tmp_subscribed_name_12;
            PyObject *tmp_subscript_name_12;
            PyObject *tmp_left_name_51;
            PyObject *tmp_right_name_50;
            PyObject *tmp_right_name_51;
            PyObject *tmp_subscribed_name_13;
            PyObject *tmp_subscript_name_13;
            PyObject *tmp_left_name_52;
            PyObject *tmp_right_name_52;
            CHECK_OBJECT( var_error_const );
            tmp_subscribed_name_12 = var_error_const;
            CHECK_OBJECT( var_order );
            tmp_left_name_51 = var_order;
            tmp_right_name_50 = const_int_pos_1;
            tmp_subscript_name_12 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_51, tmp_right_name_50 );
            if ( tmp_subscript_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 419;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_50 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
            Py_DECREF( tmp_subscript_name_12 );
            if ( tmp_left_name_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 419;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_D );
            tmp_subscribed_name_13 = var_D;
            CHECK_OBJECT( var_order );
            tmp_left_name_52 = var_order;
            tmp_right_name_52 = const_int_pos_2;
            tmp_subscript_name_13 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_52, tmp_right_name_52 );
            if ( tmp_subscript_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_50 );

                exception_lineno = 419;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_51 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
            Py_DECREF( tmp_subscript_name_13 );
            if ( tmp_right_name_51 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_50 );

                exception_lineno = 419;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_62 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_50, tmp_right_name_51 );
            Py_DECREF( tmp_left_name_50 );
            Py_DECREF( tmp_right_name_51 );
            if ( tmp_assign_source_62 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 419;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_error_p == NULL );
            var_error_p = tmp_assign_source_62;
        }
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_called_name_18;
            PyObject *tmp_mvar_value_23;
            PyObject *tmp_args_element_name_42;
            PyObject *tmp_left_name_53;
            PyObject *tmp_right_name_53;
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_norm );

            if (unlikely( tmp_mvar_value_23 == NULL ))
            {
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
            }

            if ( tmp_mvar_value_23 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 420;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_18 = tmp_mvar_value_23;
            CHECK_OBJECT( var_error_p );
            tmp_left_name_53 = var_error_p;
            if ( var_scale == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 420;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_53 = var_scale;
            tmp_args_element_name_42 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_53, tmp_right_name_53 );
            if ( tmp_args_element_name_42 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 420;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 420;
            {
                PyObject *call_args[] = { tmp_args_element_name_42 };
                tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
            }

            Py_DECREF( tmp_args_element_name_42 );
            if ( tmp_assign_source_63 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 420;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_error_p_norm == NULL );
            var_error_p_norm = tmp_assign_source_63;
        }
        goto branch_end_14;
        branch_no_14:;
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_source_name_42;
            PyObject *tmp_mvar_value_24;
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_24 == NULL ))
            {
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_24 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 422;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_42 = tmp_mvar_value_24;
            tmp_assign_source_64 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_inf );
            if ( tmp_assign_source_64 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 422;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_error_p_norm == NULL );
            var_error_p_norm = tmp_assign_source_64;
        }
        branch_end_14:;
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_name_19;
        PyObject *tmp_source_name_43;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_43 = tmp_mvar_value_25;
        tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_array );
        if ( tmp_called_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_error_m_norm );
        tmp_list_element_1 = var_error_m_norm;
        tmp_args_element_name_43 = PyList_New( 3 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_43, 0, tmp_list_element_1 );
        if ( var_error_norm == NULL )
        {
            Py_DECREF( tmp_called_name_19 );
            Py_DECREF( tmp_args_element_name_43 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error_norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_1 = var_error_norm;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_43, 1, tmp_list_element_1 );
        CHECK_OBJECT( var_error_p_norm );
        tmp_list_element_1 = var_error_p_norm;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_43, 2, tmp_list_element_1 );
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 424;
        {
            PyObject *call_args[] = { tmp_args_element_name_43 };
            tmp_assign_source_65 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
        }

        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_43 );
        if ( tmp_assign_source_65 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_error_norms == NULL );
        var_error_norms = tmp_assign_source_65;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_name_20;
        PyObject *tmp_source_name_44;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 425;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_source_name_44 = tmp_mvar_value_26;
        tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_errstate );
        if ( tmp_called_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_kw_name_2 = PyDict_Copy( const_dict_298d89659f37555f5fbef3ddd7a920af );
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 425;
        tmp_assign_source_66 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_20, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_66 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_name_21;
        PyObject *tmp_source_name_45;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_45 = tmp_with_1__source;
        tmp_called_name_21 = LOOKUP_SPECIAL( tmp_source_name_45, const_str_plain___enter__ );
        if ( tmp_called_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 425;
        tmp_assign_source_67 = CALL_FUNCTION_NO_ARGS( tmp_called_name_21 );
        Py_DECREF( tmp_called_name_21 );
        if ( tmp_assign_source_67 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_source_name_46;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_46 = tmp_with_1__source;
        tmp_assign_source_68 = LOOKUP_SPECIAL( tmp_source_name_46, const_str_plain___exit__ );
        if ( tmp_assign_source_68 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_68;
    }
    {
        nuitka_bool tmp_assign_source_69;
        tmp_assign_source_69 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_69;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_left_name_54;
        PyObject *tmp_right_name_54;
        PyObject *tmp_left_name_55;
        PyObject *tmp_right_name_55;
        PyObject *tmp_called_name_22;
        PyObject *tmp_source_name_47;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_left_name_56;
        PyObject *tmp_right_name_56;
        CHECK_OBJECT( var_error_norms );
        tmp_left_name_54 = var_error_norms;
        tmp_left_name_55 = const_int_neg_1;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 426;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_source_name_47 = tmp_mvar_value_27;
        tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_arange );
        if ( tmp_called_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT( var_order );
        tmp_args_element_name_44 = var_order;
        CHECK_OBJECT( var_order );
        tmp_left_name_56 = var_order;
        tmp_right_name_56 = const_int_pos_3;
        tmp_args_element_name_45 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_56, tmp_right_name_56 );
        if ( tmp_args_element_name_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_22 );

            exception_lineno = 426;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 426;
        {
            PyObject *call_args[] = { tmp_args_element_name_44, tmp_args_element_name_45 };
            tmp_right_name_55 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_22, call_args );
        }

        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_args_element_name_45 );
        if ( tmp_right_name_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_right_name_54 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_55, tmp_right_name_55 );
        Py_DECREF( tmp_right_name_55 );
        if ( tmp_right_name_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_70 = POWER_OPERATION( tmp_left_name_54, tmp_right_name_54 );
        Py_DECREF( tmp_right_name_54 );
        if ( tmp_assign_source_70 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert( var_factors == NULL );
        var_factors = tmp_assign_source_70;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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

    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_a0db20aff1310f08134c1c2edb5f1f12, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_a0db20aff1310f08134c1c2edb5f1f12, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        tmp_compexpr_left_11 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_11 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
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
            nuitka_bool tmp_assign_source_71;
            tmp_assign_source_71 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_71;
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_operand_name_7;
            PyObject *tmp_called_name_23;
            PyObject *tmp_args_element_name_46;
            PyObject *tmp_args_element_name_47;
            PyObject *tmp_args_element_name_48;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_23 = tmp_with_1__exit;
            tmp_args_element_name_46 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_47 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_48 = EXC_TRACEBACK(PyThreadState_GET());
            frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 425;
            {
                PyObject *call_args[] = { tmp_args_element_name_46, tmp_args_element_name_47, tmp_args_element_name_48 };
                tmp_operand_name_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_23, call_args );
            }

            if ( tmp_operand_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 425;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_7 );
            Py_DECREF( tmp_operand_name_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 425;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            tmp_condition_result_16 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_16;
            }
            else
            {
                goto branch_no_16;
            }
            branch_yes_16:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 425;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame) frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
            branch_no_16:;
        }
        goto branch_end_15;
        branch_no_15:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 425;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame) frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
        branch_end_15:;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_8:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_7;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_6__step_impl );
    return NULL;
    // End of try:
    try_end_7:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_17;
        nuitka_bool tmp_compexpr_left_12;
        nuitka_bool tmp_compexpr_right_12;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_12 = tmp_with_1__indicator;
        tmp_compexpr_right_12 = NUITKA_BOOL_TRUE;
        tmp_condition_result_17 = ( tmp_compexpr_left_12 == tmp_compexpr_right_12 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_24;
            PyObject *tmp_call_result_6;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_24 = tmp_with_1__exit;
            frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 425;
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_24, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_9 );
                Py_XDECREF( exception_keeper_value_9 );
                Py_XDECREF( exception_keeper_tb_9 );

                exception_lineno = 425;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        branch_no_17:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_8;
    // End of try:
    try_end_9:;
    {
        nuitka_bool tmp_condition_result_18;
        nuitka_bool tmp_compexpr_left_13;
        nuitka_bool tmp_compexpr_right_13;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_13 = tmp_with_1__indicator;
        tmp_compexpr_right_13 = NUITKA_BOOL_TRUE;
        tmp_condition_result_18 = ( tmp_compexpr_left_13 == tmp_compexpr_right_13 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_25;
            PyObject *tmp_call_result_7;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_25 = tmp_with_1__exit;
            frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 425;
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_25, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 425;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            Py_DECREF( tmp_call_result_7 );
        }
        branch_no_18:;
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
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
        PyObject *tmp_assign_source_72;
        PyObject *tmp_left_name_57;
        PyObject *tmp_called_name_26;
        PyObject *tmp_source_name_48;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_right_name_57;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 428;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_48 = tmp_mvar_value_28;
        tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_argmax );
        if ( tmp_called_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_factors == NULL )
        {
            Py_DECREF( tmp_called_name_26 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "factors" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 428;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_49 = var_factors;
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 428;
        {
            PyObject *call_args[] = { tmp_args_element_name_49 };
            tmp_left_name_57 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
        }

        Py_DECREF( tmp_called_name_26 );
        if ( tmp_left_name_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_57 = const_int_pos_1;
        tmp_assign_source_72 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_57, tmp_right_name_57 );
        Py_DECREF( tmp_left_name_57 );
        if ( tmp_assign_source_72 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_delta_order == NULL );
        var_delta_order = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_left_name_58;
        PyObject *tmp_right_name_58;
        CHECK_OBJECT( var_order );
        tmp_left_name_58 = var_order;
        CHECK_OBJECT( var_delta_order );
        tmp_right_name_58 = var_delta_order;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_58, tmp_right_name_58 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_73 = tmp_left_name_58;
        var_order = tmp_assign_source_73;

    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT( var_order );
        tmp_assattr_name_12 = var_order;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_order, tmp_assattr_name_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_name_27;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_left_name_59;
        PyObject *tmp_right_name_59;
        PyObject *tmp_called_name_28;
        PyObject *tmp_source_name_49;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_args_element_name_52;
        tmp_called_name_27 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_27 != NULL );
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_MAX_FACTOR );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAX_FACTOR );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAX_FACTOR" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 432;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_50 = tmp_mvar_value_29;
        if ( var_safety == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "safety" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 432;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_59 = var_safety;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 432;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_49 = tmp_mvar_value_30;
        tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_max );
        if ( tmp_called_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 432;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_factors == NULL )
        {
            Py_DECREF( tmp_called_name_28 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "factors" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 432;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_52 = var_factors;
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 432;
        {
            PyObject *call_args[] = { tmp_args_element_name_52 };
            tmp_right_name_59 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
        }

        Py_DECREF( tmp_called_name_28 );
        if ( tmp_right_name_59 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 432;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_51 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_59, tmp_right_name_59 );
        Py_DECREF( tmp_right_name_59 );
        if ( tmp_args_element_name_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 432;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 432;
        {
            PyObject *call_args[] = { tmp_args_element_name_50, tmp_args_element_name_51 };
            tmp_assign_source_74 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_27, call_args );
        }

        Py_DECREF( tmp_args_element_name_51 );
        if ( tmp_assign_source_74 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 432;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_factor;
            var_factor = tmp_assign_source_74;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_source_name_50;
        CHECK_OBJECT( par_self );
        tmp_source_name_50 = par_self;
        tmp_assign_source_75 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_h_abs );
        if ( tmp_assign_source_75 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_2__start == NULL );
        tmp_inplace_assign_attr_2__start = tmp_assign_source_75;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_left_name_60;
        PyObject *tmp_right_name_60;
        CHECK_OBJECT( tmp_inplace_assign_attr_2__start );
        tmp_left_name_60 = tmp_inplace_assign_attr_2__start;
        CHECK_OBJECT( var_factor );
        tmp_right_name_60 = var_factor;
        tmp_assign_source_76 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_60, tmp_right_name_60 );
        if ( tmp_assign_source_76 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert( tmp_inplace_assign_attr_2__end == NULL );
        tmp_inplace_assign_attr_2__end = tmp_assign_source_76;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT( tmp_inplace_assign_attr_2__end );
        tmp_assattr_name_13 = tmp_inplace_assign_attr_2__end;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_h_abs, tmp_assattr_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
    Py_DECREF( tmp_inplace_assign_attr_2__end );
    tmp_inplace_assign_attr_2__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    try_end_11:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
    Py_DECREF( tmp_inplace_assign_attr_2__start );
    tmp_inplace_assign_attr_2__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
    Py_DECREF( tmp_inplace_assign_attr_2__end );
    tmp_inplace_assign_attr_2__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
    Py_DECREF( tmp_inplace_assign_attr_2__start );
    tmp_inplace_assign_attr_2__start = NULL;

    {
        PyObject *tmp_called_name_29;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_args_element_name_54;
        PyObject *tmp_args_element_name_55;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_change_D );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_change_D );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "change_D" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 434;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_29 = tmp_mvar_value_31;
        CHECK_OBJECT( var_D );
        tmp_args_element_name_53 = var_D;
        CHECK_OBJECT( var_order );
        tmp_args_element_name_54 = var_order;
        CHECK_OBJECT( var_factor );
        tmp_args_element_name_55 = var_factor;
        frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame.f_lineno = 434;
        {
            PyObject *call_args[] = { tmp_args_element_name_53, tmp_args_element_name_54, tmp_args_element_name_55 };
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_29, call_args );
        }

        if ( tmp_call_result_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_8 );
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_assattr_target_14;
        tmp_assattr_name_14 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_n_equal_steps, tmp_assattr_name_14 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_assattr_target_15;
        tmp_assattr_name_15 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_LU, tmp_assattr_name_15 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0db20aff1310f08134c1c2edb5f1f12 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0db20aff1310f08134c1c2edb5f1f12 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0db20aff1310f08134c1c2edb5f1f12 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a0db20aff1310f08134c1c2edb5f1f12, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a0db20aff1310f08134c1c2edb5f1f12->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a0db20aff1310f08134c1c2edb5f1f12, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a0db20aff1310f08134c1c2edb5f1f12,
        type_description_1,
        par_self,
        var_t,
        var_D,
        var_max_step,
        var_min_step,
        var_h_abs,
        var_atol,
        var_rtol,
        var_order,
        var_alpha,
        var_gamma,
        var_error_const,
        var_J,
        var_LU,
        var_current_jac,
        var_step_accepted,
        var_h,
        var_t_new,
        var_y_predict,
        var_scale,
        var_psi,
        var_converged,
        var_c,
        var_n_iter,
        var_y_new,
        var_d,
        var_factor,
        var_safety,
        var_error,
        var_error_norm,
        var_i,
        var_error_m,
        var_error_m_norm,
        var_error_p,
        var_error_p_norm,
        var_error_norms,
        var_factors,
        var_delta_order
    );


    // Release cached frame.
    if ( frame_a0db20aff1310f08134c1c2edb5f1f12 == cache_frame_a0db20aff1310f08134c1c2edb5f1f12 )
    {
        Py_DECREF( frame_a0db20aff1310f08134c1c2edb5f1f12 );
    }
    cache_frame_a0db20aff1310f08134c1c2edb5f1f12 = NULL;

    assertFrameObject( frame_a0db20aff1310f08134c1c2edb5f1f12 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = const_tuple_true_none_tuple;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_6__step_impl );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_t );
    Py_DECREF( var_t );
    var_t = NULL;

    CHECK_OBJECT( (PyObject *)var_D );
    Py_DECREF( var_D );
    var_D = NULL;

    CHECK_OBJECT( (PyObject *)var_max_step );
    Py_DECREF( var_max_step );
    var_max_step = NULL;

    CHECK_OBJECT( (PyObject *)var_min_step );
    Py_DECREF( var_min_step );
    var_min_step = NULL;

    Py_XDECREF( var_h_abs );
    var_h_abs = NULL;

    CHECK_OBJECT( (PyObject *)var_atol );
    Py_DECREF( var_atol );
    var_atol = NULL;

    CHECK_OBJECT( (PyObject *)var_rtol );
    Py_DECREF( var_rtol );
    var_rtol = NULL;

    CHECK_OBJECT( (PyObject *)var_order );
    Py_DECREF( var_order );
    var_order = NULL;

    CHECK_OBJECT( (PyObject *)var_alpha );
    Py_DECREF( var_alpha );
    var_alpha = NULL;

    CHECK_OBJECT( (PyObject *)var_gamma );
    Py_DECREF( var_gamma );
    var_gamma = NULL;

    CHECK_OBJECT( (PyObject *)var_error_const );
    Py_DECREF( var_error_const );
    var_error_const = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_LU );
    var_LU = NULL;

    Py_XDECREF( var_current_jac );
    var_current_jac = NULL;

    Py_XDECREF( var_step_accepted );
    var_step_accepted = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_t_new );
    var_t_new = NULL;

    Py_XDECREF( var_y_predict );
    var_y_predict = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_psi );
    var_psi = NULL;

    Py_XDECREF( var_converged );
    var_converged = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_n_iter );
    var_n_iter = NULL;

    Py_XDECREF( var_y_new );
    var_y_new = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_factor );
    var_factor = NULL;

    Py_XDECREF( var_safety );
    var_safety = NULL;

    Py_XDECREF( var_error );
    var_error = NULL;

    Py_XDECREF( var_error_norm );
    var_error_norm = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_error_m );
    var_error_m = NULL;

    Py_XDECREF( var_error_m_norm );
    var_error_m_norm = NULL;

    Py_XDECREF( var_error_p );
    var_error_p = NULL;

    Py_XDECREF( var_error_p_norm );
    var_error_p_norm = NULL;

    Py_XDECREF( var_error_norms );
    var_error_norms = NULL;

    Py_XDECREF( var_factors );
    var_factors = NULL;

    Py_XDECREF( var_delta_order );
    var_delta_order = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_D );
    var_D = NULL;

    Py_XDECREF( var_max_step );
    var_max_step = NULL;

    Py_XDECREF( var_min_step );
    var_min_step = NULL;

    Py_XDECREF( var_h_abs );
    var_h_abs = NULL;

    Py_XDECREF( var_atol );
    var_atol = NULL;

    Py_XDECREF( var_rtol );
    var_rtol = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_gamma );
    var_gamma = NULL;

    Py_XDECREF( var_error_const );
    var_error_const = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_LU );
    var_LU = NULL;

    Py_XDECREF( var_current_jac );
    var_current_jac = NULL;

    Py_XDECREF( var_step_accepted );
    var_step_accepted = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_t_new );
    var_t_new = NULL;

    Py_XDECREF( var_y_predict );
    var_y_predict = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_psi );
    var_psi = NULL;

    Py_XDECREF( var_converged );
    var_converged = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_n_iter );
    var_n_iter = NULL;

    Py_XDECREF( var_y_new );
    var_y_new = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_factor );
    var_factor = NULL;

    Py_XDECREF( var_safety );
    var_safety = NULL;

    Py_XDECREF( var_error );
    var_error = NULL;

    Py_XDECREF( var_error_norm );
    var_error_norm = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_error_m );
    var_error_m = NULL;

    Py_XDECREF( var_error_m_norm );
    var_error_m_norm = NULL;

    Py_XDECREF( var_error_p );
    var_error_p = NULL;

    Py_XDECREF( var_error_p_norm );
    var_error_p_norm = NULL;

    Py_XDECREF( var_error_norms );
    var_error_norms = NULL;

    Py_XDECREF( var_factors );
    var_factors = NULL;

    Py_XDECREF( var_delta_order );
    var_delta_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_6__step_impl );
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


static PyObject *impl_scipy$integrate$_ivp$bdf$$$function_7__dense_output_impl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_b67dd469d1d4de0720a41275a42d512e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b67dd469d1d4de0720a41275a42d512e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b67dd469d1d4de0720a41275a42d512e, codeobj_b67dd469d1d4de0720a41275a42d512e, module_scipy$integrate$_ivp$bdf, sizeof(void *) );
    frame_b67dd469d1d4de0720a41275a42d512e = cache_frame_b67dd469d1d4de0720a41275a42d512e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b67dd469d1d4de0720a41275a42d512e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b67dd469d1d4de0720a41275a42d512e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_right_name_2;
        PyObject *tmp_step_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_BdfDenseOutput );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BdfDenseOutput );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BdfDenseOutput" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 441;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_t_old );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 441;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_t );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 441;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_h_abs );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 441;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_direction );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 441;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 441;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_order );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 442;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_D );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 442;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_order );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 442;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_pos_1;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 442;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 442;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b67dd469d1d4de0720a41275a42d512e->m_frame.f_lineno = 442;
        tmp_args_element_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 442;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b67dd469d1d4de0720a41275a42d512e->m_frame.f_lineno = 441;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 441;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b67dd469d1d4de0720a41275a42d512e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b67dd469d1d4de0720a41275a42d512e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b67dd469d1d4de0720a41275a42d512e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b67dd469d1d4de0720a41275a42d512e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b67dd469d1d4de0720a41275a42d512e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b67dd469d1d4de0720a41275a42d512e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b67dd469d1d4de0720a41275a42d512e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_b67dd469d1d4de0720a41275a42d512e == cache_frame_b67dd469d1d4de0720a41275a42d512e )
    {
        Py_DECREF( frame_b67dd469d1d4de0720a41275a42d512e );
    }
    cache_frame_b67dd469d1d4de0720a41275a42d512e = NULL;

    assertFrameObject( frame_b67dd469d1d4de0720a41275a42d512e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_7__dense_output_impl );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_7__dense_output_impl );
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


static PyObject *impl_scipy$integrate$_ivp$bdf$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_t_old = python_pars[ 1 ];
    PyObject *par_t = python_pars[ 2 ];
    PyObject *par_h = python_pars[ 3 ];
    PyObject *par_order = python_pars[ 4 ];
    PyObject *par_D = python_pars[ 5 ];
    struct Nuitka_FrameObject *frame_60b005de39e2edb9e5e6543c70baf5d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_60b005de39e2edb9e5e6543c70baf5d3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_60b005de39e2edb9e5e6543c70baf5d3, codeobj_60b005de39e2edb9e5e6543c70baf5d3, module_scipy$integrate$_ivp$bdf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_60b005de39e2edb9e5e6543c70baf5d3 = cache_frame_60b005de39e2edb9e5e6543c70baf5d3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_60b005de39e2edb9e5e6543c70baf5d3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_60b005de39e2edb9e5e6543c70baf5d3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_BdfDenseOutput );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BdfDenseOutput );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BdfDenseOutput" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 447;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 447;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_t_old );
        tmp_args_element_name_1 = par_t_old;
        CHECK_OBJECT( par_t );
        tmp_args_element_name_2 = par_t;
        frame_60b005de39e2edb9e5e6543c70baf5d3->m_frame.f_lineno = 447;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 447;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_order );
        tmp_assattr_name_1 = par_order;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_order, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_t );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_h );
        tmp_left_name_2 = par_h;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 449;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_arange );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 449;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_order );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 449;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        frame_60b005de39e2edb9e5e6543c70baf5d3->m_frame.f_lineno = 449;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 449;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 449;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_t_shift, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_h );
        tmp_left_name_3 = par_h;
        tmp_left_name_4 = const_int_pos_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 450;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_arange );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 450;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_order );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 450;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        frame_60b005de39e2edb9e5e6543c70baf5d3->m_frame.f_lineno = 450;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 450;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 450;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 450;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_denom, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 450;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_D );
        tmp_assattr_name_4 = par_D;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_D, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 451;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_60b005de39e2edb9e5e6543c70baf5d3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_60b005de39e2edb9e5e6543c70baf5d3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_60b005de39e2edb9e5e6543c70baf5d3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_60b005de39e2edb9e5e6543c70baf5d3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_60b005de39e2edb9e5e6543c70baf5d3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_60b005de39e2edb9e5e6543c70baf5d3,
        type_description_1,
        par_self,
        par_t_old,
        par_t,
        par_h,
        par_order,
        par_D,
        NULL
    );


    // Release cached frame.
    if ( frame_60b005de39e2edb9e5e6543c70baf5d3 == cache_frame_60b005de39e2edb9e5e6543c70baf5d3 )
    {
        Py_DECREF( frame_60b005de39e2edb9e5e6543c70baf5d3 );
    }
    cache_frame_60b005de39e2edb9e5e6543c70baf5d3 = NULL;

    assertFrameObject( frame_60b005de39e2edb9e5e6543c70baf5d3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_t_old );
    Py_DECREF( par_t_old );
    par_t_old = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_h );
    Py_DECREF( par_h );
    par_h = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    CHECK_OBJECT( (PyObject *)par_D );
    Py_DECREF( par_D );
    par_D = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_t_old );
    Py_DECREF( par_t_old );
    par_t_old = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_h );
    Py_DECREF( par_h );
    par_h = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    CHECK_OBJECT( (PyObject *)par_D );
    Py_DECREF( par_D );
    par_D = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_8___init__ );
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


static PyObject *impl_scipy$integrate$_ivp$bdf$$$function_9__call_impl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_t = python_pars[ 1 ];
    PyObject *var_x = NULL;
    PyObject *var_p = NULL;
    PyObject *var_y = NULL;
    struct Nuitka_FrameObject *frame_ecf4487f9b06b87f9d3cdcb373664288;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ecf4487f9b06b87f9d3cdcb373664288 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ecf4487f9b06b87f9d3cdcb373664288, codeobj_ecf4487f9b06b87f9d3cdcb373664288, module_scipy$integrate$_ivp$bdf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ecf4487f9b06b87f9d3cdcb373664288 = cache_frame_ecf4487f9b06b87f9d3cdcb373664288;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ecf4487f9b06b87f9d3cdcb373664288 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ecf4487f9b06b87f9d3cdcb373664288 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_t );
        tmp_source_name_1 = par_t;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "ooooo";
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
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_t );
            tmp_left_name_2 = par_t;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_t_shift );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 455;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 455;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_denom );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 455;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 455;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_x == NULL );
            var_x = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 456;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_1 = var_x;
            frame_ecf4487f9b06b87f9d3cdcb373664288->m_frame.f_lineno = 456;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_cumprod, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 456;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_p == NULL );
            var_p = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_3;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_4;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_t );
            tmp_left_name_4 = par_t;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_t_shift );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_tuple_slice_none_none_none_none_tuple;
            tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_denom );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 458;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_2 = const_tuple_slice_none_none_none_none_tuple;
            tmp_right_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_2 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 458;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_x == NULL );
            var_x = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 459;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_cumprod );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 459;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x );
            tmp_tuple_element_1 = var_x;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
            frame_ecf4487f9b06b87f9d3cdcb373664288->m_frame.f_lineno = 459;
            tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 459;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_p == NULL );
            var_p = tmp_assign_source_4;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_8;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_9;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 461;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dot );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_D );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 461;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_slice_int_pos_1_none_none;
        tmp_source_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_source_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 461;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_T );
        Py_DECREF( tmp_source_name_8 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 461;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_p );
        tmp_args_element_name_3 = var_p;
        frame_ecf4487f9b06b87f9d3cdcb373664288->m_frame.f_lineno = 461;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_y == NULL );
        var_y = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( var_y );
        tmp_source_name_10 = var_y;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_ndim );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 462;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 462;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_source_name_11;
            PyObject *tmp_subscript_name_4;
            CHECK_OBJECT( var_y );
            tmp_left_name_5 = var_y;
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_D );
            if ( tmp_subscribed_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 463;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_4 = const_int_0;
            tmp_right_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
            Py_DECREF( tmp_subscribed_name_4 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 463;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 463;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = tmp_left_name_5;
            var_y = tmp_assign_source_6;

        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_source_name_12;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( var_y );
            tmp_left_name_6 = var_y;
            CHECK_OBJECT( par_self );
            tmp_source_name_12 = par_self;
            tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_D );
            if ( tmp_subscribed_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 465;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_5 = const_tuple_int_0_slice_none_none_none_none_tuple;
            tmp_right_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            Py_DECREF( tmp_subscribed_name_5 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 465;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 465;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = tmp_left_name_6;
            var_y = tmp_assign_source_7;

        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ecf4487f9b06b87f9d3cdcb373664288 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ecf4487f9b06b87f9d3cdcb373664288 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ecf4487f9b06b87f9d3cdcb373664288, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ecf4487f9b06b87f9d3cdcb373664288->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ecf4487f9b06b87f9d3cdcb373664288, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ecf4487f9b06b87f9d3cdcb373664288,
        type_description_1,
        par_self,
        par_t,
        var_x,
        var_p,
        var_y
    );


    // Release cached frame.
    if ( frame_ecf4487f9b06b87f9d3cdcb373664288 == cache_frame_ecf4487f9b06b87f9d3cdcb373664288 )
    {
        Py_DECREF( frame_ecf4487f9b06b87f9d3cdcb373664288 );
    }
    cache_frame_ecf4487f9b06b87f9d3cdcb373664288 = NULL;

    assertFrameObject( frame_ecf4487f9b06b87f9d3cdcb373664288 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_y );
    tmp_return_value = var_y;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_9__call_impl );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_p );
    Py_DECREF( var_p );
    var_p = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf$$$function_9__call_impl );
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



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_1_compute_R(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$bdf$$$function_1_compute_R,
        const_str_plain_compute_R,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9613e1ad58a6b2b30a2bbef17f78c4af,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$bdf,
        const_str_digest_92a3c2ea898196b01415210a8c9d3664,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_2_change_D(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$bdf$$$function_2_change_D,
        const_str_plain_change_D,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9f12ad5ab4a23985db2ba8aa73a0ed02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$bdf,
        const_str_digest_6be6fb98190e18abffc5e32c08e5949a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_3_solve_bdf_system(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$bdf$$$function_3_solve_bdf_system,
        const_str_plain_solve_bdf_system,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_56bdf31cd98302ea2e6f7906542b354e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$bdf,
        const_str_digest_637f770f1d55785ccc12a98833f5e6da,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_4___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$bdf$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_8b68e630264a8b1d201696d9fc85881a,
#endif
        codeobj_c17f3bbdee480a4156149add0a094586,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$bdf,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_1_lu(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_1_lu,
        const_str_plain_lu,
#if PYTHON_VERSION >= 300
        const_str_digest_760ce18441b7dbf86b16d801f5b6cdea,
#endif
        codeobj_cf4752f34c3e2c98d8d09dc233e8d64f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$bdf,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_2_solve_lu(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_2_solve_lu,
        const_str_plain_solve_lu,
#if PYTHON_VERSION >= 300
        const_str_digest_a35e574e546e494431332be4571f9322,
#endif
        codeobj_95f5cf08c9b36566790da9b252f5da7e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$bdf,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_3_lu(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_3_lu,
        const_str_plain_lu,
#if PYTHON_VERSION >= 300
        const_str_digest_760ce18441b7dbf86b16d801f5b6cdea,
#endif
        codeobj_78b254c9cc2f069c4ff5e161a04b65b2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$bdf,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_4_solve_lu(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$bdf$$$function_4___init__$$$function_4_solve_lu,
        const_str_plain_solve_lu,
#if PYTHON_VERSION >= 300
        const_str_digest_a35e574e546e494431332be4571f9322,
#endif
        codeobj_9f12684d3cf3d17155e8be202d7c806f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$bdf,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_5__validate_jac(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$bdf$$$function_5__validate_jac,
        const_str_plain__validate_jac,
#if PYTHON_VERSION >= 300
        const_str_digest_6cf608b0cbec929ea25e3fa0931f9176,
#endif
        codeobj_1bdbc33bacebda932096501eb70314f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$bdf,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_1_jac_wrapped(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_1_jac_wrapped,
        const_str_plain_jac_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_761c3bf293b5e9ed06681634e83f7368,
#endif
        codeobj_76e9fb26bd703142089e04284d95d022,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$bdf,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_2_jac_wrapped(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_2_jac_wrapped,
        const_str_plain_jac_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_761c3bf293b5e9ed06681634e83f7368,
#endif
        codeobj_ad40374362cb1154b16f15240b01ac4b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$bdf,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_3_jac_wrapped(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$bdf$$$function_5__validate_jac$$$function_3_jac_wrapped,
        const_str_plain_jac_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_761c3bf293b5e9ed06681634e83f7368,
#endif
        codeobj_36f09ffbcdc6f54fb757cd2957710124,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$bdf,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_6__step_impl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$bdf$$$function_6__step_impl,
        const_str_plain__step_impl,
#if PYTHON_VERSION >= 300
        const_str_digest_6ce30345ef2e34fde0f3a2955226effa,
#endif
        codeobj_a0db20aff1310f08134c1c2edb5f1f12,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$bdf,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_7__dense_output_impl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$bdf$$$function_7__dense_output_impl,
        const_str_plain__dense_output_impl,
#if PYTHON_VERSION >= 300
        const_str_digest_e4d5a10a3826cab391e130e10a568ac4,
#endif
        codeobj_b67dd469d1d4de0720a41275a42d512e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$bdf,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_8___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$bdf$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_8f53e8f7ece812708b8e4489d1cb5b03,
#endif
        codeobj_60b005de39e2edb9e5e6543c70baf5d3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$bdf,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_9__call_impl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$bdf$$$function_9__call_impl,
        const_str_plain__call_impl,
#if PYTHON_VERSION >= 300
        const_str_digest_509e47ab625d232d5b05061eb075619c,
#endif
        codeobj_ecf4487f9b06b87f9d3cdcb373664288,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$bdf,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$integrate$_ivp$bdf =
{
    PyModuleDef_HEAD_INIT,
    "scipy.integrate._ivp.bdf",
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

MOD_INIT_DECL( scipy$integrate$_ivp$bdf )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$integrate$_ivp$bdf );
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
    puts("scipy.integrate._ivp.bdf: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.integrate._ivp.bdf: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.integrate._ivp.bdf: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$integrate$_ivp$bdf" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$integrate$_ivp$bdf = Py_InitModule4(
        "scipy.integrate._ivp.bdf",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$integrate$_ivp$bdf = PyModule_Create( &mdef_scipy$integrate$_ivp$bdf );
#endif

    moduledict_scipy$integrate$_ivp$bdf = MODULE_DICT( module_scipy$integrate$_ivp$bdf );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$integrate$_ivp$bdf,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$integrate$_ivp$bdf,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$integrate$_ivp$bdf,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$integrate$_ivp$bdf,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$integrate$_ivp$bdf );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_bf6fc3dd999c1466e32022e13ebd0a43, module_scipy$integrate$_ivp$bdf );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    struct Nuitka_FrameObject *frame_ce1a50ec0879a4d471d8478f0e726d0b;
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
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_scipy$integrate$_ivp$bdf_73 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_525e54c5e1fc95479230229c57a28aa8_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_525e54c5e1fc95479230229c57a28aa8_2 = NULL;
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
    PyObject *locals_scipy$integrate$_ivp$bdf_445 = NULL;
    struct Nuitka_FrameObject *frame_4172348d4417625a52dfe4a77286e6b9_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4172348d4417625a52dfe4a77286e6b9_3 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_ce1a50ec0879a4d471d8478f0e726d0b = MAKE_MODULE_FRAME( codeobj_ce1a50ec0879a4d471d8478f0e726d0b, module_scipy$integrate$_ivp$bdf );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ce1a50ec0879a4d471d8478f0e726d0b );
    assert( Py_REFCNT( frame_ce1a50ec0879a4d471d8478f0e726d0b ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_ce1a50ec0879a4d471d8478f0e726d0b->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$integrate$_ivp$bdf;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_ce1a50ec0879a4d471d8478f0e726d0b->m_frame.f_lineno = 2;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$integrate$_ivp$bdf;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_lu_factor_str_plain_lu_solve_tuple;
        tmp_level_name_2 = const_int_0;
        frame_ce1a50ec0879a4d471d8478f0e726d0b->m_frame.f_lineno = 3;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_lu_factor );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_lu_factor, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_lu_solve );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_lu_solve, tmp_assign_source_11 );
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$integrate$_ivp$bdf;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_issparse_str_plain_csc_matrix_str_plain_eye_tuple;
        tmp_level_name_3 = const_int_0;
        frame_ce1a50ec0879a4d471d8478f0e726d0b->m_frame.f_lineno = 4;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_6 = tmp_import_from_3__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_issparse );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_issparse, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_7 = tmp_import_from_3__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_csc_matrix );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_csc_matrix, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_8 = tmp_import_from_3__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_eye );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_eye, tmp_assign_source_15 );
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_8783708b6421c71a0892a844e756fb02;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$integrate$_ivp$bdf;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_splu_tuple;
        tmp_level_name_4 = const_int_0;
        frame_ce1a50ec0879a4d471d8478f0e726d0b->m_frame.f_lineno = 5;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_splu );
        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_splu, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_52d7d48bcb5881cf5fb85bf73f99ad81;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$integrate$_ivp$bdf;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_group_columns_tuple;
        tmp_level_name_5 = const_int_0;
        frame_ce1a50ec0879a4d471d8478f0e726d0b->m_frame.f_lineno = 6;
        tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_group_columns );
        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_group_columns, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_common;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$integrate$_ivp$bdf;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_bdd347893f2c34ab2097fd21c48c2869_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_ce1a50ec0879a4d471d8478f0e726d0b->m_frame.f_lineno = 7;
        tmp_assign_source_18 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

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
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_scipy$integrate$_ivp$bdf,
                const_str_plain_validate_max_step,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_validate_max_step );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_validate_max_step, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_12 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_12 ) )
        {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_scipy$integrate$_ivp$bdf,
                const_str_plain_validate_tol,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_validate_tol );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_validate_tol, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_13 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_13 ) )
        {
           tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_scipy$integrate$_ivp$bdf,
                const_str_plain_select_initial_step,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_select_initial_step );
        }

        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_select_initial_step, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_14 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_14 ) )
        {
           tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_scipy$integrate$_ivp$bdf,
                const_str_plain_norm,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_norm );
        }

        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_15 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_15 ) )
        {
           tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_scipy$integrate$_ivp$bdf,
                const_str_plain_EPS,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_EPS );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_EPS, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_16 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_16 ) )
        {
           tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_scipy$integrate$_ivp$bdf,
                const_str_plain_num_jac,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_num_jac );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_num_jac, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_17 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_17 ) )
        {
           tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_scipy$integrate$_ivp$bdf,
                const_str_plain_validate_first_step,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_validate_first_step );
        }

        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_validate_first_step, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_18 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_18 ) )
        {
           tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_scipy$integrate$_ivp$bdf,
                const_str_plain_warn_extraneous,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_warn_extraneous );
        }

        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_warn_extraneous, tmp_assign_source_26 );
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
        PyObject *tmp_assign_source_27;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_base;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$integrate$_ivp$bdf;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_OdeSolver_str_plain_DenseOutput_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_ce1a50ec0879a4d471d8478f0e726d0b->m_frame.f_lineno = 10;
        tmp_assign_source_27 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_5__module == NULL );
        tmp_import_from_5__module = tmp_assign_source_27;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_19 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_19 ) )
        {
           tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_scipy$integrate$_ivp$bdf,
                const_str_plain_OdeSolver,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_OdeSolver );
        }

        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_OdeSolver, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_20 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_20 ) )
        {
           tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_scipy$integrate$_ivp$bdf,
                const_str_plain_DenseOutput,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_DenseOutput );
        }

        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_DenseOutput, tmp_assign_source_29 );
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
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = const_int_pos_5;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_MAX_ORDER, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = const_int_pos_4;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = const_float_0_2;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_MIN_FACTOR, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = const_int_pos_10;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_MAX_FACTOR, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_1_compute_R(  );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_compute_R, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_2_change_D(  );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_change_D, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_3_solve_bdf_system(  );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_solve_bdf_system, tmp_assign_source_36 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_OdeSolver );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OdeSolver );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OdeSolver" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 73;

            goto try_except_handler_6;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_37 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_37, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
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


            exception_lineno = 73;

            goto try_except_handler_6;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 73;

            goto try_except_handler_6;
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


            exception_lineno = 73;

            goto try_except_handler_6;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;

            goto try_except_handler_6;
        }
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_39 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_2;
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


            exception_lineno = 73;

            goto try_except_handler_6;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;

            goto try_except_handler_6;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_1 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_1, const_str_plain___prepare__ );
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
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;

                goto try_except_handler_6;
            }
            tmp_tuple_element_2 = const_str_plain_BDF;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_ce1a50ec0879a4d471d8478f0e726d0b->m_frame.f_lineno = 73;
            tmp_assign_source_40 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_40 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;

                goto try_except_handler_6;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_40;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_3 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_3, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;

                goto try_except_handler_6;
            }
            tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_4;
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


                    exception_lineno = 73;

                    goto try_except_handler_6;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 73;

                    goto try_except_handler_6;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 73;

                    goto try_except_handler_6;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 73;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_6;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_41;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$integrate$_ivp$bdf_73 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_bf6fc3dd999c1466e32022e13ebd0a43;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$bdf_73, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;

            goto try_except_handler_8;
        }
        tmp_dictset_value = const_str_digest_23e81b823749276ddf62bcccc4466e87;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$bdf_73, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;

            goto try_except_handler_8;
        }
        tmp_dictset_value = const_str_plain_BDF;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$bdf_73, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;

            goto try_except_handler_8;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_525e54c5e1fc95479230229c57a28aa8_2, codeobj_525e54c5e1fc95479230229c57a28aa8, module_scipy$integrate$_ivp$bdf, sizeof(void *) );
        frame_525e54c5e1fc95479230229c57a28aa8_2 = cache_frame_525e54c5e1fc95479230229c57a28aa8_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_525e54c5e1fc95479230229c57a28aa8_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_525e54c5e1fc95479230229c57a28aa8_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_4;
            tmp_source_name_5 = PyObject_GetItem( locals_scipy$integrate$_ivp$bdf_73, const_str_plain_np );

            if ( tmp_source_name_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 185;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_5 = tmp_mvar_value_4;
                Py_INCREF( tmp_source_name_5 );
                }
            }

            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_inf );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_1 = PyTuple_New( 7 );
            PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_4 );
            tmp_tuple_element_4 = const_float_0_001;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = const_float_1eminus_06;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_None;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_None;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_False;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 5, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_None;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 6, tmp_tuple_element_4 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_4___init__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$bdf_73, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_5__validate_jac(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$bdf_73, const_str_plain__validate_jac, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_6__step_impl(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$bdf_73, const_str_plain__step_impl, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_7__dense_output_impl(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$bdf_73, const_str_plain__dense_output_impl, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 440;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_525e54c5e1fc95479230229c57a28aa8_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_525e54c5e1fc95479230229c57a28aa8_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_525e54c5e1fc95479230229c57a28aa8_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_525e54c5e1fc95479230229c57a28aa8_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_525e54c5e1fc95479230229c57a28aa8_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_525e54c5e1fc95479230229c57a28aa8_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_525e54c5e1fc95479230229c57a28aa8_2 == cache_frame_525e54c5e1fc95479230229c57a28aa8_2 )
        {
            Py_DECREF( frame_525e54c5e1fc95479230229c57a28aa8_2 );
        }
        cache_frame_525e54c5e1fc95479230229c57a28aa8_2 = NULL;

        assertFrameObject( frame_525e54c5e1fc95479230229c57a28aa8_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_8;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = const_str_plain_BDF;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_5 );
            tmp_tuple_element_5 = locals_scipy$integrate$_ivp$bdf_73;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_ce1a50ec0879a4d471d8478f0e726d0b->m_frame.f_lineno = 73;
            tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;

                goto try_except_handler_8;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_42 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_42 );
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF( locals_scipy$integrate$_ivp$bdf_73 );
        locals_scipy$integrate$_ivp$bdf_73 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_scipy$integrate$_ivp$bdf_73 );
        locals_scipy$integrate$_ivp$bdf_73 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 73;
        goto try_except_handler_6;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_BDF, tmp_assign_source_42 );
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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

    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_DenseOutput );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DenseOutput );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DenseOutput" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 445;

            goto try_except_handler_9;
        }

        tmp_tuple_element_6 = tmp_mvar_value_5;
        tmp_assign_source_44 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_assign_source_44, 0, tmp_tuple_element_6 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;

            goto try_except_handler_9;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;

            goto try_except_handler_9;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_2 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;

            goto try_except_handler_9;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;

            goto try_except_handler_9;
        }
        condexpr_end_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_46 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;

            goto try_except_handler_9;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;

            goto try_except_handler_9;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;

            goto try_except_handler_9;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_6 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_6, const_str_plain___prepare__ );
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_7 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 445;

                goto try_except_handler_9;
            }
            tmp_tuple_element_7 = const_str_plain_BdfDenseOutput;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_ce1a50ec0879a4d471d8478f0e726d0b->m_frame.f_lineno = 445;
            tmp_assign_source_47 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_47 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 445;

                goto try_except_handler_9;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_47;
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_8 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_8, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 445;

                goto try_except_handler_9;
            }
            tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
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
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_9;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_8 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 445;

                    goto try_except_handler_9;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_8 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_9 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_9 == NULL) );
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_9 );
                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 445;

                    goto try_except_handler_9;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_8 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 445;

                    goto try_except_handler_9;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 445;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_9;
            }
            branch_no_6:;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_48;
            tmp_assign_source_48 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_48;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_scipy$integrate$_ivp$bdf_445 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_bf6fc3dd999c1466e32022e13ebd0a43;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$bdf_445, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;

            goto try_except_handler_11;
        }
        tmp_dictset_value = const_str_plain_BdfDenseOutput;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$bdf_445, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;

            goto try_except_handler_11;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_4172348d4417625a52dfe4a77286e6b9_3, codeobj_4172348d4417625a52dfe4a77286e6b9, module_scipy$integrate$_ivp$bdf, sizeof(void *) );
        frame_4172348d4417625a52dfe4a77286e6b9_3 = cache_frame_4172348d4417625a52dfe4a77286e6b9_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_4172348d4417625a52dfe4a77286e6b9_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_4172348d4417625a52dfe4a77286e6b9_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_8___init__(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$bdf_445, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$bdf$$$function_9__call_impl(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$bdf_445, const_str_plain__call_impl, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4172348d4417625a52dfe4a77286e6b9_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4172348d4417625a52dfe4a77286e6b9_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_4172348d4417625a52dfe4a77286e6b9_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_4172348d4417625a52dfe4a77286e6b9_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_4172348d4417625a52dfe4a77286e6b9_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_4172348d4417625a52dfe4a77286e6b9_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_4172348d4417625a52dfe4a77286e6b9_3 == cache_frame_4172348d4417625a52dfe4a77286e6b9_3 )
        {
            Py_DECREF( frame_4172348d4417625a52dfe4a77286e6b9_3 );
        }
        cache_frame_4172348d4417625a52dfe4a77286e6b9_3 = NULL;

        assertFrameObject( frame_4172348d4417625a52dfe4a77286e6b9_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_11;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_9 = const_str_plain_BdfDenseOutput;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_9 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_9 );
            tmp_tuple_element_9 = locals_scipy$integrate$_ivp$bdf_445;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_ce1a50ec0879a4d471d8478f0e726d0b->m_frame.f_lineno = 445;
            tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 445;

                goto try_except_handler_11;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_49 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_49 );
        goto try_return_handler_11;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF( locals_scipy$integrate$_ivp$bdf_445 );
        locals_scipy$integrate$_ivp$bdf_445 = NULL;
        goto try_return_handler_10;
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

        Py_DECREF( locals_scipy$integrate$_ivp$bdf_445 );
        locals_scipy$integrate$_ivp$bdf_445 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$bdf );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 445;
        goto try_except_handler_9;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain_BdfDenseOutput, tmp_assign_source_49 );
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce1a50ec0879a4d471d8478f0e726d0b );
#endif
    popFrameStack();

    assertFrameObject( frame_ce1a50ec0879a4d471d8478f0e726d0b );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce1a50ec0879a4d471d8478f0e726d0b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ce1a50ec0879a4d471d8478f0e726d0b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ce1a50ec0879a4d471d8478f0e726d0b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ce1a50ec0879a4d471d8478f0e726d0b, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$bdf, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$integrate$_ivp$bdf );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
