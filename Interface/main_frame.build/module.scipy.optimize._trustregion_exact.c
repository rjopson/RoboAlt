/* Generated code for Python module 'scipy.optimize._trustregion_exact'
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

/* The "_module_scipy$optimize$_trustregion_exact" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_trustregion_exact;
PyDictObject *moduledict_scipy$optimize$_trustregion_exact;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_27a4d5354c56338739f75c73884ca529_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_f9d0affca32614f5d1dab5e11047bd12;
static PyObject *const_str_digest_d759bdb8088931bdc73088270ebf35b9;
extern PyObject *const_str_plain_fro;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain__minimize_trust_region;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_digest_52c1ba5389c1e22064637e6a5ddf1e27;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_potrf;
extern PyObject *const_str_plain_subproblem;
static PyObject *const_str_plain_lambda_lb;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
extern PyObject *const_str_plain_solve;
extern PyObject *const_str_plain_trust_region_options;
static PyObject *const_str_plain_k_easy;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_jac;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_overwrite_a;
extern PyObject *const_str_plain_hess;
extern PyObject *const_str_plain_get_boundaries_intersections;
extern PyObject *const_str_plain_m;
static PyObject *const_str_plain_gershgorin_bounds;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_jac_mag;
extern PyObject *const_str_plain_diagonal;
extern PyObject *const_str_plain_EPS;
extern PyObject *const_str_plain_wm;
extern PyObject *const_str_plain_H;
static PyObject *const_str_plain_previous_tr_radius;
static PyObject *const_tuple_6c94e90462dc9d38574e78f9ae70b2d1_tuple;
extern PyObject *const_str_plain_eps;
extern PyObject *const_str_plain_pm;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain___debug__;
static PyObject *const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple;
extern PyObject *const_str_plain_diag;
static PyObject *const_str_plain_IterativeSubproblem;
static PyObject *const_tuple_f75e89d6f4e8161b073c790dfa330ce0_tuple;
static PyObject *const_str_plain_singular_leading_submatrix;
extern PyObject *const_str_plain_dimension;
static PyObject *const_str_plain_hess_gershgorin_lb;
static PyObject *const_tuple_5e141733a32f11c42eb4f9ddf034516f_tuple;
static PyObject *const_dict_599c7dc8e0e16433c47a081ff3969951;
extern PyObject *const_float_0_1;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_n;
static PyObject *const_str_digest_85f944e601fce1e2690e7dc318a97e8c;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_plain_trans;
extern PyObject *const_str_plain_solve_triangular;
extern PyObject *const_str_plain_p;
static PyObject *const_str_digest_0719157d038f05d0040df0caf963edb3;
extern PyObject *const_tuple_str_plain_potrf_tuple;
static PyObject *const_str_plain_w_norm;
extern PyObject *const_str_plain_float;
static PyObject *const_str_plain_H_row_sums;
static PyObject *const_str_plain_H_diag;
extern PyObject *const_str_plain_x0;
extern PyObject *const_str_plain_delta;
extern PyObject *const_str_plain_hessp;
static PyObject *const_str_digest_63daa943f530d410e692780d41b2eb19;
static PyObject *const_str_plain_estimate_smallest_singular_value;
extern PyObject *const_str_plain_tr_radius;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_fun;
extern PyObject *const_str_plain_norm;
static PyObject *const_str_digest_ecbba26f89ac6efb9ea751cd95e0977f;
static PyObject *const_tuple_31d06c631be6ebe37b349c9d6d89d130_tuple;
static PyObject *const_str_plain_hess_inf;
extern PyObject *const_str_plain_ub;
static PyObject *const_str_digest_8d5534ec9f82c2ff34fc1ead4cbdad03;
extern PyObject *const_tuple_2bf650a5acc66f3638b0d9265addf376_tuple;
extern PyObject *const_str_plain_cholesky;
extern PyObject *const_str_plain_BaseQuadraticSubproblem;
extern PyObject *const_str_plain_abs;
static PyObject *const_str_digest_6c7488363ea0a9ab22cc1720c0f51847;
static PyObject *const_str_digest_f00a776e221510c5fcdb5517c29e6a73;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_list_a4682d446e14b525ac296b0b50013258_list;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_atleast_2d;
extern PyObject *const_str_plain__minimize_trustregion_exact;
extern PyObject *const_int_0;
static PyObject *const_tuple_none_float_0_1_float_0_2_tuple;
static PyObject *const_str_digest_1c1c48be6cb62119d24eb0056c6c198d;
extern PyObject *const_str_plain_finfo;
extern PyObject *const_str_plain_eye;
extern PyObject *const_str_plain_pp;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_lambda_current;
extern PyObject *const_float_0_2;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_s_min;
static PyObject *const_str_digest_855525b13b12aae365696bc4174a2ddf;
extern PyObject *const_str_plain_niter;
extern PyObject *const_str_plain_Inf;
static PyObject *const_str_plain_hess_gershgorin_ub;
extern PyObject *const_tuple_tuple_empty_none_none_tuple;
static PyObject *const_str_digest_535420f52872b6347b0c77cabde0120c;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_CLOSE_TO_ZERO;
static PyObject *const_str_digest_910b7beed3c1884b79a3a69ba8e32d07;
static PyObject *const_str_plain_UPDATE_COEFF;
static PyObject *const_str_digest_3b6e6bd60181f23c9d6cc0d1f75ad46d;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_float_0_01;
static PyObject *const_str_digest_c2ec6a64484da89006ceb36f24843d52;
extern PyObject *const_str_plain_clean;
static PyObject *const_str_plain_z_min;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_wp;
extern PyObject *const_str_plain_get_lapack_funcs;
extern PyObject *const_str_plain_axis;
static PyObject *const_str_plain_lambda_initial;
static PyObject *const_str_plain_H_diag_abs;
extern PyObject *const_str_plain_key;
extern PyObject *const_dict_c4b01644824ba6bad132707fcdaa03f1;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_cho_solve;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain__trustregion;
extern PyObject *const_str_plain_lb;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_k_hard;
static PyObject *const_str_plain_hess_fro;
extern PyObject *const_str_plain_T;
static PyObject *const_tuple_1f498491bb1fff089e3a5d15a4fca68c_tuple;
static PyObject *const_str_plain_v_norm;
static PyObject *const_str_digest_e77279d991b10cbef17cd4833fc40e26;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
extern PyObject *const_int_pos_2;
static PyObject *const_dict_f8944f278ce86ace60cdf38e7744a772;
static PyObject *const_str_plain_lambda_ub;
static PyObject *const_str_plain__initial_values;
static PyObject *const_tuple_e1659e1b2e9d77b7e7b1f78970b1206a_tuple;
extern PyObject *const_str_plain_U;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_f9d0affca32614f5d1dab5e11047bd12 = UNSTREAM_STRING_ASCII( &constant_bin[ 5113201 ], 1113, 0 );
    const_str_digest_d759bdb8088931bdc73088270ebf35b9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5114314 ], 46, 0 );
    const_str_digest_52c1ba5389c1e22064637e6a5ddf1e27 = UNSTREAM_STRING_ASCII( &constant_bin[ 5114360 ], 63, 0 );
    const_str_plain_lambda_lb = UNSTREAM_STRING_ASCII( &constant_bin[ 5114423 ], 9, 1 );
    const_str_plain_k_easy = UNSTREAM_STRING_ASCII( &constant_bin[ 5114432 ], 6, 1 );
    const_str_plain_gershgorin_bounds = UNSTREAM_STRING_ASCII( &constant_bin[ 5114438 ], 17, 1 );
    const_str_plain_previous_tr_radius = UNSTREAM_STRING_ASCII( &constant_bin[ 5114455 ], 18, 1 );
    const_tuple_6c94e90462dc9d38574e78f9ae70b2d1_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_6c94e90462dc9d38574e78f9ae70b2d1_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_6c94e90462dc9d38574e78f9ae70b2d1_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_6c94e90462dc9d38574e78f9ae70b2d1_tuple, 2, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_6c94e90462dc9d38574e78f9ae70b2d1_tuple, 3, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_6c94e90462dc9d38574e78f9ae70b2d1_tuple, 4, const_str_plain_hess ); Py_INCREF( const_str_plain_hess );
    PyTuple_SET_ITEM( const_tuple_6c94e90462dc9d38574e78f9ae70b2d1_tuple, 5, const_str_plain_hessp ); Py_INCREF( const_str_plain_hessp );
    PyTuple_SET_ITEM( const_tuple_6c94e90462dc9d38574e78f9ae70b2d1_tuple, 6, const_str_plain_k_easy ); Py_INCREF( const_str_plain_k_easy );
    const_str_plain_k_hard = UNSTREAM_STRING_ASCII( &constant_bin[ 5114473 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_6c94e90462dc9d38574e78f9ae70b2d1_tuple, 7, const_str_plain_k_hard ); Py_INCREF( const_str_plain_k_hard );
    PyTuple_SET_ITEM( const_tuple_6c94e90462dc9d38574e78f9ae70b2d1_tuple, 8, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple, 0, const_str_plain_U ); Py_INCREF( const_str_plain_U );
    PyTuple_SET_ITEM( const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple, 3, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple, 4, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple, 5, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_str_plain_wp = UNSTREAM_STRING_ASCII( &constant_bin[ 112148 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple, 6, const_str_plain_wp ); Py_INCREF( const_str_plain_wp );
    PyTuple_SET_ITEM( const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple, 7, const_str_plain_wm ); Py_INCREF( const_str_plain_wm );
    PyTuple_SET_ITEM( const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple, 8, const_str_plain_pp ); Py_INCREF( const_str_plain_pp );
    PyTuple_SET_ITEM( const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple, 9, const_str_plain_pm ); Py_INCREF( const_str_plain_pm );
    PyTuple_SET_ITEM( const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple, 10, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_plain_v_norm = UNSTREAM_STRING_ASCII( &constant_bin[ 5114479 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple, 11, const_str_plain_v_norm ); Py_INCREF( const_str_plain_v_norm );
    const_str_plain_w_norm = UNSTREAM_STRING_ASCII( &constant_bin[ 5114485 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple, 12, const_str_plain_w_norm ); Py_INCREF( const_str_plain_w_norm );
    PyTuple_SET_ITEM( const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple, 13, const_str_plain_s_min ); Py_INCREF( const_str_plain_s_min );
    const_str_plain_z_min = UNSTREAM_STRING_ASCII( &constant_bin[ 4780496 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple, 14, const_str_plain_z_min ); Py_INCREF( const_str_plain_z_min );
    const_str_plain_IterativeSubproblem = UNSTREAM_STRING_ASCII( &constant_bin[ 5114491 ], 19, 1 );
    const_tuple_f75e89d6f4e8161b073c790dfa330ce0_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_f75e89d6f4e8161b073c790dfa330ce0_tuple, 0, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_f75e89d6f4e8161b073c790dfa330ce0_tuple, 1, const_str_plain_get_lapack_funcs ); Py_INCREF( const_str_plain_get_lapack_funcs );
    PyTuple_SET_ITEM( const_tuple_f75e89d6f4e8161b073c790dfa330ce0_tuple, 2, const_str_plain_solve_triangular ); Py_INCREF( const_str_plain_solve_triangular );
    PyTuple_SET_ITEM( const_tuple_f75e89d6f4e8161b073c790dfa330ce0_tuple, 3, const_str_plain_cho_solve ); Py_INCREF( const_str_plain_cho_solve );
    const_str_plain_singular_leading_submatrix = UNSTREAM_STRING_ASCII( &constant_bin[ 5114510 ], 26, 1 );
    const_str_plain_hess_gershgorin_lb = UNSTREAM_STRING_ASCII( &constant_bin[ 5114536 ], 18, 1 );
    const_tuple_5e141733a32f11c42eb4f9ddf034516f_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_5e141733a32f11c42eb4f9ddf034516f_tuple, 0, const_str_plain_H ); Py_INCREF( const_str_plain_H );
    const_str_plain_H_diag = UNSTREAM_STRING_ASCII( &constant_bin[ 5114554 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_5e141733a32f11c42eb4f9ddf034516f_tuple, 1, const_str_plain_H_diag ); Py_INCREF( const_str_plain_H_diag );
    const_str_plain_H_diag_abs = UNSTREAM_STRING_ASCII( &constant_bin[ 5114560 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_5e141733a32f11c42eb4f9ddf034516f_tuple, 2, const_str_plain_H_diag_abs ); Py_INCREF( const_str_plain_H_diag_abs );
    const_str_plain_H_row_sums = UNSTREAM_STRING_ASCII( &constant_bin[ 5114570 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_5e141733a32f11c42eb4f9ddf034516f_tuple, 3, const_str_plain_H_row_sums ); Py_INCREF( const_str_plain_H_row_sums );
    PyTuple_SET_ITEM( const_tuple_5e141733a32f11c42eb4f9ddf034516f_tuple, 4, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_5e141733a32f11c42eb4f9ddf034516f_tuple, 5, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    const_dict_599c7dc8e0e16433c47a081ff3969951 = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_599c7dc8e0e16433c47a081ff3969951, const_str_plain_lower, Py_False );
    PyDict_SetItem( const_dict_599c7dc8e0e16433c47a081ff3969951, const_str_plain_overwrite_a, Py_False );
    PyDict_SetItem( const_dict_599c7dc8e0e16433c47a081ff3969951, const_str_plain_clean, Py_True );
    assert( PyDict_Size( const_dict_599c7dc8e0e16433c47a081ff3969951 ) == 3 );
    const_str_digest_85f944e601fce1e2690e7dc318a97e8c = UNSTREAM_STRING_ASCII( &constant_bin[ 5114580 ], 25, 0 );
    const_str_digest_0719157d038f05d0040df0caf963edb3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5114605 ], 28, 0 );
    const_str_digest_63daa943f530d410e692780d41b2eb19 = UNSTREAM_STRING_ASCII( &constant_bin[ 5114633 ], 724, 0 );
    const_str_plain_estimate_smallest_singular_value = UNSTREAM_STRING_ASCII( &constant_bin[ 5115357 ], 32, 1 );
    const_str_digest_ecbba26f89ac6efb9ea751cd95e0977f = UNSTREAM_STRING_ASCII( &constant_bin[ 5115389 ], 35, 0 );
    const_tuple_31d06c631be6ebe37b349c9d6d89d130_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_31d06c631be6ebe37b349c9d6d89d130_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_31d06c631be6ebe37b349c9d6d89d130_tuple, 1, const_str_plain_U ); Py_INCREF( const_str_plain_U );
    PyTuple_SET_ITEM( const_tuple_31d06c631be6ebe37b349c9d6d89d130_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_31d06c631be6ebe37b349c9d6d89d130_tuple, 3, const_str_plain_delta ); Py_INCREF( const_str_plain_delta );
    PyTuple_SET_ITEM( const_tuple_31d06c631be6ebe37b349c9d6d89d130_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_31d06c631be6ebe37b349c9d6d89d130_tuple, 5, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_plain_hess_inf = UNSTREAM_STRING_ASCII( &constant_bin[ 5115424 ], 8, 1 );
    const_str_digest_8d5534ec9f82c2ff34fc1ead4cbdad03 = UNSTREAM_STRING_ASCII( &constant_bin[ 5115432 ], 50, 0 );
    const_str_digest_6c7488363ea0a9ab22cc1720c0f51847 = UNSTREAM_STRING_ASCII( &constant_bin[ 5115482 ], 36, 0 );
    const_str_digest_f00a776e221510c5fcdb5517c29e6a73 = UNSTREAM_STRING_ASCII( &constant_bin[ 5115518 ], 233, 0 );
    const_list_a4682d446e14b525ac296b0b50013258_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_a4682d446e14b525ac296b0b50013258_list, 0, const_str_plain__minimize_trustregion_exact ); Py_INCREF( const_str_plain__minimize_trustregion_exact );
    PyList_SET_ITEM( const_list_a4682d446e14b525ac296b0b50013258_list, 1, const_str_plain_estimate_smallest_singular_value ); Py_INCREF( const_str_plain_estimate_smallest_singular_value );
    PyList_SET_ITEM( const_list_a4682d446e14b525ac296b0b50013258_list, 2, const_str_plain_singular_leading_submatrix ); Py_INCREF( const_str_plain_singular_leading_submatrix );
    PyList_SET_ITEM( const_list_a4682d446e14b525ac296b0b50013258_list, 3, const_str_plain_IterativeSubproblem ); Py_INCREF( const_str_plain_IterativeSubproblem );
    const_tuple_none_float_0_1_float_0_2_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_float_0_1_float_0_2_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_float_0_1_float_0_2_tuple, 1, const_float_0_1 ); Py_INCREF( const_float_0_1 );
    PyTuple_SET_ITEM( const_tuple_none_float_0_1_float_0_2_tuple, 2, const_float_0_2 ); Py_INCREF( const_float_0_2 );
    const_str_digest_1c1c48be6cb62119d24eb0056c6c198d = UNSTREAM_STRING_ASCII( &constant_bin[ 5115751 ], 779, 0 );
    const_str_plain_lambda_current = UNSTREAM_STRING_ASCII( &constant_bin[ 5116530 ], 14, 1 );
    const_str_digest_855525b13b12aae365696bc4174a2ddf = UNSTREAM_STRING_ASCII( &constant_bin[ 5116544 ], 57, 0 );
    const_str_plain_hess_gershgorin_ub = UNSTREAM_STRING_ASCII( &constant_bin[ 5116601 ], 18, 1 );
    const_str_digest_535420f52872b6347b0c77cabde0120c = UNSTREAM_STRING_ASCII( &constant_bin[ 5116619 ], 274, 0 );
    const_str_plain_CLOSE_TO_ZERO = UNSTREAM_STRING_ASCII( &constant_bin[ 5096257 ], 13, 1 );
    const_str_digest_910b7beed3c1884b79a3a69ba8e32d07 = UNSTREAM_STRING_ASCII( &constant_bin[ 5116893 ], 42, 0 );
    const_str_plain_UPDATE_COEFF = UNSTREAM_STRING_ASCII( &constant_bin[ 5116935 ], 12, 1 );
    const_str_digest_3b6e6bd60181f23c9d6cc0d1f75ad46d = UNSTREAM_STRING_ASCII( &constant_bin[ 5116947 ], 542, 0 );
    const_str_digest_c2ec6a64484da89006ceb36f24843d52 = UNSTREAM_STRING_ASCII( &constant_bin[ 5117489 ], 26, 0 );
    const_str_plain_lambda_initial = UNSTREAM_STRING_ASCII( &constant_bin[ 5117515 ], 14, 1 );
    const_str_plain_hess_fro = UNSTREAM_STRING_ASCII( &constant_bin[ 5117529 ], 8, 1 );
    const_tuple_1f498491bb1fff089e3a5d15a4fca68c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_1f498491bb1fff089e3a5d15a4fca68c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_1f498491bb1fff089e3a5d15a4fca68c_tuple, 1, const_str_plain_tr_radius ); Py_INCREF( const_str_plain_tr_radius );
    const_str_plain_lambda_ub = UNSTREAM_STRING_ASCII( &constant_bin[ 5117537 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_1f498491bb1fff089e3a5d15a4fca68c_tuple, 2, const_str_plain_lambda_ub ); Py_INCREF( const_str_plain_lambda_ub );
    PyTuple_SET_ITEM( const_tuple_1f498491bb1fff089e3a5d15a4fca68c_tuple, 3, const_str_plain_lambda_lb ); Py_INCREF( const_str_plain_lambda_lb );
    PyTuple_SET_ITEM( const_tuple_1f498491bb1fff089e3a5d15a4fca68c_tuple, 4, const_str_plain_lambda_initial ); Py_INCREF( const_str_plain_lambda_initial );
    const_str_digest_e77279d991b10cbef17cd4833fc40e26 = UNSTREAM_STRING_ASCII( &constant_bin[ 5116901 ], 33, 0 );
    const_dict_f8944f278ce86ace60cdf38e7744a772 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_f8944f278ce86ace60cdf38e7744a772, const_str_plain_trans, const_str_plain_T );
    assert( PyDict_Size( const_dict_f8944f278ce86ace60cdf38e7744a772 ) == 1 );
    const_str_plain__initial_values = UNSTREAM_STRING_ASCII( &constant_bin[ 5115409 ], 15, 1 );
    const_tuple_e1659e1b2e9d77b7e7b1f78970b1206a_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5117546 ], 240 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_trustregion_exact( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2014557c7db9ae8663f4a38b40a4af4b;
static PyCodeObject *codeobj_f6109be0f62c2b510929d40bcdebd8b1;
static PyCodeObject *codeobj_e4f25c9796b53890a4900605135746b7;
static PyCodeObject *codeobj_4f428caedaac1e7510e1b7a3f6bd1d8f;
static PyCodeObject *codeobj_c164004fb9def623fcd1d4861754c677;
static PyCodeObject *codeobj_852836594b9f8e101ff3c7840c585859;
static PyCodeObject *codeobj_3970883a6d466ec23dd4ef48ec2774c8;
static PyCodeObject *codeobj_10a575142a89c8f0b8c23fd8e067af0b;
static PyCodeObject *codeobj_6f396f7bf7f700a5e43237af241fe4f1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_6c7488363ea0a9ab22cc1720c0f51847 );
    codeobj_2014557c7db9ae8663f4a38b40a4af4b = MAKE_CODEOBJ( module_filename_obj, const_str_digest_910b7beed3c1884b79a3a69ba8e32d07, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_f6109be0f62c2b510929d40bcdebd8b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_IterativeSubproblem, 188, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_e4f25c9796b53890a4900605135746b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 215, const_tuple_6c94e90462dc9d38574e78f9ae70b2d1_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_4f428caedaac1e7510e1b7a3f6bd1d8f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__initial_values, 256, const_tuple_1f498491bb1fff089e3a5d15a4fca68c_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c164004fb9def623fcd1d4861754c677 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__minimize_trustregion_exact, 15, const_tuple_27a4d5354c56338739f75c73884ca529_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_852836594b9f8e101ff3c7840c585859 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_estimate_smallest_singular_value, 46, const_tuple_d2e1735f7b7b7664734f23a75e46be31_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3970883a6d466ec23dd4ef48ec2774c8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_gershgorin_bounds, 125, const_tuple_5e141733a32f11c42eb4f9ddf034516f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_10a575142a89c8f0b8c23fd8e067af0b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_singular_leading_submatrix, 146, const_tuple_31d06c631be6ebe37b349c9d6d89d130_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6f396f7bf7f700a5e43237af241fe4f1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve, 287, const_tuple_e1659e1b2e9d77b7e7b1f78970b1206a_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_1__minimize_trustregion_exact( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_2_estimate_smallest_singular_value(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_3_gershgorin_bounds(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_4_singular_leading_submatrix(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_5___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_6__initial_values(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_7_solve(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$_trustregion_exact$$$function_1__minimize_trustregion_exact( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_jac = python_pars[ 3 ];
    PyObject *par_hess = python_pars[ 4 ];
    PyObject *par_trust_region_options = python_pars[ 5 ];
    struct Nuitka_FrameObject *frame_c164004fb9def623fcd1d4861754c677;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c164004fb9def623fcd1d4861754c677 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c164004fb9def623fcd1d4861754c677, codeobj_c164004fb9def623fcd1d4861754c677, module_scipy$optimize$_trustregion_exact, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c164004fb9def623fcd1d4861754c677 = cache_frame_c164004fb9def623fcd1d4861754c677;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c164004fb9def623fcd1d4861754c677 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c164004fb9def623fcd1d4861754c677 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_jac );
        tmp_compexpr_left_1 = par_jac;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_855525b13b12aae365696bc4174a2ddf;
            frame_c164004fb9def623fcd1d4861754c677->m_frame.f_lineno = 36;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 36;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_hess );
        tmp_compexpr_left_2 = par_hess;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_52c1ba5389c1e22064637e6a5ddf1e27;
            frame_c164004fb9def623fcd1d4861754c677->m_frame.f_lineno = 39;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 39;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain__minimize_trust_region );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_trust_region );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_trust_region" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 41;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_fun );
        tmp_tuple_element_1 = par_fun;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_x0 );
        tmp_tuple_element_1 = par_x0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_args;
        CHECK_OBJECT( par_args );
        tmp_dict_value_1 = par_args;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_jac;
        CHECK_OBJECT( par_jac );
        tmp_dict_value_2 = par_jac;
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_hess;
        CHECK_OBJECT( par_hess );
        tmp_dict_value_3 = par_hess;
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_subproblem;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_IterativeSubproblem );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IterativeSubproblem );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_dircall_arg2_1 );
            Py_DECREF( tmp_dircall_arg3_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IterativeSubproblem" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 42;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_4 = tmp_mvar_value_2;
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_trust_region_options );
        tmp_dircall_arg4_1 = par_trust_region_options;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c164004fb9def623fcd1d4861754c677 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c164004fb9def623fcd1d4861754c677 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c164004fb9def623fcd1d4861754c677 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c164004fb9def623fcd1d4861754c677, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c164004fb9def623fcd1d4861754c677->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c164004fb9def623fcd1d4861754c677, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c164004fb9def623fcd1d4861754c677,
        type_description_1,
        par_fun,
        par_x0,
        par_args,
        par_jac,
        par_hess,
        par_trust_region_options
    );


    // Release cached frame.
    if ( frame_c164004fb9def623fcd1d4861754c677 == cache_frame_c164004fb9def623fcd1d4861754c677 )
    {
        Py_DECREF( frame_c164004fb9def623fcd1d4861754c677 );
    }
    cache_frame_c164004fb9def623fcd1d4861754c677 = NULL;

    assertFrameObject( frame_c164004fb9def623fcd1d4861754c677 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact$$$function_1__minimize_trustregion_exact );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_hess );
    Py_DECREF( par_hess );
    par_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_trust_region_options );
    Py_DECREF( par_trust_region_options );
    par_trust_region_options = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_hess );
    Py_DECREF( par_hess );
    par_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_trust_region_options );
    Py_DECREF( par_trust_region_options );
    par_trust_region_options = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact$$$function_1__minimize_trustregion_exact );
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


static PyObject *impl_scipy$optimize$_trustregion_exact$$$function_2_estimate_smallest_singular_value( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_U = python_pars[ 0 ];
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_p = NULL;
    PyObject *var_w = NULL;
    PyObject *var_k = NULL;
    PyObject *var_wp = NULL;
    PyObject *var_wm = NULL;
    PyObject *var_pp = NULL;
    PyObject *var_pm = NULL;
    PyObject *var_v = NULL;
    PyObject *var_v_norm = NULL;
    PyObject *var_w_norm = NULL;
    PyObject *var_s_min = NULL;
    PyObject *var_z_min = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_852836594b9f8e101ff3c7840c585859;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_852836594b9f8e101ff3c7840c585859 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_852836594b9f8e101ff3c7840c585859, codeobj_852836594b9f8e101ff3c7840c585859, module_scipy$optimize$_trustregion_exact, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_852836594b9f8e101ff3c7840c585859 = cache_frame_852836594b9f8e101ff3c7840c585859;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_852836594b9f8e101ff3c7840c585859 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_852836594b9f8e101ff3c7840c585859 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_U );
        tmp_args_element_name_1 = par_U;
        frame_852836594b9f8e101ff3c7840c585859->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_atleast_2d, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_U;
            assert( old != NULL );
            par_U = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_U );
        tmp_source_name_1 = par_U;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooo";
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 81;
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 81;
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

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 81;
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

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 81;
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
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_m = tmp_assign_source_5;
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_m );
        tmp_compexpr_left_1 = var_m;
        CHECK_OBJECT( var_n );
        tmp_compexpr_right_1 = var_n;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_d759bdb8088931bdc73088270ebf35b9;
            frame_852836594b9f8e101ff3c7840c585859->m_frame.f_lineno = 84;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 84;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 92;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_2 = var_n;
        frame_852836594b9f8e101ff3c7840c585859->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_zeros, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_p == NULL );
        var_p = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 93;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_3 = var_n;
        frame_852836594b9f8e101ff3c7840c585859->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_empty, call_args );
        }

        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_w == NULL );
        var_w = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( var_n );
        tmp_xrange_low_1 = var_n;
        tmp_iter_arg_2 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 97;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_11 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_11;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_tuple_element_1;
        tmp_left_name_2 = const_int_pos_1;
        CHECK_OBJECT( var_p );
        tmp_subscribed_name_1 = var_p;
        CHECK_OBJECT( var_k );
        tmp_subscript_name_1 = var_k;
        tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_left_name_1 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_U );
        tmp_source_name_2 = par_U;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 98;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_k );
        tmp_tuple_element_1 = var_k;
        tmp_subscript_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_subscript_name_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_k );
        tmp_tuple_element_1 = var_k;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_subscript_name_2, 1, tmp_tuple_element_1 );
        tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 98;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_wp;
            var_wp = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_tuple_element_2;
        tmp_left_name_4 = const_int_neg_1;
        CHECK_OBJECT( var_p );
        tmp_subscribed_name_3 = var_p;
        CHECK_OBJECT( var_k );
        tmp_subscript_name_3 = var_k;
        tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_left_name_3 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_U );
        tmp_source_name_3 = par_U;
        tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_T );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 99;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_k );
        tmp_tuple_element_2 = var_k;
        tmp_subscript_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_subscript_name_4, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_k );
        tmp_tuple_element_2 = var_k;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_subscript_name_4, 1, tmp_tuple_element_2 );
        tmp_right_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscribed_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 99;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_13 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_wm;
            var_wm = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_5;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_start_name_1;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_start_name_2;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_7;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( var_p );
        tmp_subscribed_name_5 = var_p;
        CHECK_OBJECT( var_k );
        tmp_left_name_6 = var_k;
        tmp_right_name_5 = const_int_pos_1;
        tmp_start_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_5 );
        if ( tmp_start_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_stop_name_1 = Py_None;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_start_name_1 );
        assert( !(tmp_subscript_name_5 == NULL) );
        tmp_left_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscript_name_5 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_U );
        tmp_source_name_4 = par_U;
        tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_T );
        if ( tmp_subscribed_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 100;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_k );
        tmp_left_name_8 = var_k;
        tmp_right_name_7 = const_int_pos_1;
        tmp_start_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_8, tmp_right_name_7 );
        if ( tmp_start_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_subscribed_name_6 );

            exception_lineno = 100;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_stop_name_2 = Py_None;
        tmp_step_name_2 = Py_None;
        tmp_tuple_element_3 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_start_name_2 );
        assert( !(tmp_tuple_element_3 == NULL) );
        tmp_subscript_name_6 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_6, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_k );
        tmp_tuple_element_3 = var_k;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_subscript_name_6, 1, tmp_tuple_element_3 );
        tmp_left_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscribed_name_6 );
        Py_DECREF( tmp_subscript_name_6 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 100;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_wp );
        tmp_right_name_8 = var_wp;
        tmp_right_name_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 100;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_pp;
            var_pp = tmp_assign_source_14;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_9;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_start_name_3;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_9;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_step_name_3;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_source_name_5;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_start_name_4;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_11;
        PyObject *tmp_stop_name_4;
        PyObject *tmp_step_name_4;
        PyObject *tmp_right_name_12;
        CHECK_OBJECT( var_p );
        tmp_subscribed_name_7 = var_p;
        CHECK_OBJECT( var_k );
        tmp_left_name_10 = var_k;
        tmp_right_name_9 = const_int_pos_1;
        tmp_start_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_10, tmp_right_name_9 );
        if ( tmp_start_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_stop_name_3 = Py_None;
        tmp_step_name_3 = Py_None;
        tmp_subscript_name_7 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        Py_DECREF( tmp_start_name_3 );
        assert( !(tmp_subscript_name_7 == NULL) );
        tmp_left_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        Py_DECREF( tmp_subscript_name_7 );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_U );
        tmp_source_name_5 = par_U;
        tmp_subscribed_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_T );
        if ( tmp_subscribed_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 101;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_k );
        tmp_left_name_12 = var_k;
        tmp_right_name_11 = const_int_pos_1;
        tmp_start_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_12, tmp_right_name_11 );
        if ( tmp_start_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );
            Py_DECREF( tmp_subscribed_name_8 );

            exception_lineno = 101;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_stop_name_4 = Py_None;
        tmp_step_name_4 = Py_None;
        tmp_tuple_element_4 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
        Py_DECREF( tmp_start_name_4 );
        assert( !(tmp_tuple_element_4 == NULL) );
        tmp_subscript_name_8 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_8, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_k );
        tmp_tuple_element_4 = var_k;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_subscript_name_8, 1, tmp_tuple_element_4 );
        tmp_left_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        Py_DECREF( tmp_subscribed_name_8 );
        Py_DECREF( tmp_subscript_name_8 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 101;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_wm );
        tmp_right_name_12 = var_wm;
        tmp_right_name_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_11 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 101;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_9 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_pm;
            var_pm = tmp_assign_source_15;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_left_name_13;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_right_name_13;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_14;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_right_name_14;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( var_wp );
        tmp_args_element_name_4 = var_wp;
        frame_852836594b9f8e101ff3c7840c585859->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_left_name_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_left_name_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 103;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_pp );
        tmp_args_element_name_5 = var_pp;
        tmp_args_element_name_6 = const_int_pos_1;
        frame_852836594b9f8e101ff3c7840c585859->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_right_name_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 103;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_compexpr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_3 != NULL );
        CHECK_OBJECT( var_wm );
        tmp_args_element_name_7 = var_wm;
        frame_852836594b9f8e101ff3c7840c585859->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_left_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_left_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 103;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            Py_DECREF( tmp_left_name_14 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 103;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        CHECK_OBJECT( var_pm );
        tmp_args_element_name_8 = var_pm;
        tmp_args_element_name_9 = const_int_pos_1;
        frame_852836594b9f8e101ff3c7840c585859->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_right_name_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );
            Py_DECREF( tmp_left_name_14 );

            exception_lineno = 103;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_compexpr_right_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_14 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 103;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( var_wp );
            tmp_ass_subvalue_1 = var_wp;
            CHECK_OBJECT( var_w );
            tmp_ass_subscribed_1 = var_w;
            CHECK_OBJECT( var_k );
            tmp_ass_subscript_1 = var_k;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_start_name_5;
            PyObject *tmp_left_name_15;
            PyObject *tmp_right_name_15;
            PyObject *tmp_stop_name_5;
            PyObject *tmp_step_name_5;
            CHECK_OBJECT( var_pp );
            tmp_ass_subvalue_2 = var_pp;
            CHECK_OBJECT( var_p );
            tmp_ass_subscribed_2 = var_p;
            CHECK_OBJECT( var_k );
            tmp_left_name_15 = var_k;
            tmp_right_name_15 = const_int_pos_1;
            tmp_start_name_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_15, tmp_right_name_15 );
            if ( tmp_start_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_stop_name_5 = Py_None;
            tmp_step_name_5 = Py_None;
            tmp_ass_subscript_2 = MAKE_SLICEOBJ3( tmp_start_name_5, tmp_stop_name_5, tmp_step_name_5 );
            Py_DECREF( tmp_start_name_5 );
            assert( !(tmp_ass_subscript_2 == NULL) );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_4;
            }
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            CHECK_OBJECT( var_wm );
            tmp_ass_subvalue_3 = var_wm;
            CHECK_OBJECT( var_w );
            tmp_ass_subscribed_3 = var_w;
            CHECK_OBJECT( var_k );
            tmp_ass_subscript_3 = var_k;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 107;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            PyObject *tmp_start_name_6;
            PyObject *tmp_left_name_16;
            PyObject *tmp_right_name_16;
            PyObject *tmp_stop_name_6;
            PyObject *tmp_step_name_6;
            CHECK_OBJECT( var_pm );
            tmp_ass_subvalue_4 = var_pm;
            CHECK_OBJECT( var_p );
            tmp_ass_subscribed_4 = var_p;
            CHECK_OBJECT( var_k );
            tmp_left_name_16 = var_k;
            tmp_right_name_16 = const_int_pos_1;
            tmp_start_name_6 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_16, tmp_right_name_16 );
            if ( tmp_start_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_stop_name_6 = Py_None;
            tmp_step_name_6 = Py_None;
            tmp_ass_subscript_4 = MAKE_SLICEOBJ3( tmp_start_name_6, tmp_stop_name_6, tmp_step_name_6 );
            Py_DECREF( tmp_start_name_6 );
            assert( !(tmp_ass_subscript_4 == NULL) );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
            Py_DECREF( tmp_ass_subscript_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_4;
            }
        }
        branch_end_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_solve_triangular );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_triangular );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_triangular" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 111;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_6;
        CHECK_OBJECT( par_U );
        tmp_args_element_name_10 = par_U;
        CHECK_OBJECT( var_w );
        tmp_args_element_name_11 = var_w;
        frame_852836594b9f8e101ff3c7840c585859->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 113;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_7;
        CHECK_OBJECT( var_v );
        tmp_args_element_name_12 = var_v;
        frame_852836594b9f8e101ff3c7840c585859->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v_norm == NULL );
        var_v_norm = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_norm );

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

            exception_lineno = 114;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_8;
        CHECK_OBJECT( var_w );
        tmp_args_element_name_13 = var_w;
        frame_852836594b9f8e101ff3c7840c585859->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_w_norm == NULL );
        var_w_norm = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        CHECK_OBJECT( var_w_norm );
        tmp_left_name_17 = var_w_norm;
        CHECK_OBJECT( var_v_norm );
        tmp_right_name_17 = var_v_norm;
        tmp_assign_source_19 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_17 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_s_min == NULL );
        var_s_min = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_18;
        CHECK_OBJECT( var_v );
        tmp_left_name_18 = var_v;
        CHECK_OBJECT( var_v_norm );
        tmp_right_name_18 = var_v_norm;
        tmp_assign_source_20 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_z_min == NULL );
        var_z_min = tmp_assign_source_20;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_852836594b9f8e101ff3c7840c585859 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_852836594b9f8e101ff3c7840c585859 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_852836594b9f8e101ff3c7840c585859, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_852836594b9f8e101ff3c7840c585859->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_852836594b9f8e101ff3c7840c585859, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_852836594b9f8e101ff3c7840c585859,
        type_description_1,
        par_U,
        var_m,
        var_n,
        var_p,
        var_w,
        var_k,
        var_wp,
        var_wm,
        var_pp,
        var_pm,
        var_v,
        var_v_norm,
        var_w_norm,
        var_s_min,
        var_z_min
    );


    // Release cached frame.
    if ( frame_852836594b9f8e101ff3c7840c585859 == cache_frame_852836594b9f8e101ff3c7840c585859 )
    {
        Py_DECREF( frame_852836594b9f8e101ff3c7840c585859 );
    }
    cache_frame_852836594b9f8e101ff3c7840c585859 = NULL;

    assertFrameObject( frame_852836594b9f8e101ff3c7840c585859 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT( var_s_min );
        tmp_tuple_element_5 = var_s_min;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_z_min );
        tmp_tuple_element_5 = var_z_min;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact$$$function_2_estimate_smallest_singular_value );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_U );
    Py_DECREF( par_U );
    par_U = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_p );
    Py_DECREF( var_p );
    var_p = NULL;

    CHECK_OBJECT( (PyObject *)var_w );
    Py_DECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_wp );
    var_wp = NULL;

    Py_XDECREF( var_wm );
    var_wm = NULL;

    Py_XDECREF( var_pp );
    var_pp = NULL;

    Py_XDECREF( var_pm );
    var_pm = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)var_v_norm );
    Py_DECREF( var_v_norm );
    var_v_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_w_norm );
    Py_DECREF( var_w_norm );
    var_w_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_s_min );
    Py_DECREF( var_s_min );
    var_s_min = NULL;

    CHECK_OBJECT( (PyObject *)var_z_min );
    Py_DECREF( var_z_min );
    var_z_min = NULL;

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

    CHECK_OBJECT( (PyObject *)par_U );
    Py_DECREF( par_U );
    par_U = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_wp );
    var_wp = NULL;

    Py_XDECREF( var_wm );
    var_wm = NULL;

    Py_XDECREF( var_pp );
    var_pp = NULL;

    Py_XDECREF( var_pm );
    var_pm = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_v_norm );
    var_v_norm = NULL;

    Py_XDECREF( var_w_norm );
    var_w_norm = NULL;

    Py_XDECREF( var_s_min );
    var_s_min = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact$$$function_2_estimate_smallest_singular_value );
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


static PyObject *impl_scipy$optimize$_trustregion_exact$$$function_3_gershgorin_bounds( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_H = python_pars[ 0 ];
    PyObject *var_H_diag = NULL;
    PyObject *var_H_diag_abs = NULL;
    PyObject *var_H_row_sums = NULL;
    PyObject *var_lb = NULL;
    PyObject *var_ub = NULL;
    struct Nuitka_FrameObject *frame_3970883a6d466ec23dd4ef48ec2774c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3970883a6d466ec23dd4ef48ec2774c8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3970883a6d466ec23dd4ef48ec2774c8, codeobj_3970883a6d466ec23dd4ef48ec2774c8, module_scipy$optimize$_trustregion_exact, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3970883a6d466ec23dd4ef48ec2774c8 = cache_frame_3970883a6d466ec23dd4ef48ec2774c8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3970883a6d466ec23dd4ef48ec2774c8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3970883a6d466ec23dd4ef48ec2774c8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_H );
        tmp_args_element_name_1 = par_H;
        frame_3970883a6d466ec23dd4ef48ec2774c8->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_diag, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_H_diag == NULL );
        var_H_diag = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 138;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_H_diag );
        tmp_args_element_name_2 = var_H_diag;
        frame_3970883a6d466ec23dd4ef48ec2774c8->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_abs, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_H_diag_abs == NULL );
        var_H_diag_abs = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 139;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sum );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 139;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_H );
        tmp_args_element_name_3 = par_H;
        frame_3970883a6d466ec23dd4ef48ec2774c8->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_abs, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 139;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_c4b01644824ba6bad132707fcdaa03f1 );
        frame_3970883a6d466ec23dd4ef48ec2774c8->m_frame.f_lineno = 139;
        tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_H_row_sums == NULL );
        var_H_row_sums = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_5;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_min );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_H_diag );
        tmp_left_name_2 = var_H_diag;
        CHECK_OBJECT( var_H_diag_abs );
        tmp_right_name_1 = var_H_diag_abs;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_H_row_sums );
        tmp_right_name_2 = var_H_row_sums;
        tmp_args_element_name_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_3970883a6d466ec23dd4ef48ec2774c8->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lb == NULL );
        var_lb = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 141;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_6;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_max );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_H_diag );
        tmp_left_name_4 = var_H_diag;
        CHECK_OBJECT( var_H_diag_abs );
        tmp_right_name_3 = var_H_diag_abs;
        tmp_left_name_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 141;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_H_row_sums );
        tmp_right_name_4 = var_H_row_sums;
        tmp_args_element_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 141;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_3970883a6d466ec23dd4ef48ec2774c8->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ub == NULL );
        var_ub = tmp_assign_source_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3970883a6d466ec23dd4ef48ec2774c8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3970883a6d466ec23dd4ef48ec2774c8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3970883a6d466ec23dd4ef48ec2774c8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3970883a6d466ec23dd4ef48ec2774c8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3970883a6d466ec23dd4ef48ec2774c8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3970883a6d466ec23dd4ef48ec2774c8,
        type_description_1,
        par_H,
        var_H_diag,
        var_H_diag_abs,
        var_H_row_sums,
        var_lb,
        var_ub
    );


    // Release cached frame.
    if ( frame_3970883a6d466ec23dd4ef48ec2774c8 == cache_frame_3970883a6d466ec23dd4ef48ec2774c8 )
    {
        Py_DECREF( frame_3970883a6d466ec23dd4ef48ec2774c8 );
    }
    cache_frame_3970883a6d466ec23dd4ef48ec2774c8 = NULL;

    assertFrameObject( frame_3970883a6d466ec23dd4ef48ec2774c8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact$$$function_3_gershgorin_bounds );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_H );
    Py_DECREF( par_H );
    par_H = NULL;

    CHECK_OBJECT( (PyObject *)var_H_diag );
    Py_DECREF( var_H_diag );
    var_H_diag = NULL;

    CHECK_OBJECT( (PyObject *)var_H_diag_abs );
    Py_DECREF( var_H_diag_abs );
    var_H_diag_abs = NULL;

    CHECK_OBJECT( (PyObject *)var_H_row_sums );
    Py_DECREF( var_H_row_sums );
    var_H_row_sums = NULL;

    CHECK_OBJECT( (PyObject *)var_lb );
    Py_DECREF( var_lb );
    var_lb = NULL;

    CHECK_OBJECT( (PyObject *)var_ub );
    Py_DECREF( var_ub );
    var_ub = NULL;

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

    CHECK_OBJECT( (PyObject *)par_H );
    Py_DECREF( par_H );
    par_H = NULL;

    Py_XDECREF( var_H_diag );
    var_H_diag = NULL;

    Py_XDECREF( var_H_diag_abs );
    var_H_diag_abs = NULL;

    Py_XDECREF( var_H_row_sums );
    var_H_row_sums = NULL;

    Py_XDECREF( var_lb );
    var_lb = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact$$$function_3_gershgorin_bounds );
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


static PyObject *impl_scipy$optimize$_trustregion_exact$$$function_4_singular_leading_submatrix( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_U = python_pars[ 1 ];
    PyObject *par_k = python_pars[ 2 ];
    PyObject *var_delta = NULL;
    PyObject *var_n = NULL;
    PyObject *var_v = NULL;
    struct Nuitka_FrameObject *frame_10a575142a89c8f0b8c23fd8e067af0b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_10a575142a89c8f0b8c23fd8e067af0b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_10a575142a89c8f0b8c23fd8e067af0b, codeobj_10a575142a89c8f0b8c23fd8e067af0b, module_scipy$optimize$_trustregion_exact, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_10a575142a89c8f0b8c23fd8e067af0b = cache_frame_10a575142a89c8f0b8c23fd8e067af0b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_10a575142a89c8f0b8c23fd8e067af0b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_10a575142a89c8f0b8c23fd8e067af0b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sum );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_U );
        tmp_subscribed_name_1 = par_U;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( par_k );
        tmp_left_name_3 = par_k;
        tmp_right_name_1 = const_int_pos_1;
        tmp_stop_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_3, tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_tuple_element_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_tuple_element_1 == NULL) );
        tmp_subscript_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_k );
        tmp_left_name_4 = par_k;
        tmp_right_name_2 = const_int_pos_1;
        tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_subscript_name_1 );

            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_1 );
        tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_int_pos_2;
        tmp_args_element_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_10a575142a89c8f0b8c23fd8e067af0b->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_2 = par_A;
        CHECK_OBJECT( par_k );
        tmp_left_name_5 = par_k;
        tmp_right_name_5 = const_int_pos_1;
        tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_k );
        tmp_left_name_6 = par_k;
        tmp_right_name_6 = const_int_pos_1;
        tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_subscript_name_2 );

            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_subscript_name_2, 1, tmp_tuple_element_2 );
        tmp_right_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_delta == NULL );
        var_delta = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_A );
        tmp_len_arg_1 = par_A;
        tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 178;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_2 = var_n;
        frame_10a575142a89c8f0b8c23fd8e067af0b->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_zeros, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_3;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        tmp_ass_subvalue_1 = const_int_pos_1;
        CHECK_OBJECT( var_v );
        tmp_ass_subscribed_1 = var_v;
        CHECK_OBJECT( par_k );
        tmp_left_name_7 = par_k;
        tmp_right_name_7 = const_int_pos_1;
        tmp_ass_subscript_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_k );
        tmp_compexpr_left_1 = par_k;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
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
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_start_name_2;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            PyObject *tmp_step_name_2;
            PyObject *tmp_start_name_3;
            PyObject *tmp_stop_name_3;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            PyObject *tmp_step_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_start_name_4;
            PyObject *tmp_stop_name_4;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            PyObject *tmp_step_name_4;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_start_name_5;
            PyObject *tmp_stop_name_5;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            PyObject *tmp_step_name_5;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_solve_triangular );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_triangular );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_triangular" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_U );
            tmp_subscribed_name_3 = par_U;
            tmp_start_name_2 = Py_None;
            CHECK_OBJECT( par_k );
            tmp_left_name_8 = par_k;
            tmp_right_name_8 = const_int_pos_1;
            tmp_stop_name_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
            if ( tmp_stop_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_2 = Py_None;
            tmp_tuple_element_3 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            Py_DECREF( tmp_stop_name_2 );
            assert( !(tmp_tuple_element_3 == NULL) );
            tmp_subscript_name_3 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_3 );
            tmp_start_name_3 = Py_None;
            CHECK_OBJECT( par_k );
            tmp_left_name_9 = par_k;
            tmp_right_name_9 = const_int_pos_1;
            tmp_stop_name_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
            if ( tmp_stop_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscript_name_3 );

                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_3 = Py_None;
            tmp_tuple_element_3 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
            Py_DECREF( tmp_stop_name_3 );
            assert( !(tmp_tuple_element_3 == NULL) );
            PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_3 );
            tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            Py_DECREF( tmp_subscript_name_3 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_U );
            tmp_subscribed_name_4 = par_U;
            tmp_start_name_4 = Py_None;
            CHECK_OBJECT( par_k );
            tmp_left_name_10 = par_k;
            tmp_right_name_10 = const_int_pos_1;
            tmp_stop_name_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_10, tmp_right_name_10 );
            if ( tmp_stop_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_3 );

                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_4 = Py_None;
            tmp_tuple_element_4 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
            Py_DECREF( tmp_stop_name_4 );
            assert( !(tmp_tuple_element_4 == NULL) );
            tmp_subscript_name_4 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_subscript_name_4, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( par_k );
            tmp_left_name_11 = par_k;
            tmp_right_name_11 = const_int_pos_1;
            tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_11, tmp_right_name_11 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_3 );
                Py_DECREF( tmp_subscript_name_4 );

                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_subscript_name_4, 1, tmp_tuple_element_4 );
            tmp_operand_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_3 );

                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_3 );

                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_10a575142a89c8f0b8c23fd8e067af0b->m_frame.f_lineno = 183;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_v );
            tmp_ass_subscribed_2 = var_v;
            tmp_start_name_5 = Py_None;
            CHECK_OBJECT( par_k );
            tmp_left_name_12 = par_k;
            tmp_right_name_12 = const_int_pos_1;
            tmp_stop_name_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_12, tmp_right_name_12 );
            if ( tmp_stop_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_5 = Py_None;
            tmp_ass_subscript_2 = MAKE_SLICEOBJ3( tmp_start_name_5, tmp_stop_name_5, tmp_step_name_5 );
            Py_DECREF( tmp_stop_name_5 );
            assert( !(tmp_ass_subscript_2 == NULL) );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10a575142a89c8f0b8c23fd8e067af0b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10a575142a89c8f0b8c23fd8e067af0b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10a575142a89c8f0b8c23fd8e067af0b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10a575142a89c8f0b8c23fd8e067af0b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10a575142a89c8f0b8c23fd8e067af0b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10a575142a89c8f0b8c23fd8e067af0b,
        type_description_1,
        par_A,
        par_U,
        par_k,
        var_delta,
        var_n,
        var_v
    );


    // Release cached frame.
    if ( frame_10a575142a89c8f0b8c23fd8e067af0b == cache_frame_10a575142a89c8f0b8c23fd8e067af0b )
    {
        Py_DECREF( frame_10a575142a89c8f0b8c23fd8e067af0b );
    }
    cache_frame_10a575142a89c8f0b8c23fd8e067af0b = NULL;

    assertFrameObject( frame_10a575142a89c8f0b8c23fd8e067af0b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT( var_delta );
        tmp_tuple_element_5 = var_delta;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_v );
        tmp_tuple_element_5 = var_v;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact$$$function_4_singular_leading_submatrix );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_U );
    Py_DECREF( par_U );
    par_U = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)var_delta );
    Py_DECREF( var_delta );
    var_delta = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_U );
    Py_DECREF( par_U );
    par_U = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    Py_XDECREF( var_delta );
    var_delta = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact$$$function_4_singular_leading_submatrix );
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


static PyObject *impl_scipy$optimize$_trustregion_exact$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_fun = python_pars[ 2 ];
    PyObject *par_jac = python_pars[ 3 ];
    PyObject *par_hess = python_pars[ 4 ];
    PyObject *par_hessp = python_pars[ 5 ];
    PyObject *par_k_easy = python_pars[ 6 ];
    PyObject *par_k_hard = python_pars[ 7 ];
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e4f25c9796b53890a4900605135746b7;
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
    static struct Nuitka_FrameObject *cache_frame_e4f25c9796b53890a4900605135746b7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e4f25c9796b53890a4900605135746b7, codeobj_e4f25c9796b53890a4900605135746b7, module_scipy$optimize$_trustregion_exact, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e4f25c9796b53890a4900605135746b7 = cache_frame_e4f25c9796b53890a4900605135746b7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e4f25c9796b53890a4900605135746b7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e4f25c9796b53890a4900605135746b7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_IterativeSubproblem );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IterativeSubproblem );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IterativeSubproblem" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 218;
            type_description_1 = "ooooooooN";
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


            exception_lineno = 218;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        CHECK_OBJECT( par_fun );
        tmp_args_element_name_2 = par_fun;
        CHECK_OBJECT( par_jac );
        tmp_args_element_name_3 = par_jac;
        CHECK_OBJECT( par_hess );
        tmp_args_element_name_4 = par_hess;
        frame_e4f25c9796b53890a4900605135746b7->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS4( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = const_int_neg_1;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_previous_tr_radius, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_lambda_lb, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_niter, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_k_easy );
        tmp_assattr_name_4 = par_k_easy;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_k_easy, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_k_hard );
        tmp_assattr_name_5 = par_k_hard;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_k_hard, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_lapack_funcs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 241;
            type_description_1 = "ooooooooN";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        tmp_args_element_name_5 = const_tuple_str_plain_potrf_tuple;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hess );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooooooN";
            goto try_except_handler_2;
        }
        tmp_args_element_name_6 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_1 );
        frame_e4f25c9796b53890a4900605135746b7->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooooooN";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooooooN";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 1 );
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


            type_description_1 = "ooooooooN";
            exception_lineno = 241;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
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

                    type_description_1 = "ooooooooN";
                    exception_lineno = 241;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooN";
            exception_lineno = 241;
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
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assattr_name_6 = tmp_tuple_unpack_1__element_1;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_cholesky, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooooooN";
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

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_hess );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_7 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_assattr_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_dimension, tmp_assattr_name_7 );
        Py_DECREF( tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_gershgorin_bounds );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gershgorin_bounds );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gershgorin_bounds" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 246;
            type_description_1 = "ooooooooN";
            goto try_except_handler_4;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hess );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "ooooooooN";
            goto try_except_handler_4;
        }
        frame_e4f25c9796b53890a4900605135746b7->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "ooooooooN";
            goto try_except_handler_4;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 245;
            type_description_1 = "ooooooooN";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 0, 2 );
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


            type_description_1 = "ooooooooN";
            exception_lineno = 245;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 1, 2 );
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


            type_description_1 = "ooooooooN";
            exception_lineno = 245;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_5;
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

                    type_description_1 = "ooooooooN";
                    exception_lineno = 245;
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

            type_description_1 = "ooooooooN";
            exception_lineno = 245;
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
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assattr_name_8 = tmp_tuple_unpack_2__element_1;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_hess_gershgorin_lb, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 245;
            type_description_1 = "ooooooooN";
            goto try_except_handler_4;
        }
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assattr_name_9 = tmp_tuple_unpack_2__element_2;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_hess_gershgorin_ub, tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 245;
            type_description_1 = "ooooooooN";
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
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_assattr_target_10;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_norm );

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

            exception_lineno = 247;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_hess );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_args_element_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 247;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_5;
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Inf );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 247;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        frame_e4f25c9796b53890a4900605135746b7->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assattr_name_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assattr_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_hess_inf, tmp_assattr_name_10 );
        Py_DECREF( tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_assattr_target_11;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 248;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_hess );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_11 = const_str_plain_fro;
        frame_e4f25c9796b53890a4900605135746b7->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assattr_name_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assattr_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_hess_fro, tmp_assattr_name_11 );
        Py_DECREF( tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_8;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_9;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dimension );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_EPS );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 254;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_hess_inf );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 254;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assattr_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_CLOSE_TO_ZERO, tmp_assattr_name_12 );
        Py_DECREF( tmp_assattr_name_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e4f25c9796b53890a4900605135746b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e4f25c9796b53890a4900605135746b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e4f25c9796b53890a4900605135746b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e4f25c9796b53890a4900605135746b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e4f25c9796b53890a4900605135746b7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e4f25c9796b53890a4900605135746b7,
        type_description_1,
        par_self,
        par_x,
        par_fun,
        par_jac,
        par_hess,
        par_hessp,
        par_k_easy,
        par_k_hard,
        NULL
    );


    // Release cached frame.
    if ( frame_e4f25c9796b53890a4900605135746b7 == cache_frame_e4f25c9796b53890a4900605135746b7 )
    {
        Py_DECREF( frame_e4f25c9796b53890a4900605135746b7 );
    }
    cache_frame_e4f25c9796b53890a4900605135746b7 = NULL;

    assertFrameObject( frame_e4f25c9796b53890a4900605135746b7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_hess );
    Py_DECREF( par_hess );
    par_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_hessp );
    Py_DECREF( par_hessp );
    par_hessp = NULL;

    CHECK_OBJECT( (PyObject *)par_k_easy );
    Py_DECREF( par_k_easy );
    par_k_easy = NULL;

    CHECK_OBJECT( (PyObject *)par_k_hard );
    Py_DECREF( par_k_hard );
    par_k_hard = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_hess );
    Py_DECREF( par_hess );
    par_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_hessp );
    Py_DECREF( par_hessp );
    par_hessp = NULL;

    CHECK_OBJECT( (PyObject *)par_k_easy );
    Py_DECREF( par_k_easy );
    par_k_easy = NULL;

    CHECK_OBJECT( (PyObject *)par_k_hard );
    Py_DECREF( par_k_hard );
    par_k_hard = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact$$$function_5___init__ );
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


static PyObject *impl_scipy$optimize$_trustregion_exact$$$function_6__initial_values( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tr_radius = python_pars[ 1 ];
    PyObject *var_lambda_ub = NULL;
    PyObject *var_lambda_lb = NULL;
    PyObject *var_lambda_initial = NULL;
    struct Nuitka_FrameObject *frame_4f428caedaac1e7510e1b7a3f6bd1d8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4f428caedaac1e7510e1b7a3f6bd1d8f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4f428caedaac1e7510e1b7a3f6bd1d8f, codeobj_4f428caedaac1e7510e1b7a3f6bd1d8f, module_scipy$optimize$_trustregion_exact, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4f428caedaac1e7510e1b7a3f6bd1d8f = cache_frame_4f428caedaac1e7510e1b7a3f6bd1d8f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4f428caedaac1e7510e1b7a3f6bd1d8f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4f428caedaac1e7510e1b7a3f6bd1d8f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_4;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_1 != NULL );
        tmp_args_element_name_1 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_jac_mag );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_tr_radius );
        tmp_right_name_1 = par_tr_radius;
        tmp_left_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_hess_gershgorin_lb );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hess_fro );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 265;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_hess_inf );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 266;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_4f428caedaac1e7510e1b7a3f6bd1d8f->m_frame.f_lineno = 264;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_4f428caedaac1e7510e1b7a3f6bd1d8f->m_frame.f_lineno = 264;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lambda_ub == NULL );
        var_lambda_ub = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_source_name_8;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_9;
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_3 != NULL );
        tmp_args_element_name_6 = const_int_0;
        tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_4 != NULL );
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_hess );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_4f428caedaac1e7510e1b7a3f6bd1d8f->m_frame.f_lineno = 269;
        tmp_args_element_name_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_diagonal );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_4f428caedaac1e7510e1b7a3f6bd1d8f->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_jac_mag );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 270;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_tr_radius );
        tmp_right_name_3 = par_tr_radius;
        tmp_left_name_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 270;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_5 != NULL );
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_hess_gershgorin_ub );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 270;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_hess_fro );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 271;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_hess_inf );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_args_element_name_11 );

            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_4f428caedaac1e7510e1b7a3f6bd1d8f->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 270;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 270;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_4f428caedaac1e7510e1b7a3f6bd1d8f->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_9 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lambda_lb == NULL );
        var_lambda_lb = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( par_tr_radius );
        tmp_compexpr_left_1 = par_tr_radius;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_previous_tr_radius );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_source_name_11;
            PyObject *tmp_args_element_name_14;
            tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_6 != NULL );
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_lambda_lb );
            if ( tmp_args_element_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_lambda_lb );
            tmp_args_element_name_14 = var_lambda_lb;
            frame_4f428caedaac1e7510e1b7a3f6bd1d8f->m_frame.f_lineno = 276;
            {
                PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_args_element_name_13 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_lambda_lb;
                assert( old != NULL );
                var_lambda_lb = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_lambda_lb );
        tmp_compexpr_left_2 = var_lambda_lb;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
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
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_int_0;
            assert( var_lambda_initial == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_lambda_initial = tmp_assign_source_4;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_12;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_left_name_7;
            PyObject *tmp_source_name_13;
            PyObject *tmp_right_name_7;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_7 != NULL );
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 282;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_12 = tmp_mvar_value_1;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_sqrt );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 282;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_lambda_lb );
            tmp_left_name_5 = var_lambda_lb;
            CHECK_OBJECT( var_lambda_ub );
            tmp_right_name_5 = var_lambda_ub;
            tmp_args_element_name_16 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_args_element_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_8 );

                exception_lineno = 282;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_4f428caedaac1e7510e1b7a3f6bd1d8f->m_frame.f_lineno = 282;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_args_element_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_16 );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 282;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_lambda_lb );
            tmp_left_name_6 = var_lambda_lb;
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_left_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_UPDATE_COEFF );
            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_15 );

                exception_lineno = 283;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_lambda_ub );
            tmp_left_name_8 = var_lambda_ub;
            CHECK_OBJECT( var_lambda_lb );
            tmp_right_name_8 = var_lambda_lb;
            tmp_right_name_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_15 );
                Py_DECREF( tmp_left_name_7 );

                exception_lineno = 283;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_15 );

                exception_lineno = 283;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_args_element_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_15 );

                exception_lineno = 283;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_4f428caedaac1e7510e1b7a3f6bd1d8f->m_frame.f_lineno = 282;
            {
                PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_17 };
                tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_args_element_name_15 );
            Py_DECREF( tmp_args_element_name_17 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 282;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_lambda_initial == NULL );
            var_lambda_initial = tmp_assign_source_5;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f428caedaac1e7510e1b7a3f6bd1d8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f428caedaac1e7510e1b7a3f6bd1d8f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4f428caedaac1e7510e1b7a3f6bd1d8f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4f428caedaac1e7510e1b7a3f6bd1d8f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4f428caedaac1e7510e1b7a3f6bd1d8f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4f428caedaac1e7510e1b7a3f6bd1d8f,
        type_description_1,
        par_self,
        par_tr_radius,
        var_lambda_ub,
        var_lambda_lb,
        var_lambda_initial
    );


    // Release cached frame.
    if ( frame_4f428caedaac1e7510e1b7a3f6bd1d8f == cache_frame_4f428caedaac1e7510e1b7a3f6bd1d8f )
    {
        Py_DECREF( frame_4f428caedaac1e7510e1b7a3f6bd1d8f );
    }
    cache_frame_4f428caedaac1e7510e1b7a3f6bd1d8f = NULL;

    assertFrameObject( frame_4f428caedaac1e7510e1b7a3f6bd1d8f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_lambda_initial );
        tmp_tuple_element_1 = var_lambda_initial;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_lambda_lb );
        tmp_tuple_element_1 = var_lambda_lb;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_lambda_ub );
        tmp_tuple_element_1 = var_lambda_ub;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact$$$function_6__initial_values );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tr_radius );
    Py_DECREF( par_tr_radius );
    par_tr_radius = NULL;

    CHECK_OBJECT( (PyObject *)var_lambda_ub );
    Py_DECREF( var_lambda_ub );
    var_lambda_ub = NULL;

    CHECK_OBJECT( (PyObject *)var_lambda_lb );
    Py_DECREF( var_lambda_lb );
    var_lambda_lb = NULL;

    CHECK_OBJECT( (PyObject *)var_lambda_initial );
    Py_DECREF( var_lambda_initial );
    var_lambda_initial = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tr_radius );
    Py_DECREF( par_tr_radius );
    par_tr_radius = NULL;

    Py_XDECREF( var_lambda_ub );
    var_lambda_ub = NULL;

    Py_XDECREF( var_lambda_lb );
    var_lambda_lb = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact$$$function_6__initial_values );
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


static PyObject *impl_scipy$optimize$_trustregion_exact$$$function_7_solve( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tr_radius = python_pars[ 1 ];
    PyObject *var_lambda_current = NULL;
    PyObject *var_lambda_lb = NULL;
    PyObject *var_lambda_ub = NULL;
    PyObject *var_n = NULL;
    PyObject *var_hits_boundary = NULL;
    PyObject *var_already_factorized = NULL;
    PyObject *var_H = NULL;
    PyObject *var_U = NULL;
    PyObject *var_info = NULL;
    PyObject *var_p = NULL;
    PyObject *var_p_norm = NULL;
    PyObject *var_w = NULL;
    PyObject *var_w_norm = NULL;
    PyObject *var_delta_lambda = NULL;
    PyObject *var_lambda_new = NULL;
    PyObject *var_s_min = NULL;
    PyObject *var_z_min = NULL;
    PyObject *var_ta = NULL;
    PyObject *var_tb = NULL;
    PyObject *var_step_len = NULL;
    PyObject *var_quadratic_term = NULL;
    PyObject *var_relative_error = NULL;
    PyObject *var_c = NULL;
    PyObject *var_delta = NULL;
    PyObject *var_v = NULL;
    PyObject *var_v_norm = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
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
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6f396f7bf7f700a5e43237af241fe4f1;
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
    bool tmp_result;
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
    int tmp_res;
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
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6f396f7bf7f700a5e43237af241fe4f1 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6f396f7bf7f700a5e43237af241fe4f1, codeobj_6f396f7bf7f700a5e43237af241fe4f1, module_scipy$optimize$_trustregion_exact, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6f396f7bf7f700a5e43237af241fe4f1 = cache_frame_6f396f7bf7f700a5e43237af241fe4f1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6f396f7bf7f700a5e43237af241fe4f1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6f396f7bf7f700a5e43237af241fe4f1 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_tr_radius );
        tmp_args_element_name_1 = par_tr_radius;
        frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 290;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__initial_values, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "oooooooooooooooooooooooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 290;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 290;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 290;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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

                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 290;
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

            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 290;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert( var_lambda_current == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_lambda_current = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_lambda_lb == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_lambda_lb = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert( var_lambda_ub == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_lambda_ub = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dimension );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_True;
        assert( var_hits_boundary == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_hits_boundary = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = Py_False;
        assert( var_already_factorized == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_already_factorized = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_niter, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        if ( var_already_factorized == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "already_factorized" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( var_already_factorized );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = Py_False;
            {
                PyObject *old = var_already_factorized;
                var_already_factorized = tmp_assign_source_11;
                Py_INCREF( var_already_factorized );
                Py_XDECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_left_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_hess );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 302;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_lambda_current == NULL )
            {
                Py_DECREF( tmp_left_name_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_current" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 302;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_2 = var_lambda_current;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_1 == NULL )
            {
                Py_DECREF( tmp_left_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 302;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_1;
            CHECK_OBJECT( var_n );
            tmp_args_element_name_2 = var_n;
            frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 302;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_right_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_eye, call_args );
            }

            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 302;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 302;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 302;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_H;
                var_H = tmp_assign_source_12;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cholesky );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_H );
            tmp_tuple_element_1 = var_H;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_599c7dc8e0e16433c47a081ff3969951 );
            frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 303;
            tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__source_iter;
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_13;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_4, 0, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 303;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_1;
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_5, 1, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 303;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_2;
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
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

                        type_description_1 = "oooooooooooooooooooooooooooo";
                        exception_lineno = 303;
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

                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 303;
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
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_16 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_U;
                var_U = tmp_assign_source_16;
                Py_INCREF( var_U );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_17 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_info;
                var_info = tmp_assign_source_17;
                Py_INCREF( var_info );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_assign_source_18 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_niter );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_inplace_assign_attr_1__start;
            tmp_inplace_assign_attr_1__start = tmp_assign_source_18;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_3 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_3 = const_int_pos_1;
        tmp_assign_source_19 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_inplace_assign_attr_1__end;
            tmp_inplace_assign_attr_1__end = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_2 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_niter, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
            type_description_1 = "oooooooooooooooooooooooooooo";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        if ( var_info == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = var_info;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooooooo";
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
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_jac_mag );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_CLOSE_TO_ZERO );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_7;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_cho_solve );

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

                exception_lineno = 314;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            if ( var_U == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "U" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 314;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_2 = var_U;
            tmp_args_element_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = Py_False;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_jac );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_3 );

                exception_lineno = 314;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_3 );

                exception_lineno = 314;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 314;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 314;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_p;
                var_p = tmp_assign_source_20;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_norm );

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

                exception_lineno = 316;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_p );
            tmp_args_element_name_5 = var_p;
            frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 316;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 316;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_p_norm;
                var_p_norm = tmp_assign_source_21;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( var_p_norm );
            tmp_compexpr_left_3 = var_p_norm;
            CHECK_OBJECT( par_tr_radius );
            tmp_compexpr_right_3 = par_tr_radius;
            tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "oooooooooooooooooooooooooooo";
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
            if ( var_lambda_current == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_current" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 319;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_4 = var_lambda_current;
            tmp_compexpr_right_4 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_3 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_condition_result_3 = tmp_and_left_value_2;
            and_end_2:;
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
                PyObject *tmp_assign_source_22;
                tmp_assign_source_22 = Py_False;
                {
                    PyObject *old = var_hits_boundary;
                    assert( old != NULL );
                    var_hits_boundary = tmp_assign_source_22;
                    Py_INCREF( var_hits_boundary );
                    Py_DECREF( old );
                }

            }
            goto loop_end_1;
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_solve_triangular );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_triangular );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_triangular" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 324;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            if ( var_U == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "U" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 324;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_3 = var_U;
            tmp_args_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_p );
            tmp_tuple_element_3 = var_p;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_f8944f278ce86ace60cdf38e7744a772 );
            frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 324;
            tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 324;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_w;
                var_w = tmp_assign_source_23;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_norm );

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

                exception_lineno = 326;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_5;
            CHECK_OBJECT( var_w );
            tmp_args_element_name_6 = var_w;
            frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 326;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_w_norm;
                var_w_norm = tmp_assign_source_24;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_left_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_4;
            PyObject *tmp_right_name_5;
            PyObject *tmp_right_name_6;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_7;
            PyObject *tmp_right_name_8;
            CHECK_OBJECT( var_p_norm );
            tmp_left_name_7 = var_p_norm;
            CHECK_OBJECT( var_w_norm );
            tmp_right_name_4 = var_w_norm;
            tmp_left_name_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_4 );
            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 330;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_5 = const_int_pos_2;
            tmp_left_name_5 = POWER_OPERATION( tmp_left_name_6, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_6 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 330;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_p_norm );
            tmp_left_name_8 = var_p_norm;
            CHECK_OBJECT( par_tr_radius );
            tmp_right_name_7 = par_tr_radius;
            tmp_right_name_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_7 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 330;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 330;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_tr_radius );
            tmp_right_name_8 = par_tr_radius;
            tmp_assign_source_25 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_4 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 330;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_delta_lambda;
                var_delta_lambda = tmp_assign_source_25;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            if ( var_lambda_current == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_current" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 331;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_9 = var_lambda_current;
            CHECK_OBJECT( var_delta_lambda );
            tmp_right_name_9 = var_delta_lambda;
            tmp_assign_source_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 331;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_lambda_new;
                var_lambda_new = tmp_assign_source_26;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( var_p_norm );
            tmp_compexpr_left_5 = var_p_norm;
            CHECK_OBJECT( par_tr_radius );
            tmp_compexpr_right_5 = par_tr_radius;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 333;
                type_description_1 = "oooooooooooooooooooooooooooo";
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
            // Tried code:
            {
                PyObject *tmp_assign_source_27;
                PyObject *tmp_iter_arg_3;
                PyObject *tmp_called_name_6;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_7;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_estimate_smallest_singular_value );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_estimate_smallest_singular_value );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "estimate_smallest_singular_value" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 334;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }

                tmp_called_name_6 = tmp_mvar_value_6;
                if ( var_U == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "U" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 334;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }

                tmp_args_element_name_7 = var_U;
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 334;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7 };
                    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
                }

                if ( tmp_iter_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 334;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_3 );
                Py_DECREF( tmp_iter_arg_3 );
                if ( tmp_assign_source_27 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 334;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                {
                    PyObject *old = tmp_tuple_unpack_3__source_iter;
                    tmp_tuple_unpack_3__source_iter = tmp_assign_source_27;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_28;
                PyObject *tmp_unpack_6;
                CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
                tmp_assign_source_28 = UNPACK_NEXT( tmp_unpack_6, 0, 2 );
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


                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 334;
                    goto try_except_handler_9;
                }
                {
                    PyObject *old = tmp_tuple_unpack_3__element_1;
                    tmp_tuple_unpack_3__element_1 = tmp_assign_source_28;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_29;
                PyObject *tmp_unpack_7;
                CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
                tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_7, 1, 2 );
                if ( tmp_assign_source_29 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 334;
                    goto try_except_handler_9;
                }
                {
                    PyObject *old = tmp_tuple_unpack_3__element_2;
                    tmp_tuple_unpack_3__element_2 = tmp_assign_source_29;
                    Py_XDECREF( old );
                }

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

                            type_description_1 = "oooooooooooooooooooooooooooo";
                            exception_lineno = 334;
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
                    PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 334;
                    goto try_except_handler_9;
                }
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

            Py_XDECREF( tmp_tuple_unpack_3__element_1 );
            tmp_tuple_unpack_3__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_3__element_2 );
            tmp_tuple_unpack_3__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto frame_exception_exit_1;
            // End of try:
            try_end_8:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
            Py_DECREF( tmp_tuple_unpack_3__source_iter );
            tmp_tuple_unpack_3__source_iter = NULL;

            {
                PyObject *tmp_assign_source_30;
                CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
                tmp_assign_source_30 = tmp_tuple_unpack_3__element_1;
                {
                    PyObject *old = var_s_min;
                    var_s_min = tmp_assign_source_30;
                    Py_INCREF( var_s_min );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_3__element_1 );
            tmp_tuple_unpack_3__element_1 = NULL;

            {
                PyObject *tmp_assign_source_31;
                CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
                tmp_assign_source_31 = tmp_tuple_unpack_3__element_2;
                {
                    PyObject *old = var_z_min;
                    var_z_min = tmp_assign_source_31;
                    Py_INCREF( var_z_min );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_3__element_2 );
            tmp_tuple_unpack_3__element_2 = NULL;

            // Tried code:
            {
                PyObject *tmp_assign_source_32;
                PyObject *tmp_iter_arg_4;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_args_element_name_10;
                CHECK_OBJECT( par_self );
                tmp_called_instance_3 = par_self;
                CHECK_OBJECT( var_p );
                tmp_args_element_name_8 = var_p;
                CHECK_OBJECT( var_z_min );
                tmp_args_element_name_9 = var_z_min;
                CHECK_OBJECT( par_tr_radius );
                tmp_args_element_name_10 = par_tr_radius;
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 336;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
                    tmp_iter_arg_4 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_3, const_str_plain_get_boundaries_intersections, call_args );
                }

                if ( tmp_iter_arg_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 336;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_10;
                }
                tmp_assign_source_32 = MAKE_ITERATOR( tmp_iter_arg_4 );
                Py_DECREF( tmp_iter_arg_4 );
                if ( tmp_assign_source_32 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 336;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_10;
                }
                {
                    PyObject *old = tmp_tuple_unpack_4__source_iter;
                    tmp_tuple_unpack_4__source_iter = tmp_assign_source_32;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_33;
                PyObject *tmp_unpack_8;
                CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
                tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
                tmp_assign_source_33 = UNPACK_NEXT( tmp_unpack_8, 0, 2 );
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


                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 336;
                    goto try_except_handler_11;
                }
                {
                    PyObject *old = tmp_tuple_unpack_4__element_1;
                    tmp_tuple_unpack_4__element_1 = tmp_assign_source_33;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_34;
                PyObject *tmp_unpack_9;
                CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
                tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
                tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_9, 1, 2 );
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


                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 336;
                    goto try_except_handler_11;
                }
                {
                    PyObject *old = tmp_tuple_unpack_4__element_2;
                    tmp_tuple_unpack_4__element_2 = tmp_assign_source_34;
                    Py_XDECREF( old );
                }

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

                            type_description_1 = "oooooooooooooooooooooooooooo";
                            exception_lineno = 336;
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
                    PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 336;
                    goto try_except_handler_11;
                }
            }
            goto try_end_9;
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
            try_end_9:;
            goto try_end_10;
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

            // Re-raise.
            exception_type = exception_keeper_type_10;
            exception_value = exception_keeper_value_10;
            exception_tb = exception_keeper_tb_10;
            exception_lineno = exception_keeper_lineno_10;

            goto frame_exception_exit_1;
            // End of try:
            try_end_10:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
            Py_DECREF( tmp_tuple_unpack_4__source_iter );
            tmp_tuple_unpack_4__source_iter = NULL;

            {
                PyObject *tmp_assign_source_35;
                CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
                tmp_assign_source_35 = tmp_tuple_unpack_4__element_1;
                {
                    PyObject *old = var_ta;
                    var_ta = tmp_assign_source_35;
                    Py_INCREF( var_ta );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_4__element_1 );
            tmp_tuple_unpack_4__element_1 = NULL;

            {
                PyObject *tmp_assign_source_36;
                CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
                tmp_assign_source_36 = tmp_tuple_unpack_4__element_2;
                {
                    PyObject *old = var_tb;
                    var_tb = tmp_assign_source_36;
                    Py_INCREF( var_tb );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_4__element_2 );
            tmp_tuple_unpack_4__element_2 = NULL;

            {
                PyObject *tmp_assign_source_37;
                PyObject *tmp_called_name_7;
                PyObject *tmp_args_name_3;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_list_element_1;
                PyObject *tmp_kw_name_3;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_min );
                assert( tmp_called_name_7 != NULL );
                CHECK_OBJECT( var_ta );
                tmp_list_element_1 = var_ta;
                tmp_tuple_element_4 = PyList_New( 2 );
                Py_INCREF( tmp_list_element_1 );
                PyList_SET_ITEM( tmp_tuple_element_4, 0, tmp_list_element_1 );
                CHECK_OBJECT( var_tb );
                tmp_list_element_1 = var_tb;
                Py_INCREF( tmp_list_element_1 );
                PyList_SET_ITEM( tmp_tuple_element_4, 1, tmp_list_element_1 );
                tmp_args_name_3 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
                tmp_dict_key_1 = const_str_plain_key;
                tmp_dict_value_1 = LOOKUP_BUILTIN( const_str_plain_abs );
                assert( tmp_dict_value_1 != NULL );
                tmp_kw_name_3 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_1, tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 343;
                tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
                Py_DECREF( tmp_args_name_3 );
                Py_DECREF( tmp_kw_name_3 );
                if ( tmp_assign_source_37 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 343;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_step_len;
                    var_step_len = tmp_assign_source_37;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_38;
                PyObject *tmp_called_name_8;
                PyObject *tmp_source_name_8;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_args_element_name_11;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_called_name_9;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_8;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_args_element_name_14;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 346;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_8 = tmp_mvar_value_7;
                tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dot );
                if ( tmp_called_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 346;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_p );
                tmp_args_element_name_11 = var_p;
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_8 == NULL )
                {
                    Py_DECREF( tmp_called_name_8 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 346;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_9 = tmp_mvar_value_8;
                tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_dot );
                if ( tmp_called_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_8 );

                    exception_lineno = 346;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                if ( var_H == NULL )
                {
                    Py_DECREF( tmp_called_name_8 );
                    Py_DECREF( tmp_called_name_9 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "H" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 346;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_13 = var_H;
                CHECK_OBJECT( var_p );
                tmp_args_element_name_14 = var_p;
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 346;
                {
                    PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                    tmp_args_element_name_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
                }

                Py_DECREF( tmp_called_name_9 );
                if ( tmp_args_element_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_8 );

                    exception_lineno = 346;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 346;
                {
                    PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
                    tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
                }

                Py_DECREF( tmp_called_name_8 );
                Py_DECREF( tmp_args_element_name_12 );
                if ( tmp_assign_source_38 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 346;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_quadratic_term;
                    var_quadratic_term = tmp_assign_source_38;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_39;
                PyObject *tmp_left_name_10;
                PyObject *tmp_left_name_11;
                PyObject *tmp_left_name_12;
                PyObject *tmp_right_name_10;
                PyObject *tmp_right_name_11;
                PyObject *tmp_left_name_13;
                PyObject *tmp_right_name_12;
                PyObject *tmp_right_name_13;
                PyObject *tmp_left_name_14;
                PyObject *tmp_right_name_14;
                PyObject *tmp_left_name_15;
                PyObject *tmp_right_name_15;
                PyObject *tmp_left_name_16;
                PyObject *tmp_right_name_16;
                CHECK_OBJECT( var_step_len );
                tmp_left_name_12 = var_step_len;
                tmp_right_name_10 = const_int_pos_2;
                tmp_left_name_11 = POWER_OPERATION( tmp_left_name_12, tmp_right_name_10 );
                if ( tmp_left_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 349;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_s_min );
                tmp_left_name_13 = var_s_min;
                tmp_right_name_12 = const_int_pos_2;
                tmp_right_name_11 = POWER_OPERATION( tmp_left_name_13, tmp_right_name_12 );
                if ( tmp_right_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_11 );

                    exception_lineno = 349;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
                Py_DECREF( tmp_left_name_11 );
                Py_DECREF( tmp_right_name_11 );
                if ( tmp_left_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 349;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_quadratic_term );
                tmp_left_name_14 = var_quadratic_term;
                if ( var_lambda_current == NULL )
                {
                    Py_DECREF( tmp_left_name_10 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_current" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 349;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_15 = var_lambda_current;
                CHECK_OBJECT( par_tr_radius );
                tmp_left_name_16 = par_tr_radius;
                tmp_right_name_16 = const_int_pos_2;
                tmp_right_name_15 = POWER_OPERATION( tmp_left_name_16, tmp_right_name_16 );
                if ( tmp_right_name_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_10 );

                    exception_lineno = 349;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_14 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
                Py_DECREF( tmp_right_name_15 );
                if ( tmp_right_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_10 );

                    exception_lineno = 349;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
                Py_DECREF( tmp_right_name_14 );
                if ( tmp_right_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_10 );

                    exception_lineno = 349;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_39 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_13 );
                Py_DECREF( tmp_left_name_10 );
                Py_DECREF( tmp_right_name_13 );
                if ( tmp_assign_source_39 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 349;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_relative_error;
                    var_relative_error = tmp_assign_source_39;
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_6;
                PyObject *tmp_compexpr_right_6;
                PyObject *tmp_source_name_10;
                CHECK_OBJECT( var_relative_error );
                tmp_compexpr_left_6 = var_relative_error;
                CHECK_OBJECT( par_self );
                tmp_source_name_10 = par_self;
                tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_k_hard );
                if ( tmp_compexpr_right_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 350;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                Py_DECREF( tmp_compexpr_right_6 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 350;
                    type_description_1 = "oooooooooooooooooooooooooooo";
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
                    PyObject *tmp_assign_source_40;
                    PyObject *tmp_left_name_17;
                    PyObject *tmp_right_name_17;
                    PyObject *tmp_left_name_18;
                    PyObject *tmp_right_name_18;
                    CHECK_OBJECT( var_p );
                    tmp_left_name_17 = var_p;
                    CHECK_OBJECT( var_step_len );
                    tmp_left_name_18 = var_step_len;
                    CHECK_OBJECT( var_z_min );
                    tmp_right_name_18 = var_z_min;
                    tmp_right_name_17 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
                    if ( tmp_right_name_17 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 351;
                        type_description_1 = "oooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_17, tmp_right_name_17 );
                    Py_DECREF( tmp_right_name_17 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 351;
                        type_description_1 = "oooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_40 = tmp_left_name_17;
                    var_p = tmp_assign_source_40;

                }
                goto loop_end_1;
                branch_no_5:;
            }
            {
                PyObject *tmp_assign_source_41;
                if ( var_lambda_current == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_current" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 355;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_assign_source_41 = var_lambda_current;
                {
                    PyObject *old = var_lambda_ub;
                    var_lambda_ub = tmp_assign_source_41;
                    Py_INCREF( var_lambda_ub );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_42;
                PyObject *tmp_called_name_10;
                PyObject *tmp_args_element_name_15;
                PyObject *tmp_args_element_name_16;
                PyObject *tmp_left_name_19;
                PyObject *tmp_right_name_19;
                PyObject *tmp_left_name_20;
                PyObject *tmp_right_name_20;
                tmp_called_name_10 = LOOKUP_BUILTIN( const_str_plain_max );
                assert( tmp_called_name_10 != NULL );
                if ( var_lambda_lb == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_lb" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 356;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_15 = var_lambda_lb;
                if ( var_lambda_current == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_current" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 356;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_19 = var_lambda_current;
                CHECK_OBJECT( var_s_min );
                tmp_left_name_20 = var_s_min;
                tmp_right_name_20 = const_int_pos_2;
                tmp_right_name_19 = POWER_OPERATION( tmp_left_name_20, tmp_right_name_20 );
                if ( tmp_right_name_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 356;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_16 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_19 );
                Py_DECREF( tmp_right_name_19 );
                if ( tmp_args_element_name_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 356;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 356;
                {
                    PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                    tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
                }

                Py_DECREF( tmp_args_element_name_16 );
                if ( tmp_assign_source_42 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 356;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_lambda_lb;
                    var_lambda_lb = tmp_assign_source_42;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_43;
                PyObject *tmp_left_name_21;
                PyObject *tmp_source_name_11;
                PyObject *tmp_right_name_21;
                PyObject *tmp_left_name_22;
                PyObject *tmp_right_name_22;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_args_element_name_17;
                CHECK_OBJECT( par_self );
                tmp_source_name_11 = par_self;
                tmp_left_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_hess );
                if ( tmp_left_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 359;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_lambda_new );
                tmp_left_name_22 = var_lambda_new;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_9 == NULL )
                {
                    Py_DECREF( tmp_left_name_21 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 359;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_4 = tmp_mvar_value_9;
                CHECK_OBJECT( var_n );
                tmp_args_element_name_17 = var_n;
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 359;
                {
                    PyObject *call_args[] = { tmp_args_element_name_17 };
                    tmp_right_name_22 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_eye, call_args );
                }

                if ( tmp_right_name_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_21 );

                    exception_lineno = 359;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_21 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_22, tmp_right_name_22 );
                Py_DECREF( tmp_right_name_22 );
                if ( tmp_right_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_21 );

                    exception_lineno = 359;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_43 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_21, tmp_right_name_21 );
                Py_DECREF( tmp_left_name_21 );
                Py_DECREF( tmp_right_name_21 );
                if ( tmp_assign_source_43 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 359;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_H;
                    var_H = tmp_assign_source_43;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_44;
                PyObject *tmp_iter_arg_5;
                PyObject *tmp_called_name_11;
                PyObject *tmp_source_name_12;
                PyObject *tmp_args_name_4;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_kw_name_4;
                CHECK_OBJECT( par_self );
                tmp_source_name_12 = par_self;
                tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_cholesky );
                if ( tmp_called_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 360;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_12;
                }
                CHECK_OBJECT( var_H );
                tmp_tuple_element_5 = var_H;
                tmp_args_name_4 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
                tmp_kw_name_4 = PyDict_Copy( const_dict_599c7dc8e0e16433c47a081ff3969951 );
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 360;
                tmp_iter_arg_5 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_4, tmp_kw_name_4 );
                Py_DECREF( tmp_called_name_11 );
                Py_DECREF( tmp_args_name_4 );
                Py_DECREF( tmp_kw_name_4 );
                if ( tmp_iter_arg_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 360;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_12;
                }
                tmp_assign_source_44 = MAKE_ITERATOR( tmp_iter_arg_5 );
                Py_DECREF( tmp_iter_arg_5 );
                if ( tmp_assign_source_44 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 360;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_12;
                }
                {
                    PyObject *old = tmp_tuple_unpack_5__source_iter;
                    tmp_tuple_unpack_5__source_iter = tmp_assign_source_44;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_45;
                PyObject *tmp_unpack_10;
                CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
                tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
                tmp_assign_source_45 = UNPACK_NEXT( tmp_unpack_10, 0, 2 );
                if ( tmp_assign_source_45 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 360;
                    goto try_except_handler_13;
                }
                {
                    PyObject *old = tmp_tuple_unpack_5__element_1;
                    tmp_tuple_unpack_5__element_1 = tmp_assign_source_45;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_46;
                PyObject *tmp_unpack_11;
                CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
                tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
                tmp_assign_source_46 = UNPACK_NEXT( tmp_unpack_11, 1, 2 );
                if ( tmp_assign_source_46 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 360;
                    goto try_except_handler_13;
                }
                {
                    PyObject *old = tmp_tuple_unpack_5__element_2;
                    tmp_tuple_unpack_5__element_2 = tmp_assign_source_46;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_5;
                CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
                tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_5 ); assert( HAS_ITERNEXT( tmp_iterator_name_5 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_5 )->tp_iternext)( tmp_iterator_name_5 );

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

                            type_description_1 = "oooooooooooooooooooooooooooo";
                            exception_lineno = 360;
                            goto try_except_handler_13;
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

                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 360;
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

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
            Py_DECREF( tmp_tuple_unpack_5__source_iter );
            tmp_tuple_unpack_5__source_iter = NULL;

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

            Py_XDECREF( tmp_tuple_unpack_5__element_1 );
            tmp_tuple_unpack_5__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_5__element_2 );
            tmp_tuple_unpack_5__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_12;
            exception_value = exception_keeper_value_12;
            exception_tb = exception_keeper_tb_12;
            exception_lineno = exception_keeper_lineno_12;

            goto frame_exception_exit_1;
            // End of try:
            try_end_12:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
            Py_DECREF( tmp_tuple_unpack_5__source_iter );
            tmp_tuple_unpack_5__source_iter = NULL;

            {
                PyObject *tmp_assign_source_47;
                CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
                tmp_assign_source_47 = tmp_tuple_unpack_5__element_1;
                {
                    PyObject *old = var_c;
                    var_c = tmp_assign_source_47;
                    Py_INCREF( var_c );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_5__element_1 );
            tmp_tuple_unpack_5__element_1 = NULL;

            {
                PyObject *tmp_assign_source_48;
                CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
                tmp_assign_source_48 = tmp_tuple_unpack_5__element_2;
                {
                    PyObject *old = var_info;
                    var_info = tmp_assign_source_48;
                    Py_INCREF( var_info );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_5__element_2 );
            tmp_tuple_unpack_5__element_2 = NULL;

            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_compexpr_left_7;
                PyObject *tmp_compexpr_right_7;
                CHECK_OBJECT( var_info );
                tmp_compexpr_left_7 = var_info;
                tmp_compexpr_right_7 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 366;
                    type_description_1 = "oooooooooooooooooooooooooooo";
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
                    PyObject *tmp_assign_source_49;
                    CHECK_OBJECT( var_lambda_new );
                    tmp_assign_source_49 = var_lambda_new;
                    {
                        PyObject *old = var_lambda_current;
                        var_lambda_current = tmp_assign_source_49;
                        Py_INCREF( var_lambda_current );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_50;
                    tmp_assign_source_50 = Py_True;
                    {
                        PyObject *old = var_already_factorized;
                        var_already_factorized = tmp_assign_source_50;
                        Py_INCREF( var_already_factorized );
                        Py_XDECREF( old );
                    }

                }
                goto branch_end_6;
                branch_no_6:;
                {
                    PyObject *tmp_assign_source_51;
                    PyObject *tmp_called_name_12;
                    PyObject *tmp_args_element_name_18;
                    PyObject *tmp_args_element_name_19;
                    tmp_called_name_12 = LOOKUP_BUILTIN( const_str_plain_max );
                    assert( tmp_called_name_12 != NULL );
                    CHECK_OBJECT( var_lambda_lb );
                    tmp_args_element_name_18 = var_lambda_lb;
                    CHECK_OBJECT( var_lambda_new );
                    tmp_args_element_name_19 = var_lambda_new;
                    frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 372;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
                        tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
                    }

                    if ( tmp_assign_source_51 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 372;
                        type_description_1 = "oooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_lambda_lb;
                        assert( old != NULL );
                        var_lambda_lb = tmp_assign_source_51;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_52;
                    PyObject *tmp_called_name_13;
                    PyObject *tmp_args_element_name_20;
                    PyObject *tmp_called_name_14;
                    PyObject *tmp_source_name_13;
                    PyObject *tmp_mvar_value_10;
                    PyObject *tmp_args_element_name_21;
                    PyObject *tmp_left_name_23;
                    PyObject *tmp_right_name_23;
                    PyObject *tmp_args_element_name_22;
                    PyObject *tmp_left_name_24;
                    PyObject *tmp_right_name_24;
                    PyObject *tmp_left_name_25;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_right_name_25;
                    PyObject *tmp_left_name_26;
                    PyObject *tmp_right_name_26;
                    tmp_called_name_13 = LOOKUP_BUILTIN( const_str_plain_max );
                    assert( tmp_called_name_13 != NULL );
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 375;
                        type_description_1 = "oooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_13 = tmp_mvar_value_10;
                    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_sqrt );
                    if ( tmp_called_name_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 375;
                        type_description_1 = "oooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_lambda_lb );
                    tmp_left_name_23 = var_lambda_lb;
                    CHECK_OBJECT( var_lambda_ub );
                    tmp_right_name_23 = var_lambda_ub;
                    tmp_args_element_name_21 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_23, tmp_right_name_23 );
                    if ( tmp_args_element_name_21 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_14 );

                        exception_lineno = 375;
                        type_description_1 = "oooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 375;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_21 };
                        tmp_args_element_name_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
                    }

                    Py_DECREF( tmp_called_name_14 );
                    Py_DECREF( tmp_args_element_name_21 );
                    if ( tmp_args_element_name_20 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 375;
                        type_description_1 = "oooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_lambda_lb );
                    tmp_left_name_24 = var_lambda_lb;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_14 = par_self;
                    tmp_left_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_UPDATE_COEFF );
                    if ( tmp_left_name_25 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_args_element_name_20 );

                        exception_lineno = 376;
                        type_description_1 = "oooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_lambda_ub );
                    tmp_left_name_26 = var_lambda_ub;
                    CHECK_OBJECT( var_lambda_lb );
                    tmp_right_name_26 = var_lambda_lb;
                    tmp_right_name_25 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_26, tmp_right_name_26 );
                    if ( tmp_right_name_25 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_args_element_name_20 );
                        Py_DECREF( tmp_left_name_25 );

                        exception_lineno = 376;
                        type_description_1 = "oooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_right_name_24 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_25, tmp_right_name_25 );
                    Py_DECREF( tmp_left_name_25 );
                    Py_DECREF( tmp_right_name_25 );
                    if ( tmp_right_name_24 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_args_element_name_20 );

                        exception_lineno = 376;
                        type_description_1 = "oooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_element_name_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_24 );
                    Py_DECREF( tmp_right_name_24 );
                    if ( tmp_args_element_name_22 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_args_element_name_20 );

                        exception_lineno = 376;
                        type_description_1 = "oooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 375;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_22 };
                        tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_20 );
                    Py_DECREF( tmp_args_element_name_22 );
                    if ( tmp_assign_source_52 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 375;
                        type_description_1 = "oooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_lambda_current;
                        var_lambda_current = tmp_assign_source_52;
                        Py_XDECREF( old );
                    }

                }
                branch_end_6:;
            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_assign_source_53;
                PyObject *tmp_left_name_27;
                PyObject *tmp_called_name_15;
                PyObject *tmp_args_element_name_23;
                PyObject *tmp_left_name_28;
                PyObject *tmp_right_name_27;
                PyObject *tmp_right_name_28;
                tmp_called_name_15 = LOOKUP_BUILTIN( const_str_plain_abs );
                assert( tmp_called_name_15 != NULL );
                CHECK_OBJECT( var_p_norm );
                tmp_left_name_28 = var_p_norm;
                CHECK_OBJECT( par_tr_radius );
                tmp_right_name_27 = par_tr_radius;
                tmp_args_element_name_23 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_28, tmp_right_name_27 );
                if ( tmp_args_element_name_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 380;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 380;
                {
                    PyObject *call_args[] = { tmp_args_element_name_23 };
                    tmp_left_name_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
                }

                Py_DECREF( tmp_args_element_name_23 );
                if ( tmp_left_name_27 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 380;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_tr_radius );
                tmp_right_name_28 = par_tr_radius;
                tmp_assign_source_53 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_27, tmp_right_name_28 );
                Py_DECREF( tmp_left_name_27 );
                if ( tmp_assign_source_53 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 380;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_relative_error;
                    var_relative_error = tmp_assign_source_53;
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_compexpr_left_8;
                PyObject *tmp_compexpr_right_8;
                PyObject *tmp_source_name_15;
                CHECK_OBJECT( var_relative_error );
                tmp_compexpr_left_8 = var_relative_error;
                CHECK_OBJECT( par_self );
                tmp_source_name_15 = par_self;
                tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_k_easy );
                if ( tmp_compexpr_right_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 381;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                Py_DECREF( tmp_compexpr_right_8 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 381;
                    type_description_1 = "oooooooooooooooooooooooooooo";
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
                goto loop_end_1;
                branch_no_7:;
            }
            {
                PyObject *tmp_assign_source_54;
                if ( var_lambda_current == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_current" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 385;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_assign_source_54 = var_lambda_current;
                {
                    PyObject *old = var_lambda_lb;
                    var_lambda_lb = tmp_assign_source_54;
                    Py_INCREF( var_lambda_lb );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_55;
                CHECK_OBJECT( var_lambda_new );
                tmp_assign_source_55 = var_lambda_new;
                {
                    PyObject *old = var_lambda_current;
                    var_lambda_current = tmp_assign_source_55;
                    Py_INCREF( var_lambda_current );
                    Py_XDECREF( old );
                }

            }
            branch_end_4:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_8;
            int tmp_and_left_truth_3;
            nuitka_bool tmp_and_left_value_3;
            nuitka_bool tmp_and_right_value_3;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            PyObject *tmp_source_name_16;
            PyObject *tmp_source_name_17;
            if ( var_info == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 390;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_9 = var_info;
            tmp_compexpr_right_9 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 390;
                type_description_1 = "oooooooooooooooooooooooooooo";
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
            CHECK_OBJECT( par_self );
            tmp_source_name_16 = par_self;
            tmp_compexpr_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_jac_mag );
            if ( tmp_compexpr_left_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 390;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_17 = par_self;
            tmp_compexpr_right_10 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_CLOSE_TO_ZERO );
            if ( tmp_compexpr_right_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_10 );

                exception_lineno = 390;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
            Py_DECREF( tmp_compexpr_left_10 );
            Py_DECREF( tmp_compexpr_right_10 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 390;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_8 = tmp_and_right_value_3;
            goto and_end_3;
            and_left_3:;
            tmp_condition_result_8 = tmp_and_left_value_3;
            and_end_3:;
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
                PyObject *tmp_compexpr_left_11;
                PyObject *tmp_compexpr_right_11;
                if ( var_lambda_current == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_current" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 394;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_left_11 = var_lambda_current;
                tmp_compexpr_right_11 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 394;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_56;
                    PyObject *tmp_called_instance_5;
                    PyObject *tmp_mvar_value_11;
                    PyObject *tmp_args_element_name_24;
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 395;
                        type_description_1 = "oooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_instance_5 = tmp_mvar_value_11;
                    CHECK_OBJECT( var_n );
                    tmp_args_element_name_24 = var_n;
                    frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 395;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_24 };
                        tmp_assign_source_56 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_zeros, call_args );
                    }

                    if ( tmp_assign_source_56 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 395;
                        type_description_1 = "oooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_p;
                        var_p = tmp_assign_source_56;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_57;
                    tmp_assign_source_57 = Py_False;
                    {
                        PyObject *old = var_hits_boundary;
                        assert( old != NULL );
                        var_hits_boundary = tmp_assign_source_57;
                        Py_INCREF( var_hits_boundary );
                        Py_DECREF( old );
                    }

                }
                goto loop_end_1;
                branch_no_9:;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_58;
                PyObject *tmp_iter_arg_6;
                PyObject *tmp_called_name_16;
                PyObject *tmp_mvar_value_12;
                PyObject *tmp_args_element_name_25;
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_estimate_smallest_singular_value );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_estimate_smallest_singular_value );
                }

                if ( tmp_mvar_value_12 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "estimate_smallest_singular_value" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 399;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_14;
                }

                tmp_called_name_16 = tmp_mvar_value_12;
                if ( var_U == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "U" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 399;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_14;
                }

                tmp_args_element_name_25 = var_U;
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 399;
                {
                    PyObject *call_args[] = { tmp_args_element_name_25 };
                    tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
                }

                if ( tmp_iter_arg_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 399;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
                tmp_assign_source_58 = MAKE_ITERATOR( tmp_iter_arg_6 );
                Py_DECREF( tmp_iter_arg_6 );
                if ( tmp_assign_source_58 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 399;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
                {
                    PyObject *old = tmp_tuple_unpack_6__source_iter;
                    tmp_tuple_unpack_6__source_iter = tmp_assign_source_58;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_59;
                PyObject *tmp_unpack_12;
                CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
                tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
                tmp_assign_source_59 = UNPACK_NEXT( tmp_unpack_12, 0, 2 );
                if ( tmp_assign_source_59 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 399;
                    goto try_except_handler_15;
                }
                {
                    PyObject *old = tmp_tuple_unpack_6__element_1;
                    tmp_tuple_unpack_6__element_1 = tmp_assign_source_59;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_60;
                PyObject *tmp_unpack_13;
                CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
                tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
                tmp_assign_source_60 = UNPACK_NEXT( tmp_unpack_13, 1, 2 );
                if ( tmp_assign_source_60 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 399;
                    goto try_except_handler_15;
                }
                {
                    PyObject *old = tmp_tuple_unpack_6__element_2;
                    tmp_tuple_unpack_6__element_2 = tmp_assign_source_60;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_6;
                CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
                tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_6 ); assert( HAS_ITERNEXT( tmp_iterator_name_6 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_6 )->tp_iternext)( tmp_iterator_name_6 );

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

                            type_description_1 = "oooooooooooooooooooooooooooo";
                            exception_lineno = 399;
                            goto try_except_handler_15;
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

                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 399;
                    goto try_except_handler_15;
                }
            }
            goto try_end_13;
            // Exception handler code:
            try_except_handler_15:;
            exception_keeper_type_13 = exception_type;
            exception_keeper_value_13 = exception_value;
            exception_keeper_tb_13 = exception_tb;
            exception_keeper_lineno_13 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
            Py_DECREF( tmp_tuple_unpack_6__source_iter );
            tmp_tuple_unpack_6__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_13;
            exception_value = exception_keeper_value_13;
            exception_tb = exception_keeper_tb_13;
            exception_lineno = exception_keeper_lineno_13;

            goto try_except_handler_14;
            // End of try:
            try_end_13:;
            goto try_end_14;
            // Exception handler code:
            try_except_handler_14:;
            exception_keeper_type_14 = exception_type;
            exception_keeper_value_14 = exception_value;
            exception_keeper_tb_14 = exception_tb;
            exception_keeper_lineno_14 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_tuple_unpack_6__element_1 );
            tmp_tuple_unpack_6__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_6__element_2 );
            tmp_tuple_unpack_6__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_14;
            exception_value = exception_keeper_value_14;
            exception_tb = exception_keeper_tb_14;
            exception_lineno = exception_keeper_lineno_14;

            goto frame_exception_exit_1;
            // End of try:
            try_end_14:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
            Py_DECREF( tmp_tuple_unpack_6__source_iter );
            tmp_tuple_unpack_6__source_iter = NULL;

            {
                PyObject *tmp_assign_source_61;
                CHECK_OBJECT( tmp_tuple_unpack_6__element_1 );
                tmp_assign_source_61 = tmp_tuple_unpack_6__element_1;
                {
                    PyObject *old = var_s_min;
                    var_s_min = tmp_assign_source_61;
                    Py_INCREF( var_s_min );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_6__element_1 );
            tmp_tuple_unpack_6__element_1 = NULL;

            {
                PyObject *tmp_assign_source_62;
                CHECK_OBJECT( tmp_tuple_unpack_6__element_2 );
                tmp_assign_source_62 = tmp_tuple_unpack_6__element_2;
                {
                    PyObject *old = var_z_min;
                    var_z_min = tmp_assign_source_62;
                    Py_INCREF( var_z_min );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_6__element_2 );
            tmp_tuple_unpack_6__element_2 = NULL;

            {
                PyObject *tmp_assign_source_63;
                CHECK_OBJECT( par_tr_radius );
                tmp_assign_source_63 = par_tr_radius;
                {
                    PyObject *old = var_step_len;
                    var_step_len = tmp_assign_source_63;
                    Py_INCREF( var_step_len );
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_10;
                PyObject *tmp_compexpr_left_12;
                PyObject *tmp_compexpr_right_12;
                PyObject *tmp_left_name_29;
                PyObject *tmp_left_name_30;
                PyObject *tmp_right_name_29;
                PyObject *tmp_right_name_30;
                PyObject *tmp_left_name_31;
                PyObject *tmp_right_name_31;
                PyObject *tmp_left_name_32;
                PyObject *tmp_left_name_33;
                PyObject *tmp_source_name_18;
                PyObject *tmp_right_name_32;
                PyObject *tmp_right_name_33;
                PyObject *tmp_left_name_34;
                PyObject *tmp_right_name_34;
                CHECK_OBJECT( var_step_len );
                tmp_left_name_30 = var_step_len;
                tmp_right_name_29 = const_int_pos_2;
                tmp_left_name_29 = POWER_OPERATION( tmp_left_name_30, tmp_right_name_29 );
                if ( tmp_left_name_29 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 403;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_s_min );
                tmp_left_name_31 = var_s_min;
                tmp_right_name_31 = const_int_pos_2;
                tmp_right_name_30 = POWER_OPERATION( tmp_left_name_31, tmp_right_name_31 );
                if ( tmp_right_name_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_29 );

                    exception_lineno = 403;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_29, tmp_right_name_30 );
                Py_DECREF( tmp_left_name_29 );
                Py_DECREF( tmp_right_name_30 );
                if ( tmp_compexpr_left_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 403;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_18 = par_self;
                tmp_left_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_k_hard );
                if ( tmp_left_name_33 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_12 );

                    exception_lineno = 403;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                if ( var_lambda_current == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_12 );
                    Py_DECREF( tmp_left_name_33 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_current" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 403;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_right_name_32 = var_lambda_current;
                tmp_left_name_32 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_33, tmp_right_name_32 );
                Py_DECREF( tmp_left_name_33 );
                if ( tmp_left_name_32 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_12 );

                    exception_lineno = 403;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_tr_radius );
                tmp_left_name_34 = par_tr_radius;
                tmp_right_name_34 = const_int_pos_2;
                tmp_right_name_33 = POWER_OPERATION( tmp_left_name_34, tmp_right_name_34 );
                if ( tmp_right_name_33 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_12 );
                    Py_DECREF( tmp_left_name_32 );

                    exception_lineno = 403;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_32, tmp_right_name_33 );
                Py_DECREF( tmp_left_name_32 );
                Py_DECREF( tmp_right_name_33 );
                if ( tmp_compexpr_right_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_12 );

                    exception_lineno = 403;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
                Py_DECREF( tmp_compexpr_left_12 );
                Py_DECREF( tmp_compexpr_right_12 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 403;
                    type_description_1 = "oooooooooooooooooooooooooooo";
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
                    PyObject *tmp_assign_source_64;
                    PyObject *tmp_left_name_35;
                    PyObject *tmp_right_name_35;
                    CHECK_OBJECT( var_step_len );
                    tmp_left_name_35 = var_step_len;
                    CHECK_OBJECT( var_z_min );
                    tmp_right_name_35 = var_z_min;
                    tmp_assign_source_64 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_35, tmp_right_name_35 );
                    if ( tmp_assign_source_64 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 404;
                        type_description_1 = "oooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_p;
                        var_p = tmp_assign_source_64;
                        Py_XDECREF( old );
                    }

                }
                goto loop_end_1;
                branch_no_10:;
            }
            {
                PyObject *tmp_assign_source_65;
                if ( var_lambda_current == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_current" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 408;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_assign_source_65 = var_lambda_current;
                {
                    PyObject *old = var_lambda_ub;
                    var_lambda_ub = tmp_assign_source_65;
                    Py_INCREF( var_lambda_ub );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_66;
                PyObject *tmp_called_name_17;
                PyObject *tmp_args_element_name_26;
                PyObject *tmp_args_element_name_27;
                PyObject *tmp_left_name_36;
                PyObject *tmp_right_name_36;
                PyObject *tmp_left_name_37;
                PyObject *tmp_right_name_37;
                tmp_called_name_17 = LOOKUP_BUILTIN( const_str_plain_max );
                assert( tmp_called_name_17 != NULL );
                if ( var_lambda_lb == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_lb" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 409;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_26 = var_lambda_lb;
                if ( var_lambda_current == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_current" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 409;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_36 = var_lambda_current;
                CHECK_OBJECT( var_s_min );
                tmp_left_name_37 = var_s_min;
                tmp_right_name_37 = const_int_pos_2;
                tmp_right_name_36 = POWER_OPERATION( tmp_left_name_37, tmp_right_name_37 );
                if ( tmp_right_name_36 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 409;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_27 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_36, tmp_right_name_36 );
                Py_DECREF( tmp_right_name_36 );
                if ( tmp_args_element_name_27 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 409;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 409;
                {
                    PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27 };
                    tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
                }

                Py_DECREF( tmp_args_element_name_27 );
                if ( tmp_assign_source_66 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 409;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_lambda_lb;
                    var_lambda_lb = tmp_assign_source_66;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_67;
                PyObject *tmp_called_name_18;
                PyObject *tmp_args_element_name_28;
                PyObject *tmp_called_name_19;
                PyObject *tmp_source_name_19;
                PyObject *tmp_mvar_value_13;
                PyObject *tmp_args_element_name_29;
                PyObject *tmp_left_name_38;
                PyObject *tmp_right_name_38;
                PyObject *tmp_args_element_name_30;
                PyObject *tmp_left_name_39;
                PyObject *tmp_right_name_39;
                PyObject *tmp_left_name_40;
                PyObject *tmp_source_name_20;
                PyObject *tmp_right_name_40;
                PyObject *tmp_left_name_41;
                PyObject *tmp_right_name_41;
                tmp_called_name_18 = LOOKUP_BUILTIN( const_str_plain_max );
                assert( tmp_called_name_18 != NULL );
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_13 == NULL ))
                {
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_13 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 412;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_19 = tmp_mvar_value_13;
                tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_sqrt );
                if ( tmp_called_name_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 412;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_lambda_lb );
                tmp_left_name_38 = var_lambda_lb;
                CHECK_OBJECT( var_lambda_ub );
                tmp_right_name_38 = var_lambda_ub;
                tmp_args_element_name_29 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_38, tmp_right_name_38 );
                if ( tmp_args_element_name_29 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_19 );

                    exception_lineno = 412;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 412;
                {
                    PyObject *call_args[] = { tmp_args_element_name_29 };
                    tmp_args_element_name_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
                }

                Py_DECREF( tmp_called_name_19 );
                Py_DECREF( tmp_args_element_name_29 );
                if ( tmp_args_element_name_28 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 412;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_lambda_lb );
                tmp_left_name_39 = var_lambda_lb;
                CHECK_OBJECT( par_self );
                tmp_source_name_20 = par_self;
                tmp_left_name_40 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_UPDATE_COEFF );
                if ( tmp_left_name_40 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_28 );

                    exception_lineno = 413;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_lambda_ub );
                tmp_left_name_41 = var_lambda_ub;
                CHECK_OBJECT( var_lambda_lb );
                tmp_right_name_41 = var_lambda_lb;
                tmp_right_name_40 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_41, tmp_right_name_41 );
                if ( tmp_right_name_40 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_28 );
                    Py_DECREF( tmp_left_name_40 );

                    exception_lineno = 413;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_39 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_40, tmp_right_name_40 );
                Py_DECREF( tmp_left_name_40 );
                Py_DECREF( tmp_right_name_40 );
                if ( tmp_right_name_39 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_28 );

                    exception_lineno = 413;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_39, tmp_right_name_39 );
                Py_DECREF( tmp_right_name_39 );
                if ( tmp_args_element_name_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_28 );

                    exception_lineno = 413;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 412;
                {
                    PyObject *call_args[] = { tmp_args_element_name_28, tmp_args_element_name_30 };
                    tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
                }

                Py_DECREF( tmp_args_element_name_28 );
                Py_DECREF( tmp_args_element_name_30 );
                if ( tmp_assign_source_67 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 412;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_lambda_current;
                    var_lambda_current = tmp_assign_source_67;
                    Py_XDECREF( old );
                }

            }
            goto branch_end_8;
            branch_no_8:;
            // Tried code:
            {
                PyObject *tmp_assign_source_68;
                PyObject *tmp_iter_arg_7;
                PyObject *tmp_called_name_20;
                PyObject *tmp_mvar_value_14;
                PyObject *tmp_args_element_name_31;
                PyObject *tmp_args_element_name_32;
                PyObject *tmp_args_element_name_33;
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_singular_leading_submatrix );

                if (unlikely( tmp_mvar_value_14 == NULL ))
                {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_singular_leading_submatrix );
                }

                if ( tmp_mvar_value_14 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "singular_leading_submatrix" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 418;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_16;
                }

                tmp_called_name_20 = tmp_mvar_value_14;
                if ( var_H == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "H" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 418;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_16;
                }

                tmp_args_element_name_31 = var_H;
                if ( var_U == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "U" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 418;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_16;
                }

                tmp_args_element_name_32 = var_U;
                if ( var_info == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 418;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_16;
                }

                tmp_args_element_name_33 = var_info;
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 418;
                {
                    PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32, tmp_args_element_name_33 };
                    tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_20, call_args );
                }

                if ( tmp_iter_arg_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 418;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_16;
                }
                tmp_assign_source_68 = MAKE_ITERATOR( tmp_iter_arg_7 );
                Py_DECREF( tmp_iter_arg_7 );
                if ( tmp_assign_source_68 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 418;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto try_except_handler_16;
                }
                {
                    PyObject *old = tmp_tuple_unpack_7__source_iter;
                    tmp_tuple_unpack_7__source_iter = tmp_assign_source_68;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_69;
                PyObject *tmp_unpack_14;
                CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
                tmp_unpack_14 = tmp_tuple_unpack_7__source_iter;
                tmp_assign_source_69 = UNPACK_NEXT( tmp_unpack_14, 0, 2 );
                if ( tmp_assign_source_69 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 418;
                    goto try_except_handler_17;
                }
                {
                    PyObject *old = tmp_tuple_unpack_7__element_1;
                    tmp_tuple_unpack_7__element_1 = tmp_assign_source_69;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_70;
                PyObject *tmp_unpack_15;
                CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
                tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
                tmp_assign_source_70 = UNPACK_NEXT( tmp_unpack_15, 1, 2 );
                if ( tmp_assign_source_70 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 418;
                    goto try_except_handler_17;
                }
                {
                    PyObject *old = tmp_tuple_unpack_7__element_2;
                    tmp_tuple_unpack_7__element_2 = tmp_assign_source_70;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_7;
                CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
                tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_7 ); assert( HAS_ITERNEXT( tmp_iterator_name_7 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_7 )->tp_iternext)( tmp_iterator_name_7 );

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

                            type_description_1 = "oooooooooooooooooooooooooooo";
                            exception_lineno = 418;
                            goto try_except_handler_17;
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

                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 418;
                    goto try_except_handler_17;
                }
            }
            goto try_end_15;
            // Exception handler code:
            try_except_handler_17:;
            exception_keeper_type_15 = exception_type;
            exception_keeper_value_15 = exception_value;
            exception_keeper_tb_15 = exception_tb;
            exception_keeper_lineno_15 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
            Py_DECREF( tmp_tuple_unpack_7__source_iter );
            tmp_tuple_unpack_7__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_15;
            exception_value = exception_keeper_value_15;
            exception_tb = exception_keeper_tb_15;
            exception_lineno = exception_keeper_lineno_15;

            goto try_except_handler_16;
            // End of try:
            try_end_15:;
            goto try_end_16;
            // Exception handler code:
            try_except_handler_16:;
            exception_keeper_type_16 = exception_type;
            exception_keeper_value_16 = exception_value;
            exception_keeper_tb_16 = exception_tb;
            exception_keeper_lineno_16 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_tuple_unpack_7__element_1 );
            tmp_tuple_unpack_7__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_7__element_2 );
            tmp_tuple_unpack_7__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_16;
            exception_value = exception_keeper_value_16;
            exception_tb = exception_keeper_tb_16;
            exception_lineno = exception_keeper_lineno_16;

            goto frame_exception_exit_1;
            // End of try:
            try_end_16:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
            Py_DECREF( tmp_tuple_unpack_7__source_iter );
            tmp_tuple_unpack_7__source_iter = NULL;

            {
                PyObject *tmp_assign_source_71;
                CHECK_OBJECT( tmp_tuple_unpack_7__element_1 );
                tmp_assign_source_71 = tmp_tuple_unpack_7__element_1;
                {
                    PyObject *old = var_delta;
                    var_delta = tmp_assign_source_71;
                    Py_INCREF( var_delta );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_7__element_1 );
            tmp_tuple_unpack_7__element_1 = NULL;

            {
                PyObject *tmp_assign_source_72;
                CHECK_OBJECT( tmp_tuple_unpack_7__element_2 );
                tmp_assign_source_72 = tmp_tuple_unpack_7__element_2;
                {
                    PyObject *old = var_v;
                    var_v = tmp_assign_source_72;
                    Py_INCREF( var_v );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_7__element_2 );
            tmp_tuple_unpack_7__element_2 = NULL;

            {
                PyObject *tmp_assign_source_73;
                PyObject *tmp_called_name_21;
                PyObject *tmp_mvar_value_15;
                PyObject *tmp_args_element_name_34;
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_norm );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
                }

                if ( tmp_mvar_value_15 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 419;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_21 = tmp_mvar_value_15;
                CHECK_OBJECT( var_v );
                tmp_args_element_name_34 = var_v;
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 419;
                {
                    PyObject *call_args[] = { tmp_args_element_name_34 };
                    tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
                }

                if ( tmp_assign_source_73 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 419;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_v_norm;
                    var_v_norm = tmp_assign_source_73;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_74;
                PyObject *tmp_called_name_22;
                PyObject *tmp_args_element_name_35;
                PyObject *tmp_args_element_name_36;
                PyObject *tmp_left_name_42;
                PyObject *tmp_right_name_42;
                PyObject *tmp_left_name_43;
                PyObject *tmp_right_name_43;
                PyObject *tmp_left_name_44;
                PyObject *tmp_right_name_44;
                tmp_called_name_22 = LOOKUP_BUILTIN( const_str_plain_max );
                assert( tmp_called_name_22 != NULL );
                if ( var_lambda_lb == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_lb" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 422;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_35 = var_lambda_lb;
                if ( var_lambda_current == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_current" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 422;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_42 = var_lambda_current;
                CHECK_OBJECT( var_delta );
                tmp_left_name_43 = var_delta;
                CHECK_OBJECT( var_v_norm );
                tmp_left_name_44 = var_v_norm;
                tmp_right_name_44 = const_int_pos_2;
                tmp_right_name_43 = POWER_OPERATION( tmp_left_name_44, tmp_right_name_44 );
                if ( tmp_right_name_43 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 422;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_42 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_43, tmp_right_name_43 );
                Py_DECREF( tmp_right_name_43 );
                if ( tmp_right_name_42 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 422;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_36 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_42, tmp_right_name_42 );
                Py_DECREF( tmp_right_name_42 );
                if ( tmp_args_element_name_36 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 422;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 422;
                {
                    PyObject *call_args[] = { tmp_args_element_name_35, tmp_args_element_name_36 };
                    tmp_assign_source_74 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_22, call_args );
                }

                Py_DECREF( tmp_args_element_name_36 );
                if ( tmp_assign_source_74 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 422;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_lambda_lb;
                    var_lambda_lb = tmp_assign_source_74;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_75;
                PyObject *tmp_called_name_23;
                PyObject *tmp_args_element_name_37;
                PyObject *tmp_called_name_24;
                PyObject *tmp_source_name_21;
                PyObject *tmp_mvar_value_16;
                PyObject *tmp_args_element_name_38;
                PyObject *tmp_left_name_45;
                PyObject *tmp_right_name_45;
                PyObject *tmp_args_element_name_39;
                PyObject *tmp_left_name_46;
                PyObject *tmp_right_name_46;
                PyObject *tmp_left_name_47;
                PyObject *tmp_source_name_22;
                PyObject *tmp_right_name_47;
                PyObject *tmp_left_name_48;
                PyObject *tmp_right_name_48;
                tmp_called_name_23 = LOOKUP_BUILTIN( const_str_plain_max );
                assert( tmp_called_name_23 != NULL );
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 425;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_21 = tmp_mvar_value_16;
                tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_sqrt );
                if ( tmp_called_name_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 425;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_lambda_lb );
                tmp_left_name_45 = var_lambda_lb;
                if ( var_lambda_ub == NULL )
                {
                    Py_DECREF( tmp_called_name_24 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_ub" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 425;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_right_name_45 = var_lambda_ub;
                tmp_args_element_name_38 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_45, tmp_right_name_45 );
                if ( tmp_args_element_name_38 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_24 );

                    exception_lineno = 425;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 425;
                {
                    PyObject *call_args[] = { tmp_args_element_name_38 };
                    tmp_args_element_name_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
                }

                Py_DECREF( tmp_called_name_24 );
                Py_DECREF( tmp_args_element_name_38 );
                if ( tmp_args_element_name_37 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 425;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_lambda_lb );
                tmp_left_name_46 = var_lambda_lb;
                CHECK_OBJECT( par_self );
                tmp_source_name_22 = par_self;
                tmp_left_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_UPDATE_COEFF );
                if ( tmp_left_name_47 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_37 );

                    exception_lineno = 426;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                if ( var_lambda_ub == NULL )
                {
                    Py_DECREF( tmp_args_element_name_37 );
                    Py_DECREF( tmp_left_name_47 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_ub" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 426;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_48 = var_lambda_ub;
                CHECK_OBJECT( var_lambda_lb );
                tmp_right_name_48 = var_lambda_lb;
                tmp_right_name_47 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_48, tmp_right_name_48 );
                if ( tmp_right_name_47 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_37 );
                    Py_DECREF( tmp_left_name_47 );

                    exception_lineno = 426;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_46 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_47, tmp_right_name_47 );
                Py_DECREF( tmp_left_name_47 );
                Py_DECREF( tmp_right_name_47 );
                if ( tmp_right_name_46 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_37 );

                    exception_lineno = 426;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_39 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_46, tmp_right_name_46 );
                Py_DECREF( tmp_right_name_46 );
                if ( tmp_args_element_name_39 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_37 );

                    exception_lineno = 426;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame.f_lineno = 425;
                {
                    PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_39 };
                    tmp_assign_source_75 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_23, call_args );
                }

                Py_DECREF( tmp_args_element_name_37 );
                Py_DECREF( tmp_args_element_name_39 );
                if ( tmp_assign_source_75 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 425;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_lambda_current;
                    var_lambda_current = tmp_assign_source_75;
                    Py_XDECREF( old );
                }

            }
            branch_end_8:;
        }
        branch_end_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        type_description_1 = "oooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        if ( var_lambda_lb == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_lb" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 428;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_3 = var_lambda_lb;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_lambda_lb, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        if ( var_lambda_current == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lambda_current" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_4 = var_lambda_current;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_lambda_current, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_tr_radius );
        tmp_assattr_name_5 = par_tr_radius;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_previous_tr_radius, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_tuple_element_6;
        CHECK_OBJECT( var_p );
        tmp_tuple_element_6 = var_p;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
        if ( var_hits_boundary == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hits_boundary" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 432;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = var_hits_boundary;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f396f7bf7f700a5e43237af241fe4f1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f396f7bf7f700a5e43237af241fe4f1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f396f7bf7f700a5e43237af241fe4f1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6f396f7bf7f700a5e43237af241fe4f1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6f396f7bf7f700a5e43237af241fe4f1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6f396f7bf7f700a5e43237af241fe4f1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6f396f7bf7f700a5e43237af241fe4f1,
        type_description_1,
        par_self,
        par_tr_radius,
        var_lambda_current,
        var_lambda_lb,
        var_lambda_ub,
        var_n,
        var_hits_boundary,
        var_already_factorized,
        var_H,
        var_U,
        var_info,
        var_p,
        var_p_norm,
        var_w,
        var_w_norm,
        var_delta_lambda,
        var_lambda_new,
        var_s_min,
        var_z_min,
        var_ta,
        var_tb,
        var_step_len,
        var_quadratic_term,
        var_relative_error,
        var_c,
        var_delta,
        var_v,
        var_v_norm
    );


    // Release cached frame.
    if ( frame_6f396f7bf7f700a5e43237af241fe4f1 == cache_frame_6f396f7bf7f700a5e43237af241fe4f1 )
    {
        Py_DECREF( frame_6f396f7bf7f700a5e43237af241fe4f1 );
    }
    cache_frame_6f396f7bf7f700a5e43237af241fe4f1 = NULL;

    assertFrameObject( frame_6f396f7bf7f700a5e43237af241fe4f1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact$$$function_7_solve );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tr_radius );
    Py_DECREF( par_tr_radius );
    par_tr_radius = NULL;

    Py_XDECREF( var_lambda_current );
    var_lambda_current = NULL;

    Py_XDECREF( var_lambda_lb );
    var_lambda_lb = NULL;

    Py_XDECREF( var_lambda_ub );
    var_lambda_ub = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_hits_boundary );
    var_hits_boundary = NULL;

    Py_XDECREF( var_already_factorized );
    var_already_factorized = NULL;

    Py_XDECREF( var_H );
    var_H = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    CHECK_OBJECT( (PyObject *)var_p );
    Py_DECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_p_norm );
    var_p_norm = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_w_norm );
    var_w_norm = NULL;

    Py_XDECREF( var_delta_lambda );
    var_delta_lambda = NULL;

    Py_XDECREF( var_lambda_new );
    var_lambda_new = NULL;

    Py_XDECREF( var_s_min );
    var_s_min = NULL;

    Py_XDECREF( var_z_min );
    var_z_min = NULL;

    Py_XDECREF( var_ta );
    var_ta = NULL;

    Py_XDECREF( var_tb );
    var_tb = NULL;

    Py_XDECREF( var_step_len );
    var_step_len = NULL;

    Py_XDECREF( var_quadratic_term );
    var_quadratic_term = NULL;

    Py_XDECREF( var_relative_error );
    var_relative_error = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_delta );
    var_delta = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_v_norm );
    var_v_norm = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tr_radius );
    Py_DECREF( par_tr_radius );
    par_tr_radius = NULL;

    Py_XDECREF( var_lambda_current );
    var_lambda_current = NULL;

    Py_XDECREF( var_lambda_lb );
    var_lambda_lb = NULL;

    Py_XDECREF( var_lambda_ub );
    var_lambda_ub = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_hits_boundary );
    var_hits_boundary = NULL;

    Py_XDECREF( var_already_factorized );
    var_already_factorized = NULL;

    Py_XDECREF( var_H );
    var_H = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_p_norm );
    var_p_norm = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_w_norm );
    var_w_norm = NULL;

    Py_XDECREF( var_delta_lambda );
    var_delta_lambda = NULL;

    Py_XDECREF( var_lambda_new );
    var_lambda_new = NULL;

    Py_XDECREF( var_s_min );
    var_s_min = NULL;

    Py_XDECREF( var_z_min );
    var_z_min = NULL;

    Py_XDECREF( var_ta );
    var_ta = NULL;

    Py_XDECREF( var_tb );
    var_tb = NULL;

    Py_XDECREF( var_step_len );
    var_step_len = NULL;

    Py_XDECREF( var_quadratic_term );
    var_quadratic_term = NULL;

    Py_XDECREF( var_relative_error );
    var_relative_error = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_delta );
    var_delta = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_v_norm );
    var_v_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact$$$function_7_solve );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_1__minimize_trustregion_exact( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_exact$$$function_1__minimize_trustregion_exact,
        const_str_plain__minimize_trustregion_exact,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c164004fb9def623fcd1d4861754c677,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_exact,
        const_str_digest_3b6e6bd60181f23c9d6cc0d1f75ad46d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_2_estimate_smallest_singular_value(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_exact$$$function_2_estimate_smallest_singular_value,
        const_str_plain_estimate_smallest_singular_value,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_852836594b9f8e101ff3c7840c585859,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_exact,
        const_str_digest_f9d0affca32614f5d1dab5e11047bd12,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_3_gershgorin_bounds(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_exact$$$function_3_gershgorin_bounds,
        const_str_plain_gershgorin_bounds,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3970883a6d466ec23dd4ef48ec2774c8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_exact,
        const_str_digest_535420f52872b6347b0c77cabde0120c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_4_singular_leading_submatrix(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_exact$$$function_4_singular_leading_submatrix,
        const_str_plain_singular_leading_submatrix,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_10a575142a89c8f0b8c23fd8e067af0b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_exact,
        const_str_digest_1c1c48be6cb62119d24eb0056c6c198d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_5___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_exact$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_0719157d038f05d0040df0caf963edb3,
#endif
        codeobj_e4f25c9796b53890a4900605135746b7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_exact,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_6__initial_values(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_exact$$$function_6__initial_values,
        const_str_plain__initial_values,
#if PYTHON_VERSION >= 300
        const_str_digest_ecbba26f89ac6efb9ea751cd95e0977f,
#endif
        codeobj_4f428caedaac1e7510e1b7a3f6bd1d8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_exact,
        const_str_digest_f00a776e221510c5fcdb5517c29e6a73,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_7_solve(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_exact$$$function_7_solve,
        const_str_plain_solve,
#if PYTHON_VERSION >= 300
        const_str_digest_85f944e601fce1e2690e7dc318a97e8c,
#endif
        codeobj_6f396f7bf7f700a5e43237af241fe4f1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_exact,
        const_str_digest_c2ec6a64484da89006ceb36f24843d52,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_trustregion_exact =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._trustregion_exact",
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

MOD_INIT_DECL( scipy$optimize$_trustregion_exact )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_trustregion_exact );
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
    puts("scipy.optimize._trustregion_exact: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._trustregion_exact: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._trustregion_exact: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_trustregion_exact" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_trustregion_exact = Py_InitModule4(
        "scipy.optimize._trustregion_exact",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_trustregion_exact = PyModule_Create( &mdef_scipy$optimize$_trustregion_exact );
#endif

    moduledict_scipy$optimize$_trustregion_exact = MODULE_DICT( module_scipy$optimize$_trustregion_exact );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_trustregion_exact,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_trustregion_exact,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trustregion_exact,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trustregion_exact,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_trustregion_exact );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_e77279d991b10cbef17cd4833fc40e26, module_scipy$optimize$_trustregion_exact );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_2014557c7db9ae8663f4a38b40a4af4b;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_scipy$optimize$_trustregion_exact_188 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_f6109be0f62c2b510929d40bcdebd8b1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f6109be0f62c2b510929d40bcdebd8b1_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_8d5534ec9f82c2ff34fc1ead4cbdad03;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_2014557c7db9ae8663f4a38b40a4af4b = MAKE_MODULE_FRAME( codeobj_2014557c7db9ae8663f4a38b40a4af4b, module_scipy$optimize$_trustregion_exact );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2014557c7db9ae8663f4a38b40a4af4b );
    assert( Py_REFCNT( frame_2014557c7db9ae8663f4a38b40a4af4b ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_2014557c7db9ae8663f4a38b40a4af4b->m_frame.f_lineno = 2;
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
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_trustregion_exact;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_2014557c7db9ae8663f4a38b40a4af4b->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_trustregion_exact;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_f75e89d6f4e8161b073c790dfa330ce0_tuple;
        tmp_level_name_2 = const_int_0;
        frame_2014557c7db9ae8663f4a38b40a4af4b->m_frame.f_lineno = 5;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

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
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_norm );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_get_lapack_funcs );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_solve_triangular );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_solve_triangular, tmp_assign_source_12 );
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


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_cho_solve, tmp_assign_source_13 );
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
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain__trustregion;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_trustregion_exact;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_2bf650a5acc66f3638b0d9265addf376_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_2014557c7db9ae8663f4a38b40a4af4b->m_frame.f_lineno = 7;
        tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_scipy$optimize$_trustregion_exact,
                const_str_plain__minimize_trust_region,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain__minimize_trust_region );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain__minimize_trust_region, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$optimize$_trustregion_exact,
                const_str_plain_BaseQuadraticSubproblem,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_BaseQuadraticSubproblem );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_BaseQuadraticSubproblem, tmp_assign_source_16 );
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
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = LIST_COPY( const_list_a4682d446e14b525ac296b0b50013258_list );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_tuple_empty_none_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_18 = MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_1__minimize_trustregion_exact( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain__minimize_trustregion_exact, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_2_estimate_smallest_singular_value(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_estimate_smallest_singular_value, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_3_gershgorin_bounds(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_gershgorin_bounds, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_4_singular_leading_submatrix(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_singular_leading_submatrix, tmp_assign_source_21 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_BaseQuadraticSubproblem );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseQuadraticSubproblem );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BaseQuadraticSubproblem" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 188;

            goto try_except_handler_4;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_22 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_22, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
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


            exception_lineno = 188;

            goto try_except_handler_4;
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


            exception_lineno = 188;

            goto try_except_handler_4;
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


            exception_lineno = 188;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto try_except_handler_4;
        }
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_24 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_24;
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


            exception_lineno = 188;

            goto try_except_handler_4;
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


            exception_lineno = 188;

            goto try_except_handler_4;
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
            PyObject *tmp_assign_source_25;
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


                exception_lineno = 188;

                goto try_except_handler_4;
            }
            tmp_tuple_element_2 = const_str_plain_IterativeSubproblem;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_2014557c7db9ae8663f4a38b40a4af4b->m_frame.f_lineno = 188;
            tmp_assign_source_25 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_25;
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


                exception_lineno = 188;

                goto try_except_handler_4;
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


                    exception_lineno = 188;

                    goto try_except_handler_4;
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

                    exception_lineno = 188;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 188;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 188;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_26;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$optimize$_trustregion_exact_188 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_e77279d991b10cbef17cd4833fc40e26;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_exact_188, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_digest_63daa943f530d410e692780d41b2eb19;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_exact_188, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_IterativeSubproblem;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_exact_188, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto try_except_handler_6;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_f6109be0f62c2b510929d40bcdebd8b1_2, codeobj_f6109be0f62c2b510929d40bcdebd8b1, module_scipy$optimize$_trustregion_exact, sizeof(void *) );
        frame_f6109be0f62c2b510929d40bcdebd8b1_2 = cache_frame_f6109be0f62c2b510929d40bcdebd8b1_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_f6109be0f62c2b510929d40bcdebd8b1_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_f6109be0f62c2b510929d40bcdebd8b1_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_float_0_01;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_exact_188, const_str_plain_UPDATE_COEFF, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_source_name_5;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_1;
            tmp_source_name_6 = PyObject_GetItem( locals_scipy$optimize$_trustregion_exact_188, const_str_plain_np );

            if ( tmp_source_name_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 213;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_6 = tmp_mvar_value_4;
                Py_INCREF( tmp_source_name_6 );
                }
            }

            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_finfo );
            Py_DECREF( tmp_source_name_6 );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = PyObject_GetItem( locals_scipy$optimize$_trustregion_exact_188, const_str_plain_float );

            if ( tmp_args_element_name_1 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_args_element_name_1 = (PyObject *)&PyFloat_Type;
                Py_INCREF( tmp_args_element_name_1 );
                }
            }

            frame_f6109be0f62c2b510929d40bcdebd8b1_2->m_frame.f_lineno = 213;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_source_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_eps );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_exact_188, const_str_plain_EPS, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_none_float_0_1_float_0_2_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_5___init__( tmp_defaults_2 );



            tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_exact_188, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_6__initial_values(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_exact_188, const_str_plain__initial_values, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_exact$$$function_7_solve(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_exact_188, const_str_plain_solve, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_f6109be0f62c2b510929d40bcdebd8b1_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_f6109be0f62c2b510929d40bcdebd8b1_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_f6109be0f62c2b510929d40bcdebd8b1_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_f6109be0f62c2b510929d40bcdebd8b1_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_f6109be0f62c2b510929d40bcdebd8b1_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_f6109be0f62c2b510929d40bcdebd8b1_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_f6109be0f62c2b510929d40bcdebd8b1_2 == cache_frame_f6109be0f62c2b510929d40bcdebd8b1_2 )
        {
            Py_DECREF( frame_f6109be0f62c2b510929d40bcdebd8b1_2 );
        }
        cache_frame_f6109be0f62c2b510929d40bcdebd8b1_2 = NULL;

        assertFrameObject( frame_f6109be0f62c2b510929d40bcdebd8b1_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_IterativeSubproblem;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_scipy$optimize$_trustregion_exact_188;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_2014557c7db9ae8663f4a38b40a4af4b->m_frame.f_lineno = 188;
            tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;

                goto try_except_handler_6;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_27 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_27 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_scipy$optimize$_trustregion_exact_188 );
        locals_scipy$optimize$_trustregion_exact_188 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_scipy$optimize$_trustregion_exact_188 );
        locals_scipy$optimize$_trustregion_exact_188 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_exact );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 188;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain_IterativeSubproblem, tmp_assign_source_27 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2014557c7db9ae8663f4a38b40a4af4b );
#endif
    popFrameStack();

    assertFrameObject( frame_2014557c7db9ae8663f4a38b40a4af4b );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2014557c7db9ae8663f4a38b40a4af4b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2014557c7db9ae8663f4a38b40a4af4b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2014557c7db9ae8663f4a38b40a4af4b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2014557c7db9ae8663f4a38b40a4af4b, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
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


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_exact, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_trustregion_exact );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
