/* Generated code for Python module 'scipy.optimize._linprog_rs'
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

/* The "_module_scipy$optimize$_linprog_rs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_linprog_rs;
PyDictObject *moduledict_scipy$optimize$_linprog_rs;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_permutation;
extern PyObject *const_int_pos_20;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__postsolve;
static PyObject *const_str_digest_62d3e999ccbb3f0f34d1f3457c3a4364;
static PyObject *const_str_digest_387e793e0b071b325ba402e015d6995e;
extern PyObject *const_str_plain_ones;
static PyObject *const_str_plain_LinAlgError2;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_int_neg_1_false_tuple;
extern PyObject *const_str_plain_OptimizeResult;
extern PyObject *const_str_plain_solve;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
extern PyObject *const_str_plain__linprog_rs;
extern PyObject *const_str_plain_iteration;
static PyObject *const_str_digest_2371b64c71d11acccf8c90dba9719f09;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_8f8cd11a2b0831420eac46bb41db80db;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_fmt;
extern PyObject *const_str_plain_where;
static PyObject *const_str_digest_be4abfc3104360fd8fe18606bd8075e7;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_m;
extern PyObject *const_tuple_str_plain__postsolve_tuple;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_matrix_rank;
static PyObject *const_tuple_1696f04aea9ed6befd9272cda1adab1b_tuple;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_b41e0992f824e9a8fc4e1002de783b26;
extern PyObject *const_int_pos_5;
static PyObject *const_str_plain__generate_auxiliary_problem;
extern PyObject *const_str_plain_row_indices;
extern PyObject *const_str_plain_hstack;
static PyObject *const_str_digest_c86b049ba95c248d16bb105fec0b149a;
extern PyObject *const_str_plain_linalg;
static PyObject *const_str_plain__get_more_basis_columns;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_8f95ba2093b7dbb0dfda545bdc6fd19f_tuple;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_dict_6ccf1996a79e7bc95b345c0d39aef510;
static PyObject *const_str_digest_8537982683d9520b42a6f2166cf48d7e;
extern PyObject *const_str_plain_options;
static PyObject *const_str_plain__phase_one;
extern PyObject *const_tuple_str_plain_LinAlgError_tuple;
extern PyObject *const_str_plain_return_index;
extern PyObject *const_str_plain_slack;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_phase;
extern PyObject *const_str_plain_status;
static PyObject *const_str_digest_8ef37d046ac765160dfe2a861f8ef9c3;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_min;
extern PyObject *const_int_pos_5000;
extern PyObject *const_str_plain_int;
static PyObject *const_str_plain_nonzero_columns;
static PyObject *const_str_digest_22628baf410e5323a641094eb3bcf794;
extern PyObject *const_str_plain_insert;
extern PyObject *const_str_plain_basis;
extern PyObject *const_str_plain_con;
extern PyObject *const_str_plain_random;
static PyObject *const_str_plain_BGLU;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_Iteration;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_arange;
static PyObject *const_str_digest_b0ae63b1f6fb764a098d04d191924dc7;
static PyObject *const_tuple_str_plain_bland_float_1eminus_12_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_fun;
static PyObject *const_str_plain_columns;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_unique;
extern PyObject *const_str_plain_LU;
static PyObject *const_tuple_9090f120adbd0a64dcba368d056bb6bc_tuple;
static PyObject *const_tuple_43d086e51e1ae3c0e524ec8e22b5eefe_tuple;
static PyObject *const_str_plain__select_enter_pivot;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_nit;
static PyObject *const_str_plain__phase_two;
static PyObject *const_tuple_a8bd99c1227b24c8c255e5543ff7eabd_tuple;
extern PyObject *const_str_plain__check_unknown_options;
extern PyObject *const_str_plain_complete;
extern PyObject *const_str_plain__display_iter;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_abs;
static PyObject *const_str_digest_7582bacb40fb46ab347045e2182c13fa;
static PyObject *const_str_digest_637eb861ec49f449acf823ffe220bbf0;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_str_plain_concatenate;
static PyObject *const_str_digest_b10a9fe04fe1268ef204faf42eccb7ca;
static PyObject *const_str_digest_941194efa49f52d89537b1566a7f8602;
extern PyObject *const_str_plain_argmax;
extern PyObject *const_str_plain_argmin;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_rank;
static PyObject *const_tuple_a9f306b6ff4e276fad742c1fdb38b858_tuple;
static PyObject *const_list_d7d4348feb789887111b9ad9a9b70683_list;
extern PyObject *const_str_plain_bland;
extern PyObject *const_str_plain_LinAlgError;
extern PyObject *const_str_digest_1880563e266a347a2dd1d3621428dd0b;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_de8bfbbb5a80e72a7a223b0376d86808;
static PyObject *const_str_plain_new_basis;
static PyObject *const_str_digest_0bf8aa5616251d15df64ca31ed4af2b2;
extern PyObject *const_str_plain_logical_and;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_b7b1eea3f789c24aaf98d3f720167206;
static PyObject *const_str_plain__find_nonzero_rows;
extern PyObject *const_str_plain_B;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_header;
extern PyObject *const_str_plain_transposed;
extern PyObject *const_dict_8a6ce79bb59f45c062c2a0027a3a0c33;
extern PyObject *const_dict_ddb6199cf8f69226979904abcecd9a1f;
extern PyObject *const_int_pos_4;
extern PyObject *const_float_1eminus_12;
static PyObject *const_str_plain_first_columns;
static PyObject *const_tuple_str_plain_LU_tuple;
static PyObject *const_str_digest_957620498701c8d13e45e696099c26a0;
static PyObject *const_str_plain_nonzero_rows;
extern PyObject *const_str_plain_logical_not;
extern PyObject *const_slice_none_none_int_neg_1;
static PyObject *const_str_digest_98831eb0a92a009edfa689ea46fc1426;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_optimize;
extern PyObject *const_tuple_str_plain__check_unknown_options_tuple;
static PyObject *const_str_plain__bglu_dense;
static PyObject *const_str_plain_same_sign;
static PyObject *const_str_plain_mrc;
extern PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain_rule;
extern PyObject *const_str_plain_zeros;
static PyObject *const_tuple_050080fc52182498dc442007415cdd98_tuple;
static PyObject *const_str_plain_unique_row_indices;
extern PyObject *const_tuple_str_plain_OptimizeResult_tuple;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_NA;
static PyObject *const_tuple_str_plain_BGLU_tuple;
static PyObject *const_str_digest_07a3ddd1c2c38f7a48ee7d395d15935a;
static PyObject *const_str_plain__select_singleton_columns;
extern PyObject *const_str_plain_copy;
static PyObject *const_tuple_75209edd3c07861ef172bebca465062a_tuple;
extern PyObject *const_str_digest_ea304145e4e7045d01a52916c5feb3ac;
extern PyObject *const_str_plain_axis;
static PyObject *const_tuple_0dec82b2250bb720d82e6e87cdf17a9e_tuple;
static PyObject *const_str_plain_c_hat;
static PyObject *const_dict_26d77fef7ff092354b69f890bec2632d;
extern PyObject *const_dict_c4b01644824ba6bad132707fcdaa03f1;
extern PyObject *const_str_plain_print;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain__linprog_util;
extern PyObject *const_tuple_str_plain_A_str_plain_tol_tuple;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_tol;
static PyObject *const_str_digest_8c7711ef333b7164f76b9f61b33020d9;
static PyObject *const_str_plain_Phase;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_isin;
static PyObject *const_str_digest_3157b065727eacf7fb8b05a903da22cd;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_A;
static PyObject *const_str_digest_2420e1c86040b0fe61d9ac9d68e70a49;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_bl;
static PyObject *const_str_plain_column_indices;
extern PyObject *const_str_plain_success;
static PyObject *const_tuple_str_plain_solve_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_62d3e999ccbb3f0f34d1f3457c3a4364 = UNSTREAM_STRING_ASCII( &constant_bin[ 4837051 ], 635, 0 );
    const_str_digest_387e793e0b071b325ba402e015d6995e = UNSTREAM_STRING_ASCII( &constant_bin[ 4837686 ], 227, 0 );
    const_str_plain_LinAlgError2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4837913 ], 12, 1 );
    const_tuple_int_neg_1_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_false_tuple, 0, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_str_digest_2371b64c71d11acccf8c90dba9719f09 = UNSTREAM_STRING_ASCII( &constant_bin[ 4837925 ], 75, 0 );
    const_str_digest_8f8cd11a2b0831420eac46bb41db80db = UNSTREAM_STRING_ASCII( &constant_bin[ 4838000 ], 348, 0 );
    const_str_digest_be4abfc3104360fd8fe18606bd8075e7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4838348 ], 631, 0 );
    const_tuple_1696f04aea9ed6befd9272cda1adab1b_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4838979 ], 168 );
    const_str_digest_b41e0992f824e9a8fc4e1002de783b26 = UNSTREAM_STRING_ASCII( &constant_bin[ 4839147 ], 339, 0 );
    const_str_plain__generate_auxiliary_problem = UNSTREAM_STRING_ASCII( &constant_bin[ 4839486 ], 27, 1 );
    const_str_digest_c86b049ba95c248d16bb105fec0b149a = UNSTREAM_STRING_ASCII( &constant_bin[ 4839513 ], 19, 0 );
    const_str_plain__get_more_basis_columns = UNSTREAM_STRING_ASCII( &constant_bin[ 4839532 ], 23, 1 );
    const_tuple_8f95ba2093b7dbb0dfda545bdc6fd19f_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4839555 ], 255 );
    const_str_digest_8537982683d9520b42a6f2166cf48d7e = UNSTREAM_STRING_ASCII( &constant_bin[ 4839810 ], 63, 0 );
    const_str_plain__phase_one = UNSTREAM_STRING_ASCII( &constant_bin[ 4839873 ], 10, 1 );
    const_str_digest_8ef37d046ac765160dfe2a861f8ef9c3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4839883 ], 65, 0 );
    const_str_plain_nonzero_columns = UNSTREAM_STRING_ASCII( &constant_bin[ 4839948 ], 15, 1 );
    const_str_digest_22628baf410e5323a641094eb3bcf794 = UNSTREAM_STRING_ASCII( &constant_bin[ 4839963 ], 4606, 0 );
    const_str_plain_BGLU = UNSTREAM_STRING_ASCII( &constant_bin[ 4844569 ], 4, 1 );
    const_str_digest_b0ae63b1f6fb764a098d04d191924dc7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4844573 ], 26, 0 );
    const_tuple_str_plain_bland_float_1eminus_12_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_bland_float_1eminus_12_tuple, 0, const_str_plain_bland ); Py_INCREF( const_str_plain_bland );
    PyTuple_SET_ITEM( const_tuple_str_plain_bland_float_1eminus_12_tuple, 1, const_float_1eminus_12 ); Py_INCREF( const_float_1eminus_12 );
    const_str_plain_columns = UNSTREAM_STRING_ASCII( &constant_bin[ 958144 ], 7, 1 );
    const_tuple_9090f120adbd0a64dcba368d056bb6bc_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4844599 ], 145 );
    const_tuple_43d086e51e1ae3c0e524ec8e22b5eefe_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_43d086e51e1ae3c0e524ec8e22b5eefe_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_43d086e51e1ae3c0e524ec8e22b5eefe_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    const_str_plain_column_indices = UNSTREAM_STRING_ASCII( &constant_bin[ 4839771 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_43d086e51e1ae3c0e524ec8e22b5eefe_tuple, 2, const_str_plain_column_indices ); Py_INCREF( const_str_plain_column_indices );
    PyTuple_SET_ITEM( const_tuple_43d086e51e1ae3c0e524ec8e22b5eefe_tuple, 3, const_str_plain_columns ); Py_INCREF( const_str_plain_columns );
    PyTuple_SET_ITEM( const_tuple_43d086e51e1ae3c0e524ec8e22b5eefe_tuple, 4, const_str_plain_row_indices ); Py_INCREF( const_str_plain_row_indices );
    const_str_plain_nonzero_rows = UNSTREAM_STRING_ASCII( &constant_bin[ 4844744 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_43d086e51e1ae3c0e524ec8e22b5eefe_tuple, 5, const_str_plain_nonzero_rows ); Py_INCREF( const_str_plain_nonzero_rows );
    PyTuple_SET_ITEM( const_tuple_43d086e51e1ae3c0e524ec8e22b5eefe_tuple, 6, const_str_plain_nonzero_columns ); Py_INCREF( const_str_plain_nonzero_columns );
    const_str_plain_same_sign = UNSTREAM_STRING_ASCII( &constant_bin[ 4844756 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_43d086e51e1ae3c0e524ec8e22b5eefe_tuple, 7, const_str_plain_same_sign ); Py_INCREF( const_str_plain_same_sign );
    const_str_plain_unique_row_indices = UNSTREAM_STRING_ASCII( &constant_bin[ 4844765 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_43d086e51e1ae3c0e524ec8e22b5eefe_tuple, 8, const_str_plain_unique_row_indices ); Py_INCREF( const_str_plain_unique_row_indices );
    const_str_plain_first_columns = UNSTREAM_STRING_ASCII( &constant_bin[ 4844783 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_43d086e51e1ae3c0e524ec8e22b5eefe_tuple, 9, const_str_plain_first_columns ); Py_INCREF( const_str_plain_first_columns );
    const_str_plain__select_enter_pivot = UNSTREAM_STRING_ASCII( &constant_bin[ 4844796 ], 19, 1 );
    const_str_plain__phase_two = UNSTREAM_STRING_ASCII( &constant_bin[ 4844815 ], 10, 1 );
    const_tuple_a8bd99c1227b24c8c255e5543ff7eabd_tuple = PyTuple_New( 5 );
    const_str_plain_Phase = UNSTREAM_STRING_ASCII( &constant_bin[ 1030515 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_a8bd99c1227b24c8c255e5543ff7eabd_tuple, 0, const_str_plain_Phase ); Py_INCREF( const_str_plain_Phase );
    PyTuple_SET_ITEM( const_tuple_a8bd99c1227b24c8c255e5543ff7eabd_tuple, 1, const_str_plain_Iteration ); Py_INCREF( const_str_plain_Iteration );
    const_str_digest_637eb861ec49f449acf823ffe220bbf0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4844825 ], 19, 0 );
    PyTuple_SET_ITEM( const_tuple_a8bd99c1227b24c8c255e5543ff7eabd_tuple, 2, const_str_digest_637eb861ec49f449acf823ffe220bbf0 ); Py_INCREF( const_str_digest_637eb861ec49f449acf823ffe220bbf0 );
    PyTuple_SET_ITEM( const_tuple_a8bd99c1227b24c8c255e5543ff7eabd_tuple, 3, const_str_digest_c86b049ba95c248d16bb105fec0b149a ); Py_INCREF( const_str_digest_c86b049ba95c248d16bb105fec0b149a );
    PyTuple_SET_ITEM( const_tuple_a8bd99c1227b24c8c255e5543ff7eabd_tuple, 4, const_str_digest_de8bfbbb5a80e72a7a223b0376d86808 ); Py_INCREF( const_str_digest_de8bfbbb5a80e72a7a223b0376d86808 );
    const_str_digest_7582bacb40fb46ab347045e2182c13fa = UNSTREAM_STRING_ASCII( &constant_bin[ 4844844 ], 27, 0 );
    const_str_digest_b10a9fe04fe1268ef204faf42eccb7ca = UNSTREAM_STRING_ASCII( &constant_bin[ 4844871 ], 43, 0 );
    const_str_digest_941194efa49f52d89537b1566a7f8602 = UNSTREAM_STRING_ASCII( &constant_bin[ 4844914 ], 35, 0 );
    const_tuple_a9f306b6ff4e276fad742c1fdb38b858_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_a9f306b6ff4e276fad742c1fdb38b858_tuple, 0, const_str_plain_phase ); Py_INCREF( const_str_plain_phase );
    PyTuple_SET_ITEM( const_tuple_a9f306b6ff4e276fad742c1fdb38b858_tuple, 1, const_str_plain_iteration ); Py_INCREF( const_str_plain_iteration );
    PyTuple_SET_ITEM( const_tuple_a9f306b6ff4e276fad742c1fdb38b858_tuple, 2, const_str_plain_slack ); Py_INCREF( const_str_plain_slack );
    PyTuple_SET_ITEM( const_tuple_a9f306b6ff4e276fad742c1fdb38b858_tuple, 3, const_str_plain_con ); Py_INCREF( const_str_plain_con );
    PyTuple_SET_ITEM( const_tuple_a9f306b6ff4e276fad742c1fdb38b858_tuple, 4, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_a9f306b6ff4e276fad742c1fdb38b858_tuple, 5, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyTuple_SET_ITEM( const_tuple_a9f306b6ff4e276fad742c1fdb38b858_tuple, 6, const_str_plain_fmt ); Py_INCREF( const_str_plain_fmt );
    const_list_d7d4348feb789887111b9ad9a9b70683_list = PyList_New( 7 );
    PyList_SET_ITEM( const_list_d7d4348feb789887111b9ad9a9b70683_list, 0, const_str_digest_b7b1eea3f789c24aaf98d3f720167206 ); Py_INCREF( const_str_digest_b7b1eea3f789c24aaf98d3f720167206 );
    PyList_SET_ITEM( const_list_d7d4348feb789887111b9ad9a9b70683_list, 1, const_str_digest_ea304145e4e7045d01a52916c5feb3ac ); Py_INCREF( const_str_digest_ea304145e4e7045d01a52916c5feb3ac );
    PyList_SET_ITEM( const_list_d7d4348feb789887111b9ad9a9b70683_list, 2, const_str_digest_b41e0992f824e9a8fc4e1002de783b26 ); Py_INCREF( const_str_digest_b41e0992f824e9a8fc4e1002de783b26 );
    const_str_digest_2420e1c86040b0fe61d9ac9d68e70a49 = UNSTREAM_STRING_ASCII( &constant_bin[ 4844949 ], 183, 0 );
    PyList_SET_ITEM( const_list_d7d4348feb789887111b9ad9a9b70683_list, 3, const_str_digest_2420e1c86040b0fe61d9ac9d68e70a49 ); Py_INCREF( const_str_digest_2420e1c86040b0fe61d9ac9d68e70a49 );
    const_str_digest_0bf8aa5616251d15df64ca31ed4af2b2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4845132 ], 76, 0 );
    PyList_SET_ITEM( const_list_d7d4348feb789887111b9ad9a9b70683_list, 4, const_str_digest_0bf8aa5616251d15df64ca31ed4af2b2 ); Py_INCREF( const_str_digest_0bf8aa5616251d15df64ca31ed4af2b2 );
    PyList_SET_ITEM( const_list_d7d4348feb789887111b9ad9a9b70683_list, 5, const_str_digest_2371b64c71d11acccf8c90dba9719f09 ); Py_INCREF( const_str_digest_2371b64c71d11acccf8c90dba9719f09 );
    PyList_SET_ITEM( const_list_d7d4348feb789887111b9ad9a9b70683_list, 6, const_str_digest_8537982683d9520b42a6f2166cf48d7e ); Py_INCREF( const_str_digest_8537982683d9520b42a6f2166cf48d7e );
    const_str_plain_new_basis = UNSTREAM_STRING_ASCII( &constant_bin[ 4839794 ], 9, 1 );
    const_str_plain__find_nonzero_rows = UNSTREAM_STRING_ASCII( &constant_bin[ 4845208 ], 18, 1 );
    const_tuple_str_plain_LU_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LU_tuple, 0, const_str_plain_LU ); Py_INCREF( const_str_plain_LU );
    const_str_digest_957620498701c8d13e45e696099c26a0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4845226 ], 1168, 0 );
    const_str_digest_98831eb0a92a009edfa689ea46fc1426 = UNSTREAM_STRING_ASCII( &constant_bin[ 4846394 ], 602, 0 );
    const_str_plain__bglu_dense = UNSTREAM_STRING_ASCII( &constant_bin[ 4846996 ], 11, 1 );
    const_str_plain_mrc = UNSTREAM_STRING_ASCII( &constant_bin[ 4843597 ], 3, 1 );
    const_tuple_050080fc52182498dc442007415cdd98_tuple = PyTuple_New( 5 );
    const_str_plain_c_hat = UNSTREAM_STRING_ASCII( &constant_bin[ 4847007 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_050080fc52182498dc442007415cdd98_tuple, 0, const_str_plain_c_hat ); Py_INCREF( const_str_plain_c_hat );
    const_str_plain_bl = UNSTREAM_STRING_ASCII( &constant_bin[ 3818 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_050080fc52182498dc442007415cdd98_tuple, 1, const_str_plain_bl ); Py_INCREF( const_str_plain_bl );
    PyTuple_SET_ITEM( const_tuple_050080fc52182498dc442007415cdd98_tuple, 2, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_050080fc52182498dc442007415cdd98_tuple, 3, const_str_plain_rule ); Py_INCREF( const_str_plain_rule );
    PyTuple_SET_ITEM( const_tuple_050080fc52182498dc442007415cdd98_tuple, 4, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    const_str_plain_NA = UNSTREAM_STRING_ASCII( &constant_bin[ 102294 ], 2, 1 );
    const_tuple_str_plain_BGLU_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_BGLU_tuple, 0, const_str_plain_BGLU ); Py_INCREF( const_str_plain_BGLU );
    const_str_digest_07a3ddd1c2c38f7a48ee7d395d15935a = UNSTREAM_STRING_ASCII( &constant_bin[ 4847012 ], 29, 0 );
    const_str_plain__select_singleton_columns = UNSTREAM_STRING_ASCII( &constant_bin[ 4847041 ], 25, 1 );
    const_tuple_75209edd3c07861ef172bebca465062a_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4847066 ], 219 );
    const_tuple_0dec82b2250bb720d82e6e87cdf17a9e_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_0dec82b2250bb720d82e6e87cdf17a9e_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_0dec82b2250bb720d82e6e87cdf17a9e_tuple, 1, const_str_plain_basis ); Py_INCREF( const_str_plain_basis );
    PyTuple_SET_ITEM( const_tuple_0dec82b2250bb720d82e6e87cdf17a9e_tuple, 2, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_0dec82b2250bb720d82e6e87cdf17a9e_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_0dec82b2250bb720d82e6e87cdf17a9e_tuple, 4, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_0dec82b2250bb720d82e6e87cdf17a9e_tuple, 5, const_str_plain_bl ); Py_INCREF( const_str_plain_bl );
    PyTuple_SET_ITEM( const_tuple_0dec82b2250bb720d82e6e87cdf17a9e_tuple, 6, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_0dec82b2250bb720d82e6e87cdf17a9e_tuple, 7, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_0dec82b2250bb720d82e6e87cdf17a9e_tuple, 8, const_str_plain_rank ); Py_INCREF( const_str_plain_rank );
    PyTuple_SET_ITEM( const_tuple_0dec82b2250bb720d82e6e87cdf17a9e_tuple, 9, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_0dec82b2250bb720d82e6e87cdf17a9e_tuple, 10, const_str_plain_new_basis ); Py_INCREF( const_str_plain_new_basis );
    const_dict_26d77fef7ff092354b69f890bec2632d = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_26d77fef7ff092354b69f890bec2632d, const_str_plain_transposed, Py_True );
    assert( PyDict_Size( const_dict_26d77fef7ff092354b69f890bec2632d ) == 1 );
    const_str_digest_8c7711ef333b7164f76b9f61b33020d9 = UNSTREAM_STRING_ASCII( &constant_bin[ 4847285 ], 144, 0 );
    const_str_digest_3157b065727eacf7fb8b05a903da22cd = UNSTREAM_STRING_ASCII( &constant_bin[ 4847429 ], 103, 0 );
    const_tuple_str_plain_solve_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_solve_tuple, 0, const_str_plain_solve ); Py_INCREF( const_str_plain_solve );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_linprog_rs( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_54e19db7e275a3130f4a45f58ed85616;
static PyCodeObject *codeobj_1c37ff6786d73941bca23a97b8f3c9f0;
static PyCodeObject *codeobj_34d440df0ac0b4caf817ffb92b60b209;
static PyCodeObject *codeobj_fa6546b76562775dacff6b8b62fff619;
static PyCodeObject *codeobj_0cb4159b5e481bf4308e1439ab5ccaff;
static PyCodeObject *codeobj_13119f34df6d194e8a86bd7f8a699081;
static PyCodeObject *codeobj_b90db87981c6a287c8d829bb1d2b2011;
static PyCodeObject *codeobj_c5d8e3db7d3c2c72aedac6cb4ceac6a1;
static PyCodeObject *codeobj_0105f03a53a3e9486fc211c087ad13b7;
static PyCodeObject *codeobj_3bbe9dd00068478dae6f8f32dcb469a2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_07a3ddd1c2c38f7a48ee7d395d15935a );
    codeobj_54e19db7e275a3130f4a45f58ed85616 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_941194efa49f52d89537b1566a7f8602, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_1c37ff6786d73941bca23a97b8f3c9f0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__display_iter, 288, const_tuple_a9f306b6ff4e276fad742c1fdb38b858_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_34d440df0ac0b4caf817ffb92b60b209 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__find_nonzero_rows, 269, const_tuple_str_plain_A_str_plain_tol_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fa6546b76562775dacff6b8b62fff619 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__generate_auxiliary_problem, 134, const_tuple_1696f04aea9ed6befd9272cda1adab1b_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0cb4159b5e481bf4308e1439ab5ccaff = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_more_basis_columns, 99, const_tuple_0dec82b2250bb720d82e6e87cdf17a9e_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_13119f34df6d194e8a86bd7f8a699081 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__linprog_rs, 401, const_tuple_9090f120adbd0a64dcba368d056bb6bc_tuple, 13, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_b90db87981c6a287c8d829bb1d2b2011 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__phase_one, 32, const_tuple_8f95ba2093b7dbb0dfda545bdc6fd19f_tuple, 11, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c5d8e3db7d3c2c72aedac6cb4ceac6a1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__phase_two, 310, const_tuple_75209edd3c07861ef172bebca465062a_tuple, 14, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0105f03a53a3e9486fc211c087ad13b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__select_enter_pivot, 277, const_tuple_050080fc52182498dc442007415cdd98_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3bbe9dd00068478dae6f8f32dcb469a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__select_singleton_columns, 237, const_tuple_43d086e51e1ae3c0e524ec8e22b5eefe_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_17_complex_call_helper_pos_keywords_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_1__phase_one( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_2__get_more_basis_columns(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_3__generate_auxiliary_problem(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_4__select_singleton_columns(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_5__find_nonzero_rows(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_6__select_enter_pivot( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_7__display_iter(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_8__phase_two( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_9__linprog_rs( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$optimize$_linprog_rs$$$function_1__phase_one( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_x0 = python_pars[ 2 ];
    PyObject *par_maxiter = python_pars[ 3 ];
    PyObject *par_tol = python_pars[ 4 ];
    PyObject *par_maxupdate = python_pars[ 5 ];
    PyObject *par_mast = python_pars[ 6 ];
    PyObject *par_pivot = python_pars[ 7 ];
    PyObject *par_callback = python_pars[ 8 ];
    PyObject *par__T_o = python_pars[ 9 ];
    PyObject *par_disp = python_pars[ 10 ];
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_status = NULL;
    PyObject *var_c = NULL;
    PyObject *var_basis = NULL;
    PyObject *var_x = NULL;
    PyObject *var_residual = NULL;
    PyObject *var_iter_k = NULL;
    PyObject *var_phase_one_n = NULL;
    PyObject *var_keep_rows = NULL;
    PyObject *var_basis_column = NULL;
    PyObject *var_B = NULL;
    PyObject *var_basis_finder = NULL;
    PyObject *var_pertinent_row = NULL;
    PyObject *var_eligible_columns = NULL;
    PyObject *var_eligible_column_indices = NULL;
    PyObject *var_index = NULL;
    PyObject *var_new_basis_column = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__element_5 = NULL;
    PyObject *tmp_tuple_unpack_2__element_6 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__element_4 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b90db87981c6a287c8d829bb1d2b2011;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_b90db87981c6a287c8d829bb1d2b2011 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b90db87981c6a287c8d829bb1d2b2011, codeobj_b90db87981c6a287c8d829bb1d2b2011, module_scipy$optimize$_linprog_rs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b90db87981c6a287c8d829bb1d2b2011 = cache_frame_b90db87981c6a287c8d829bb1d2b2011;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b90db87981c6a287c8d829bb1d2b2011 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b90db87981c6a287c8d829bb1d2b2011 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 47;
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 47;
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

                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    exception_lineno = 47;
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

            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 47;
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
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_m = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_n = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__generate_auxiliary_problem );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__generate_auxiliary_problem );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_generate_auxiliary_problem" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_2 = par_b;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_3 = par_x0;
        CHECK_OBJECT( par_tol );
        tmp_args_element_name_4 = par_tol;
        frame_b90db87981c6a287c8d829bb1d2b2011->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 0, 6 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 51;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_4, 1, 6 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 51;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_5, 2, 6 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 51;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_3 == NULL );
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_6, 3, 6 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 51;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_4 == NULL );
        tmp_tuple_unpack_2__element_4 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_7, 4, 6 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 51;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_5 == NULL );
        tmp_tuple_unpack_2__element_5 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_8, 5, 6 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 51;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_6 == NULL );
        tmp_tuple_unpack_2__element_6 = tmp_assign_source_12;
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

                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    exception_lineno = 51;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 6)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 51;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_5 );
    tmp_tuple_unpack_2__element_5 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_6 );
    tmp_tuple_unpack_2__element_6 = NULL;

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
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_13;
            Py_INCREF( par_A );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = par_b;
            assert( old != NULL );
            par_b = tmp_assign_source_14;
            Py_INCREF( par_b );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_3;
        assert( var_c == NULL );
        Py_INCREF( tmp_assign_source_15 );
        var_c = tmp_assign_source_15;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_4 );
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_4;
        assert( var_basis == NULL );
        Py_INCREF( tmp_assign_source_16 );
        var_basis = tmp_assign_source_16;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_5 );
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_5;
        assert( var_x == NULL );
        Py_INCREF( tmp_assign_source_17 );
        var_x = tmp_assign_source_17;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_5 );
    tmp_tuple_unpack_2__element_5 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_6 );
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_6;
        assert( var_status == NULL );
        Py_INCREF( tmp_assign_source_18 );
        var_status = tmp_assign_source_18;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_6 );
    tmp_tuple_unpack_2__element_6 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_status );
        tmp_compexpr_left_1 = var_status;
        tmp_compexpr_right_1 = const_int_pos_6;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( var_c );
            tmp_called_instance_1 = var_c;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_5 = var_x;
            frame_b90db87981c6a287c8d829bb1d2b2011->m_frame.f_lineno = 54;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assign_source_19 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
            }

            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_residual == NULL );
            var_residual = tmp_assign_source_19;
        }
        {
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( var_x );
            tmp_tuple_element_1 = var_x;
            tmp_return_value = PyTuple_New( 7 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_basis );
            tmp_tuple_element_1 = var_basis;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( par_A );
            tmp_tuple_element_1 = par_A;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
            CHECK_OBJECT( par_b );
            tmp_tuple_element_1 = par_b;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
            CHECK_OBJECT( var_residual );
            tmp_tuple_element_1 = var_residual;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_1 );
            CHECK_OBJECT( var_status );
            tmp_tuple_element_1 = var_status;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 5, tmp_tuple_element_1 );
            tmp_tuple_element_1 = const_int_0;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 6, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( var_n );
        tmp_assign_source_20 = var_n;
        assert( var_phase_one_n == NULL );
        Py_INCREF( tmp_assign_source_20 );
        var_phase_one_n = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__phase_two );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__phase_two );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_phase_two" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_c );
        tmp_args_element_name_6 = var_c;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_7 = par_A;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_8 = var_x;
        CHECK_OBJECT( var_basis );
        tmp_args_element_name_9 = var_basis;
        CHECK_OBJECT( par_maxiter );
        tmp_args_element_name_10 = par_maxiter;
        CHECK_OBJECT( par_tol );
        tmp_args_element_name_11 = par_tol;
        CHECK_OBJECT( par_maxupdate );
        tmp_args_element_name_12 = par_maxupdate;
        CHECK_OBJECT( par_mast );
        tmp_args_element_name_13 = par_mast;
        CHECK_OBJECT( par_pivot );
        tmp_args_element_name_14 = par_pivot;
        tmp_args_element_name_15 = const_int_0;
        CHECK_OBJECT( par_callback );
        tmp_args_element_name_16 = par_callback;
        CHECK_OBJECT( par__T_o );
        tmp_args_element_name_17 = par__T_o;
        CHECK_OBJECT( par_disp );
        tmp_args_element_name_18 = par_disp;
        CHECK_OBJECT( var_phase_one_n );
        tmp_args_element_name_19 = var_phase_one_n;
        frame_b90db87981c6a287c8d829bb1d2b2011->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS14( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_3__source_iter == NULL );
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_9, 0, 4 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 60;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_1 == NULL );
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_10 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_10, 1, 4 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 60;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_2 == NULL );
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_11 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_11, 2, 4 );
        if ( tmp_assign_source_24 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 60;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_3 == NULL );
        tmp_tuple_unpack_3__element_3 = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_12 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT( tmp_unpack_12, 3, 4 );
        if ( tmp_assign_source_25 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 60;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_4 == NULL );
        tmp_tuple_unpack_3__element_4 = tmp_assign_source_25;
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

                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    exception_lineno = 60;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 60;
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

    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_4 );
    tmp_tuple_unpack_3__element_4 = NULL;

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
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_26 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_x;
            assert( old != NULL );
            var_x = tmp_assign_source_26;
            Py_INCREF( var_x );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_27 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_basis;
            assert( old != NULL );
            var_basis = tmp_assign_source_27;
            Py_INCREF( var_basis );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
        tmp_assign_source_28 = tmp_tuple_unpack_3__element_3;
        {
            PyObject *old = var_status;
            assert( old != NULL );
            var_status = tmp_assign_source_28;
            Py_INCREF( var_status );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_4 );
        tmp_assign_source_29 = tmp_tuple_unpack_3__element_4;
        assert( var_iter_k == NULL );
        Py_INCREF( tmp_assign_source_29 );
        var_iter_k = tmp_assign_source_29;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_4 );
    tmp_tuple_unpack_3__element_4 = NULL;

    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT( var_c );
        tmp_called_instance_2 = var_c;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_20 = var_x;
        frame_b90db87981c6a287c8d829bb1d2b2011->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_assign_source_30 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_residual == NULL );
        var_residual = tmp_assign_source_30;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_status );
        tmp_compexpr_left_2 = var_status;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
        CHECK_OBJECT( var_residual );
        tmp_compexpr_left_3 = var_residual;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_3 = par_tol;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_31;
            tmp_assign_source_31 = const_int_pos_2;
            {
                PyObject *old = var_status;
                assert( old != NULL );
                var_status = tmp_assign_source_31;
                Py_INCREF( var_status );
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ones );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_m );
        tmp_tuple_element_2 = var_m;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_8a6ce79bb59f45c062c2a0027a3a0c33 );
        frame_b90db87981c6a287c8d829bb1d2b2011->m_frame.f_lineno = 72;
        tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_keep_rows == NULL );
        var_keep_rows = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_basis );
        tmp_subscribed_name_1 = var_basis;
        CHECK_OBJECT( var_basis );
        tmp_compexpr_left_4 = var_basis;
        CHECK_OBJECT( var_n );
        tmp_compexpr_right_4 = var_n;
        tmp_subscript_name_1 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_33;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_34 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_34 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 73;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_34;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_35 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_basis_column;
            var_basis_column = tmp_assign_source_35;
            Py_INCREF( var_basis_column );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_2 = par_A;
        tmp_tuple_element_3 = const_slice_none_none_none;
        tmp_subscript_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_subscript_name_2, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_basis );
        tmp_tuple_element_3 = var_basis;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_subscript_name_2, 1, tmp_tuple_element_3 );
        tmp_assign_source_36 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_B;
            var_B = tmp_assign_source_36;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_abs );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_solve );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT( var_B );
        tmp_args_element_name_22 = var_B;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_23 = par_A;
        frame_b90db87981c6a287c8d829bb1d2b2011->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23 };
            tmp_args_element_name_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_args_element_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_b90db87981c6a287c8d829bb1d2b2011->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_21 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_basis_finder;
            var_basis_finder = tmp_assign_source_37;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_tuple_element_4;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 77;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_source_name_4 = tmp_mvar_value_6;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_argmax );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT( var_basis_finder );
        tmp_subscribed_name_3 = var_basis_finder;
        tmp_tuple_element_4 = const_slice_none_none_none;
        tmp_subscript_name_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_basis_column );
        tmp_tuple_element_4 = var_basis_column;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_4 );
        tmp_args_element_name_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_args_element_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 77;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_b90db87981c6a287c8d829bb1d2b2011->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_24 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_pertinent_row;
            var_pertinent_row = tmp_assign_source_38;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_source_name_5 = tmp_mvar_value_7;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ones );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT( var_n );
        tmp_tuple_element_5 = var_n;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_8a6ce79bb59f45c062c2a0027a3a0c33 );
        frame_b90db87981c6a287c8d829bb1d2b2011->m_frame.f_lineno = 78;
        tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_eligible_columns;
            var_eligible_columns = tmp_assign_source_39;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_ass_subvalue_1 = const_int_0;
        CHECK_OBJECT( var_eligible_columns );
        tmp_ass_subscribed_1 = var_eligible_columns;
        CHECK_OBJECT( var_basis );
        tmp_subscribed_name_4 = var_basis;
        CHECK_OBJECT( var_basis );
        tmp_compexpr_left_5 = var_basis;
        CHECK_OBJECT( var_n );
        tmp_compexpr_right_5 = var_n;
        tmp_subscript_name_4 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_subscript_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_ass_subscript_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_subscript_name_5;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_instance_3 = tmp_mvar_value_8;
        CHECK_OBJECT( var_eligible_columns );
        tmp_args_element_name_25 = var_eligible_columns;
        frame_b90db87981c6a287c8d829bb1d2b2011->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_subscribed_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_where, call_args );
        }

        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_subscript_name_5 = const_int_0;
        tmp_assign_source_40 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_eligible_column_indices;
            var_eligible_column_indices = tmp_assign_source_40;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_tuple_element_7;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_source_name_6 = tmp_mvar_value_9;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_argmax );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT( var_basis_finder );
        tmp_subscribed_name_7 = var_basis_finder;
        tmp_tuple_element_6 = const_slice_none_none_none;
        tmp_subscript_name_6 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_subscript_name_6, 0, tmp_tuple_element_6 );
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_n );
        tmp_stop_name_1 = var_n;
        tmp_step_name_1 = Py_None;
        tmp_tuple_element_6 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_tuple_element_6 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_6, 1, tmp_tuple_element_6 );
        tmp_subscribed_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscript_name_6 );
        if ( tmp_subscribed_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT( var_pertinent_row );
        tmp_tuple_element_7 = var_pertinent_row;
        tmp_subscript_name_7 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_subscript_name_7, 0, tmp_tuple_element_7 );
        CHECK_OBJECT( var_eligible_columns );
        tmp_tuple_element_7 = var_eligible_columns;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_subscript_name_7, 1, tmp_tuple_element_7 );
        tmp_args_element_name_26 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_7 );
        Py_DECREF( tmp_subscribed_name_6 );
        Py_DECREF( tmp_subscript_name_7 );
        if ( tmp_args_element_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_b90db87981c6a287c8d829bb1d2b2011->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = { tmp_args_element_name_26 };
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_26 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_41;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT( var_eligible_column_indices );
        tmp_subscribed_name_8 = var_eligible_column_indices;
        CHECK_OBJECT( var_index );
        tmp_subscript_name_8 = var_index;
        tmp_assign_source_42 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_new_basis_column;
            var_new_basis_column = tmp_assign_source_42;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_tuple_element_8;
        CHECK_OBJECT( var_basis_finder );
        tmp_subscribed_name_9 = var_basis_finder;
        CHECK_OBJECT( var_pertinent_row );
        tmp_tuple_element_8 = var_pertinent_row;
        tmp_subscript_name_9 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_subscript_name_9, 0, tmp_tuple_element_8 );
        CHECK_OBJECT( var_new_basis_column );
        tmp_tuple_element_8 = var_new_basis_column;
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_subscript_name_9, 1, tmp_tuple_element_8 );
        tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        Py_DECREF( tmp_subscript_name_9 );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_6 = par_tol;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
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
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = Py_False;
            CHECK_OBJECT( var_keep_rows );
            tmp_ass_subscribed_2 = var_keep_rows;
            CHECK_OBJECT( var_pertinent_row );
            tmp_ass_subscript_2 = var_pertinent_row;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT( var_new_basis_column );
            tmp_ass_subvalue_3 = var_new_basis_column;
            CHECK_OBJECT( var_basis );
            tmp_ass_subscribed_3 = var_basis;
            CHECK_OBJECT( var_basis );
            tmp_compexpr_left_7 = var_basis;
            CHECK_OBJECT( var_basis_column );
            tmp_compexpr_right_7 = var_basis_column;
            tmp_ass_subscript_3 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            if ( tmp_ass_subscript_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 87;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            Py_DECREF( tmp_ass_subscript_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 87;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
        }
        branch_end_3:;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_b90db87981c6a287c8d829bb1d2b2011, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_b90db87981c6a287c8d829bb1d2b2011, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_mvar_value_11;
        tmp_compexpr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_LinAlgError );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_tuple_element_9 = tmp_mvar_value_10;
        tmp_compexpr_right_8 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_compexpr_right_8, 0, tmp_tuple_element_9 );
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_LinAlgError2 );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError2 );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_compexpr_right_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError2" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_tuple_element_9 = tmp_mvar_value_11;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_compexpr_right_8, 1, tmp_tuple_element_9 );
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
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
            PyObject *tmp_assign_source_43;
            tmp_assign_source_43 = const_int_pos_4;
            {
                PyObject *old = var_status;
                var_status = tmp_assign_source_43;
                Py_INCREF( var_status );
                Py_XDECREF( old );
            }

        }
        goto branch_end_4;
        branch_no_4:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 75;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_b90db87981c6a287c8d829bb1d2b2011->m_frame) frame_b90db87981c6a287c8d829bb1d2b2011->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_10;
        branch_end_4:;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
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

    goto try_except_handler_8;
    // End of try:
    try_end_8:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_7;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_1__phase_one );
    return NULL;
    // End of try:
    try_end_7:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_10 = par_A;
        CHECK_OBJECT( var_keep_rows );
        tmp_tuple_element_10 = var_keep_rows;
        tmp_subscript_name_10 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_subscript_name_10, 0, tmp_tuple_element_10 );
        tmp_start_name_2 = Py_None;
        CHECK_OBJECT( var_n );
        tmp_stop_name_2 = var_n;
        tmp_step_name_2 = Py_None;
        tmp_tuple_element_10 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        assert( !(tmp_tuple_element_10 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_10, 1, tmp_tuple_element_10 );
        tmp_assign_source_44 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        Py_DECREF( tmp_subscript_name_10 );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_44;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_subscript_name_11;
        CHECK_OBJECT( var_basis );
        tmp_subscribed_name_11 = var_basis;
        CHECK_OBJECT( var_keep_rows );
        tmp_subscript_name_11 = var_keep_rows;
        tmp_assign_source_45 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_basis;
            assert( old != NULL );
            var_basis = tmp_assign_source_45;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_step_name_3;
        CHECK_OBJECT( var_x );
        tmp_subscribed_name_12 = var_x;
        tmp_start_name_3 = Py_None;
        CHECK_OBJECT( var_n );
        tmp_stop_name_3 = var_n;
        tmp_step_name_3 = Py_None;
        tmp_subscript_name_12 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        assert( !(tmp_subscript_name_12 == NULL) );
        tmp_assign_source_46 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
        Py_DECREF( tmp_subscript_name_12 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x;
            assert( old != NULL );
            var_x = tmp_assign_source_46;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_subscribed_name_13;
        PyObject *tmp_source_name_7;
        PyObject *tmp_subscript_name_13;
        CHECK_OBJECT( par_A );
        tmp_source_name_7 = par_A;
        tmp_subscribed_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
        if ( tmp_subscribed_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_13 = const_int_0;
        tmp_assign_source_47 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_13, tmp_subscript_name_13, 0 );
        Py_DECREF( tmp_subscribed_name_13 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_m;
            assert( old != NULL );
            var_m = tmp_assign_source_47;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_tuple_element_11;
        CHECK_OBJECT( var_x );
        tmp_tuple_element_11 = var_x;
        tmp_return_value = PyTuple_New( 7 );
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_11 );
        CHECK_OBJECT( var_basis );
        tmp_tuple_element_11 = var_basis;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_11 );
        CHECK_OBJECT( par_A );
        tmp_tuple_element_11 = par_A;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_11 );
        CHECK_OBJECT( par_b );
        tmp_tuple_element_11 = par_b;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_11 );
        CHECK_OBJECT( var_residual );
        tmp_tuple_element_11 = var_residual;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_11 );
        if ( var_status == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_11 = var_status;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 5, tmp_tuple_element_11 );
        CHECK_OBJECT( var_iter_k );
        tmp_tuple_element_11 = var_iter_k;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 6, tmp_tuple_element_11 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b90db87981c6a287c8d829bb1d2b2011 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b90db87981c6a287c8d829bb1d2b2011 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b90db87981c6a287c8d829bb1d2b2011 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b90db87981c6a287c8d829bb1d2b2011, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b90db87981c6a287c8d829bb1d2b2011->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b90db87981c6a287c8d829bb1d2b2011, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b90db87981c6a287c8d829bb1d2b2011,
        type_description_1,
        par_A,
        par_b,
        par_x0,
        par_maxiter,
        par_tol,
        par_maxupdate,
        par_mast,
        par_pivot,
        par_callback,
        par__T_o,
        par_disp,
        var_m,
        var_n,
        var_status,
        var_c,
        var_basis,
        var_x,
        var_residual,
        var_iter_k,
        var_phase_one_n,
        var_keep_rows,
        var_basis_column,
        var_B,
        var_basis_finder,
        var_pertinent_row,
        var_eligible_columns,
        var_eligible_column_indices,
        var_index,
        var_new_basis_column
    );


    // Release cached frame.
    if ( frame_b90db87981c6a287c8d829bb1d2b2011 == cache_frame_b90db87981c6a287c8d829bb1d2b2011 )
    {
        Py_DECREF( frame_b90db87981c6a287c8d829bb1d2b2011 );
    }
    cache_frame_b90db87981c6a287c8d829bb1d2b2011 = NULL;

    assertFrameObject( frame_b90db87981c6a287c8d829bb1d2b2011 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_1__phase_one );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxupdate );
    Py_DECREF( par_maxupdate );
    par_maxupdate = NULL;

    CHECK_OBJECT( (PyObject *)par_mast );
    Py_DECREF( par_mast );
    par_mast = NULL;

    CHECK_OBJECT( (PyObject *)par_pivot );
    Py_DECREF( par_pivot );
    par_pivot = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par__T_o );
    Py_DECREF( par__T_o );
    par__T_o = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    CHECK_OBJECT( (PyObject *)var_c );
    Py_DECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)var_basis );
    Py_DECREF( var_basis );
    var_basis = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_residual );
    Py_DECREF( var_residual );
    var_residual = NULL;

    Py_XDECREF( var_iter_k );
    var_iter_k = NULL;

    Py_XDECREF( var_phase_one_n );
    var_phase_one_n = NULL;

    Py_XDECREF( var_keep_rows );
    var_keep_rows = NULL;

    Py_XDECREF( var_basis_column );
    var_basis_column = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_basis_finder );
    var_basis_finder = NULL;

    Py_XDECREF( var_pertinent_row );
    var_pertinent_row = NULL;

    Py_XDECREF( var_eligible_columns );
    var_eligible_columns = NULL;

    Py_XDECREF( var_eligible_column_indices );
    var_eligible_column_indices = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_new_basis_column );
    var_new_basis_column = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxupdate );
    Py_DECREF( par_maxupdate );
    par_maxupdate = NULL;

    CHECK_OBJECT( (PyObject *)par_mast );
    Py_DECREF( par_mast );
    par_mast = NULL;

    CHECK_OBJECT( (PyObject *)par_pivot );
    Py_DECREF( par_pivot );
    par_pivot = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par__T_o );
    Py_DECREF( par__T_o );
    par__T_o = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_basis );
    var_basis = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_residual );
    var_residual = NULL;

    Py_XDECREF( var_iter_k );
    var_iter_k = NULL;

    Py_XDECREF( var_phase_one_n );
    var_phase_one_n = NULL;

    Py_XDECREF( var_keep_rows );
    var_keep_rows = NULL;

    Py_XDECREF( var_basis_column );
    var_basis_column = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_basis_finder );
    var_basis_finder = NULL;

    Py_XDECREF( var_pertinent_row );
    var_pertinent_row = NULL;

    Py_XDECREF( var_eligible_columns );
    var_eligible_columns = NULL;

    Py_XDECREF( var_eligible_column_indices );
    var_eligible_column_indices = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_new_basis_column );
    var_new_basis_column = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_1__phase_one );
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


static PyObject *impl_scipy$optimize$_linprog_rs$$$function_2__get_more_basis_columns( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_basis = python_pars[ 1 ];
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_a = NULL;
    PyObject *var_bl = NULL;
    PyObject *var_options = NULL;
    PyObject *var_B = NULL;
    PyObject *var_rank = NULL;
    PyObject *var_i = NULL;
    PyObject *var_new_basis = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_0cb4159b5e481bf4308e1439ab5ccaff;
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
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0cb4159b5e481bf4308e1439ab5ccaff = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0cb4159b5e481bf4308e1439ab5ccaff, codeobj_0cb4159b5e481bf4308e1439ab5ccaff, module_scipy$optimize$_linprog_rs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0cb4159b5e481bf4308e1439ab5ccaff = cache_frame_0cb4159b5e481bf4308e1439ab5ccaff;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0cb4159b5e481bf4308e1439ab5ccaff );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0cb4159b5e481bf4308e1439ab5ccaff ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "ooooooooooo";
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


            type_description_1 = "ooooooooooo";
            exception_lineno = 105;
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


            type_description_1 = "ooooooooooo";
            exception_lineno = 105;
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

                    type_description_1 = "ooooooooooo";
                    exception_lineno = 105;
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

            type_description_1 = "ooooooooooo";
            exception_lineno = 105;
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
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_m = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_n = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 108;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_arange );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_m );
        tmp_left_name_1 = var_m;
        CHECK_OBJECT( var_n );
        tmp_right_name_1 = var_n;
        tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 108;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cb4159b5e481bf4308e1439ab5ccaff->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_a == NULL );
        var_a = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 109;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zeros );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_a );
        tmp_len_arg_1 = var_a;
        tmp_tuple_element_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 109;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_8a6ce79bb59f45c062c2a0027a3a0c33 );
        frame_0cb4159b5e481bf4308e1439ab5ccaff->m_frame.f_lineno = 109;
        tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_bl == NULL );
        var_bl = tmp_assign_source_7;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = const_int_pos_1;
        CHECK_OBJECT( var_bl );
        tmp_ass_subscribed_1 = var_bl;
        CHECK_OBJECT( par_basis );
        tmp_ass_subscript_1 = par_basis;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_a );
        tmp_subscribed_name_1 = var_a;
        CHECK_OBJECT( var_bl );
        tmp_operand_name_1 = var_bl;
        tmp_subscript_name_1 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_1 );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_options == NULL );
        var_options = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_options );
        tmp_subscribed_name_2 = var_options;
        CHECK_OBJECT( var_options );
        tmp_compexpr_left_1 = var_options;
        CHECK_OBJECT( var_n );
        tmp_compexpr_right_1 = var_n;
        tmp_subscript_name_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_subscript_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_options;
            assert( old != NULL );
            var_options = tmp_assign_source_9;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_tuple_element_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 115;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( var_m );
        tmp_tuple_element_2 = var_m;
        tmp_args_element_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_m );
        tmp_tuple_element_2 = var_m;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_2 );
        frame_0cb4159b5e481bf4308e1439ab5ccaff->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_zeros, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_B == NULL );
        var_B = tmp_assign_source_10;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_3 = par_A;
        tmp_tuple_element_3 = const_slice_none_none_none;
        tmp_subscript_name_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_basis );
        tmp_tuple_element_3 = par_basis;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_3 );
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_B );
        tmp_ass_subscribed_2 = var_B;
        tmp_tuple_element_4 = const_slice_none_none_none;
        tmp_ass_subscript_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_ass_subscript_2, 0, tmp_tuple_element_4 );
        tmp_start_name_1 = const_int_0;
        CHECK_OBJECT( par_basis );
        tmp_len_arg_2 = par_basis;
        tmp_stop_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );

            exception_lineno = 116;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_tuple_element_4 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_tuple_element_4 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_2, 1, tmp_tuple_element_4 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscript_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_step_name_2;
        PyObject *tmp_len_arg_4;
        CHECK_OBJECT( par_basis );
        tmp_source_name_4 = par_basis;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_size );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "ooooooooooo";
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
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_4;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_linalg );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_matrix_rank );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_B );
        tmp_subscribed_name_4 = var_B;
        tmp_tuple_element_5 = const_slice_none_none_none;
        tmp_subscript_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_subscript_name_4, 0, tmp_tuple_element_5 );
        tmp_start_name_2 = Py_None;
        CHECK_OBJECT( par_basis );
        tmp_len_arg_3 = par_basis;
        tmp_stop_name_2 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_stop_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_subscript_name_4 );

            exception_lineno = 119;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_2 = Py_None;
        tmp_tuple_element_5 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_stop_name_2 );
        assert( !(tmp_tuple_element_5 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_4, 1, tmp_tuple_element_5 );
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 119;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cb4159b5e481bf4308e1439ab5ccaff->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_compexpr_left_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_basis );
        tmp_len_arg_4 = par_basis;
        tmp_compexpr_right_3 = BUILTIN_LEN( tmp_len_arg_4 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 119;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_7582bacb40fb46ab347045e2182c13fa;
            frame_0cb4159b5e481bf4308e1439ab5ccaff->m_frame.f_lineno = 120;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_Exception, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 120;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_int_0;
        assert( var_rank == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_rank = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( var_n );
        tmp_xrange_low_1 = var_n;
        tmp_iter_arg_2 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooo";
                exception_lineno = 123;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
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
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_len_arg_5;
        PyObject *tmp_step_name_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 125;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }

        tmp_source_name_7 = tmp_mvar_value_5;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_random );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_options );
        tmp_args_element_name_4 = var_options;
        frame_0cb4159b5e481bf4308e1439ab5ccaff->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_subscribed_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_permutation, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        tmp_start_name_3 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_left_name_2 = var_m;
        CHECK_OBJECT( par_basis );
        tmp_len_arg_5 = par_basis;
        tmp_right_name_2 = BUILTIN_LEN( tmp_len_arg_5 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_5 );

            exception_lineno = 125;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        tmp_stop_name_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_stop_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_5 );

            exception_lineno = 125;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        tmp_step_name_3 = Py_None;
        tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        Py_DECREF( tmp_stop_name_3 );
        assert( !(tmp_subscript_name_5 == NULL) );
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscribed_name_5 );
        Py_DECREF( tmp_subscript_name_5 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_new_basis;
            var_new_basis = tmp_assign_source_15;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_start_name_4;
        PyObject *tmp_len_arg_6;
        PyObject *tmp_stop_name_4;
        PyObject *tmp_step_name_4;
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_6 = par_A;
        tmp_tuple_element_6 = const_slice_none_none_none;
        tmp_subscript_name_6 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_subscript_name_6, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_new_basis );
        tmp_tuple_element_6 = var_new_basis;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_subscript_name_6, 1, tmp_tuple_element_6 );
        tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscript_name_6 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_B );
        tmp_ass_subscribed_3 = var_B;
        tmp_tuple_element_7 = const_slice_none_none_none;
        tmp_ass_subscript_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_ass_subscript_3, 0, tmp_tuple_element_7 );
        CHECK_OBJECT( par_basis );
        tmp_len_arg_6 = par_basis;
        tmp_start_name_4 = BUILTIN_LEN( tmp_len_arg_6 );
        if ( tmp_start_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_3 );
            Py_DECREF( tmp_ass_subscript_3 );

            exception_lineno = 126;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        tmp_stop_name_4 = Py_None;
        tmp_step_name_4 = Py_None;
        tmp_tuple_element_7 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
        Py_DECREF( tmp_start_name_4 );
        assert( !(tmp_tuple_element_7 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_3, 1, tmp_tuple_element_7 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscript_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 127;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }

        tmp_source_name_8 = tmp_mvar_value_6;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_linalg );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_B );
        tmp_args_element_name_5 = var_B;
        frame_0cb4159b5e481bf4308e1439ab5ccaff->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_matrix_rank, call_args );
        }

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_rank;
            assert( old != NULL );
            var_rank = tmp_assign_source_16;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_rank );
        tmp_compexpr_left_4 = var_rank;
        CHECK_OBJECT( var_m );
        tmp_compexpr_right_4 = var_m;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooooooooooo";
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
        goto loop_end_1;
        branch_no_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "ooooooooooo";
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
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_tuple_element_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 131;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_7;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_concatenate );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_basis );
        tmp_tuple_element_8 = par_basis;
        tmp_args_element_name_6 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_8 );
        if ( var_new_basis == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_6 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_basis" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 131;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_8 = var_new_basis;
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 1, tmp_tuple_element_8 );
        frame_0cb4159b5e481bf4308e1439ab5ccaff->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0cb4159b5e481bf4308e1439ab5ccaff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0cb4159b5e481bf4308e1439ab5ccaff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0cb4159b5e481bf4308e1439ab5ccaff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0cb4159b5e481bf4308e1439ab5ccaff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0cb4159b5e481bf4308e1439ab5ccaff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0cb4159b5e481bf4308e1439ab5ccaff, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0cb4159b5e481bf4308e1439ab5ccaff,
        type_description_1,
        par_A,
        par_basis,
        var_m,
        var_n,
        var_a,
        var_bl,
        var_options,
        var_B,
        var_rank,
        var_i,
        var_new_basis
    );


    // Release cached frame.
    if ( frame_0cb4159b5e481bf4308e1439ab5ccaff == cache_frame_0cb4159b5e481bf4308e1439ab5ccaff )
    {
        Py_DECREF( frame_0cb4159b5e481bf4308e1439ab5ccaff );
    }
    cache_frame_0cb4159b5e481bf4308e1439ab5ccaff = NULL;

    assertFrameObject( frame_0cb4159b5e481bf4308e1439ab5ccaff );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_2__get_more_basis_columns );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_basis );
    Py_DECREF( par_basis );
    par_basis = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_a );
    Py_DECREF( var_a );
    var_a = NULL;

    CHECK_OBJECT( (PyObject *)var_bl );
    Py_DECREF( var_bl );
    var_bl = NULL;

    CHECK_OBJECT( (PyObject *)var_options );
    Py_DECREF( var_options );
    var_options = NULL;

    CHECK_OBJECT( (PyObject *)var_B );
    Py_DECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_rank );
    var_rank = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_new_basis );
    var_new_basis = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_basis );
    Py_DECREF( par_basis );
    par_basis = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_bl );
    var_bl = NULL;

    Py_XDECREF( var_options );
    var_options = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_rank );
    var_rank = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_new_basis );
    var_new_basis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_2__get_more_basis_columns );
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


static PyObject *impl_scipy$optimize$_linprog_rs$$$function_3__generate_auxiliary_problem( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_x0 = python_pars[ 2 ];
    PyObject *par_tol = python_pars[ 3 ];
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_x = NULL;
    PyObject *var_r = NULL;
    PyObject *var_nonzero_constraints = NULL;
    PyObject *var_basis = NULL;
    PyObject *var_c = NULL;
    PyObject *var_cols = NULL;
    PyObject *var_rows = NULL;
    PyObject *var_i_tofix = NULL;
    PyObject *var_i_notinbasis = NULL;
    PyObject *var_i_fix_without_aux = NULL;
    PyObject *var_arows = NULL;
    PyObject *var_n_aux = NULL;
    PyObject *var_acols = NULL;
    PyObject *var_basis_ng = NULL;
    PyObject *var_basis_ng_rows = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_fa6546b76562775dacff6b8b62fff619;
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
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_fa6546b76562775dacff6b8b62fff619 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fa6546b76562775dacff6b8b62fff619, codeobj_fa6546b76562775dacff6b8b62fff619, module_scipy$optimize$_linprog_rs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fa6546b76562775dacff6b8b62fff619 = cache_frame_fa6546b76562775dacff6b8b62fff619;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fa6546b76562775dacff6b8b62fff619 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fa6546b76562775dacff6b8b62fff619 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooNooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooNooooooooooooooooo";
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


            type_description_1 = "ooooNooooooooooooooooo";
            exception_lineno = 159;
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


            type_description_1 = "ooooNooooooooooooooooo";
            exception_lineno = 159;
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

                    type_description_1 = "ooooNooooooooooooooooo";
                    exception_lineno = 159;
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

            type_description_1 = "ooooNooooooooooooooooo";
            exception_lineno = 159;
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
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_m = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_n = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_x0 );
        tmp_compexpr_left_1 = par_x0;
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
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( par_x0 );
            tmp_assign_source_6 = par_x0;
            assert( var_x == NULL );
            Py_INCREF( tmp_assign_source_6 );
            var_x = tmp_assign_source_6;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 164;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( var_n );
            tmp_args_element_name_1 = var_n;
            frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 164;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_zeros, call_args );
            }

            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 164;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_x == NULL );
            var_x = tmp_assign_source_7;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_b );
        tmp_left_name_1 = par_b;
        CHECK_OBJECT( par_A );
        tmp_left_name_2 = par_A;
        CHECK_OBJECT( var_x );
        tmp_right_name_2 = var_x;
        tmp_right_name_1 = BINARY_OPERATION( PyNumber_MatrixMultiply, tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_8;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_1 = par_A;
        CHECK_OBJECT( var_r );
        tmp_compexpr_left_2 = var_r;
        tmp_compexpr_right_2 = const_int_0;
        tmp_subscript_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_ass_subscribed_1 = par_A;
        CHECK_OBJECT( var_r );
        tmp_compexpr_left_3 = var_r;
        tmp_compexpr_right_3 = const_int_0;
        tmp_ass_subscript_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 168;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( par_b );
        tmp_subscribed_name_2 = par_b;
        CHECK_OBJECT( var_r );
        tmp_compexpr_left_4 = var_r;
        tmp_compexpr_right_4 = const_int_0;
        tmp_subscript_name_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_subscript_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_ass_subscribed_2 = par_b;
        CHECK_OBJECT( var_r );
        tmp_compexpr_left_5 = var_r;
        tmp_compexpr_right_5 = const_int_0;
        tmp_ass_subscript_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_ass_subscript_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_2 );

            exception_lineno = 169;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscript_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( var_r );
        tmp_assign_source_9 = var_r;
        assert( tmp_inplace_assign_subscr_1__target == NULL );
        Py_INCREF( tmp_assign_source_9 );
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( var_r );
        tmp_compexpr_left_6 = var_r;
        tmp_compexpr_right_6 = const_int_0;
        tmp_assign_source_10 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "ooooNooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_inplace_assign_subscr_1__subscript == NULL );
        tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_10;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_3 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_subscript_name_3 = tmp_inplace_assign_subscr_1__subscript;
        tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "ooooNooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_3 = const_int_neg_1;
        tmp_ass_subvalue_3 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "ooooNooooooooooooooooo";
            goto try_except_handler_4;
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


            exception_lineno = 170;
            type_description_1 = "ooooNooooooooooooooooo";
            goto try_except_handler_4;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    Py_XDECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( par_x0 );
        tmp_compexpr_left_7 = par_x0;
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_7 == tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 177;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_m );
            tmp_args_element_name_2 = var_m;
            frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 177;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_arange, call_args );
            }

            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_nonzero_constraints == NULL );
            var_nonzero_constraints = tmp_assign_source_11;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_subscript_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 179;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_where );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_r );
            tmp_compexpr_left_8 = var_r;
            CHECK_OBJECT( par_tol );
            tmp_compexpr_right_8 = par_tol;
            tmp_args_element_name_3 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 179;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 179;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_subscribed_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_subscribed_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_4 = const_int_0;
            tmp_assign_source_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
            Py_DECREF( tmp_subscribed_name_4 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_nonzero_constraints == NULL );
            var_nonzero_constraints = tmp_assign_source_12;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_subscript_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 182;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_where );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_5;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_5 = var_x;
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_compexpr_left_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_abs, call_args );
        }

        if ( tmp_compexpr_left_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 182;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_9 = par_tol;
        tmp_args_element_name_4 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        Py_DECREF( tmp_compexpr_left_9 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 182;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_subscribed_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = const_int_0;
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_basis == NULL );
        var_basis = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( var_nonzero_constraints );
        tmp_len_arg_1 = var_nonzero_constraints;
        tmp_compexpr_left_10 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_10 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        Py_DECREF( tmp_compexpr_left_10 );
        assert( !(tmp_res == -1) );
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
        CHECK_OBJECT( var_basis );
        tmp_len_arg_2 = var_basis;
        tmp_compexpr_left_11 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_left_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_m );
        tmp_compexpr_right_11 = var_m;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        Py_DECREF( tmp_compexpr_left_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 185;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_6;
            CHECK_OBJECT( var_n );
            tmp_args_element_name_6 = var_n;
            frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 185;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_assign_source_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_zeros, call_args );
            }

            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_c == NULL );
            var_c = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__get_more_basis_columns );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_more_basis_columns );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_more_basis_columns" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 186;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_7;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_7 = par_A;
            CHECK_OBJECT( var_basis );
            tmp_args_element_name_8 = var_basis;
            frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 186;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 186;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_basis;
                assert( old != NULL );
                var_basis = tmp_assign_source_15;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_A );
            tmp_tuple_element_1 = par_A;
            tmp_return_value = PyTuple_New( 6 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_b );
            tmp_tuple_element_1 = par_b;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_c );
            tmp_tuple_element_1 = var_c;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
            CHECK_OBJECT( var_basis );
            tmp_tuple_element_1 = var_basis;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
            CHECK_OBJECT( var_x );
            tmp_tuple_element_1 = var_x;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_1 );
            tmp_tuple_element_1 = const_int_0;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 5, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            PyObject *tmp_len_arg_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_len_arg_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_compexpr_left_13;
            PyObject *tmp_compexpr_right_13;
            int tmp_truth_name_1;
            CHECK_OBJECT( var_nonzero_constraints );
            tmp_len_arg_3 = var_nonzero_constraints;
            tmp_compexpr_left_12 = BUILTIN_LEN( tmp_len_arg_3 );
            if ( tmp_compexpr_left_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_m );
            tmp_left_name_4 = var_m;
            CHECK_OBJECT( var_basis );
            tmp_len_arg_4 = var_basis;
            tmp_right_name_4 = BUILTIN_LEN( tmp_len_arg_4 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_12 );

                exception_lineno = 188;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_12 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_compexpr_right_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_12 );

                exception_lineno = 188;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
            Py_DECREF( tmp_compexpr_left_12 );
            Py_DECREF( tmp_compexpr_right_12 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_1 = "ooooNooooooooooooooooo";
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
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 189;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_8;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_any );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x );
            tmp_compexpr_left_13 = var_x;
            tmp_compexpr_right_13 = const_int_0;
            tmp_args_element_name_9 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 189;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 189;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 189;
                type_description_1 = "ooooNooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_1 );
            tmp_condition_result_4 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_4 = tmp_or_left_value_1;
            or_end_1:;
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
                PyObject *tmp_assign_source_16;
                PyObject *tmp_called_instance_5;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_args_element_name_10;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 190;
                    type_description_1 = "ooooNooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_5 = tmp_mvar_value_9;
                CHECK_OBJECT( var_n );
                tmp_args_element_name_10 = var_n;
                frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 190;
                {
                    PyObject *call_args[] = { tmp_args_element_name_10 };
                    tmp_assign_source_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_zeros, call_args );
                }

                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 190;
                    type_description_1 = "ooooNooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_c == NULL );
                var_c = tmp_assign_source_16;
            }
            {
                PyObject *tmp_tuple_element_2;
                CHECK_OBJECT( par_A );
                tmp_tuple_element_2 = par_A;
                tmp_return_value = PyTuple_New( 6 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( par_b );
                tmp_tuple_element_2 = par_b;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
                CHECK_OBJECT( var_c );
                tmp_tuple_element_2 = var_c;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
                CHECK_OBJECT( var_basis );
                tmp_tuple_element_2 = var_basis;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_2 );
                CHECK_OBJECT( var_x );
                tmp_tuple_element_2 = var_x;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_2 );
                tmp_tuple_element_2 = const_int_pos_6;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_return_value, 5, tmp_tuple_element_2 );
                goto frame_return_exit_1;
            }
            branch_no_4:;
        }
        branch_end_3:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__select_singleton_columns );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__select_singleton_columns );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_select_singleton_columns" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 195;
            type_description_1 = "ooooNooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_name_5 = tmp_mvar_value_10;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_11 = par_A;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_12 = var_r;
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "ooooNooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "ooooNooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


            type_description_1 = "ooooNooooooooooooooooo";
            exception_lineno = 195;
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


            type_description_1 = "ooooNooooooooooooooooo";
            exception_lineno = 195;
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_19;
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

                    type_description_1 = "ooooNooooooooooooooooo";
                    exception_lineno = 195;
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

            type_description_1 = "ooooNooooooooooooooooo";
            exception_lineno = 195;
            goto try_except_handler_6;
        }
    }
    goto try_end_4;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_20 = tmp_tuple_unpack_2__element_1;
        assert( var_cols == NULL );
        Py_INCREF( tmp_assign_source_20 );
        var_cols = tmp_assign_source_20;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_21 = tmp_tuple_unpack_2__element_2;
        assert( var_rows == NULL );
        Py_INCREF( tmp_assign_source_21 );
        var_rows = tmp_assign_source_21;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 198;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_11;
        CHECK_OBJECT( var_rows );
        tmp_args_element_name_13 = var_rows;
        CHECK_OBJECT( var_nonzero_constraints );
        tmp_args_element_name_14 = var_nonzero_constraints;
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_assign_source_22 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_isin, call_args );
        }

        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_i_tofix == NULL );
        var_i_tofix = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 201;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_12;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_logical_not );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 201;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = tmp_mvar_value_13;
        CHECK_OBJECT( var_cols );
        tmp_args_element_name_16 = var_cols;
        CHECK_OBJECT( var_basis );
        tmp_args_element_name_17 = var_basis;
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_args_element_name_15 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_isin, call_args );
        }

        if ( tmp_args_element_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 201;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_15 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_i_notinbasis == NULL );
        var_i_notinbasis = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 202;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = tmp_mvar_value_14;
        CHECK_OBJECT( var_i_tofix );
        tmp_args_element_name_18 = var_i_tofix;
        CHECK_OBJECT( var_i_notinbasis );
        tmp_args_element_name_19 = var_i_notinbasis;
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_assign_source_24 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_8, const_str_plain_logical_and, call_args );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_i_fix_without_aux == NULL );
        var_i_fix_without_aux = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        CHECK_OBJECT( var_rows );
        tmp_subscribed_name_6 = var_rows;
        CHECK_OBJECT( var_i_fix_without_aux );
        tmp_subscript_name_6 = var_i_fix_without_aux;
        tmp_assign_source_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rows;
            assert( old != NULL );
            var_rows = tmp_assign_source_25;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT( var_cols );
        tmp_subscribed_name_7 = var_cols;
        CHECK_OBJECT( var_i_fix_without_aux );
        tmp_subscript_name_7 = var_i_fix_without_aux;
        tmp_assign_source_26 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_cols;
            assert( old != NULL );
            var_cols = tmp_assign_source_26;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        CHECK_OBJECT( var_nonzero_constraints );
        tmp_subscribed_name_8 = var_nonzero_constraints;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 208;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_15;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_logical_not );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 209;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = tmp_mvar_value_16;
        CHECK_OBJECT( var_nonzero_constraints );
        tmp_args_element_name_21 = var_nonzero_constraints;
        CHECK_OBJECT( var_rows );
        tmp_args_element_name_22 = var_rows;
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
            tmp_args_element_name_20 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_9, const_str_plain_isin, call_args );
        }

        if ( tmp_args_element_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 209;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_subscript_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_subscript_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        Py_DECREF( tmp_subscript_name_8 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_arows == NULL );
        var_arows = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_len_arg_5;
        CHECK_OBJECT( var_arows );
        tmp_len_arg_5 = var_arows;
        tmp_assign_source_28 = BUILTIN_LEN( tmp_len_arg_5 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n_aux == NULL );
        var_n_aux = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_23;
        CHECK_OBJECT( var_n );
        tmp_left_name_5 = var_n;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 211;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_10 = tmp_mvar_value_17;
        CHECK_OBJECT( var_n_aux );
        tmp_args_element_name_23 = var_n_aux;
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_right_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_arange, call_args );
        }

        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_acols == NULL );
        var_acols = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_tuple_element_3;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 213;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = tmp_mvar_value_18;
        CHECK_OBJECT( var_cols );
        tmp_tuple_element_3 = var_cols;
        tmp_args_element_name_24 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_element_name_24, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_acols );
        tmp_tuple_element_3 = var_acols;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_element_name_24, 1, tmp_tuple_element_3 );
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_30 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_concatenate, call_args );
        }

        Py_DECREF( tmp_args_element_name_24 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_basis_ng == NULL );
        var_basis_ng = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_tuple_element_4;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 214;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_12 = tmp_mvar_value_19;
        CHECK_OBJECT( var_rows );
        tmp_tuple_element_4 = var_rows;
        tmp_args_element_name_25 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_element_name_25, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_arows );
        tmp_tuple_element_4 = var_arows;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_element_name_25, 1, tmp_tuple_element_4 );
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_assign_source_31 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_concatenate, call_args );
        }

        Py_DECREF( tmp_args_element_name_25 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_basis_ng_rows == NULL );
        var_basis_ng_rows = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_tuple_element_6;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 217;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_20;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_hstack );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_tuple_element_5 = par_A;
        tmp_args_element_name_26 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_element_name_26, 0, tmp_tuple_element_5 );
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_21 == NULL )
        {
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_26 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 217;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_13 = tmp_mvar_value_21;
        CHECK_OBJECT( var_m );
        tmp_tuple_element_6 = var_m;
        tmp_args_element_name_27 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_element_name_27, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_n_aux );
        tmp_tuple_element_6 = var_n_aux;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_element_name_27, 1, tmp_tuple_element_6 );
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = { tmp_args_element_name_27 };
            tmp_tuple_element_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_zeros, call_args );
        }

        Py_DECREF( tmp_args_element_name_27 );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_26 );

            exception_lineno = 217;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_26, 1, tmp_tuple_element_5 );
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = { tmp_args_element_name_26 };
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_26 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_32;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_tuple_element_7;
        tmp_ass_subvalue_4 = const_int_pos_1;
        CHECK_OBJECT( par_A );
        tmp_ass_subscribed_4 = par_A;
        CHECK_OBJECT( var_arows );
        tmp_tuple_element_7 = var_arows;
        tmp_ass_subscript_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_ass_subscript_4, 0, tmp_tuple_element_7 );
        CHECK_OBJECT( var_acols );
        tmp_tuple_element_7 = var_acols;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_ass_subscript_4, 1, tmp_tuple_element_7 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subscript_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_29;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 221;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_22;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_concatenate );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_tuple_element_8 = var_x;
        tmp_args_element_name_28 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_args_element_name_28, 0, tmp_tuple_element_8 );
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_23 == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 221;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_14 = tmp_mvar_value_23;
        CHECK_OBJECT( var_n_aux );
        tmp_args_element_name_29 = var_n_aux;
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = { tmp_args_element_name_29 };
            tmp_tuple_element_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_zeros, call_args );
        }

        if ( tmp_tuple_element_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_28 );

            exception_lineno = 221;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_28, 1, tmp_tuple_element_8 );
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = { tmp_args_element_name_28 };
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_28 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x;
            assert( old != NULL );
            var_x = tmp_assign_source_33;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_right_name_6;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        CHECK_OBJECT( var_r );
        tmp_subscribed_name_9 = var_r;
        CHECK_OBJECT( var_basis_ng_rows );
        tmp_subscript_name_9 = var_basis_ng_rows;
        tmp_left_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_10 = par_A;
        CHECK_OBJECT( var_basis_ng_rows );
        tmp_tuple_element_9 = var_basis_ng_rows;
        tmp_subscript_name_10 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_subscript_name_10, 0, tmp_tuple_element_9 );
        CHECK_OBJECT( var_basis_ng );
        tmp_tuple_element_9 = var_basis_ng;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_subscript_name_10, 1, tmp_tuple_element_9 );
        tmp_right_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        Py_DECREF( tmp_subscript_name_10 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 222;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_ass_subvalue_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_ass_subscribed_5 = var_x;
        CHECK_OBJECT( var_basis_ng );
        tmp_ass_subscript_5 = var_basis_ng;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subvalue_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 225;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_24;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_zeros );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n_aux );
        tmp_left_name_7 = var_n_aux;
        CHECK_OBJECT( var_n );
        tmp_right_name_7 = var_n;
        tmp_args_element_name_30 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_args_element_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );

            exception_lineno = 225;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 225;
        {
            PyObject *call_args[] = { tmp_args_element_name_30 };
            tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_30 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_c == NULL );
        var_c = tmp_assign_source_34;
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        tmp_ass_subvalue_6 = const_int_pos_1;
        CHECK_OBJECT( var_c );
        tmp_ass_subscribed_6 = var_c;
        CHECK_OBJECT( var_acols );
        tmp_ass_subscript_6 = var_acols;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_tuple_element_10;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 231;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_15 = tmp_mvar_value_25;
        CHECK_OBJECT( var_basis );
        tmp_tuple_element_10 = var_basis;
        tmp_args_element_name_31 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_args_element_name_31, 0, tmp_tuple_element_10 );
        CHECK_OBJECT( var_basis_ng );
        tmp_tuple_element_10 = var_basis_ng;
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_args_element_name_31, 1, tmp_tuple_element_10 );
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = { tmp_args_element_name_31 };
            tmp_assign_source_35 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_15, const_str_plain_concatenate, call_args );
        }

        Py_DECREF( tmp_args_element_name_31 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_basis;
            assert( old != NULL );
            var_basis = tmp_assign_source_35;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_args_element_name_33;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__get_more_basis_columns );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_more_basis_columns );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_more_basis_columns" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 232;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_26;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_32 = par_A;
        CHECK_OBJECT( var_basis );
        tmp_args_element_name_33 = var_basis;
        frame_fa6546b76562775dacff6b8b62fff619->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33 };
            tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
        }

        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "ooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_basis;
            assert( old != NULL );
            var_basis = tmp_assign_source_36;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa6546b76562775dacff6b8b62fff619 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa6546b76562775dacff6b8b62fff619 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa6546b76562775dacff6b8b62fff619 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fa6546b76562775dacff6b8b62fff619, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fa6546b76562775dacff6b8b62fff619->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fa6546b76562775dacff6b8b62fff619, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fa6546b76562775dacff6b8b62fff619,
        type_description_1,
        par_A,
        par_b,
        par_x0,
        par_tol,
        NULL,
        var_m,
        var_n,
        var_x,
        var_r,
        var_nonzero_constraints,
        var_basis,
        var_c,
        var_cols,
        var_rows,
        var_i_tofix,
        var_i_notinbasis,
        var_i_fix_without_aux,
        var_arows,
        var_n_aux,
        var_acols,
        var_basis_ng,
        var_basis_ng_rows
    );


    // Release cached frame.
    if ( frame_fa6546b76562775dacff6b8b62fff619 == cache_frame_fa6546b76562775dacff6b8b62fff619 )
    {
        Py_DECREF( frame_fa6546b76562775dacff6b8b62fff619 );
    }
    cache_frame_fa6546b76562775dacff6b8b62fff619 = NULL;

    assertFrameObject( frame_fa6546b76562775dacff6b8b62fff619 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_11;
        CHECK_OBJECT( par_A );
        tmp_tuple_element_11 = par_A;
        tmp_return_value = PyTuple_New( 6 );
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_11 );
        CHECK_OBJECT( par_b );
        tmp_tuple_element_11 = par_b;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_11 );
        CHECK_OBJECT( var_c );
        tmp_tuple_element_11 = var_c;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_11 );
        CHECK_OBJECT( var_basis );
        tmp_tuple_element_11 = var_basis;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_11 );
        CHECK_OBJECT( var_x );
        tmp_tuple_element_11 = var_x;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_11 );
        tmp_tuple_element_11 = const_int_0;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 5, tmp_tuple_element_11 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_3__generate_auxiliary_problem );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)var_nonzero_constraints );
    Py_DECREF( var_nonzero_constraints );
    var_nonzero_constraints = NULL;

    CHECK_OBJECT( (PyObject *)var_basis );
    Py_DECREF( var_basis );
    var_basis = NULL;

    CHECK_OBJECT( (PyObject *)var_c );
    Py_DECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_cols );
    var_cols = NULL;

    Py_XDECREF( var_rows );
    var_rows = NULL;

    Py_XDECREF( var_i_tofix );
    var_i_tofix = NULL;

    Py_XDECREF( var_i_notinbasis );
    var_i_notinbasis = NULL;

    Py_XDECREF( var_i_fix_without_aux );
    var_i_fix_without_aux = NULL;

    Py_XDECREF( var_arows );
    var_arows = NULL;

    Py_XDECREF( var_n_aux );
    var_n_aux = NULL;

    Py_XDECREF( var_acols );
    var_acols = NULL;

    Py_XDECREF( var_basis_ng );
    var_basis_ng = NULL;

    Py_XDECREF( var_basis_ng_rows );
    var_basis_ng_rows = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_nonzero_constraints );
    var_nonzero_constraints = NULL;

    Py_XDECREF( var_basis );
    var_basis = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_cols );
    var_cols = NULL;

    Py_XDECREF( var_rows );
    var_rows = NULL;

    Py_XDECREF( var_i_tofix );
    var_i_tofix = NULL;

    Py_XDECREF( var_i_notinbasis );
    var_i_notinbasis = NULL;

    Py_XDECREF( var_i_fix_without_aux );
    var_i_fix_without_aux = NULL;

    Py_XDECREF( var_arows );
    var_arows = NULL;

    Py_XDECREF( var_n_aux );
    var_n_aux = NULL;

    Py_XDECREF( var_acols );
    var_acols = NULL;

    Py_XDECREF( var_basis_ng );
    var_basis_ng = NULL;

    Py_XDECREF( var_basis_ng_rows );
    var_basis_ng_rows = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_3__generate_auxiliary_problem );
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


static PyObject *impl_scipy$optimize$_linprog_rs$$$function_4__select_singleton_columns( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *var_column_indices = NULL;
    PyObject *var_columns = NULL;
    PyObject *var_row_indices = NULL;
    PyObject *var_nonzero_rows = NULL;
    PyObject *var_nonzero_columns = NULL;
    PyObject *var_same_sign = NULL;
    PyObject *var_unique_row_indices = NULL;
    PyObject *var_first_columns = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3bbe9dd00068478dae6f8f32dcb469a2;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3bbe9dd00068478dae6f8f32dcb469a2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3bbe9dd00068478dae6f8f32dcb469a2, codeobj_3bbe9dd00068478dae6f8f32dcb469a2, module_scipy$optimize$_linprog_rs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3bbe9dd00068478dae6f8f32dcb469a2 = cache_frame_3bbe9dd00068478dae6f8f32dcb469a2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3bbe9dd00068478dae6f8f32dcb469a2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3bbe9dd00068478dae6f8f32dcb469a2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 246;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nonzero );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 246;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sum );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 246;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 246;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_2 = par_A;
        frame_3bbe9dd00068478dae6f8f32dcb469a2->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_compexpr_left_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abs, call_args );
        }

        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 246;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_0;
        tmp_tuple_element_1 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 246;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
        frame_3bbe9dd00068478dae6f8f32dcb469a2->m_frame.f_lineno = 246;
        tmp_compexpr_left_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 246;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_args_element_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 246;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3bbe9dd00068478dae6f8f32dcb469a2->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_column_indices == NULL );
        var_column_indices = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_2 = par_A;
        tmp_tuple_element_2 = const_slice_none_none_none;
        tmp_subscript_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_subscript_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_column_indices );
        tmp_tuple_element_2 = var_column_indices;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_subscript_name_2, 1, tmp_tuple_element_2 );
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_columns == NULL );
        var_columns = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 248;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zeros );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_column_indices );
        tmp_len_arg_1 = var_column_indices;
        tmp_tuple_element_3 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 248;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
        frame_3bbe9dd00068478dae6f8f32dcb469a2->m_frame.f_lineno = 248;
        tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_row_indices == NULL );
        var_row_indices = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 249;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = tmp_mvar_value_5;
        CHECK_OBJECT( var_columns );
        tmp_args_element_name_3 = var_columns;
        frame_3bbe9dd00068478dae6f8f32dcb469a2->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_nonzero, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "oooooooooo";
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


            type_description_1 = "oooooooooo";
            exception_lineno = 249;
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


            type_description_1 = "oooooooooo";
            exception_lineno = 249;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 249;
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

            type_description_1 = "oooooooooo";
            exception_lineno = 249;
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
        assert( var_nonzero_rows == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_nonzero_rows = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert( var_nonzero_columns == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_nonzero_columns = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( var_nonzero_rows );
        tmp_ass_subvalue_1 = var_nonzero_rows;
        CHECK_OBJECT( var_row_indices );
        tmp_ass_subscribed_1 = var_row_indices;
        CHECK_OBJECT( var_nonzero_columns );
        tmp_ass_subscript_1 = var_nonzero_columns;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_3 = par_A;
        CHECK_OBJECT( var_row_indices );
        tmp_tuple_element_4 = var_row_indices;
        tmp_subscript_name_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_column_indices );
        tmp_tuple_element_4 = var_column_indices;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_4 );
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_subscribed_name_4 = par_b;
        CHECK_OBJECT( var_row_indices );
        tmp_subscript_name_4 = var_row_indices;
        tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 254;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_0;
        tmp_assign_source_9 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_same_sign == NULL );
        var_same_sign = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_subscript_name_6;
        CHECK_OBJECT( var_column_indices );
        tmp_subscribed_name_6 = var_column_indices;
        CHECK_OBJECT( var_same_sign );
        tmp_subscript_name_5 = var_same_sign;
        tmp_subscribed_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_5 );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_6 = const_slice_none_none_int_neg_1;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_column_indices;
            assert( old != NULL );
            var_column_indices = tmp_assign_source_10;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT( var_row_indices );
        tmp_subscribed_name_8 = var_row_indices;
        CHECK_OBJECT( var_same_sign );
        tmp_subscript_name_7 = var_same_sign;
        tmp_subscribed_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_7 );
        if ( tmp_subscribed_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_8 = const_slice_none_none_int_neg_1;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_8 );
        Py_DECREF( tmp_subscribed_name_7 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_row_indices;
            assert( old != NULL );
            var_row_indices = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kw_name_3;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 264;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }

        tmp_source_name_4 = tmp_mvar_value_6;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_unique );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_row_indices );
        tmp_tuple_element_5 = var_row_indices;
        tmp_args_name_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
        tmp_kw_name_3 = PyDict_Copy( const_dict_ddb6199cf8f69226979904abcecd9a1f );
        frame_3bbe9dd00068478dae6f8f32dcb469a2->m_frame.f_lineno = 264;
        tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
    }
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


            type_description_1 = "oooooooooo";
            exception_lineno = 264;
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


            type_description_1 = "oooooooooo";
            exception_lineno = 264;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 264;
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

            type_description_1 = "oooooooooo";
            exception_lineno = 264;
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
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
        assert( var_unique_row_indices == NULL );
        Py_INCREF( tmp_assign_source_15 );
        var_unique_row_indices = tmp_assign_source_15;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
        assert( var_first_columns == NULL );
        Py_INCREF( tmp_assign_source_16 );
        var_first_columns = tmp_assign_source_16;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        CHECK_OBJECT( var_column_indices );
        tmp_subscribed_name_9 = var_column_indices;
        CHECK_OBJECT( var_first_columns );
        tmp_subscript_name_9 = var_first_columns;
        tmp_tuple_element_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        if ( tmp_tuple_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_unique_row_indices );
        tmp_tuple_element_6 = var_unique_row_indices;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3bbe9dd00068478dae6f8f32dcb469a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3bbe9dd00068478dae6f8f32dcb469a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3bbe9dd00068478dae6f8f32dcb469a2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3bbe9dd00068478dae6f8f32dcb469a2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3bbe9dd00068478dae6f8f32dcb469a2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3bbe9dd00068478dae6f8f32dcb469a2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3bbe9dd00068478dae6f8f32dcb469a2,
        type_description_1,
        par_A,
        par_b,
        var_column_indices,
        var_columns,
        var_row_indices,
        var_nonzero_rows,
        var_nonzero_columns,
        var_same_sign,
        var_unique_row_indices,
        var_first_columns
    );


    // Release cached frame.
    if ( frame_3bbe9dd00068478dae6f8f32dcb469a2 == cache_frame_3bbe9dd00068478dae6f8f32dcb469a2 )
    {
        Py_DECREF( frame_3bbe9dd00068478dae6f8f32dcb469a2 );
    }
    cache_frame_3bbe9dd00068478dae6f8f32dcb469a2 = NULL;

    assertFrameObject( frame_3bbe9dd00068478dae6f8f32dcb469a2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_4__select_singleton_columns );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)var_column_indices );
    Py_DECREF( var_column_indices );
    var_column_indices = NULL;

    CHECK_OBJECT( (PyObject *)var_columns );
    Py_DECREF( var_columns );
    var_columns = NULL;

    CHECK_OBJECT( (PyObject *)var_row_indices );
    Py_DECREF( var_row_indices );
    var_row_indices = NULL;

    CHECK_OBJECT( (PyObject *)var_nonzero_rows );
    Py_DECREF( var_nonzero_rows );
    var_nonzero_rows = NULL;

    CHECK_OBJECT( (PyObject *)var_nonzero_columns );
    Py_DECREF( var_nonzero_columns );
    var_nonzero_columns = NULL;

    CHECK_OBJECT( (PyObject *)var_same_sign );
    Py_DECREF( var_same_sign );
    var_same_sign = NULL;

    CHECK_OBJECT( (PyObject *)var_unique_row_indices );
    Py_DECREF( var_unique_row_indices );
    var_unique_row_indices = NULL;

    CHECK_OBJECT( (PyObject *)var_first_columns );
    Py_DECREF( var_first_columns );
    var_first_columns = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_column_indices );
    var_column_indices = NULL;

    Py_XDECREF( var_columns );
    var_columns = NULL;

    Py_XDECREF( var_row_indices );
    var_row_indices = NULL;

    Py_XDECREF( var_nonzero_rows );
    var_nonzero_rows = NULL;

    Py_XDECREF( var_nonzero_columns );
    var_nonzero_columns = NULL;

    Py_XDECREF( var_same_sign );
    var_same_sign = NULL;

    Py_XDECREF( var_unique_row_indices );
    var_unique_row_indices = NULL;

    Py_XDECREF( var_first_columns );
    var_first_columns = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_4__select_singleton_columns );
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


static PyObject *impl_scipy$optimize$_linprog_rs$$$function_5__find_nonzero_rows( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_tol = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_34d440df0ac0b4caf817ffb92b60b209;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_34d440df0ac0b4caf817ffb92b60b209 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_34d440df0ac0b4caf817ffb92b60b209, codeobj_34d440df0ac0b4caf817ffb92b60b209, module_scipy$optimize$_linprog_rs, sizeof(void *)+sizeof(void *) );
    frame_34d440df0ac0b4caf817ffb92b60b209 = cache_frame_34d440df0ac0b4caf817ffb92b60b209;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_34d440df0ac0b4caf817ffb92b60b209 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_34d440df0ac0b4caf817ffb92b60b209 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_any );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_34d440df0ac0b4caf817ffb92b60b209->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abs, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_1 = par_tol;
        tmp_tuple_element_1 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_c4b01644824ba6bad132707fcdaa03f1 );
        frame_34d440df0ac0b4caf817ffb92b60b209->m_frame.f_lineno = 274;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_34d440df0ac0b4caf817ffb92b60b209 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_34d440df0ac0b4caf817ffb92b60b209 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_34d440df0ac0b4caf817ffb92b60b209 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_34d440df0ac0b4caf817ffb92b60b209, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_34d440df0ac0b4caf817ffb92b60b209->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_34d440df0ac0b4caf817ffb92b60b209, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_34d440df0ac0b4caf817ffb92b60b209,
        type_description_1,
        par_A,
        par_tol
    );


    // Release cached frame.
    if ( frame_34d440df0ac0b4caf817ffb92b60b209 == cache_frame_34d440df0ac0b4caf817ffb92b60b209 )
    {
        Py_DECREF( frame_34d440df0ac0b4caf817ffb92b60b209 );
    }
    cache_frame_34d440df0ac0b4caf817ffb92b60b209 = NULL;

    assertFrameObject( frame_34d440df0ac0b4caf817ffb92b60b209 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_5__find_nonzero_rows );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_5__find_nonzero_rows );
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


static PyObject *impl_scipy$optimize$_linprog_rs$$$function_6__select_enter_pivot( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c_hat = python_pars[ 0 ];
    PyObject *par_bl = python_pars[ 1 ];
    PyObject *par_a = python_pars[ 2 ];
    PyObject *par_rule = python_pars[ 3 ];
    PyObject *par_tol = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_0105f03a53a3e9486fc211c087ad13b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0105f03a53a3e9486fc211c087ad13b7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0105f03a53a3e9486fc211c087ad13b7, codeobj_0105f03a53a3e9486fc211c087ad13b7, module_scipy$optimize$_linprog_rs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0105f03a53a3e9486fc211c087ad13b7 = cache_frame_0105f03a53a3e9486fc211c087ad13b7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0105f03a53a3e9486fc211c087ad13b7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0105f03a53a3e9486fc211c087ad13b7 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_rule );
        tmp_called_instance_1 = par_rule;
        frame_0105f03a53a3e9486fc211c087ad13b7->m_frame.f_lineno = 282;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_mrc;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
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
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_a );
            tmp_subscribed_name_2 = par_a;
            CHECK_OBJECT( par_bl );
            tmp_operand_name_1 = par_bl;
            tmp_subscript_name_1 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_1 );
            if ( tmp_subscript_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_1 == NULL )
            {
                Py_DECREF( tmp_subscribed_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 283;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_1;
            CHECK_OBJECT( par_c_hat );
            tmp_args_element_name_1 = par_c_hat;
            frame_0105f03a53a3e9486fc211c087ad13b7->m_frame.f_lineno = 283;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_subscript_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_argmin, call_args );
            }

            if ( tmp_subscript_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_1 );

                exception_lineno = 283;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_1 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( par_a );
            tmp_subscribed_name_5 = par_a;
            CHECK_OBJECT( par_bl );
            tmp_operand_name_2 = par_bl;
            tmp_subscript_name_3 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_2 );
            if ( tmp_subscript_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 285;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscribed_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_3 );
            Py_DECREF( tmp_subscript_name_3 );
            if ( tmp_subscribed_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 285;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_c_hat );
            tmp_compexpr_left_2 = par_c_hat;
            CHECK_OBJECT( par_tol );
            tmp_operand_name_3 = par_tol;
            tmp_compexpr_right_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_4 );

                exception_lineno = 285;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_4 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_subscript_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_4 );

                exception_lineno = 285;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscribed_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_subscribed_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 285;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_5 = const_int_0;
            tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_5, 0 );
            Py_DECREF( tmp_subscribed_name_3 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 285;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0105f03a53a3e9486fc211c087ad13b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0105f03a53a3e9486fc211c087ad13b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0105f03a53a3e9486fc211c087ad13b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0105f03a53a3e9486fc211c087ad13b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0105f03a53a3e9486fc211c087ad13b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0105f03a53a3e9486fc211c087ad13b7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0105f03a53a3e9486fc211c087ad13b7,
        type_description_1,
        par_c_hat,
        par_bl,
        par_a,
        par_rule,
        par_tol
    );


    // Release cached frame.
    if ( frame_0105f03a53a3e9486fc211c087ad13b7 == cache_frame_0105f03a53a3e9486fc211c087ad13b7 )
    {
        Py_DECREF( frame_0105f03a53a3e9486fc211c087ad13b7 );
    }
    cache_frame_0105f03a53a3e9486fc211c087ad13b7 = NULL;

    assertFrameObject( frame_0105f03a53a3e9486fc211c087ad13b7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_6__select_enter_pivot );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c_hat );
    Py_DECREF( par_c_hat );
    par_c_hat = NULL;

    CHECK_OBJECT( (PyObject *)par_bl );
    Py_DECREF( par_bl );
    par_bl = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_rule );
    Py_DECREF( par_rule );
    par_rule = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c_hat );
    Py_DECREF( par_c_hat );
    par_c_hat = NULL;

    CHECK_OBJECT( (PyObject *)par_bl );
    Py_DECREF( par_bl );
    par_bl = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_rule );
    Py_DECREF( par_rule );
    par_rule = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_6__select_enter_pivot );
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


static PyObject *impl_scipy$optimize$_linprog_rs$$$function_7__display_iter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_phase = python_pars[ 0 ];
    PyObject *par_iteration = python_pars[ 1 ];
    PyObject *par_slack = python_pars[ 2 ];
    PyObject *par_con = python_pars[ 3 ];
    PyObject *par_fun = python_pars[ 4 ];
    PyObject *var_header = NULL;
    struct Nuitka_FrameObject *frame_1c37ff6786d73941bca23a97b8f3c9f0;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_1c37ff6786d73941bca23a97b8f3c9f0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1c37ff6786d73941bca23a97b8f3c9f0, codeobj_1c37ff6786d73941bca23a97b8f3c9f0, module_scipy$optimize$_linprog_rs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1c37ff6786d73941bca23a97b8f3c9f0 = cache_frame_1c37ff6786d73941bca23a97b8f3c9f0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1c37ff6786d73941bca23a97b8f3c9f0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1c37ff6786d73941bca23a97b8f3c9f0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_iteration );
        tmp_left_name_1 = par_iteration;
        tmp_right_name_1 = const_int_pos_20;
        tmp_operand_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_1 = Py_True;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_1 = Py_False;
        condexpr_end_1:;
        assert( var_header == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_header = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_header );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_header );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_call_result_1;
            tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_1 != NULL );
            frame_1c37ff6786d73941bca23a97b8f3c9f0->m_frame.f_lineno = 295;
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_a8bd99c1227b24c8c255e5543ff7eabd_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "ooooooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 304;
            type_description_1 = "ooooooN";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_slack );
        tmp_args_element_name_1 = par_slack;
        frame_1c37ff6786d73941bca23a97b8f3c9f0->m_frame.f_lineno = 304;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_min, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "ooooooN";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_slack;
            assert( old != NULL );
            par_slack = tmp_assign_source_2;
            Py_DECREF( old );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_1c37ff6786d73941bca23a97b8f3c9f0, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_1c37ff6786d73941bca23a97b8f3c9f0, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;
            type_description_1 = "ooooooN";
            goto try_except_handler_3;
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
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_str_plain_NA;
            {
                PyObject *old = par_slack;
                assert( old != NULL );
                par_slack = tmp_assign_source_3;
                Py_INCREF( par_slack );
                Py_DECREF( old );
            }

        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 303;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_1c37ff6786d73941bca23a97b8f3c9f0->m_frame) frame_1c37ff6786d73941bca23a97b8f3c9f0->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooN";
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_7__display_iter );
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_2 != NULL );
        tmp_source_name_1 = const_str_digest_b10a9fe04fe1268ef204faf42eccb7ca;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
        assert( !(tmp_called_name_3 == NULL) );
        CHECK_OBJECT( par_phase );
        tmp_args_element_name_3 = par_phase;
        CHECK_OBJECT( par_iteration );
        tmp_args_element_name_4 = par_iteration;
        if ( par_slack == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "slack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 307;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = par_slack;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 307;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_linalg );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 307;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_con );
        tmp_args_element_name_7 = par_con;
        frame_1c37ff6786d73941bca23a97b8f3c9f0->m_frame.f_lineno = 307;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_norm, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 307;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_fun );
        tmp_args_element_name_8 = par_fun;
        frame_1c37ff6786d73941bca23a97b8f3c9f0->m_frame.f_lineno = 307;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_8 };
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        frame_1c37ff6786d73941bca23a97b8f3c9f0->m_frame.f_lineno = 307;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c37ff6786d73941bca23a97b8f3c9f0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c37ff6786d73941bca23a97b8f3c9f0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1c37ff6786d73941bca23a97b8f3c9f0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1c37ff6786d73941bca23a97b8f3c9f0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1c37ff6786d73941bca23a97b8f3c9f0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1c37ff6786d73941bca23a97b8f3c9f0,
        type_description_1,
        par_phase,
        par_iteration,
        par_slack,
        par_con,
        par_fun,
        var_header,
        NULL
    );


    // Release cached frame.
    if ( frame_1c37ff6786d73941bca23a97b8f3c9f0 == cache_frame_1c37ff6786d73941bca23a97b8f3c9f0 )
    {
        Py_DECREF( frame_1c37ff6786d73941bca23a97b8f3c9f0 );
    }
    cache_frame_1c37ff6786d73941bca23a97b8f3c9f0 = NULL;

    assertFrameObject( frame_1c37ff6786d73941bca23a97b8f3c9f0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_7__display_iter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_phase );
    Py_DECREF( par_phase );
    par_phase = NULL;

    CHECK_OBJECT( (PyObject *)par_iteration );
    Py_DECREF( par_iteration );
    par_iteration = NULL;

    Py_XDECREF( par_slack );
    par_slack = NULL;

    CHECK_OBJECT( (PyObject *)par_con );
    Py_DECREF( par_con );
    par_con = NULL;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)var_header );
    Py_DECREF( var_header );
    var_header = NULL;

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

    CHECK_OBJECT( (PyObject *)par_phase );
    Py_DECREF( par_phase );
    par_phase = NULL;

    CHECK_OBJECT( (PyObject *)par_iteration );
    Py_DECREF( par_iteration );
    par_iteration = NULL;

    Py_XDECREF( par_slack );
    par_slack = NULL;

    CHECK_OBJECT( (PyObject *)par_con );
    Py_DECREF( par_con );
    par_con = NULL;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_7__display_iter );
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


static PyObject *impl_scipy$optimize$_linprog_rs$$$function_8__phase_two( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_A = python_pars[ 1 ];
    PyObject *par_x = python_pars[ 2 ];
    PyObject *par_b = python_pars[ 3 ];
    PyObject *par_maxiter = python_pars[ 4 ];
    PyObject *par_tol = python_pars[ 5 ];
    PyObject *par_maxupdate = python_pars[ 6 ];
    PyObject *par_mast = python_pars[ 7 ];
    PyObject *par_pivot = python_pars[ 8 ];
    PyObject *par_iteration = python_pars[ 9 ];
    PyObject *par_callback = python_pars[ 10 ];
    PyObject *par__T_o = python_pars[ 11 ];
    PyObject *par_disp = python_pars[ 12 ];
    PyObject *par_phase_one_n = python_pars[ 13 ];
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_status = NULL;
    PyObject *var_a = NULL;
    PyObject *var_ab = NULL;
    PyObject *var_B = NULL;
    PyObject *var_phase = NULL;
    PyObject *var_x_postsolve = NULL;
    PyObject *var_x_o = NULL;
    PyObject *var_fun = NULL;
    PyObject *var_slack = NULL;
    PyObject *var_con = NULL;
    PyObject *var__ = NULL;
    PyObject *var_res = NULL;
    PyObject *var_bl = NULL;
    PyObject *var_xb = NULL;
    PyObject *var_cb = NULL;
    PyObject *var_v = NULL;
    PyObject *var_c_hat = NULL;
    PyObject *var_j = NULL;
    PyObject *var_u = NULL;
    PyObject *var_i = NULL;
    PyObject *var_th = NULL;
    PyObject *var_l = NULL;
    PyObject *var_th_star = NULL;
    nuitka_bool tmp_for_loop_1__break_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__element_5 = NULL;
    PyObject *tmp_tuple_unpack_2__element_6 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1, codeobj_c5d8e3db7d3c2c72aedac6cb4ceac6a1, module_scipy$optimize$_linprog_rs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1 = cache_frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 324;
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 324;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 324;
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

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 324;
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
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_m = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_n = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_int_0;
        assert( var_status == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_status = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 326;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_1 = var_n;
        frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = 326;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_arange, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_a == NULL );
        var_a = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_2 = var_m;
        frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = 327;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_arange, call_args );
        }

        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ab == NULL );
        var_ab = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_maxupdate );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_maxupdate );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_BGLU );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BGLU );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BGLU" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 330;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_3 = par_A;
            CHECK_OBJECT( par_b );
            tmp_args_element_name_4 = par_b;
            CHECK_OBJECT( par_maxupdate );
            tmp_args_element_name_5 = par_maxupdate;
            CHECK_OBJECT( par_mast );
            tmp_args_element_name_6 = par_mast;
            frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = 330;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 330;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_B == NULL );
            var_B = tmp_assign_source_9;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_LU );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LU );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LU" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 332;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_4;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_7 = par_A;
            CHECK_OBJECT( par_b );
            tmp_args_element_name_8 = par_b;
            frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = 332;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 332;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_B == NULL );
            var_B = tmp_assign_source_10;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_FALSE;
        tmp_for_loop_1__break_indicator = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_iteration );
        tmp_xrange_low_1 = par_iteration;
        CHECK_OBJECT( par_iteration );
        tmp_left_name_1 = par_iteration;
        CHECK_OBJECT( par_maxiter );
        tmp_right_name_1 = par_maxiter;
        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_xrange_high_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_iter_arg_2 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
        Py_DECREF( tmp_xrange_high_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_value_name_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT( tmp_value_name_1 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 334;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_13;
            Py_XDECREF( old );
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

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = exception_keeper_type_3;
        tmp_compexpr_right_1 = PyExc_StopIteration;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_3 );
            Py_XDECREF( exception_keeper_value_3 );
            Py_XDECREF( exception_keeper_tb_3 );

            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
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
            nuitka_bool tmp_assign_source_14;
            tmp_assign_source_14 = NUITKA_BOOL_TRUE;
            tmp_for_loop_1__break_indicator = tmp_assign_source_14;
        }
        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );
        goto loop_end_1;
        goto branch_end_2;
        branch_no_2:;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_5;
        branch_end_2:;
    }
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_15 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = par_iteration;
            assert( old != NULL );
            par_iteration = tmp_assign_source_15;
            Py_INCREF( par_iteration );
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_disp );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_disp );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_or_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_callback );
        tmp_compexpr_left_2 = par_callback;
        tmp_compexpr_right_2 = Py_None;
        tmp_or_right_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_phase_one_n );
            tmp_compexpr_left_3 = par_phase_one_n;
            tmp_compexpr_right_3 = Py_None;
            tmp_condition_result_4 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_16;
                tmp_assign_source_16 = const_int_pos_1;
                {
                    PyObject *old = var_phase;
                    var_phase = tmp_assign_source_16;
                    Py_INCREF( var_phase );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_17;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_start_name_1;
                PyObject *tmp_stop_name_1;
                PyObject *tmp_step_name_1;
                CHECK_OBJECT( par_x );
                tmp_subscribed_name_1 = par_x;
                tmp_start_name_1 = Py_None;
                CHECK_OBJECT( par_phase_one_n );
                tmp_stop_name_1 = par_phase_one_n;
                tmp_step_name_1 = Py_None;
                tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
                assert( !(tmp_subscript_name_1 == NULL) );
                tmp_assign_source_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscript_name_1 );
                if ( tmp_assign_source_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 339;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                {
                    PyObject *old = var_x_postsolve;
                    var_x_postsolve = tmp_assign_source_17;
                    Py_XDECREF( old );
                }

            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_assign_source_18;
                tmp_assign_source_18 = const_int_pos_2;
                {
                    PyObject *old = var_phase;
                    var_phase = tmp_assign_source_18;
                    Py_INCREF( var_phase );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_19;
                CHECK_OBJECT( par_x );
                tmp_assign_source_19 = par_x;
                {
                    PyObject *old = var_x_postsolve;
                    var_x_postsolve = tmp_assign_source_19;
                    Py_INCREF( var_x_postsolve );
                    Py_XDECREF( old );
                }

            }
            branch_end_4:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_dircall_arg4_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__postsolve );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__postsolve );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_postsolve" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 343;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }

            tmp_dircall_arg1_1 = tmp_mvar_value_5;
            CHECK_OBJECT( var_x_postsolve );
            tmp_tuple_element_1 = var_x_postsolve;
            tmp_dircall_arg2_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par__T_o );
            tmp_dircall_arg3_1 = par__T_o;
            tmp_dict_key_1 = const_str_plain_tol;
            CHECK_OBJECT( par_tol );
            tmp_dict_value_1 = par_tol;
            tmp_dircall_arg4_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_copy;
            tmp_dict_value_2 = Py_True;
            tmp_res = PyDict_SetItem( tmp_dircall_arg4_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg3_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_iter_arg_3 = impl___internal__$$$function_17_complex_call_helper_pos_keywords_star_list( dir_call_args );
            }
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__source_iter;
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_20;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_3, 0, 6 );
            if ( tmp_assign_source_21 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 343;
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_1;
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_21;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_4, 1, 6 );
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 343;
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_2;
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_22;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_5, 2, 6 );
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 343;
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_3;
                tmp_tuple_unpack_2__element_3 = tmp_assign_source_23;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_6, 3, 6 );
            if ( tmp_assign_source_24 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 343;
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_4;
                tmp_tuple_unpack_2__element_4 = tmp_assign_source_24;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_25 = UNPACK_NEXT( tmp_unpack_7, 4, 6 );
            if ( tmp_assign_source_25 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 343;
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_5;
                tmp_tuple_unpack_2__element_5 = tmp_assign_source_25;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_26 = UNPACK_NEXT( tmp_unpack_8, 5, 6 );
            if ( tmp_assign_source_26 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 343;
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_6;
                tmp_tuple_unpack_2__element_6 = tmp_assign_source_26;
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

                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 343;
                        goto try_except_handler_8;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 6)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 343;
                goto try_except_handler_8;
            }
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_7;
        // End of try:
        try_end_4:;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_4 );
        tmp_tuple_unpack_2__element_4 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_5 );
        tmp_tuple_unpack_2__element_5 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_6 );
        tmp_tuple_unpack_2__element_6 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_5;
        // End of try:
        try_end_5:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_27;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_27 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_x_o;
                var_x_o = tmp_assign_source_27;
                Py_INCREF( var_x_o );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_28;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_28 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_fun;
                var_fun = tmp_assign_source_28;
                Py_INCREF( var_fun );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_29;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
            tmp_assign_source_29 = tmp_tuple_unpack_2__element_3;
            {
                PyObject *old = var_slack;
                var_slack = tmp_assign_source_29;
                Py_INCREF( var_slack );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        {
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_4 );
            tmp_assign_source_30 = tmp_tuple_unpack_2__element_4;
            {
                PyObject *old = var_con;
                var_con = tmp_assign_source_30;
                Py_INCREF( var_con );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_4 );
        tmp_tuple_unpack_2__element_4 = NULL;

        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_5 );
            tmp_assign_source_31 = tmp_tuple_unpack_2__element_5;
            {
                PyObject *old = var__;
                var__ = tmp_assign_source_31;
                Py_INCREF( var__ );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_5 );
        tmp_tuple_unpack_2__element_5 = NULL;

        {
            PyObject *tmp_assign_source_32;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_6 );
            tmp_assign_source_32 = tmp_tuple_unpack_2__element_6;
            {
                PyObject *old = var__;
                assert( old != NULL );
                var__ = tmp_assign_source_32;
                Py_INCREF( var__ );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_6 );
        tmp_tuple_unpack_2__element_6 = NULL;

        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( par_callback );
            tmp_compexpr_left_4 = par_callback;
            tmp_compexpr_right_4 = Py_None;
            tmp_condition_result_5 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_33;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_9;
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
                PyObject *tmp_dict_key_12;
                PyObject *tmp_dict_value_12;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_OptimizeResult );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeResult );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeResult" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 347;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_5;
                }

                tmp_called_name_3 = tmp_mvar_value_6;
                tmp_dict_key_3 = const_str_plain_x;
                CHECK_OBJECT( var_x_o );
                tmp_dict_value_3 = var_x_o;
                tmp_args_element_name_9 = _PyDict_NewPresized( 10 );
                tmp_res = PyDict_SetItem( tmp_args_element_name_9, tmp_dict_key_3, tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_4 = const_str_plain_fun;
                CHECK_OBJECT( var_fun );
                tmp_dict_value_4 = var_fun;
                tmp_res = PyDict_SetItem( tmp_args_element_name_9, tmp_dict_key_4, tmp_dict_value_4 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_5 = const_str_plain_slack;
                CHECK_OBJECT( var_slack );
                tmp_dict_value_5 = var_slack;
                tmp_res = PyDict_SetItem( tmp_args_element_name_9, tmp_dict_key_5, tmp_dict_value_5 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_6 = const_str_plain_con;
                CHECK_OBJECT( var_con );
                tmp_dict_value_6 = var_con;
                tmp_res = PyDict_SetItem( tmp_args_element_name_9, tmp_dict_key_6, tmp_dict_value_6 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_7 = const_str_plain_nit;
                CHECK_OBJECT( par_iteration );
                tmp_dict_value_7 = par_iteration;
                tmp_res = PyDict_SetItem( tmp_args_element_name_9, tmp_dict_key_7, tmp_dict_value_7 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_8 = const_str_plain_phase;
                CHECK_OBJECT( var_phase );
                tmp_dict_value_8 = var_phase;
                tmp_res = PyDict_SetItem( tmp_args_element_name_9, tmp_dict_key_8, tmp_dict_value_8 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_9 = const_str_plain_complete;
                tmp_dict_value_9 = Py_False;
                tmp_res = PyDict_SetItem( tmp_args_element_name_9, tmp_dict_key_9, tmp_dict_value_9 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_10 = const_str_plain_status;
                tmp_dict_value_10 = const_int_0;
                tmp_res = PyDict_SetItem( tmp_args_element_name_9, tmp_dict_key_10, tmp_dict_value_10 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_11 = const_str_plain_message;
                tmp_dict_value_11 = const_str_empty;
                tmp_res = PyDict_SetItem( tmp_args_element_name_9, tmp_dict_key_11, tmp_dict_value_11 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_12 = const_str_plain_success;
                tmp_dict_value_12 = Py_False;
                tmp_res = PyDict_SetItem( tmp_args_element_name_9, tmp_dict_key_12, tmp_dict_value_12 );
                assert( !(tmp_res != 0) );
                frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = 347;
                {
                    PyObject *call_args[] = { tmp_args_element_name_9 };
                    tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_9 );
                if ( tmp_assign_source_33 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 347;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                {
                    PyObject *old = var_res;
                    var_res = tmp_assign_source_33;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_called_name_4;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_10;
                CHECK_OBJECT( par_callback );
                tmp_called_name_4 = par_callback;
                CHECK_OBJECT( var_res );
                tmp_args_element_name_10 = var_res;
                frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = 352;
                {
                    PyObject *call_args[] = { tmp_args_element_name_10 };
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 352;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_called_name_5;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_11;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_args_element_name_14;
                PyObject *tmp_args_element_name_15;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__display_iter );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__display_iter );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_display_iter" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 354;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_5;
                }

                tmp_called_name_5 = tmp_mvar_value_7;
                CHECK_OBJECT( var_phase );
                tmp_args_element_name_11 = var_phase;
                CHECK_OBJECT( par_iteration );
                tmp_args_element_name_12 = par_iteration;
                CHECK_OBJECT( var_slack );
                tmp_args_element_name_13 = var_slack;
                CHECK_OBJECT( var_con );
                tmp_args_element_name_14 = var_con;
                CHECK_OBJECT( var_fun );
                tmp_args_element_name_15 = var_fun;
                frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = 354;
                {
                    PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
                    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_5, call_args );
                }

                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 354;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_end_5:;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 356;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_source_name_2 = tmp_mvar_value_8;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_zeros );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_a );
        tmp_len_arg_1 = var_a;
        tmp_tuple_element_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 356;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_8a6ce79bb59f45c062c2a0027a3a0c33 );
        frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = 356;
        tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_bl;
            var_bl = tmp_assign_source_34;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = const_int_pos_1;
        CHECK_OBJECT( var_bl );
        tmp_ass_subscribed_1 = var_bl;
        CHECK_OBJECT( par_b );
        tmp_ass_subscript_1 = par_b;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 357;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_2 = par_x;
        CHECK_OBJECT( par_b );
        tmp_subscript_name_2 = par_b;
        tmp_assign_source_35 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_xb;
            var_xb = tmp_assign_source_35;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( par_c );
        tmp_subscribed_name_3 = par_c;
        CHECK_OBJECT( par_b );
        tmp_subscript_name_3 = par_b;
        tmp_assign_source_36 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_cb;
            var_cb = tmp_assign_source_36;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_2;
        CHECK_OBJECT( var_B );
        tmp_source_name_3 = var_B;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_solve );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT( var_cb );
        tmp_tuple_element_3 = var_cb;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_26d77fef7ff092354b69f890bec2632d );
        frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = 363;
        tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_37;
            Py_XDECREF( old );
        }

    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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

    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_mvar_value_9;
        tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_LinAlgError );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_compexpr_right_5 = tmp_mvar_value_9;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
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
            PyObject *tmp_assign_source_38;
            tmp_assign_source_38 = const_int_pos_4;
            {
                PyObject *old = var_status;
                assert( old != NULL );
                var_status = tmp_assign_source_38;
                Py_INCREF( var_status );
                Py_DECREF( old );
            }

        }
        goto try_break_handler_10;
        goto branch_end_6;
        branch_no_6:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 362;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame) frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_10;
        branch_end_6:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_8__phase_two );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_5;
    // try break handler code:
    try_break_handler_10:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto loop_end_1;
    // End of try:
    // End of try:
    try_end_6:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_16;
        CHECK_OBJECT( par_c );
        tmp_left_name_2 = par_c;
        CHECK_OBJECT( var_v );
        tmp_called_instance_3 = var_v;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_16 = par_A;
        frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = 369;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_right_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_39 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_c_hat;
            var_c_hat = tmp_assign_source_39;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_c_hat );
        tmp_subscribed_name_4 = var_c_hat;
        CHECK_OBJECT( var_bl );
        tmp_operand_name_1 = var_bl;
        tmp_subscript_name_4 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_1 );
        if ( tmp_subscript_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_40 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_c_hat;
            assert( old != NULL );
            var_c_hat = tmp_assign_source_40;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_operand_name_2;
        int tmp_truth_name_3;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_source_name_4 = tmp_mvar_value_10;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_all );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_c_hat );
        tmp_compexpr_left_6 = var_c_hat;
        CHECK_OBJECT( par_tol );
        tmp_operand_name_2 = par_tol;
        tmp_compexpr_right_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_name_17 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_right_6 );
        if ( tmp_args_element_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = 376;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_17 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_7 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
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
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__select_enter_pivot );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__select_enter_pivot );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_select_enter_pivot" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 379;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_name_9 = tmp_mvar_value_11;
        CHECK_OBJECT( var_c_hat );
        tmp_tuple_element_4 = var_c_hat;
        tmp_args_name_3 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_bl );
        tmp_tuple_element_4 = var_bl;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
        CHECK_OBJECT( var_a );
        tmp_tuple_element_4 = var_a;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_3, 2, tmp_tuple_element_4 );
        tmp_dict_key_13 = const_str_plain_rule;
        CHECK_OBJECT( par_pivot );
        tmp_dict_value_13 = par_pivot;
        tmp_kw_name_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_13, tmp_dict_value_13 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_14 = const_str_plain_tol;
        CHECK_OBJECT( par_tol );
        tmp_dict_value_14 = par_tol;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_14, tmp_dict_value_14 );
        assert( !(tmp_res != 0) );
        frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = 379;
        tmp_assign_source_41 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_41;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT( var_B );
        tmp_source_name_5 = var_B;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_solve );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_5 = par_A;
        tmp_tuple_element_5 = const_slice_none_none_none;
        tmp_subscript_name_5 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_subscript_name_5, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_j );
        tmp_tuple_element_5 = var_j;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_subscript_name_5, 1, tmp_tuple_element_5 );
        tmp_args_element_name_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscript_name_5 );
        if ( tmp_args_element_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );

            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = 380;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_42;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( var_u );
        tmp_compexpr_left_7 = var_u;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_7 = par_tol;
        tmp_assign_source_43 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_43;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_19;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_4 = tmp_mvar_value_12;
        CHECK_OBJECT( var_i );
        tmp_args_element_name_19 = var_i;
        frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = 383;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_operand_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_any, call_args );
        }

        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
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
            PyObject *tmp_assign_source_44;
            tmp_assign_source_44 = const_int_pos_3;
            {
                PyObject *old = var_status;
                assert( old != NULL );
                var_status = tmp_assign_source_44;
                Py_INCREF( var_status );
                Py_DECREF( old );
            }

        }
        goto loop_end_1;
        branch_no_8:;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_left_name_3;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT( var_xb );
        tmp_subscribed_name_6 = var_xb;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_6 = var_i;
        tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_u );
        tmp_subscribed_name_7 = var_u;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_7 = var_i;
        tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 387;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_45 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_th;
            var_th = tmp_assign_source_45;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_20;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_5 = tmp_mvar_value_13;
        CHECK_OBJECT( var_th );
        tmp_args_element_name_20 = var_th;
        frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = 388;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_assign_source_46 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_argmin, call_args );
        }

        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_l;
            var_l = tmp_assign_source_46;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT( var_th );
        tmp_subscribed_name_8 = var_th;
        CHECK_OBJECT( var_l );
        tmp_subscript_name_8 = var_l;
        tmp_assign_source_47 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_th_star;
            var_th_star = tmp_assign_source_47;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_9 = par_x;
        CHECK_OBJECT( par_b );
        tmp_subscript_name_9 = par_b;
        tmp_left_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_th_star );
        tmp_left_name_5 = var_th_star;
        CHECK_OBJECT( var_u );
        tmp_right_name_5 = var_u;
        tmp_right_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_ass_subvalue_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( par_x );
        tmp_ass_subscribed_2 = par_x;
        CHECK_OBJECT( par_b );
        tmp_ass_subscript_2 = par_b;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( var_th_star );
        tmp_ass_subvalue_3 = var_th_star;
        CHECK_OBJECT( par_x );
        tmp_ass_subscribed_3 = par_x;
        CHECK_OBJECT( var_j );
        tmp_ass_subscript_3 = var_j;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_source_name_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_subscript_name_11;
        PyObject *tmp_args_element_name_22;
        CHECK_OBJECT( var_B );
        tmp_source_name_6 = var_B;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_update );
        if ( tmp_called_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_ab );
        tmp_subscribed_name_11 = var_ab;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_10 = var_i;
        tmp_subscribed_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_10 );
        if ( tmp_subscribed_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );

            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_l );
        tmp_subscript_name_11 = var_l;
        tmp_args_element_name_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_11 );
        Py_DECREF( tmp_subscribed_name_10 );
        if ( tmp_args_element_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );

            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_j );
        tmp_args_element_name_22 = var_j;
        frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_21 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( var_B );
        tmp_source_name_7 = var_B;
        tmp_assign_source_48 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_b );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = par_b;
            assert( old != NULL );
            par_b = tmp_assign_source_48;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_4;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_9;
        nuitka_bool tmp_compexpr_left_8;
        nuitka_bool tmp_compexpr_right_8;
        assert( tmp_for_loop_1__break_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_8 = tmp_for_loop_1__break_indicator;
        tmp_compexpr_right_8 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = ( tmp_compexpr_left_8 == tmp_compexpr_right_8 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_49;
            tmp_assign_source_49 = const_int_pos_1;
            {
                PyObject *old = var_status;
                var_status = tmp_assign_source_49;
                Py_INCREF( var_status );
                Py_XDECREF( old );
            }

        }
        branch_no_9:;
    }
    {
        PyObject *tmp_tuple_element_6;
        CHECK_OBJECT( par_x );
        tmp_tuple_element_6 = par_x;
        tmp_return_value = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( par_b );
        tmp_tuple_element_6 = par_b;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
        if ( var_status == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = var_status;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_6 );
        if ( par_iteration == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "iteration" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = par_iteration;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_6 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1,
        type_description_1,
        par_c,
        par_A,
        par_x,
        par_b,
        par_maxiter,
        par_tol,
        par_maxupdate,
        par_mast,
        par_pivot,
        par_iteration,
        par_callback,
        par__T_o,
        par_disp,
        par_phase_one_n,
        var_m,
        var_n,
        var_status,
        var_a,
        var_ab,
        var_B,
        var_phase,
        var_x_postsolve,
        var_x_o,
        var_fun,
        var_slack,
        var_con,
        var__,
        var_res,
        var_bl,
        var_xb,
        var_cb,
        var_v,
        var_c_hat,
        var_j,
        var_u,
        var_i,
        var_th,
        var_l,
        var_th_star
    );


    // Release cached frame.
    if ( frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1 == cache_frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1 )
    {
        Py_DECREF( frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1 );
    }
    cache_frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1 = NULL;

    assertFrameObject( frame_c5d8e3db7d3c2c72aedac6cb4ceac6a1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_8__phase_two );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxupdate );
    Py_DECREF( par_maxupdate );
    par_maxupdate = NULL;

    CHECK_OBJECT( (PyObject *)par_mast );
    Py_DECREF( par_mast );
    par_mast = NULL;

    CHECK_OBJECT( (PyObject *)par_pivot );
    Py_DECREF( par_pivot );
    par_pivot = NULL;

    Py_XDECREF( par_iteration );
    par_iteration = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par__T_o );
    Py_DECREF( par__T_o );
    par__T_o = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_phase_one_n );
    Py_DECREF( par_phase_one_n );
    par_phase_one_n = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    CHECK_OBJECT( (PyObject *)var_a );
    Py_DECREF( var_a );
    var_a = NULL;

    CHECK_OBJECT( (PyObject *)var_ab );
    Py_DECREF( var_ab );
    var_ab = NULL;

    CHECK_OBJECT( (PyObject *)var_B );
    Py_DECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_phase );
    var_phase = NULL;

    Py_XDECREF( var_x_postsolve );
    var_x_postsolve = NULL;

    Py_XDECREF( var_x_o );
    var_x_o = NULL;

    Py_XDECREF( var_fun );
    var_fun = NULL;

    Py_XDECREF( var_slack );
    var_slack = NULL;

    Py_XDECREF( var_con );
    var_con = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_bl );
    var_bl = NULL;

    Py_XDECREF( var_xb );
    var_xb = NULL;

    Py_XDECREF( var_cb );
    var_cb = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_c_hat );
    var_c_hat = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_th );
    var_th = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_th_star );
    var_th_star = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxupdate );
    Py_DECREF( par_maxupdate );
    par_maxupdate = NULL;

    CHECK_OBJECT( (PyObject *)par_mast );
    Py_DECREF( par_mast );
    par_mast = NULL;

    CHECK_OBJECT( (PyObject *)par_pivot );
    Py_DECREF( par_pivot );
    par_pivot = NULL;

    Py_XDECREF( par_iteration );
    par_iteration = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par__T_o );
    Py_DECREF( par__T_o );
    par__T_o = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_phase_one_n );
    Py_DECREF( par_phase_one_n );
    par_phase_one_n = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_ab );
    var_ab = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_phase );
    var_phase = NULL;

    Py_XDECREF( var_x_postsolve );
    var_x_postsolve = NULL;

    Py_XDECREF( var_x_o );
    var_x_o = NULL;

    Py_XDECREF( var_fun );
    var_fun = NULL;

    Py_XDECREF( var_slack );
    var_slack = NULL;

    Py_XDECREF( var_con );
    var_con = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_bl );
    var_bl = NULL;

    Py_XDECREF( var_xb );
    var_xb = NULL;

    Py_XDECREF( var_cb );
    var_cb = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_c_hat );
    var_c_hat = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_th );
    var_th = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_th_star );
    var_th_star = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_8__phase_two );
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


static PyObject *impl_scipy$optimize$_linprog_rs$$$function_9__linprog_rs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_c0 = python_pars[ 1 ];
    PyObject *par_A = python_pars[ 2 ];
    PyObject *par_b = python_pars[ 3 ];
    PyObject *par_x0 = python_pars[ 4 ];
    PyObject *par_callback = python_pars[ 5 ];
    PyObject *par_maxiter = python_pars[ 6 ];
    PyObject *par_tol = python_pars[ 7 ];
    PyObject *par_maxupdate = python_pars[ 8 ];
    PyObject *par_mast = python_pars[ 9 ];
    PyObject *par_pivot = python_pars[ 10 ];
    PyObject *par__T_o = python_pars[ 11 ];
    PyObject *par_disp = python_pars[ 12 ];
    PyObject *par_unknown_options = python_pars[ 13 ];
    PyObject *var_messages = NULL;
    PyObject *var_x = NULL;
    PyObject *var_basis = NULL;
    PyObject *var_residual = NULL;
    PyObject *var_status = NULL;
    PyObject *var_iteration = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_13119f34df6d194e8a86bd7f8a699081;
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
    static struct Nuitka_FrameObject *cache_frame_13119f34df6d194e8a86bd7f8a699081 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_13119f34df6d194e8a86bd7f8a699081, codeobj_13119f34df6d194e8a86bd7f8a699081, module_scipy$optimize$_linprog_rs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_13119f34df6d194e8a86bd7f8a699081 = cache_frame_13119f34df6d194e8a86bd7f8a699081;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_13119f34df6d194e8a86bd7f8a699081 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_13119f34df6d194e8a86bd7f8a699081 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__check_unknown_options );

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

            exception_lineno = 510;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_unknown_options );
        tmp_args_element_name_1 = par_unknown_options;
        frame_13119f34df6d194e8a86bd7f8a699081->m_frame.f_lineno = 510;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 510;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY( const_list_d7d4348feb789887111b9ad9a9b70683_list );
        assert( var_messages == NULL );
        var_messages = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT( par__T_o );
        tmp_list_arg_1 = par__T_o;
        tmp_assign_source_2 = PySequence_List( tmp_list_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 535;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par__T_o;
            assert( old != NULL );
            par__T_o = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( par__T_o );
        tmp_called_instance_1 = par__T_o;
        frame_13119f34df6d194e8a86bd7f8a699081->m_frame.f_lineno = 536;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_insert, &PyTuple_GET_ITEM( const_tuple_int_neg_1_false_tuple, 0 ) );

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 536;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 538;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 538;
            type_description_1 = "oooooooooooooooooooo";
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
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 539;
                type_description_1 = "oooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_zeros );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 539;
                type_description_1 = "oooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_c );
            tmp_source_name_3 = par_c;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 539;
                type_description_1 = "oooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_13119f34df6d194e8a86bd7f8a699081->m_frame.f_lineno = 539;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 539;
                type_description_1 = "oooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 4 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            tmp_tuple_element_1 = const_int_pos_5;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_messages );
            tmp_subscribed_name_1 = var_messages;
            tmp_subscript_name_1 = const_int_pos_5;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 5 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 539;
                type_description_1 = "oooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
            tmp_tuple_element_1 = const_int_0;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
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
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__phase_one );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__phase_one );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_phase_one" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 542;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_3 = par_A;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_4 = par_b;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_5 = par_x0;
        CHECK_OBJECT( par_maxiter );
        tmp_args_element_name_6 = par_maxiter;
        CHECK_OBJECT( par_tol );
        tmp_args_element_name_7 = par_tol;
        CHECK_OBJECT( par_maxupdate );
        tmp_args_element_name_8 = par_maxupdate;
        CHECK_OBJECT( par_mast );
        tmp_args_element_name_9 = par_mast;
        CHECK_OBJECT( par_pivot );
        tmp_args_element_name_10 = par_pivot;
        CHECK_OBJECT( par_callback );
        tmp_args_element_name_11 = par_callback;
        CHECK_OBJECT( par__T_o );
        tmp_args_element_name_12 = par__T_o;
        CHECK_OBJECT( par_disp );
        tmp_args_element_name_13 = par_disp;
        frame_13119f34df6d194e8a86bd7f8a699081->m_frame.f_lineno = 542;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS11( tmp_called_name_3, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 542;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 541;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 7 );
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


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 541;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 7 );
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


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 541;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_3, 2, 7 );
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


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 541;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_4, 3, 7 );
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


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 541;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_5, 4, 7 );
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


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 541;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_5 == NULL );
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_6, 5, 7 );
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


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 541;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_6 == NULL );
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_7, 6, 7 );
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


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 541;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_7 == NULL );
        tmp_tuple_unpack_1__element_7 = tmp_assign_source_10;
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

                    type_description_1 = "oooooooooooooooooooo";
                    exception_lineno = 541;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 7)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 541;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_6 );
    tmp_tuple_unpack_1__element_6 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_7 );
    tmp_tuple_unpack_1__element_7 = NULL;

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
        assert( var_basis == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_basis = tmp_assign_source_12;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_13;
            Py_INCREF( par_A );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_b;
            assert( old != NULL );
            par_b = tmp_assign_source_14;
            Py_INCREF( par_b );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_5 );
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_5;
        assert( var_residual == NULL );
        Py_INCREF( tmp_assign_source_15 );
        var_residual = tmp_assign_source_15;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_6 );
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_6;
        assert( var_status == NULL );
        Py_INCREF( tmp_assign_source_16 );
        var_status = tmp_assign_source_16;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_6 );
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_7 );
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_7;
        assert( var_iteration == NULL );
        Py_INCREF( tmp_assign_source_17 );
        var_iteration = tmp_assign_source_17;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_7 );
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_status );
        tmp_compexpr_left_2 = var_status;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "oooooooooooooooooooo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
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
            PyObject *tmp_args_element_name_24;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_args_element_name_26;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__phase_two );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__phase_two );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_phase_two" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 546;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            CHECK_OBJECT( par_c );
            tmp_args_element_name_14 = par_c;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_15 = par_A;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_16 = var_x;
            CHECK_OBJECT( var_basis );
            tmp_args_element_name_17 = var_basis;
            CHECK_OBJECT( par_maxiter );
            tmp_args_element_name_18 = par_maxiter;
            CHECK_OBJECT( par_tol );
            tmp_args_element_name_19 = par_tol;
            CHECK_OBJECT( par_maxupdate );
            tmp_args_element_name_20 = par_maxupdate;
            CHECK_OBJECT( par_mast );
            tmp_args_element_name_21 = par_mast;
            CHECK_OBJECT( par_pivot );
            tmp_args_element_name_22 = par_pivot;
            CHECK_OBJECT( var_iteration );
            tmp_args_element_name_23 = var_iteration;
            CHECK_OBJECT( par_callback );
            tmp_args_element_name_24 = par_callback;
            CHECK_OBJECT( par__T_o );
            tmp_args_element_name_25 = par__T_o;
            CHECK_OBJECT( par_disp );
            tmp_args_element_name_26 = par_disp;
            frame_13119f34df6d194e8a86bd7f8a699081->m_frame.f_lineno = 546;
            {
                PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS13( tmp_called_name_4, call_args );
            }

            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 546;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 546;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_18;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_8, 0, 4 );
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


                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 546;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_9 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_9, 1, 4 );
            if ( tmp_assign_source_20 == NULL )
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


                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 546;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_10 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_10, 2, 4 );
            if ( tmp_assign_source_21 == NULL )
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


                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 546;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_3 == NULL );
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_11 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_11, 3, 4 );
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


                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 546;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_4 == NULL );
            tmp_tuple_unpack_2__element_4 = tmp_assign_source_22;
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

                        type_description_1 = "oooooooooooooooooooo";
                        exception_lineno = 546;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 546;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_4 );
        tmp_tuple_unpack_2__element_4 = NULL;

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
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_23 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_x;
                assert( old != NULL );
                var_x = tmp_assign_source_23;
                Py_INCREF( var_x );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_24 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_basis;
                assert( old != NULL );
                var_basis = tmp_assign_source_24;
                Py_INCREF( var_basis );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
            tmp_assign_source_25 = tmp_tuple_unpack_2__element_3;
            {
                PyObject *old = var_status;
                assert( old != NULL );
                var_status = tmp_assign_source_25;
                Py_INCREF( var_status );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_4 );
            tmp_assign_source_26 = tmp_tuple_unpack_2__element_4;
            {
                PyObject *old = var_iteration;
                assert( old != NULL );
                var_iteration = tmp_assign_source_26;
                Py_INCREF( var_iteration );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_4 );
        tmp_tuple_unpack_2__element_4 = NULL;

        branch_no_2:;
    }
    {
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        CHECK_OBJECT( var_x );
        tmp_tuple_element_2 = var_x;
        tmp_return_value = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_status );
        tmp_tuple_element_2 = var_status;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( var_messages );
        tmp_subscribed_name_2 = var_messages;
        CHECK_OBJECT( var_status );
        tmp_subscript_name_2 = var_status;
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 551;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_residual );
        tmp_args_element_name_27 = var_residual;
        CHECK_OBJECT( par_tol );
        tmp_args_element_name_28 = par_tol;
        frame_13119f34df6d194e8a86bd7f8a699081->m_frame.f_lineno = 551;
        {
            PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28 };
            tmp_tuple_element_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_format, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 551;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
        CHECK_OBJECT( var_iteration );
        tmp_tuple_element_2 = var_iteration;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_2 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13119f34df6d194e8a86bd7f8a699081 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_13119f34df6d194e8a86bd7f8a699081 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13119f34df6d194e8a86bd7f8a699081 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_13119f34df6d194e8a86bd7f8a699081, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_13119f34df6d194e8a86bd7f8a699081->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_13119f34df6d194e8a86bd7f8a699081, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_13119f34df6d194e8a86bd7f8a699081,
        type_description_1,
        par_c,
        par_c0,
        par_A,
        par_b,
        par_x0,
        par_callback,
        par_maxiter,
        par_tol,
        par_maxupdate,
        par_mast,
        par_pivot,
        par__T_o,
        par_disp,
        par_unknown_options,
        var_messages,
        var_x,
        var_basis,
        var_residual,
        var_status,
        var_iteration
    );


    // Release cached frame.
    if ( frame_13119f34df6d194e8a86bd7f8a699081 == cache_frame_13119f34df6d194e8a86bd7f8a699081 )
    {
        Py_DECREF( frame_13119f34df6d194e8a86bd7f8a699081 );
    }
    cache_frame_13119f34df6d194e8a86bd7f8a699081 = NULL;

    assertFrameObject( frame_13119f34df6d194e8a86bd7f8a699081 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_9__linprog_rs );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_c0 );
    Py_DECREF( par_c0 );
    par_c0 = NULL;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxupdate );
    Py_DECREF( par_maxupdate );
    par_maxupdate = NULL;

    CHECK_OBJECT( (PyObject *)par_mast );
    Py_DECREF( par_mast );
    par_mast = NULL;

    CHECK_OBJECT( (PyObject *)par_pivot );
    Py_DECREF( par_pivot );
    par_pivot = NULL;

    CHECK_OBJECT( (PyObject *)par__T_o );
    Py_DECREF( par__T_o );
    par__T_o = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_unknown_options );
    Py_DECREF( par_unknown_options );
    par_unknown_options = NULL;

    CHECK_OBJECT( (PyObject *)var_messages );
    Py_DECREF( var_messages );
    var_messages = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_basis );
    var_basis = NULL;

    Py_XDECREF( var_residual );
    var_residual = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_c0 );
    Py_DECREF( par_c0 );
    par_c0 = NULL;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxupdate );
    Py_DECREF( par_maxupdate );
    par_maxupdate = NULL;

    CHECK_OBJECT( (PyObject *)par_mast );
    Py_DECREF( par_mast );
    par_mast = NULL;

    CHECK_OBJECT( (PyObject *)par_pivot );
    Py_DECREF( par_pivot );
    par_pivot = NULL;

    CHECK_OBJECT( (PyObject *)par__T_o );
    Py_DECREF( par__T_o );
    par__T_o = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_unknown_options );
    Py_DECREF( par_unknown_options );
    par_unknown_options = NULL;

    Py_XDECREF( var_messages );
    var_messages = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_basis );
    var_basis = NULL;

    Py_XDECREF( var_residual );
    var_residual = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_rs$$$function_9__linprog_rs );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_1__phase_one( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_rs$$$function_1__phase_one,
        const_str_plain__phase_one,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b90db87981c6a287c8d829bb1d2b2011,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_rs,
        const_str_digest_62d3e999ccbb3f0f34d1f3457c3a4364,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_2__get_more_basis_columns(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_rs$$$function_2__get_more_basis_columns,
        const_str_plain__get_more_basis_columns,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0cb4159b5e481bf4308e1439ab5ccaff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_rs,
        const_str_digest_387e793e0b071b325ba402e015d6995e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_3__generate_auxiliary_problem(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_rs$$$function_3__generate_auxiliary_problem,
        const_str_plain__generate_auxiliary_problem,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fa6546b76562775dacff6b8b62fff619,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_rs,
        const_str_digest_957620498701c8d13e45e696099c26a0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_4__select_singleton_columns(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_rs$$$function_4__select_singleton_columns,
        const_str_plain__select_singleton_columns,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3bbe9dd00068478dae6f8f32dcb469a2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_rs,
        const_str_digest_8f8cd11a2b0831420eac46bb41db80db,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_5__find_nonzero_rows(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_rs$$$function_5__find_nonzero_rows,
        const_str_plain__find_nonzero_rows,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_34d440df0ac0b4caf817ffb92b60b209,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_rs,
        const_str_digest_3157b065727eacf7fb8b05a903da22cd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_6__select_enter_pivot( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_rs$$$function_6__select_enter_pivot,
        const_str_plain__select_enter_pivot,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0105f03a53a3e9486fc211c087ad13b7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_rs,
        const_str_digest_8c7711ef333b7164f76b9f61b33020d9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_7__display_iter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_rs$$$function_7__display_iter,
        const_str_plain__display_iter,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1c37ff6786d73941bca23a97b8f3c9f0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_rs,
        const_str_digest_8ef37d046ac765160dfe2a861f8ef9c3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_8__phase_two( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_rs$$$function_8__phase_two,
        const_str_plain__phase_two,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c5d8e3db7d3c2c72aedac6cb4ceac6a1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_rs,
        const_str_digest_be4abfc3104360fd8fe18606bd8075e7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_9__linprog_rs( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_rs$$$function_9__linprog_rs,
        const_str_plain__linprog_rs,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_13119f34df6d194e8a86bd7f8a699081,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_rs,
        const_str_digest_22628baf410e5323a641094eb3bcf794,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_linprog_rs =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._linprog_rs",
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

MOD_INIT_DECL( scipy$optimize$_linprog_rs )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_linprog_rs );
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
    puts("scipy.optimize._linprog_rs: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._linprog_rs: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._linprog_rs: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_linprog_rs" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_linprog_rs = Py_InitModule4(
        "scipy.optimize._linprog_rs",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_linprog_rs = PyModule_Create( &mdef_scipy$optimize$_linprog_rs );
#endif

    moduledict_scipy$optimize$_linprog_rs = MODULE_DICT( module_scipy$optimize$_linprog_rs );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_linprog_rs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_linprog_rs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_linprog_rs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_linprog_rs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_linprog_rs );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_b0ae63b1f6fb764a098d04d191924dc7, module_scipy$optimize$_linprog_rs );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_54e19db7e275a3130f4a45f58ed85616;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_98831eb0a92a009edfa689ea46fc1426;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_54e19db7e275a3130f4a45f58ed85616 = MAKE_MODULE_FRAME( codeobj_54e19db7e275a3130f4a45f58ed85616, module_scipy$optimize$_linprog_rs );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_54e19db7e275a3130f4a45f58ed85616 );
    assert( Py_REFCNT( frame_54e19db7e275a3130f4a45f58ed85616 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_54e19db7e275a3130f4a45f58ed85616->m_frame.f_lineno = 20;
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


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_linprog_rs;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_54e19db7e275a3130f4a45f58ed85616->m_frame.f_lineno = 21;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_linprog_rs;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_solve_tuple;
        tmp_level_name_2 = const_int_0;
        frame_54e19db7e275a3130f4a45f58ed85616->m_frame.f_lineno = 22;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_solve );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_solve, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_optimize;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_linprog_rs;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain__check_unknown_options_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_54e19db7e275a3130f4a45f58ed85616->m_frame.f_lineno = 23;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$optimize$_linprog_rs,
                const_str_plain__check_unknown_options,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain__check_unknown_options );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__check_unknown_options, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain__bglu_dense;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$_linprog_rs;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_LU_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_54e19db7e275a3130f4a45f58ed85616->m_frame.f_lineno = 24;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_scipy$optimize$_linprog_rs,
                const_str_plain_LU,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_LU );
        }

        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_LU, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain__bglu_dense;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$optimize$_linprog_rs;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_BGLU_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_54e19db7e275a3130f4a45f58ed85616->m_frame.f_lineno = 25;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$optimize$_linprog_rs,
                const_str_plain_BGLU,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_BGLU );
        }

        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_BGLU, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$optimize$_linprog_rs;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_LinAlgError_tuple;
        tmp_level_name_6 = const_int_0;
        frame_54e19db7e275a3130f4a45f58ed85616->m_frame.f_lineno = 26;
        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_LinAlgError );
        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_LinAlgError, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_1880563e266a347a2dd1d3621428dd0b;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$optimize$_linprog_rs;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_LinAlgError_tuple;
        tmp_level_name_7 = const_int_0;
        frame_54e19db7e275a3130f4a45f58ed85616->m_frame.f_lineno = 27;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_LinAlgError );
        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_LinAlgError2, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain__linprog_util;
        tmp_globals_name_8 = (PyObject *)moduledict_scipy$optimize$_linprog_rs;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain__postsolve_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_54e19db7e275a3130f4a45f58ed85616->m_frame.f_lineno = 28;
        tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy$optimize$_linprog_rs,
                const_str_plain__postsolve,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain__postsolve );
        }

        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__postsolve, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain_optimize;
        tmp_globals_name_9 = (PyObject *)moduledict_scipy$optimize$_linprog_rs;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_OptimizeResult_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_54e19db7e275a3130f4a45f58ed85616->m_frame.f_lineno = 29;
        tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_scipy$optimize$_linprog_rs,
                const_str_plain_OptimizeResult,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_OptimizeResult );
        }

        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain_OptimizeResult, tmp_assign_source_16 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_54e19db7e275a3130f4a45f58ed85616 );
#endif
    popFrameStack();

    assertFrameObject( frame_54e19db7e275a3130f4a45f58ed85616 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_54e19db7e275a3130f4a45f58ed85616 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_54e19db7e275a3130f4a45f58ed85616, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_54e19db7e275a3130f4a45f58ed85616->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_54e19db7e275a3130f4a45f58ed85616, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = Py_None;
        tmp_defaults_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = PyList_New( 0 );
        PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_False;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
        tmp_assign_source_17 = MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_1__phase_one( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__phase_one, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_2__get_more_basis_columns(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__get_more_basis_columns, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_3__generate_auxiliary_problem(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__generate_auxiliary_problem, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_4__select_singleton_columns(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__select_singleton_columns, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_5__find_nonzero_rows(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__find_nonzero_rows, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_str_plain_bland_float_1eminus_12_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_22 = MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_6__select_enter_pivot( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__select_enter_pivot, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_7__display_iter(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__display_iter, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = const_int_0;
        tmp_defaults_3 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_None;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_3, 1, tmp_tuple_element_2 );
        tmp_tuple_element_2 = PyList_New( 0 );
        PyTuple_SET_ITEM( tmp_defaults_3, 2, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_False;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_3, 3, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_None;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_3, 4, tmp_tuple_element_2 );
        tmp_assign_source_24 = MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_8__phase_two( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__phase_two, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_4;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = Py_None;
        tmp_defaults_4 = PyTuple_New( 9 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_4, 0, tmp_tuple_element_3 );
        tmp_tuple_element_3 = Py_None;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_4, 1, tmp_tuple_element_3 );
        tmp_tuple_element_3 = const_int_pos_5000;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_4, 2, tmp_tuple_element_3 );
        tmp_tuple_element_3 = const_float_1eminus_12;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_4, 3, tmp_tuple_element_3 );
        tmp_tuple_element_3 = const_int_pos_10;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_4, 4, tmp_tuple_element_3 );
        tmp_tuple_element_3 = Py_False;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_4, 5, tmp_tuple_element_3 );
        tmp_tuple_element_3 = const_str_plain_mrc;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_4, 6, tmp_tuple_element_3 );
        tmp_tuple_element_3 = PyList_New( 0 );
        PyTuple_SET_ITEM( tmp_defaults_4, 7, tmp_tuple_element_3 );
        tmp_tuple_element_3 = Py_False;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_4, 8, tmp_tuple_element_3 );
        tmp_assign_source_25 = MAKE_FUNCTION_scipy$optimize$_linprog_rs$$$function_9__linprog_rs( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain__linprog_rs, tmp_assign_source_25 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_rs, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_linprog_rs );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
