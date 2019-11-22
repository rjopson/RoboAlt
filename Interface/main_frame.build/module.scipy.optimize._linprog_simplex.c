/* Generated code for Python module 'scipy.optimize._linprog_simplex'
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

/* The "_module_scipy$optimize$_linprog_simplex" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_linprog_simplex;
PyDictObject *moduledict_scipy$optimize$_linprog_simplex;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_warn;
static PyObject *const_str_plain__pivot_row;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__postsolve;
extern PyObject *const_str_plain_mb;
extern PyObject *const_str_plain_masked_where;
extern PyObject *const_float_10000_0;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_OptimizeResult;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_max;
static PyObject *const_str_digest_e42fdf717adaad492d5e8d7b09aabe66;
extern PyObject *const_str_plain_irow;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain__pivot_col;
extern PyObject *const_str_plain_size;
extern PyObject *const_tuple_str_plain__postsolve_tuple;
extern PyObject *const_str_plain_atol;
extern PyObject *const_str_plain_None;
static PyObject *const_dict_1c47883b803584c38083817c76466424;
extern PyObject *const_str_plain_q;
extern PyObject *const_tuple_slice_none_int_neg_1_none_slice_none_none_none_tuple;
static PyObject *const_tuple_str_plain_row_str_plain_basis_str_plain_T_tuple;
static PyObject *const_str_digest_491c0271a5573e19024ab6c4a820a2d7;
static PyObject *const_tuple_dcb54ca58c40eb77dcb956873cfc2ce4_tuple;
static PyObject *const_str_digest_10f0c44a4c8034848ff207b242cd1a7f;
static PyObject *const_str_plain_min_rows;
extern PyObject *const_str_plain_hstack;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain__apply_pivot;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_ea582001f1fc1b888c5e6e01dafa6ad4;
extern PyObject *const_str_plain_nan;
static PyObject *const_str_digest_6612fbc919cd52bb869d5bbd7ad81930;
extern PyObject *const_str_plain_rtol;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_slack;
static PyObject *const_dict_44921f618d132521f8a14af9e8052142;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_phase;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain_min;
static PyObject *const_str_digest_492b88908fea8c379a9227b9836492d2;
static PyObject *const_tuple_d8587a4d57dcbef9b379d4407e4c1033_tuple;
static PyObject *const_tuple_float_1eminus_12_tuple;
static PyObject *const_tuple_int_neg_1_int_neg_1_tuple;
extern PyObject *const_str_plain_basis;
extern PyObject *const_str_plain_con;
extern PyObject *const_str_plain_OptimizeWarning;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_arange;
static PyObject *const_str_digest_28df139ffd98389e92deff60b024bf93;
static PyObject *const_tuple_d23c02dbb9f0672c460ecc0170ccbb83_tuple;
extern PyObject *const_str_plain_mask;
extern PyObject *const_str_plain_maxiter;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_fun;
static PyObject *const_tuple_9eb046edf52c05aeb074876874484cbe_tuple;
extern PyObject *const_str_plain_ma;
static PyObject *const_tuple_str_plain_T_str_plain_tol_str_plain_bland_str_plain_ma_tuple;
static PyObject *const_str_digest_9d33d5dccd99b8e6c8ded85ecf1735aa;
static PyObject *const_str_digest_543183ab5fd942c9f88a78a377eb5d7f;
extern PyObject *const_str_plain_nit;
extern PyObject *const_str_plain__linprog_simplex;
extern PyObject *const_str_plain__check_unknown_options;
extern PyObject *const_str_plain_complete;
extern PyObject *const_str_plain_abs;
static PyObject *const_str_digest_7408a07d5d3b5b1ddb8b21e1422e148d;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_argmin;
extern PyObject *const_str_plain_k;
static PyObject *const_str_plain_pivval;
extern PyObject *const_str_plain_vstack;
extern PyObject *const_str_plain_bland;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_plain_col;
static PyObject *const_str_digest_756dd3c0d4dfb38e72ebbf0b341e492a;
extern PyObject *const_int_0;
static PyObject *const_str_plain__solve_simplex;
static PyObject *const_tuple_b7c1a0de7dbcea1eaf7bba2ab4f3fdd2_tuple;
extern PyObject *const_str_plain_eye;
extern PyObject *const_str_plain_row;
extern PyObject *const_int_pos_1000;
extern PyObject *const_str_plain_float64;
static PyObject *const_str_digest_9cbfa8b7132ac66bc997b7eccd7b375e;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_b7b1eea3f789c24aaf98d3f720167206;
extern PyObject *const_str_plain_isclose;
extern PyObject *const_str_plain__T_o;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_tuple_str_plain_col_str_plain_T_str_plain_pivrow_str_plain_tol_tuple;
extern PyObject *const_str_plain_atleast_1d;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_callback;
extern PyObject *const_float_1eminus_12;
static PyObject *const_str_digest_fc40c0ae512a863028f71862770a4244;
extern PyObject *const_str_plain_less;
extern PyObject *const_str_plain_logical_not;
extern PyObject *const_str_plain_optimize;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_int_neg_1_slice_none_int_neg_1_none_tuple;
extern PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_take;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_pivcol;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_digest_ea304145e4e7045d01a52916c5feb3ac;
extern PyObject *const_int_pos_3;
static PyObject *const_tuple_float_1eminus_12_false_tuple;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_digest_b6bdef1b6fe434d2544f1e8891f43c1a;
extern PyObject *const_str_plain__linprog_util;
extern PyObject *const_str_plain_newaxis;
extern PyObject *const_str_plain_undo;
static PyObject *const_str_plain_pivrow;
extern PyObject *const_slice_none_none_none;
static PyObject *const_str_digest_1838af3a0e0eda5d546142ab643a55ae;
extern PyObject *const_tuple_str_plain_warn_tuple;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_delete;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_nit0;
static PyObject *const_tuple_int_pos_1000_false_none_float_1eminus_12_false_none_tuple;
extern PyObject *const_str_plain_success;
static PyObject *const_tuple_1046bf80882567e778c44c502f33c845_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain__pivot_row = UNSTREAM_STRING_ASCII( &constant_bin[ 4847532 ], 10, 1 );
    const_str_digest_e42fdf717adaad492d5e8d7b09aabe66 = UNSTREAM_STRING_ASCII( &constant_bin[ 4847542 ], 373, 0 );
    const_str_plain__pivot_col = UNSTREAM_STRING_ASCII( &constant_bin[ 4847915 ], 10, 1 );
    const_dict_1c47883b803584c38083817c76466424 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_1c47883b803584c38083817c76466424, const_str_plain_atol, const_int_0 );
    PyDict_SetItem( const_dict_1c47883b803584c38083817c76466424, const_str_plain_rtol, const_float_10000_0 );
    assert( PyDict_Size( const_dict_1c47883b803584c38083817c76466424 ) == 2 );
    const_tuple_str_plain_row_str_plain_basis_str_plain_T_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_row_str_plain_basis_str_plain_T_tuple, 0, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    PyTuple_SET_ITEM( const_tuple_str_plain_row_str_plain_basis_str_plain_T_tuple, 1, const_str_plain_basis ); Py_INCREF( const_str_plain_basis );
    PyTuple_SET_ITEM( const_tuple_str_plain_row_str_plain_basis_str_plain_T_tuple, 2, const_str_plain_T ); Py_INCREF( const_str_plain_T );
    const_str_digest_491c0271a5573e19024ab6c4a820a2d7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4847925 ], 5094, 0 );
    const_tuple_dcb54ca58c40eb77dcb956873cfc2ce4_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_dcb54ca58c40eb77dcb956873cfc2ce4_tuple, 0, const_int_pos_1000 ); Py_INCREF( const_int_pos_1000 );
    PyTuple_SET_ITEM( const_tuple_dcb54ca58c40eb77dcb956873cfc2ce4_tuple, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyTuple_SET_ITEM( const_tuple_dcb54ca58c40eb77dcb956873cfc2ce4_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_dcb54ca58c40eb77dcb956873cfc2ce4_tuple, 3, const_str_empty ); Py_INCREF( const_str_empty );
    PyTuple_SET_ITEM( const_tuple_dcb54ca58c40eb77dcb956873cfc2ce4_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_dcb54ca58c40eb77dcb956873cfc2ce4_tuple, 5, const_float_1eminus_12 ); Py_INCREF( const_float_1eminus_12 );
    PyTuple_SET_ITEM( const_tuple_dcb54ca58c40eb77dcb956873cfc2ce4_tuple, 6, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_dcb54ca58c40eb77dcb956873cfc2ce4_tuple, 7, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_dcb54ca58c40eb77dcb956873cfc2ce4_tuple, 8, Py_None ); Py_INCREF( Py_None );
    const_str_digest_10f0c44a4c8034848ff207b242cd1a7f = UNSTREAM_STRING_ASCII( &constant_bin[ 4853019 ], 34, 0 );
    const_str_plain_min_rows = UNSTREAM_STRING_ASCII( &constant_bin[ 4853053 ], 8, 1 );
    const_str_plain__apply_pivot = UNSTREAM_STRING_ASCII( &constant_bin[ 4853061 ], 12, 1 );
    const_str_digest_ea582001f1fc1b888c5e6e01dafa6ad4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4853073 ], 31, 0 );
    const_str_digest_6612fbc919cd52bb869d5bbd7ad81930 = UNSTREAM_STRING_ASCII( &constant_bin[ 4853104 ], 62, 0 );
    const_dict_44921f618d132521f8a14af9e8052142 = _PyDict_NewPresized( 5 );
    PyDict_SetItem( const_dict_44921f618d132521f8a14af9e8052142, const_int_0, const_str_digest_b7b1eea3f789c24aaf98d3f720167206 );
    PyDict_SetItem( const_dict_44921f618d132521f8a14af9e8052142, const_int_pos_1, const_str_digest_ea304145e4e7045d01a52916c5feb3ac );
    PyDict_SetItem( const_dict_44921f618d132521f8a14af9e8052142, const_int_pos_2, const_str_digest_6612fbc919cd52bb869d5bbd7ad81930 );
    const_str_digest_756dd3c0d4dfb38e72ebbf0b341e492a = UNSTREAM_STRING_ASCII( &constant_bin[ 4853166 ], 57, 0 );
    PyDict_SetItem( const_dict_44921f618d132521f8a14af9e8052142, const_int_pos_3, const_str_digest_756dd3c0d4dfb38e72ebbf0b341e492a );
    const_str_digest_9d33d5dccd99b8e6c8ded85ecf1735aa = UNSTREAM_STRING_ASCII( &constant_bin[ 4853223 ], 49, 0 );
    PyDict_SetItem( const_dict_44921f618d132521f8a14af9e8052142, const_int_pos_4, const_str_digest_9d33d5dccd99b8e6c8ded85ecf1735aa );
    assert( PyDict_Size( const_dict_44921f618d132521f8a14af9e8052142 ) == 5 );
    const_str_digest_492b88908fea8c379a9227b9836492d2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4853272 ], 4641, 0 );
    const_tuple_d8587a4d57dcbef9b379d4407e4c1033_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_d8587a4d57dcbef9b379d4407e4c1033_tuple, 0, const_str_plain_OptimizeResult ); Py_INCREF( const_str_plain_OptimizeResult );
    PyTuple_SET_ITEM( const_tuple_d8587a4d57dcbef9b379d4407e4c1033_tuple, 1, const_str_plain_OptimizeWarning ); Py_INCREF( const_str_plain_OptimizeWarning );
    PyTuple_SET_ITEM( const_tuple_d8587a4d57dcbef9b379d4407e4c1033_tuple, 2, const_str_plain__check_unknown_options ); Py_INCREF( const_str_plain__check_unknown_options );
    const_tuple_float_1eminus_12_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_float_1eminus_12_tuple, 0, const_float_1eminus_12 ); Py_INCREF( const_float_1eminus_12 );
    const_tuple_int_neg_1_int_neg_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_int_neg_1_tuple, 0, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_int_neg_1_tuple, 1, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    const_str_digest_28df139ffd98389e92deff60b024bf93 = UNSTREAM_STRING_ASCII( &constant_bin[ 4857913 ], 1510, 0 );
    const_tuple_d23c02dbb9f0672c460ecc0170ccbb83_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4859423 ], 216 );
    const_tuple_9eb046edf52c05aeb074876874484cbe_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4859639 ], 237 );
    const_tuple_str_plain_T_str_plain_tol_str_plain_bland_str_plain_ma_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_T_str_plain_tol_str_plain_bland_str_plain_ma_tuple, 0, const_str_plain_T ); Py_INCREF( const_str_plain_T );
    PyTuple_SET_ITEM( const_tuple_str_plain_T_str_plain_tol_str_plain_bland_str_plain_ma_tuple, 1, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_str_plain_T_str_plain_tol_str_plain_bland_str_plain_ma_tuple, 2, const_str_plain_bland ); Py_INCREF( const_str_plain_bland );
    PyTuple_SET_ITEM( const_tuple_str_plain_T_str_plain_tol_str_plain_bland_str_plain_ma_tuple, 3, const_str_plain_ma ); Py_INCREF( const_str_plain_ma );
    const_str_digest_543183ab5fd942c9f88a78a377eb5d7f = UNSTREAM_STRING_ASCII( &constant_bin[ 4859876 ], 1966, 0 );
    const_str_digest_7408a07d5d3b5b1ddb8b21e1422e148d = UNSTREAM_STRING_ASCII( &constant_bin[ 4861842 ], 40, 0 );
    const_str_plain_pivval = UNSTREAM_STRING_ASCII( &constant_bin[ 4861882 ], 6, 1 );
    const_str_plain__solve_simplex = UNSTREAM_STRING_ASCII( &constant_bin[ 4854474 ], 14, 1 );
    const_tuple_b7c1a0de7dbcea1eaf7bba2ab4f3fdd2_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_b7c1a0de7dbcea1eaf7bba2ab4f3fdd2_tuple, 0, const_str_plain_T ); Py_INCREF( const_str_plain_T );
    PyTuple_SET_ITEM( const_tuple_b7c1a0de7dbcea1eaf7bba2ab4f3fdd2_tuple, 1, const_str_plain_basis ); Py_INCREF( const_str_plain_basis );
    const_str_plain_pivrow = UNSTREAM_STRING_ASCII( &constant_bin[ 4857977 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_b7c1a0de7dbcea1eaf7bba2ab4f3fdd2_tuple, 2, const_str_plain_pivrow ); Py_INCREF( const_str_plain_pivrow );
    const_str_plain_pivcol = UNSTREAM_STRING_ASCII( &constant_bin[ 4858054 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_b7c1a0de7dbcea1eaf7bba2ab4f3fdd2_tuple, 3, const_str_plain_pivcol ); Py_INCREF( const_str_plain_pivcol );
    PyTuple_SET_ITEM( const_tuple_b7c1a0de7dbcea1eaf7bba2ab4f3fdd2_tuple, 4, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_b7c1a0de7dbcea1eaf7bba2ab4f3fdd2_tuple, 5, const_str_plain_pivval ); Py_INCREF( const_str_plain_pivval );
    PyTuple_SET_ITEM( const_tuple_b7c1a0de7dbcea1eaf7bba2ab4f3fdd2_tuple, 6, const_str_plain_irow ); Py_INCREF( const_str_plain_irow );
    PyTuple_SET_ITEM( const_tuple_b7c1a0de7dbcea1eaf7bba2ab4f3fdd2_tuple, 7, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_9cbfa8b7132ac66bc997b7eccd7b375e = UNSTREAM_STRING_ASCII( &constant_bin[ 4861888 ], 1843, 0 );
    const_tuple_str_plain_col_str_plain_T_str_plain_pivrow_str_plain_tol_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_col_str_plain_T_str_plain_pivrow_str_plain_tol_tuple, 0, const_str_plain_col ); Py_INCREF( const_str_plain_col );
    PyTuple_SET_ITEM( const_tuple_str_plain_col_str_plain_T_str_plain_pivrow_str_plain_tol_tuple, 1, const_str_plain_T ); Py_INCREF( const_str_plain_T );
    PyTuple_SET_ITEM( const_tuple_str_plain_col_str_plain_T_str_plain_pivrow_str_plain_tol_tuple, 2, const_str_plain_pivrow ); Py_INCREF( const_str_plain_pivrow );
    PyTuple_SET_ITEM( const_tuple_str_plain_col_str_plain_T_str_plain_pivrow_str_plain_tol_tuple, 3, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    const_str_digest_fc40c0ae512a863028f71862770a4244 = UNSTREAM_STRING_ASCII( &constant_bin[ 4863731 ], 337, 0 );
    const_tuple_int_neg_1_slice_none_int_neg_1_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_slice_none_int_neg_1_none_tuple, 0, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_slice_none_int_neg_1_none_tuple, 1, const_slice_none_int_neg_1_none ); Py_INCREF( const_slice_none_int_neg_1_none );
    const_tuple_float_1eminus_12_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_float_1eminus_12_false_tuple, 0, const_float_1eminus_12 ); Py_INCREF( const_float_1eminus_12 );
    PyTuple_SET_ITEM( const_tuple_float_1eminus_12_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_str_digest_b6bdef1b6fe434d2544f1e8891f43c1a = UNSTREAM_STRING_ASCII( &constant_bin[ 4864068 ], 49, 0 );
    const_str_digest_1838af3a0e0eda5d546142ab643a55ae = UNSTREAM_STRING_ASCII( &constant_bin[ 4864117 ], 1031, 0 );
    const_str_plain_nit0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4857077 ], 4, 1 );
    const_tuple_int_pos_1000_false_none_float_1eminus_12_false_none_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1000_false_none_float_1eminus_12_false_none_tuple, 0, const_int_pos_1000 ); Py_INCREF( const_int_pos_1000 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1000_false_none_float_1eminus_12_false_none_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_int_pos_1000_false_none_float_1eminus_12_false_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_int_pos_1000_false_none_float_1eminus_12_false_none_tuple, 3, const_float_1eminus_12 ); Py_INCREF( const_float_1eminus_12 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1000_false_none_float_1eminus_12_false_none_tuple, 4, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_int_pos_1000_false_none_float_1eminus_12_false_none_tuple, 5, Py_None ); Py_INCREF( Py_None );
    const_tuple_1046bf80882567e778c44c502f33c845_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_1046bf80882567e778c44c502f33c845_tuple, 0, const_str_plain_T ); Py_INCREF( const_str_plain_T );
    PyTuple_SET_ITEM( const_tuple_1046bf80882567e778c44c502f33c845_tuple, 1, const_str_plain_basis ); Py_INCREF( const_str_plain_basis );
    PyTuple_SET_ITEM( const_tuple_1046bf80882567e778c44c502f33c845_tuple, 2, const_str_plain_pivcol ); Py_INCREF( const_str_plain_pivcol );
    PyTuple_SET_ITEM( const_tuple_1046bf80882567e778c44c502f33c845_tuple, 3, const_str_plain_phase ); Py_INCREF( const_str_plain_phase );
    PyTuple_SET_ITEM( const_tuple_1046bf80882567e778c44c502f33c845_tuple, 4, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_1046bf80882567e778c44c502f33c845_tuple, 5, const_str_plain_bland ); Py_INCREF( const_str_plain_bland );
    PyTuple_SET_ITEM( const_tuple_1046bf80882567e778c44c502f33c845_tuple, 6, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_1046bf80882567e778c44c502f33c845_tuple, 7, const_str_plain_ma ); Py_INCREF( const_str_plain_ma );
    PyTuple_SET_ITEM( const_tuple_1046bf80882567e778c44c502f33c845_tuple, 8, const_str_plain_mb ); Py_INCREF( const_str_plain_mb );
    PyTuple_SET_ITEM( const_tuple_1046bf80882567e778c44c502f33c845_tuple, 9, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_1046bf80882567e778c44c502f33c845_tuple, 10, const_str_plain_min_rows ); Py_INCREF( const_str_plain_min_rows );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_linprog_simplex( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_117b38e6bae1dd20a977498af1cedca4;
static PyCodeObject *codeobj_3a8d8f605048fac917952638aa119180;
static PyCodeObject *codeobj_04c5d16486588cd112f636f7943f3f05;
static PyCodeObject *codeobj_d8fe53d69e82ebec3029ece2de556857;
static PyCodeObject *codeobj_90ed65691af57b7c2a5aa7f33e7eff8b;
static PyCodeObject *codeobj_0679492954c3db73db002ee196c7b301;
static PyCodeObject *codeobj_23fba1a56c4b542b9557186ade64a1e2;
static PyCodeObject *codeobj_d10e208c55f06a087d29ee8430425022;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_10f0c44a4c8034848ff207b242cd1a7f );
    codeobj_117b38e6bae1dd20a977498af1cedca4 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 370, const_tuple_str_plain_row_str_plain_basis_str_plain_T_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3a8d8f605048fac917952638aa119180 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 372, const_tuple_str_plain_col_str_plain_T_str_plain_pivrow_str_plain_tol_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_04c5d16486588cd112f636f7943f3f05 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_7408a07d5d3b5b1ddb8b21e1422e148d, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d8fe53d69e82ebec3029ece2de556857 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__apply_pivot, 169, const_tuple_b7c1a0de7dbcea1eaf7bba2ab4f3fdd2_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_90ed65691af57b7c2a5aa7f33e7eff8b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__linprog_simplex, 433, const_tuple_d23c02dbb9f0672c460ecc0170ccbb83_tuple, 10, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_0679492954c3db73db002ee196c7b301 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__pivot_col, 37, const_tuple_str_plain_T_str_plain_tol_str_plain_bland_str_plain_ma_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_23fba1a56c4b542b9557186ade64a1e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__pivot_row, 98, const_tuple_1046bf80882567e778c44c502f33c845_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d10e208c55f06a087d29ee8430425022 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__solve_simplex, 232, const_tuple_9eb046edf52c05aeb074876874484cbe_tuple, 12, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_simplex$$$function_1__pivot_col( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_simplex$$$function_2__pivot_row( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_simplex$$$function_3__apply_pivot( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_simplex$$$function_4__solve_simplex( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_simplex$$$function_5__linprog_simplex( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$optimize$_linprog_simplex$$$function_1__pivot_col( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_T = python_pars[ 0 ];
    PyObject *par_tol = python_pars[ 1 ];
    PyObject *par_bland = python_pars[ 2 ];
    PyObject *var_ma = NULL;
    struct Nuitka_FrameObject *frame_0679492954c3db73db002ee196c7b301;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0679492954c3db73db002ee196c7b301 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0679492954c3db73db002ee196c7b301, codeobj_0679492954c3db73db002ee196c7b301, module_scipy$optimize$_linprog_simplex, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0679492954c3db73db002ee196c7b301 = cache_frame_0679492954c3db73db002ee196c7b301;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0679492954c3db73db002ee196c7b301 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0679492954c3db73db002ee196c7b301 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ma );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_masked_where );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_T );
        tmp_subscribed_name_1 = par_T;
        tmp_subscript_name_1 = const_tuple_int_neg_1_slice_none_int_neg_1_none_tuple;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_tol );
        tmp_operand_name_1 = par_tol;
        tmp_compexpr_right_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_T );
        tmp_subscribed_name_2 = par_T;
        tmp_subscript_name_2 = const_tuple_int_neg_1_slice_none_int_neg_1_none_tuple;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
        frame_0679492954c3db73db002ee196c7b301->m_frame.f_lineno = 89;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_ma == NULL );
        var_ma = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( var_ma );
        tmp_called_instance_1 = var_ma;
        frame_0679492954c3db73db002ee196c7b301->m_frame.f_lineno = 90;
        tmp_compexpr_left_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_count );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
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


            exception_lineno = 90;
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
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_2;
            tmp_tuple_element_2 = Py_False;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 91;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_2;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_nan );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 91;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_bland );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_bland );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "oooo";
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
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_subscript_name_4;
            tmp_tuple_element_3 = Py_True;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_return_value );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 94;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_nonzero );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 94;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_return_value );
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 94;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_4;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_logical_not );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 94;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_return_value );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 94;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_5;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_atleast_1d );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 94;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_ma );
            tmp_source_name_7 = var_ma;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_mask );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 94;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_0679492954c3db73db002ee196c7b301->m_frame.f_lineno = 94;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 94;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_0679492954c3db73db002ee196c7b301->m_frame.f_lineno = 94;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 94;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_0679492954c3db73db002ee196c7b301->m_frame.f_lineno = 94;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_subscribed_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_subscribed_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 94;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_3 = const_int_0;
            tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_3, 0 );
            Py_DECREF( tmp_subscribed_name_4 );
            if ( tmp_subscribed_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 94;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_4 = const_int_0;
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_4, 0 );
            Py_DECREF( tmp_subscribed_name_3 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 94;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_8;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_subscript_name_6;
        tmp_tuple_element_4 = Py_True;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 95;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_6;
        tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ma );
        if ( tmp_source_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 95;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_nonzero );
        Py_DECREF( tmp_source_name_8 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 95;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ma );
        tmp_compexpr_left_3 = var_ma;
        CHECK_OBJECT( var_ma );
        tmp_called_instance_2 = var_ma;
        frame_0679492954c3db73db002ee196c7b301->m_frame.f_lineno = 95;
        tmp_compexpr_right_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_min );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 95;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 95;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_0679492954c3db73db002ee196c7b301->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_subscribed_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_subscribed_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 95;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = const_int_0;
        tmp_subscribed_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_5, 0 );
        Py_DECREF( tmp_subscribed_name_6 );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 95;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_6 = const_int_0;
        tmp_tuple_element_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_6, 0 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 95;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0679492954c3db73db002ee196c7b301 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0679492954c3db73db002ee196c7b301 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0679492954c3db73db002ee196c7b301 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0679492954c3db73db002ee196c7b301, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0679492954c3db73db002ee196c7b301->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0679492954c3db73db002ee196c7b301, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0679492954c3db73db002ee196c7b301,
        type_description_1,
        par_T,
        par_tol,
        par_bland,
        var_ma
    );


    // Release cached frame.
    if ( frame_0679492954c3db73db002ee196c7b301 == cache_frame_0679492954c3db73db002ee196c7b301 )
    {
        Py_DECREF( frame_0679492954c3db73db002ee196c7b301 );
    }
    cache_frame_0679492954c3db73db002ee196c7b301 = NULL;

    assertFrameObject( frame_0679492954c3db73db002ee196c7b301 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_simplex$$$function_1__pivot_col );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_T );
    Py_DECREF( par_T );
    par_T = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_bland );
    Py_DECREF( par_bland );
    par_bland = NULL;

    CHECK_OBJECT( (PyObject *)var_ma );
    Py_DECREF( var_ma );
    var_ma = NULL;

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

    CHECK_OBJECT( (PyObject *)par_T );
    Py_DECREF( par_T );
    par_T = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_bland );
    Py_DECREF( par_bland );
    par_bland = NULL;

    Py_XDECREF( var_ma );
    var_ma = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_simplex$$$function_1__pivot_col );
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


static PyObject *impl_scipy$optimize$_linprog_simplex$$$function_2__pivot_row( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_T = python_pars[ 0 ];
    PyObject *par_basis = python_pars[ 1 ];
    PyObject *par_pivcol = python_pars[ 2 ];
    PyObject *par_phase = python_pars[ 3 ];
    PyObject *par_tol = python_pars[ 4 ];
    PyObject *par_bland = python_pars[ 5 ];
    PyObject *var_k = NULL;
    PyObject *var_ma = NULL;
    PyObject *var_mb = NULL;
    PyObject *var_q = NULL;
    PyObject *var_min_rows = NULL;
    struct Nuitka_FrameObject *frame_23fba1a56c4b542b9557186ade64a1e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_23fba1a56c4b542b9557186ade64a1e2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_23fba1a56c4b542b9557186ade64a1e2, codeobj_23fba1a56c4b542b9557186ade64a1e2, module_scipy$optimize$_linprog_simplex, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_23fba1a56c4b542b9557186ade64a1e2 = cache_frame_23fba1a56c4b542b9557186ade64a1e2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_23fba1a56c4b542b9557186ade64a1e2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_23fba1a56c4b542b9557186ade64a1e2 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_phase );
        tmp_compexpr_left_1 = par_phase;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
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
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = const_int_pos_2;
            assert( var_k == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_k = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = const_int_pos_1;
            assert( var_k == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_k = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_step_name_2;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 158;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ma );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_masked_where );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_T );
        tmp_subscribed_name_1 = par_T;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_k );
        tmp_operand_name_1 = var_k;
        tmp_stop_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 158;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_tuple_element_2 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_tuple_element_2 == NULL) );
        tmp_subscript_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_pivcol );
        tmp_tuple_element_2 = par_pivcol;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_2 );
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 158;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_2 = par_tol;
        tmp_tuple_element_1 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 158;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_T );
        tmp_subscribed_name_2 = par_T;
        tmp_start_name_2 = Py_None;
        CHECK_OBJECT( var_k );
        tmp_operand_name_2 = var_k;
        tmp_stop_name_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        if ( tmp_stop_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 158;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_2 = Py_None;
        tmp_tuple_element_3 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_stop_name_2 );
        assert( !(tmp_tuple_element_3 == NULL) );
        tmp_subscript_name_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_2, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_pivcol );
        tmp_tuple_element_3 = par_pivcol;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_subscript_name_2, 1, tmp_tuple_element_3 );
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 158;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
        frame_23fba1a56c4b542b9557186ade64a1e2->m_frame.f_lineno = 158;
        tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ma == NULL );
        var_ma = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( var_ma );
        tmp_called_instance_1 = var_ma;
        frame_23fba1a56c4b542b9557186ade64a1e2->m_frame.f_lineno = 159;
        tmp_compexpr_left_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_count );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
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
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_2;
            tmp_tuple_element_4 = Py_False;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 160;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_2;
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_nan );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 160;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_step_name_3;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_start_name_4;
        PyObject *tmp_stop_name_4;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_step_name_4;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 161;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_3;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ma );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_masked_where );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_T );
        tmp_subscribed_name_3 = par_T;
        tmp_start_name_3 = Py_None;
        CHECK_OBJECT( var_k );
        tmp_operand_name_3 = var_k;
        tmp_stop_name_3 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
        if ( tmp_stop_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 161;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_3 = Py_None;
        tmp_tuple_element_6 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        Py_DECREF( tmp_stop_name_3 );
        assert( !(tmp_tuple_element_6 == NULL) );
        tmp_subscript_name_3 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( par_pivcol );
        tmp_tuple_element_6 = par_pivcol;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_6 );
        tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 161;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_4 = par_tol;
        tmp_tuple_element_5 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 161;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( par_T );
        tmp_subscribed_name_4 = par_T;
        tmp_start_name_4 = Py_None;
        CHECK_OBJECT( var_k );
        tmp_operand_name_4 = var_k;
        tmp_stop_name_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_4 );
        if ( tmp_stop_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_2 );

            exception_lineno = 161;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_4 = Py_None;
        tmp_tuple_element_7 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
        Py_DECREF( tmp_stop_name_4 );
        assert( !(tmp_tuple_element_7 == NULL) );
        tmp_subscript_name_4 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_4, 0, tmp_tuple_element_7 );
        tmp_tuple_element_7 = const_int_neg_1;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_subscript_name_4, 1, tmp_tuple_element_7 );
        tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_2 );

            exception_lineno = 161;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_5 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
        frame_23fba1a56c4b542b9557186ade64a1e2->m_frame.f_lineno = 161;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mb == NULL );
        var_mb = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_mb );
        tmp_left_name_1 = var_mb;
        CHECK_OBJECT( var_ma );
        tmp_right_name_1 = var_ma;
        tmp_assign_source_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_q == NULL );
        var_q = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscript_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 163;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_4;
        tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ma );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_nonzero );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_q );
        tmp_compexpr_left_5 = var_q;
        CHECK_OBJECT( var_q );
        tmp_called_instance_2 = var_q;
        frame_23fba1a56c4b542b9557186ade64a1e2->m_frame.f_lineno = 163;
        tmp_compexpr_right_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_min );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 163;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 163;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_23fba1a56c4b542b9557186ade64a1e2->m_frame.f_lineno = 163;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_subscribed_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = const_int_0;
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_min_rows == NULL );
        var_min_rows = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_bland );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_bland );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_tuple_element_8 = Py_True;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( var_min_rows );
            tmp_subscribed_name_6 = var_min_rows;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_return_value );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 165;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_5;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_argmin );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 165;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_return_value );
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 165;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_6;
            CHECK_OBJECT( par_basis );
            tmp_args_element_name_3 = par_basis;
            CHECK_OBJECT( var_min_rows );
            tmp_args_element_name_4 = var_min_rows;
            frame_23fba1a56c4b542b9557186ade64a1e2->m_frame.f_lineno = 165;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_take, call_args );
            }

            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 165;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_23fba1a56c4b542b9557186ade64a1e2->m_frame.f_lineno = 165;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_subscript_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_subscript_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 165;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            Py_DECREF( tmp_subscript_name_6 );
            if ( tmp_tuple_element_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 165;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_8 );
            goto frame_return_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        tmp_tuple_element_9 = Py_True;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_9 );
        CHECK_OBJECT( var_min_rows );
        tmp_subscribed_name_7 = var_min_rows;
        tmp_subscript_name_7 = const_int_0;
        tmp_tuple_element_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
        if ( tmp_tuple_element_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_9 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23fba1a56c4b542b9557186ade64a1e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_23fba1a56c4b542b9557186ade64a1e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23fba1a56c4b542b9557186ade64a1e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_23fba1a56c4b542b9557186ade64a1e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_23fba1a56c4b542b9557186ade64a1e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_23fba1a56c4b542b9557186ade64a1e2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_23fba1a56c4b542b9557186ade64a1e2,
        type_description_1,
        par_T,
        par_basis,
        par_pivcol,
        par_phase,
        par_tol,
        par_bland,
        var_k,
        var_ma,
        var_mb,
        var_q,
        var_min_rows
    );


    // Release cached frame.
    if ( frame_23fba1a56c4b542b9557186ade64a1e2 == cache_frame_23fba1a56c4b542b9557186ade64a1e2 )
    {
        Py_DECREF( frame_23fba1a56c4b542b9557186ade64a1e2 );
    }
    cache_frame_23fba1a56c4b542b9557186ade64a1e2 = NULL;

    assertFrameObject( frame_23fba1a56c4b542b9557186ade64a1e2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_simplex$$$function_2__pivot_row );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_T );
    Py_DECREF( par_T );
    par_T = NULL;

    CHECK_OBJECT( (PyObject *)par_basis );
    Py_DECREF( par_basis );
    par_basis = NULL;

    CHECK_OBJECT( (PyObject *)par_pivcol );
    Py_DECREF( par_pivcol );
    par_pivcol = NULL;

    CHECK_OBJECT( (PyObject *)par_phase );
    Py_DECREF( par_phase );
    par_phase = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_bland );
    Py_DECREF( par_bland );
    par_bland = NULL;

    CHECK_OBJECT( (PyObject *)var_k );
    Py_DECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)var_ma );
    Py_DECREF( var_ma );
    var_ma = NULL;

    Py_XDECREF( var_mb );
    var_mb = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_min_rows );
    var_min_rows = NULL;

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

    CHECK_OBJECT( (PyObject *)par_T );
    Py_DECREF( par_T );
    par_T = NULL;

    CHECK_OBJECT( (PyObject *)par_basis );
    Py_DECREF( par_basis );
    par_basis = NULL;

    CHECK_OBJECT( (PyObject *)par_pivcol );
    Py_DECREF( par_pivcol );
    par_pivcol = NULL;

    CHECK_OBJECT( (PyObject *)par_phase );
    Py_DECREF( par_phase );
    par_phase = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_bland );
    Py_DECREF( par_bland );
    par_bland = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_ma );
    var_ma = NULL;

    Py_XDECREF( var_mb );
    var_mb = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_min_rows );
    var_min_rows = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_simplex$$$function_2__pivot_row );
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


static PyObject *impl_scipy$optimize$_linprog_simplex$$$function_3__apply_pivot( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_T = python_pars[ 0 ];
    PyObject *par_basis = python_pars[ 1 ];
    PyObject *par_pivrow = python_pars[ 2 ];
    PyObject *par_pivcol = python_pars[ 3 ];
    PyObject *par_tol = python_pars[ 4 ];
    PyObject *var_pivval = NULL;
    PyObject *var_irow = NULL;
    PyObject *var_message = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_d8fe53d69e82ebec3029ece2de556857;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_d8fe53d69e82ebec3029ece2de556857 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d8fe53d69e82ebec3029ece2de556857, codeobj_d8fe53d69e82ebec3029ece2de556857, module_scipy$optimize$_linprog_simplex, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d8fe53d69e82ebec3029ece2de556857 = cache_frame_d8fe53d69e82ebec3029ece2de556857;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d8fe53d69e82ebec3029ece2de556857 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d8fe53d69e82ebec3029ece2de556857 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_pivcol );
        tmp_ass_subvalue_1 = par_pivcol;
        CHECK_OBJECT( par_basis );
        tmp_ass_subscribed_1 = par_basis;
        CHECK_OBJECT( par_pivrow );
        tmp_ass_subscript_1 = par_pivrow;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_T );
        tmp_subscribed_name_1 = par_T;
        CHECK_OBJECT( par_pivrow );
        tmp_tuple_element_1 = par_pivrow;
        tmp_subscript_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_pivcol );
        tmp_tuple_element_1 = par_pivcol;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pivval == NULL );
        var_pivval = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( par_T );
        tmp_subscribed_name_2 = par_T;
        CHECK_OBJECT( par_pivrow );
        tmp_subscript_name_2 = par_pivrow;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_pivval );
        tmp_right_name_1 = var_pivval;
        tmp_ass_subvalue_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_T );
        tmp_ass_subscribed_2 = par_T;
        CHECK_OBJECT( par_pivrow );
        tmp_ass_subscript_2 = par_pivrow;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( par_T );
        tmp_source_name_1 = par_T;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_xrange_low_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_xrange_low_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooooooo";
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
                type_description_1 = "oooooooo";
                exception_lineno = 215;
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
            PyObject *old = var_irow;
            var_irow = tmp_assign_source_4;
            Py_INCREF( var_irow );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_irow );
        tmp_compexpr_left_1 = var_irow;
        CHECK_OBJECT( par_pivrow );
        tmp_compexpr_right_1 = par_pivrow;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_right_name_3;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            CHECK_OBJECT( par_T );
            tmp_subscribed_name_4 = par_T;
            CHECK_OBJECT( var_irow );
            tmp_subscript_name_4 = var_irow;
            tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 217;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_T );
            tmp_subscribed_name_5 = par_T;
            CHECK_OBJECT( par_pivrow );
            tmp_subscript_name_5 = par_pivrow;
            tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 217;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_T );
            tmp_subscribed_name_6 = par_T;
            CHECK_OBJECT( var_irow );
            tmp_tuple_element_2 = var_irow;
            tmp_subscript_name_6 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_subscript_name_6, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_pivcol );
            tmp_tuple_element_2 = par_pivcol;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_subscript_name_6, 1, tmp_tuple_element_2 );
            tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            Py_DECREF( tmp_subscript_name_6 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 217;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_right_name_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 217;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_ass_subvalue_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_ass_subvalue_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 217;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_T );
            tmp_ass_subscribed_3 = par_T;
            CHECK_OBJECT( var_irow );
            tmp_ass_subscript_3 = var_irow;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            Py_DECREF( tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 217;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "oooooooo";
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 220;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_isclose );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_pivval );
        tmp_tuple_element_3 = var_pivval;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_tol );
        tmp_tuple_element_3 = par_tol;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_3 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_1c47883b803584c38083817c76466424 );
        frame_d8fe53d69e82ebec3029ece2de556857->m_frame.f_lineno = 220;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 220;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_called_instance_1 = const_str_digest_fc40c0ae512a863028f71862770a4244;
            CHECK_OBJECT( var_pivval );
            tmp_args_element_name_1 = var_pivval;
            CHECK_OBJECT( par_tol );
            tmp_args_element_name_2 = par_tol;
            frame_d8fe53d69e82ebec3029ece2de556857->m_frame.f_lineno = 222;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_format, call_args );
            }

            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 222;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_message == NULL );
            var_message = tmp_assign_source_5;
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_warn );

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

                exception_lineno = 229;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_message );
            tmp_args_element_name_3 = var_message;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 229;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_4 = tmp_mvar_value_3;
            frame_d8fe53d69e82ebec3029ece2de556857->m_frame.f_lineno = 229;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 229;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8fe53d69e82ebec3029ece2de556857 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8fe53d69e82ebec3029ece2de556857 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d8fe53d69e82ebec3029ece2de556857, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d8fe53d69e82ebec3029ece2de556857->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d8fe53d69e82ebec3029ece2de556857, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d8fe53d69e82ebec3029ece2de556857,
        type_description_1,
        par_T,
        par_basis,
        par_pivrow,
        par_pivcol,
        par_tol,
        var_pivval,
        var_irow,
        var_message
    );


    // Release cached frame.
    if ( frame_d8fe53d69e82ebec3029ece2de556857 == cache_frame_d8fe53d69e82ebec3029ece2de556857 )
    {
        Py_DECREF( frame_d8fe53d69e82ebec3029ece2de556857 );
    }
    cache_frame_d8fe53d69e82ebec3029ece2de556857 = NULL;

    assertFrameObject( frame_d8fe53d69e82ebec3029ece2de556857 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_simplex$$$function_3__apply_pivot );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_T );
    Py_DECREF( par_T );
    par_T = NULL;

    CHECK_OBJECT( (PyObject *)par_basis );
    Py_DECREF( par_basis );
    par_basis = NULL;

    CHECK_OBJECT( (PyObject *)par_pivrow );
    Py_DECREF( par_pivrow );
    par_pivrow = NULL;

    CHECK_OBJECT( (PyObject *)par_pivcol );
    Py_DECREF( par_pivcol );
    par_pivcol = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)var_pivval );
    Py_DECREF( var_pivval );
    var_pivval = NULL;

    Py_XDECREF( var_irow );
    var_irow = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

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

    CHECK_OBJECT( (PyObject *)par_T );
    Py_DECREF( par_T );
    par_T = NULL;

    CHECK_OBJECT( (PyObject *)par_basis );
    Py_DECREF( par_basis );
    par_basis = NULL;

    CHECK_OBJECT( (PyObject *)par_pivrow );
    Py_DECREF( par_pivrow );
    par_pivrow = NULL;

    CHECK_OBJECT( (PyObject *)par_pivcol );
    Py_DECREF( par_pivcol );
    par_pivcol = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( var_pivval );
    var_pivval = NULL;

    Py_XDECREF( var_irow );
    var_irow = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_simplex$$$function_3__apply_pivot );
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


static PyObject *impl_scipy$optimize$_linprog_simplex$$$function_4__solve_simplex( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_T = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_basis = python_pars[ 2 ];
    PyObject *par_maxiter = python_pars[ 3 ];
    PyObject *par_phase = python_pars[ 4 ];
    PyObject *par_status = python_pars[ 5 ];
    PyObject *par_message = python_pars[ 6 ];
    PyObject *par_callback = python_pars[ 7 ];
    PyObject *par_tol = python_pars[ 8 ];
    PyObject *par_nit0 = python_pars[ 9 ];
    PyObject *par_bland = python_pars[ 10 ];
    PyObject *par__T_o = python_pars[ 11 ];
    PyObject *var_nit = NULL;
    PyObject *var_complete = NULL;
    PyObject *var_m = NULL;
    PyObject *var_pivrow = NULL;
    PyObject *var_non_zero_row = NULL;
    PyObject *var_pivcol = NULL;
    PyObject *var_solution = NULL;
    PyObject *var_pivcol_found = NULL;
    PyObject *var_pivrow_found = NULL;
    PyObject *var_x = NULL;
    PyObject *var_c = NULL;
    PyObject *var_A_ub = NULL;
    PyObject *var_b_ub = NULL;
    PyObject *var_A_eq = NULL;
    PyObject *var_b_eq = NULL;
    PyObject *var_bounds = NULL;
    PyObject *var_undo = NULL;
    PyObject *var_fun = NULL;
    PyObject *var_slack = NULL;
    PyObject *var_con = NULL;
    PyObject *var__ = NULL;
    PyObject *var_res = NULL;
    PyObject *outline_0_var_row = NULL;
    PyObject *outline_1_var_col = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__element_4 = NULL;
    PyObject *tmp_tuple_unpack_3__element_5 = NULL;
    PyObject *tmp_tuple_unpack_3__element_6 = NULL;
    PyObject *tmp_tuple_unpack_3__element_7 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_tuple_unpack_4__element_4 = NULL;
    PyObject *tmp_tuple_unpack_4__element_5 = NULL;
    PyObject *tmp_tuple_unpack_4__element_6 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d10e208c55f06a087d29ee8430425022;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_117b38e6bae1dd20a977498af1cedca4_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_117b38e6bae1dd20a977498af1cedca4_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_3a8d8f605048fac917952638aa119180_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_3a8d8f605048fac917952638aa119180_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_iterator_attempt;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d10e208c55f06a087d29ee8430425022 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( par_nit0 );
        tmp_assign_source_1 = par_nit0;
        assert( var_nit == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_nit = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_False;
        assert( var_complete == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_complete = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d10e208c55f06a087d29ee8430425022, codeobj_d10e208c55f06a087d29ee8430425022, module_scipy$optimize$_linprog_simplex, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d10e208c55f06a087d29ee8430425022 = cache_frame_d10e208c55f06a087d29ee8430425022;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d10e208c55f06a087d29ee8430425022 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d10e208c55f06a087d29ee8430425022 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_phase );
        tmp_compexpr_left_1 = par_phase;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_T );
            tmp_source_name_1 = par_T;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_pos_1;
            tmp_left_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_2;
            tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_m == NULL );
            var_m = tmp_assign_source_3;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_phase );
            tmp_compexpr_left_2 = par_phase;
            tmp_compexpr_right_2 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 356;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
                PyObject *tmp_left_name_2;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_source_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_right_name_2;
                CHECK_OBJECT( par_T );
                tmp_source_name_2 = par_T;
                tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
                if ( tmp_subscribed_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 357;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_2 = const_int_pos_1;
                tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
                Py_DECREF( tmp_subscribed_name_2 );
                if ( tmp_left_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 357;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_2 = const_int_pos_1;
                tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_2 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 357;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_m == NULL );
                var_m = tmp_assign_source_4;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_b6bdef1b6fe434d2544f1e8891f43c1a;
                frame_d10e208c55f06a087d29ee8430425022->m_frame.f_lineno = 359;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 359;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_phase );
        tmp_compexpr_left_3 = par_phase;
        tmp_compexpr_right_3 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            // Tried code:
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_iter_arg_2;
                PyObject *tmp_xrange_low_1;
                PyObject *tmp_source_name_3;
                CHECK_OBJECT( par_basis );
                tmp_source_name_3 = par_basis;
                tmp_xrange_low_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_size );
                if ( tmp_xrange_low_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 370;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_iter_arg_2 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
                Py_DECREF( tmp_xrange_low_1 );
                if ( tmp_iter_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 370;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
                Py_DECREF( tmp_iter_arg_2 );
                if ( tmp_assign_source_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 370;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                assert( tmp_listcomp_1__$0 == NULL );
                tmp_listcomp_1__$0 = tmp_assign_source_6;
            }
            {
                PyObject *tmp_assign_source_7;
                tmp_assign_source_7 = PyList_New( 0 );
                assert( tmp_listcomp_1__contraction == NULL );
                tmp_listcomp_1__contraction = tmp_assign_source_7;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_117b38e6bae1dd20a977498af1cedca4_2, codeobj_117b38e6bae1dd20a977498af1cedca4, module_scipy$optimize$_linprog_simplex, sizeof(void *)+sizeof(void *)+sizeof(void *) );
            frame_117b38e6bae1dd20a977498af1cedca4_2 = cache_frame_117b38e6bae1dd20a977498af1cedca4_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_117b38e6bae1dd20a977498af1cedca4_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_117b38e6bae1dd20a977498af1cedca4_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_8;
                CHECK_OBJECT( tmp_listcomp_1__$0 );
                tmp_next_source_1 = tmp_listcomp_1__$0;
                tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
                if ( tmp_assign_source_8 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_1;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_2 = "ooo";
                        exception_lineno = 370;
                        goto try_except_handler_3;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_9;
                CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                tmp_assign_source_9 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_row;
                    outline_0_var_row = tmp_assign_source_9;
                    Py_INCREF( outline_0_var_row );
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_source_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_right_name_3;
                CHECK_OBJECT( par_basis );
                tmp_subscribed_name_3 = par_basis;
                CHECK_OBJECT( outline_0_var_row );
                tmp_subscript_name_3 = outline_0_var_row;
                tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 371;
                    type_description_2 = "ooo";
                    goto try_except_handler_3;
                }
                CHECK_OBJECT( par_T );
                tmp_source_name_4 = par_T;
                tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
                if ( tmp_subscribed_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );

                    exception_lineno = 371;
                    type_description_2 = "ooo";
                    goto try_except_handler_3;
                }
                tmp_subscript_name_4 = const_int_pos_1;
                tmp_left_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 1 );
                Py_DECREF( tmp_subscribed_name_4 );
                if ( tmp_left_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );

                    exception_lineno = 371;
                    type_description_2 = "ooo";
                    goto try_except_handler_3;
                }
                tmp_right_name_3 = const_int_pos_2;
                tmp_compexpr_right_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_left_name_3 );
                if ( tmp_compexpr_right_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );

                    exception_lineno = 371;
                    type_description_2 = "ooo";
                    goto try_except_handler_3;
                }
                tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                Py_DECREF( tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 371;
                    type_description_2 = "ooo";
                    goto try_except_handler_3;
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
                    PyObject *tmp_append_list_1;
                    PyObject *tmp_append_value_1;
                    CHECK_OBJECT( tmp_listcomp_1__contraction );
                    tmp_append_list_1 = tmp_listcomp_1__contraction;
                    CHECK_OBJECT( outline_0_var_row );
                    tmp_append_value_1 = outline_0_var_row;
                    assert( PyList_Check( tmp_append_list_1 ) );
                    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 370;
                        type_description_2 = "ooo";
                        goto try_except_handler_3;
                    }
                }
                branch_no_4:;
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 370;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_iter_arg_1 = tmp_listcomp_1__contraction;
            Py_INCREF( tmp_iter_arg_1 );
            goto try_return_handler_3;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_simplex$$$function_4__solve_simplex );
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
            Py_DECREF( tmp_listcomp_1__$0 );
            tmp_listcomp_1__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
            Py_DECREF( tmp_listcomp_1__contraction );
            tmp_listcomp_1__contraction = NULL;

            Py_XDECREF( tmp_listcomp_1__iter_value_0 );
            tmp_listcomp_1__iter_value_0 = NULL;

            goto frame_return_exit_2;
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
            RESTORE_FRAME_EXCEPTION( frame_117b38e6bae1dd20a977498af1cedca4_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_2:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_117b38e6bae1dd20a977498af1cedca4_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_2;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_117b38e6bae1dd20a977498af1cedca4_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_117b38e6bae1dd20a977498af1cedca4_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_117b38e6bae1dd20a977498af1cedca4_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_117b38e6bae1dd20a977498af1cedca4_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_117b38e6bae1dd20a977498af1cedca4_2,
                type_description_2,
                outline_0_var_row,
                par_basis,
                par_T
            );


            // Release cached frame.
            if ( frame_117b38e6bae1dd20a977498af1cedca4_2 == cache_frame_117b38e6bae1dd20a977498af1cedca4_2 )
            {
                Py_DECREF( frame_117b38e6bae1dd20a977498af1cedca4_2 );
            }
            cache_frame_117b38e6bae1dd20a977498af1cedca4_2 = NULL;

            assertFrameObject( frame_117b38e6bae1dd20a977498af1cedca4_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_simplex$$$function_4__solve_simplex );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            Py_XDECREF( outline_0_var_row );
            outline_0_var_row = NULL;

            goto outline_result_1;
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

            Py_XDECREF( outline_0_var_row );
            outline_0_var_row = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_simplex$$$function_4__solve_simplex );
            return NULL;
            outline_exception_1:;
            exception_lineno = 370;
            goto frame_exception_exit_1;
            outline_result_1:;
            tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 370;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_5;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_2 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 370;
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
                PyObject *old = var_pivrow;
                var_pivrow = tmp_assign_source_11;
                Py_INCREF( var_pivrow );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_12;
            // Tried code:
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_iter_arg_3;
                PyObject *tmp_xrange_low_2;
                PyObject *tmp_left_name_4;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_source_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_right_name_4;
                CHECK_OBJECT( par_T );
                tmp_source_name_5 = par_T;
                tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
                if ( tmp_subscribed_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 372;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_subscript_name_5 = const_int_pos_1;
                tmp_left_name_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 1 );
                Py_DECREF( tmp_subscribed_name_5 );
                if ( tmp_left_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 372;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_right_name_4 = const_int_pos_1;
                tmp_xrange_low_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_left_name_4 );
                if ( tmp_xrange_low_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 372;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_iter_arg_3 = BUILTIN_XRANGE1( tmp_xrange_low_2 );
                Py_DECREF( tmp_xrange_low_2 );
                if ( tmp_iter_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 372;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
                Py_DECREF( tmp_iter_arg_3 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 372;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                {
                    PyObject *old = tmp_listcomp_2__$0;
                    tmp_listcomp_2__$0 = tmp_assign_source_13;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_14;
                tmp_assign_source_14 = PyList_New( 0 );
                {
                    PyObject *old = tmp_listcomp_2__contraction;
                    tmp_listcomp_2__contraction = tmp_assign_source_14;
                    Py_XDECREF( old );
                }

            }
            MAKE_OR_REUSE_FRAME( cache_frame_3a8d8f605048fac917952638aa119180_3, codeobj_3a8d8f605048fac917952638aa119180, module_scipy$optimize$_linprog_simplex, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
            frame_3a8d8f605048fac917952638aa119180_3 = cache_frame_3a8d8f605048fac917952638aa119180_3;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_3a8d8f605048fac917952638aa119180_3 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_3a8d8f605048fac917952638aa119180_3 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_3:;
            {
                PyObject *tmp_next_source_3;
                PyObject *tmp_assign_source_15;
                CHECK_OBJECT( tmp_listcomp_2__$0 );
                tmp_next_source_3 = tmp_listcomp_2__$0;
                tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_3 );
                if ( tmp_assign_source_15 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_3;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_2 = "oooo";
                        exception_lineno = 372;
                        goto try_except_handler_6;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_2__iter_value_0;
                    tmp_listcomp_2__iter_value_0 = tmp_assign_source_15;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_16;
                CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
                tmp_assign_source_16 = tmp_listcomp_2__iter_value_0;
                {
                    PyObject *old = outline_1_var_col;
                    outline_1_var_col = tmp_assign_source_16;
                    Py_INCREF( outline_1_var_col );
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_called_name_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_subscript_name_6;
                PyObject *tmp_tuple_element_1;
                tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
                assert( tmp_called_name_1 != NULL );
                CHECK_OBJECT( par_T );
                tmp_subscribed_name_6 = par_T;
                CHECK_OBJECT( var_pivrow );
                tmp_tuple_element_1 = var_pivrow;
                tmp_subscript_name_6 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_subscript_name_6, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( outline_1_var_col );
                tmp_tuple_element_1 = outline_1_var_col;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_subscript_name_6, 1, tmp_tuple_element_1 );
                tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
                Py_DECREF( tmp_subscript_name_6 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 373;
                    type_description_2 = "oooo";
                    goto try_except_handler_6;
                }
                frame_3a8d8f605048fac917952638aa119180_3->m_frame.f_lineno = 373;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_compexpr_left_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_compexpr_left_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 373;
                    type_description_2 = "oooo";
                    goto try_except_handler_6;
                }
                CHECK_OBJECT( par_tol );
                tmp_compexpr_right_5 = par_tol;
                tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_left_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 373;
                    type_description_2 = "oooo";
                    goto try_except_handler_6;
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
                    PyObject *tmp_append_list_2;
                    PyObject *tmp_append_value_2;
                    CHECK_OBJECT( tmp_listcomp_2__contraction );
                    tmp_append_list_2 = tmp_listcomp_2__contraction;
                    CHECK_OBJECT( outline_1_var_col );
                    tmp_append_value_2 = outline_1_var_col;
                    assert( PyList_Check( tmp_append_list_2 ) );
                    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 372;
                        type_description_2 = "oooo";
                        goto try_except_handler_6;
                    }
                }
                branch_no_5:;
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 372;
                type_description_2 = "oooo";
                goto try_except_handler_6;
            }
            goto loop_start_3;
            loop_end_3:;
            CHECK_OBJECT( tmp_listcomp_2__contraction );
            tmp_assign_source_12 = tmp_listcomp_2__contraction;
            Py_INCREF( tmp_assign_source_12 );
            goto try_return_handler_6;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_simplex$$$function_4__solve_simplex );
            return NULL;
            // Return handler code:
            try_return_handler_6:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
            Py_DECREF( tmp_listcomp_2__$0 );
            tmp_listcomp_2__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
            Py_DECREF( tmp_listcomp_2__contraction );
            tmp_listcomp_2__contraction = NULL;

            Py_XDECREF( tmp_listcomp_2__iter_value_0 );
            tmp_listcomp_2__iter_value_0 = NULL;

            goto frame_return_exit_3;
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

            CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
            Py_DECREF( tmp_listcomp_2__$0 );
            tmp_listcomp_2__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
            Py_DECREF( tmp_listcomp_2__contraction );
            tmp_listcomp_2__contraction = NULL;

            Py_XDECREF( tmp_listcomp_2__iter_value_0 );
            tmp_listcomp_2__iter_value_0 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto frame_exception_exit_3;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_3a8d8f605048fac917952638aa119180_3 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_2;

            frame_return_exit_3:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_3a8d8f605048fac917952638aa119180_3 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_5;

            frame_exception_exit_3:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_3a8d8f605048fac917952638aa119180_3 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_3a8d8f605048fac917952638aa119180_3, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_3a8d8f605048fac917952638aa119180_3->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_3a8d8f605048fac917952638aa119180_3, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_3a8d8f605048fac917952638aa119180_3,
                type_description_2,
                outline_1_var_col,
                par_T,
                var_pivrow,
                par_tol
            );


            // Release cached frame.
            if ( frame_3a8d8f605048fac917952638aa119180_3 == cache_frame_3a8d8f605048fac917952638aa119180_3 )
            {
                Py_DECREF( frame_3a8d8f605048fac917952638aa119180_3 );
            }
            cache_frame_3a8d8f605048fac917952638aa119180_3 = NULL;

            assertFrameObject( frame_3a8d8f605048fac917952638aa119180_3 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_2;

            frame_no_exception_2:;
            goto skip_nested_handling_2;
            nested_frame_exit_2:;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
            skip_nested_handling_2:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_simplex$$$function_4__solve_simplex );
            return NULL;
            // Return handler code:
            try_return_handler_5:;
            Py_XDECREF( outline_1_var_col );
            outline_1_var_col = NULL;

            goto outline_result_2;
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

            Py_XDECREF( outline_1_var_col );
            outline_1_var_col = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto outline_exception_2;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_simplex$$$function_4__solve_simplex );
            return NULL;
            outline_exception_2:;
            exception_lineno = 372;
            goto try_except_handler_4;
            outline_result_2:;
            {
                PyObject *old = var_non_zero_row;
                var_non_zero_row = tmp_assign_source_12;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT( var_non_zero_row );
            tmp_len_arg_1 = var_non_zero_row;
            tmp_compexpr_left_6 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_compexpr_left_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 374;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_compexpr_right_6 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            Py_DECREF( tmp_compexpr_left_6 );
            assert( !(tmp_res == -1) );
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
                PyObject *tmp_assign_source_17;
                PyObject *tmp_subscribed_name_7;
                PyObject *tmp_subscript_name_7;
                CHECK_OBJECT( var_non_zero_row );
                tmp_subscribed_name_7 = var_non_zero_row;
                tmp_subscript_name_7 = const_int_0;
                tmp_assign_source_17 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
                if ( tmp_assign_source_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 375;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = var_pivcol;
                    var_pivcol = tmp_assign_source_17;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_args_element_name_5;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain__apply_pivot );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__apply_pivot );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_apply_pivot" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 376;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_2 = tmp_mvar_value_1;
                CHECK_OBJECT( par_T );
                tmp_args_element_name_2 = par_T;
                CHECK_OBJECT( par_basis );
                tmp_args_element_name_3 = par_basis;
                CHECK_OBJECT( var_pivrow );
                tmp_args_element_name_4 = var_pivrow;
                CHECK_OBJECT( var_pivcol );
                tmp_args_element_name_5 = var_pivcol;
                frame_d10e208c55f06a087d29ee8430425022->m_frame.f_lineno = 376;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 376;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            {
                PyObject *tmp_assign_source_18;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                if ( var_nit == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nit" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 377;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }

                tmp_left_name_5 = var_nit;
                tmp_right_name_5 = const_int_pos_1;
                tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 377;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_18 = tmp_left_name_5;
                var_nit = tmp_assign_source_18;

            }
            branch_no_6:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        goto try_end_1;
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
        try_end_1:;
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_basis );
        tmp_subscribed_name_8 = par_basis;
        tmp_start_name_1 = Py_None;
        if ( var_m == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_stop_name_1 = var_m;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_8 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_8 == NULL) );
        tmp_len_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        Py_DECREF( tmp_subscript_name_8 );
        if ( tmp_len_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_7 = BUILTIN_LEN( tmp_len_arg_2 );
        Py_DECREF( tmp_len_arg_2 );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_7 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
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
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_left_name_6;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_9;
            PyObject *tmp_right_name_6;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 380;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_2;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_zeros );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 380;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_T );
            tmp_source_name_7 = par_T;
            tmp_subscribed_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
            if ( tmp_subscribed_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 380;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_9 = const_int_pos_1;
            tmp_left_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_9, tmp_subscript_name_9, 1 );
            Py_DECREF( tmp_subscribed_name_9 );
            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 380;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_6 = const_int_pos_1;
            tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_6 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 380;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            tmp_dict_key_1 = const_str_plain_dtype;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 380;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_3;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_float64 );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 380;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_d10e208c55f06a087d29ee8430425022->m_frame.f_lineno = 380;
            tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 380;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_solution == NULL );
            var_solution = tmp_assign_source_19;
        }
        goto branch_end_7;
        branch_no_7:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_left_name_7;
            PyObject *tmp_subscribed_name_10;
            PyObject *tmp_source_name_10;
            PyObject *tmp_subscript_name_10;
            PyObject *tmp_right_name_7;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_left_name_8;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_subscribed_name_11;
            PyObject *tmp_subscript_name_11;
            PyObject *tmp_start_name_2;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_step_name_2;
            PyObject *tmp_right_name_8;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_source_name_11;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_4;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_zeros );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_5 != NULL );
            CHECK_OBJECT( par_T );
            tmp_source_name_10 = par_T;
            tmp_subscribed_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
            if ( tmp_subscribed_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_10 = const_int_pos_1;
            tmp_left_name_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_10, tmp_subscript_name_10, 1 );
            Py_DECREF( tmp_subscribed_name_10 );
            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_7 = const_int_pos_1;
            tmp_args_element_name_6 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_7 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_6 != NULL );
            CHECK_OBJECT( par_basis );
            tmp_subscribed_name_11 = par_basis;
            tmp_start_name_2 = Py_None;
            if ( var_m == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_6 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_stop_name_2 = var_m;
            tmp_step_name_2 = Py_None;
            tmp_subscript_name_11 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            assert( !(tmp_subscript_name_11 == NULL) );
            tmp_args_element_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
            Py_DECREF( tmp_subscript_name_11 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_6 );

                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d10e208c55f06a087d29ee8430425022->m_frame.f_lineno = 382;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_left_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_6 );

                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_8 = const_int_pos_1;
            tmp_args_element_name_7 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_8 );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_6 );

                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d10e208c55f06a087d29ee8430425022->m_frame.f_lineno = 382;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_6 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_2 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            tmp_dict_key_2 = const_str_plain_dtype;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 383;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_11 = tmp_mvar_value_5;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_float64 );
            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );

                exception_lineno = 383;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_d10e208c55f06a087d29ee8430425022->m_frame.f_lineno = 382;
            tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_solution == NULL );
            var_solution = tmp_assign_source_20;
        }
        branch_end_7:;
    }
    loop_start_4:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_operand_name_2;
        if ( var_complete == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "complete" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_2 = var_complete;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res == 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
        goto loop_end_4;
        branch_no_8:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain__pivot_col );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pivot_col );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_pivot_col" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 387;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_7 = tmp_mvar_value_6;
        CHECK_OBJECT( par_T );
        tmp_args_element_name_9 = par_T;
        CHECK_OBJECT( par_tol );
        tmp_args_element_name_10 = par_tol;
        CHECK_OBJECT( par_bland );
        tmp_args_element_name_11 = par_bland;
        frame_d10e208c55f06a087d29ee8430425022->m_frame.f_lineno = 387;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 387;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_22;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 387;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_23;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 387;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 387;
            goto try_except_handler_8;
        }
    }
    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_2:;
    goto try_end_3;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_24 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_pivcol_found;
            var_pivcol_found = tmp_assign_source_24;
            Py_INCREF( var_pivcol_found );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_25 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_pivcol;
            var_pivcol = tmp_assign_source_25;
            Py_INCREF( var_pivcol );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT( var_pivcol_found );
        tmp_operand_name_3 = var_pivcol_found;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_26;
            PyObject *tmp_source_name_12;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 389;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_12 = tmp_mvar_value_7;
            tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_nan );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 389;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_pivcol;
                assert( old != NULL );
                var_pivcol = tmp_assign_source_26;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_source_name_13;
            PyObject *tmp_mvar_value_8;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 390;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_13 = tmp_mvar_value_8;
            tmp_assign_source_27 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_nan );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 390;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_pivrow;
                var_pivrow = tmp_assign_source_27;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = const_int_0;
            {
                PyObject *old = par_status;
                par_status = tmp_assign_source_28;
                Py_INCREF( par_status );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = Py_True;
            {
                PyObject *old = var_complete;
                var_complete = tmp_assign_source_29;
                Py_INCREF( var_complete );
                Py_XDECREF( old );
            }

        }
        goto branch_end_9;
        branch_no_9:;
        // Tried code:
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain__pivot_row );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pivot_row );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_pivot_row" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 395;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }

            tmp_called_name_8 = tmp_mvar_value_9;
            CHECK_OBJECT( par_T );
            tmp_args_element_name_12 = par_T;
            CHECK_OBJECT( par_basis );
            tmp_args_element_name_13 = par_basis;
            CHECK_OBJECT( var_pivcol );
            tmp_args_element_name_14 = var_pivcol;
            CHECK_OBJECT( par_phase );
            tmp_args_element_name_15 = par_phase;
            CHECK_OBJECT( par_tol );
            tmp_args_element_name_16 = par_tol;
            CHECK_OBJECT( par_bland );
            tmp_args_element_name_17 = par_bland;
            frame_d10e208c55f06a087d29ee8430425022->m_frame.f_lineno = 395;
            {
                PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
                tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_8, call_args );
            }

            if ( tmp_iter_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 395;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            tmp_assign_source_30 = MAKE_ITERATOR( tmp_iter_arg_5 );
            Py_DECREF( tmp_iter_arg_5 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 395;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__source_iter;
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_30;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 395;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_1;
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_31;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_32 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 395;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_2;
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_32;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 395;
                        goto try_except_handler_10;
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

                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 395;
                goto try_except_handler_10;
            }
        }
        goto try_end_4;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        try_end_4:;
        goto try_end_5;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_1;
        // End of try:
        try_end_5:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_33;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_33 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_pivrow_found;
                var_pivrow_found = tmp_assign_source_33;
                Py_INCREF( var_pivrow_found );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_34;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_34 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_pivrow;
                var_pivrow = tmp_assign_source_34;
                Py_INCREF( var_pivrow );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_operand_name_4;
            CHECK_OBJECT( var_pivrow_found );
            tmp_operand_name_4 = var_pivrow_found;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 396;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
                PyObject *tmp_assign_source_35;
                tmp_assign_source_35 = const_int_pos_3;
                {
                    PyObject *old = par_status;
                    par_status = tmp_assign_source_35;
                    Py_INCREF( par_status );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_36;
                tmp_assign_source_36 = Py_True;
                {
                    PyObject *old = var_complete;
                    var_complete = tmp_assign_source_36;
                    Py_INCREF( var_complete );
                    Py_XDECREF( old );
                }

            }
            branch_no_10:;
        }
        branch_end_9:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT( par_callback );
        tmp_compexpr_left_8 = par_callback;
        tmp_compexpr_right_8 = Py_None;
        tmp_condition_result_11 = ( tmp_compexpr_left_8 != tmp_compexpr_right_8 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = const_int_0;
            CHECK_OBJECT( var_solution );
            tmp_ass_subscribed_1 = var_solution;
            tmp_ass_subscript_1 = const_slice_none_none_none;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 401;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_subscribed_name_12;
            PyObject *tmp_subscript_name_12;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_start_name_3;
            PyObject *tmp_stop_name_3;
            PyObject *tmp_step_name_3;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_subscribed_name_13;
            PyObject *tmp_subscript_name_13;
            PyObject *tmp_start_name_4;
            PyObject *tmp_stop_name_4;
            PyObject *tmp_step_name_4;
            CHECK_OBJECT( par_T );
            tmp_subscribed_name_12 = par_T;
            tmp_start_name_3 = Py_None;
            CHECK_OBJECT( par_n );
            tmp_stop_name_3 = par_n;
            tmp_step_name_3 = Py_None;
            tmp_tuple_element_4 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
            assert( !(tmp_tuple_element_4 == NULL) );
            tmp_subscript_name_12 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_subscript_name_12, 0, tmp_tuple_element_4 );
            tmp_tuple_element_4 = const_int_neg_1;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_subscript_name_12, 1, tmp_tuple_element_4 );
            tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
            Py_DECREF( tmp_subscript_name_12 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 402;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_solution );
            tmp_ass_subscribed_2 = var_solution;
            CHECK_OBJECT( par_basis );
            tmp_subscribed_name_13 = par_basis;
            tmp_start_name_4 = Py_None;
            CHECK_OBJECT( par_n );
            tmp_stop_name_4 = par_n;
            tmp_step_name_4 = Py_None;
            tmp_subscript_name_13 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
            assert( !(tmp_subscript_name_13 == NULL) );
            tmp_ass_subscript_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
            Py_DECREF( tmp_subscript_name_13 );
            if ( tmp_ass_subscript_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 402;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 402;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_subscribed_name_14;
            PyObject *tmp_subscript_name_14;
            PyObject *tmp_start_name_5;
            PyObject *tmp_stop_name_5;
            PyObject *tmp_step_name_5;
            CHECK_OBJECT( var_solution );
            tmp_subscribed_name_14 = var_solution;
            tmp_start_name_5 = Py_None;
            if ( var_m == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 403;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_stop_name_5 = var_m;
            tmp_step_name_5 = Py_None;
            tmp_subscript_name_14 = MAKE_SLICEOBJ3( tmp_start_name_5, tmp_stop_name_5, tmp_step_name_5 );
            assert( !(tmp_subscript_name_14 == NULL) );
            tmp_assign_source_37 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
            Py_DECREF( tmp_subscript_name_14 );
            if ( tmp_assign_source_37 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 403;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_x;
                var_x = tmp_assign_source_37;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT( par__T_o );
            tmp_iter_arg_6 = par__T_o;
            tmp_assign_source_38 = MAKE_ITERATOR( tmp_iter_arg_6 );
            if ( tmp_assign_source_38 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 404;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__source_iter;
                tmp_tuple_unpack_3__source_iter = tmp_assign_source_38;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_39 = UNPACK_NEXT( tmp_unpack_5, 0, 7 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 404;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__element_1;
                tmp_tuple_unpack_3__element_1 = tmp_assign_source_39;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_40 = UNPACK_NEXT( tmp_unpack_6, 1, 7 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 404;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__element_2;
                tmp_tuple_unpack_3__element_2 = tmp_assign_source_40;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_41 = UNPACK_NEXT( tmp_unpack_7, 2, 7 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 404;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__element_3;
                tmp_tuple_unpack_3__element_3 = tmp_assign_source_41;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_42 = UNPACK_NEXT( tmp_unpack_8, 3, 7 );
            if ( tmp_assign_source_42 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 404;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__element_4;
                tmp_tuple_unpack_3__element_4 = tmp_assign_source_42;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_43 = UNPACK_NEXT( tmp_unpack_9, 4, 7 );
            if ( tmp_assign_source_43 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 404;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__element_5;
                tmp_tuple_unpack_3__element_5 = tmp_assign_source_43;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_10 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_44 = UNPACK_NEXT( tmp_unpack_10, 5, 7 );
            if ( tmp_assign_source_44 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 404;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__element_6;
                tmp_tuple_unpack_3__element_6 = tmp_assign_source_44;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_11 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_45 = UNPACK_NEXT( tmp_unpack_11, 6, 7 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 404;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__element_7;
                tmp_tuple_unpack_3__element_7 = tmp_assign_source_45;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 404;
                        goto try_except_handler_12;
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

                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 404;
                goto try_except_handler_12;
            }
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        try_end_6:;
        goto try_end_7;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
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

        Py_XDECREF( tmp_tuple_unpack_3__element_6 );
        tmp_tuple_unpack_3__element_6 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_7 );
        tmp_tuple_unpack_3__element_7 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto frame_exception_exit_1;
        // End of try:
        try_end_7:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        {
            PyObject *tmp_assign_source_46;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_46 = tmp_tuple_unpack_3__element_1;
            {
                PyObject *old = var_c;
                var_c = tmp_assign_source_46;
                Py_INCREF( var_c );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_47;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_47 = tmp_tuple_unpack_3__element_2;
            {
                PyObject *old = var_A_ub;
                var_A_ub = tmp_assign_source_47;
                Py_INCREF( var_A_ub );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_assign_source_48;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
            tmp_assign_source_48 = tmp_tuple_unpack_3__element_3;
            {
                PyObject *old = var_b_ub;
                var_b_ub = tmp_assign_source_48;
                Py_INCREF( var_b_ub );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_3 );
        tmp_tuple_unpack_3__element_3 = NULL;

        {
            PyObject *tmp_assign_source_49;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_4 );
            tmp_assign_source_49 = tmp_tuple_unpack_3__element_4;
            {
                PyObject *old = var_A_eq;
                var_A_eq = tmp_assign_source_49;
                Py_INCREF( var_A_eq );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_4 );
        tmp_tuple_unpack_3__element_4 = NULL;

        {
            PyObject *tmp_assign_source_50;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_5 );
            tmp_assign_source_50 = tmp_tuple_unpack_3__element_5;
            {
                PyObject *old = var_b_eq;
                var_b_eq = tmp_assign_source_50;
                Py_INCREF( var_b_eq );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_5 );
        tmp_tuple_unpack_3__element_5 = NULL;

        {
            PyObject *tmp_assign_source_51;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_6 );
            tmp_assign_source_51 = tmp_tuple_unpack_3__element_6;
            {
                PyObject *old = var_bounds;
                var_bounds = tmp_assign_source_51;
                Py_INCREF( var_bounds );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_6 );
        tmp_tuple_unpack_3__element_6 = NULL;

        {
            PyObject *tmp_assign_source_52;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_7 );
            tmp_assign_source_52 = tmp_tuple_unpack_3__element_7;
            {
                PyObject *old = var_undo;
                var_undo = tmp_assign_source_52;
                Py_INCREF( var_undo );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_7 );
        tmp_tuple_unpack_3__element_7 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain__postsolve );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__postsolve );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_postsolve" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 405;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }

            tmp_called_name_9 = tmp_mvar_value_10;
            CHECK_OBJECT( var_x );
            tmp_tuple_element_5 = var_x;
            tmp_args_name_3 = PyTuple_New( 7 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( var_c );
            tmp_tuple_element_5 = var_c;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
            CHECK_OBJECT( var_A_ub );
            tmp_tuple_element_5 = var_A_ub;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 2, tmp_tuple_element_5 );
            CHECK_OBJECT( var_b_ub );
            tmp_tuple_element_5 = var_b_ub;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 3, tmp_tuple_element_5 );
            CHECK_OBJECT( var_A_eq );
            tmp_tuple_element_5 = var_A_eq;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 4, tmp_tuple_element_5 );
            CHECK_OBJECT( var_b_eq );
            tmp_tuple_element_5 = var_b_eq;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 5, tmp_tuple_element_5 );
            CHECK_OBJECT( var_bounds );
            tmp_tuple_element_5 = var_bounds;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 6, tmp_tuple_element_5 );
            tmp_dict_key_3 = const_str_plain_undo;
            CHECK_OBJECT( var_undo );
            tmp_dict_value_3 = var_undo;
            tmp_kw_name_3 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_4 = const_str_plain_tol;
            CHECK_OBJECT( par_tol );
            tmp_dict_value_4 = par_tol;
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            frame_d10e208c55f06a087d29ee8430425022->m_frame.f_lineno = 405;
            tmp_iter_arg_7 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_iter_arg_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 405;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            tmp_assign_source_53 = MAKE_ITERATOR( tmp_iter_arg_7 );
            Py_DECREF( tmp_iter_arg_7 );
            if ( tmp_assign_source_53 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 405;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_tuple_unpack_4__source_iter;
                tmp_tuple_unpack_4__source_iter = tmp_assign_source_53;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_unpack_12;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_12 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_54 = UNPACK_NEXT( tmp_unpack_12, 0, 6 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 405;
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_tuple_unpack_4__element_1;
                tmp_tuple_unpack_4__element_1 = tmp_assign_source_54;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_unpack_13;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_13 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_55 = UNPACK_NEXT( tmp_unpack_13, 1, 6 );
            if ( tmp_assign_source_55 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 405;
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_tuple_unpack_4__element_2;
                tmp_tuple_unpack_4__element_2 = tmp_assign_source_55;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_unpack_14;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_14 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_56 = UNPACK_NEXT( tmp_unpack_14, 2, 6 );
            if ( tmp_assign_source_56 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 405;
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_tuple_unpack_4__element_3;
                tmp_tuple_unpack_4__element_3 = tmp_assign_source_56;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_unpack_15;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_15 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_57 = UNPACK_NEXT( tmp_unpack_15, 3, 6 );
            if ( tmp_assign_source_57 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 405;
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_tuple_unpack_4__element_4;
                tmp_tuple_unpack_4__element_4 = tmp_assign_source_57;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_unpack_16;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_16 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_58 = UNPACK_NEXT( tmp_unpack_16, 4, 6 );
            if ( tmp_assign_source_58 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 405;
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_tuple_unpack_4__element_5;
                tmp_tuple_unpack_4__element_5 = tmp_assign_source_58;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_unpack_17;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_17 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_59 = UNPACK_NEXT( tmp_unpack_17, 5, 6 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 405;
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_tuple_unpack_4__element_6;
                tmp_tuple_unpack_4__element_6 = tmp_assign_source_59;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 405;
                        goto try_except_handler_14;
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

                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 405;
                goto try_except_handler_14;
            }
        }
        goto try_end_8;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
        Py_DECREF( tmp_tuple_unpack_4__source_iter );
        tmp_tuple_unpack_4__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        try_end_8:;
        goto try_end_9;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
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

        Py_XDECREF( tmp_tuple_unpack_4__element_4 );
        tmp_tuple_unpack_4__element_4 = NULL;

        Py_XDECREF( tmp_tuple_unpack_4__element_5 );
        tmp_tuple_unpack_4__element_5 = NULL;

        Py_XDECREF( tmp_tuple_unpack_4__element_6 );
        tmp_tuple_unpack_4__element_6 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto frame_exception_exit_1;
        // End of try:
        try_end_9:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
        Py_DECREF( tmp_tuple_unpack_4__source_iter );
        tmp_tuple_unpack_4__source_iter = NULL;

        {
            PyObject *tmp_assign_source_60;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
            tmp_assign_source_60 = tmp_tuple_unpack_4__element_1;
            {
                PyObject *old = var_x;
                assert( old != NULL );
                var_x = tmp_assign_source_60;
                Py_INCREF( var_x );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_4__element_1 );
        tmp_tuple_unpack_4__element_1 = NULL;

        {
            PyObject *tmp_assign_source_61;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
            tmp_assign_source_61 = tmp_tuple_unpack_4__element_2;
            {
                PyObject *old = var_fun;
                var_fun = tmp_assign_source_61;
                Py_INCREF( var_fun );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_4__element_2 );
        tmp_tuple_unpack_4__element_2 = NULL;

        {
            PyObject *tmp_assign_source_62;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_3 );
            tmp_assign_source_62 = tmp_tuple_unpack_4__element_3;
            {
                PyObject *old = var_slack;
                var_slack = tmp_assign_source_62;
                Py_INCREF( var_slack );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_4__element_3 );
        tmp_tuple_unpack_4__element_3 = NULL;

        {
            PyObject *tmp_assign_source_63;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_4 );
            tmp_assign_source_63 = tmp_tuple_unpack_4__element_4;
            {
                PyObject *old = var_con;
                var_con = tmp_assign_source_63;
                Py_INCREF( var_con );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_4__element_4 );
        tmp_tuple_unpack_4__element_4 = NULL;

        {
            PyObject *tmp_assign_source_64;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_5 );
            tmp_assign_source_64 = tmp_tuple_unpack_4__element_5;
            {
                PyObject *old = var__;
                var__ = tmp_assign_source_64;
                Py_INCREF( var__ );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_4__element_5 );
        tmp_tuple_unpack_4__element_5 = NULL;

        {
            PyObject *tmp_assign_source_65;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_6 );
            tmp_assign_source_65 = tmp_tuple_unpack_4__element_6;
            {
                PyObject *old = var__;
                assert( old != NULL );
                var__ = tmp_assign_source_65;
                Py_INCREF( var__ );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_4__element_6 );
        tmp_tuple_unpack_4__element_6 = NULL;

        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_element_name_18;
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
            int tmp_and_left_truth_1;
            PyObject *tmp_and_left_value_1;
            PyObject *tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_OptimizeResult );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeResult );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeResult" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 408;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_10 = tmp_mvar_value_11;
            tmp_dict_key_5 = const_str_plain_x;
            CHECK_OBJECT( var_x );
            tmp_dict_value_5 = var_x;
            tmp_args_element_name_18 = _PyDict_NewPresized( 10 );
            tmp_res = PyDict_SetItem( tmp_args_element_name_18, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_6 = const_str_plain_fun;
            CHECK_OBJECT( var_fun );
            tmp_dict_value_6 = var_fun;
            tmp_res = PyDict_SetItem( tmp_args_element_name_18, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_7 = const_str_plain_slack;
            CHECK_OBJECT( var_slack );
            tmp_dict_value_7 = var_slack;
            tmp_res = PyDict_SetItem( tmp_args_element_name_18, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_8 = const_str_plain_con;
            CHECK_OBJECT( var_con );
            tmp_dict_value_8 = var_con;
            tmp_res = PyDict_SetItem( tmp_args_element_name_18, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_9 = const_str_plain_status;
            if ( par_status == NULL )
            {
                Py_DECREF( tmp_args_element_name_18 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 413;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_9 = par_status;
            tmp_res = PyDict_SetItem( tmp_args_element_name_18, tmp_dict_key_9, tmp_dict_value_9 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_10 = const_str_plain_message;
            CHECK_OBJECT( par_message );
            tmp_dict_value_10 = par_message;
            tmp_res = PyDict_SetItem( tmp_args_element_name_18, tmp_dict_key_10, tmp_dict_value_10 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_11 = const_str_plain_nit;
            if ( var_nit == NULL )
            {
                Py_DECREF( tmp_args_element_name_18 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nit" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 415;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_11 = var_nit;
            tmp_res = PyDict_SetItem( tmp_args_element_name_18, tmp_dict_key_11, tmp_dict_value_11 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_12 = const_str_plain_success;
            if ( par_status == NULL )
            {
                Py_DECREF( tmp_args_element_name_18 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 416;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_9 = par_status;
            tmp_compexpr_right_9 = const_int_0;
            tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
            if ( tmp_and_left_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_18 );

                exception_lineno = 416;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
            if ( tmp_and_left_truth_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_18 );
                Py_DECREF( tmp_and_left_value_1 );

                exception_lineno = 416;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
            if ( var_complete == NULL )
            {
                Py_DECREF( tmp_args_element_name_18 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "complete" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 416;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_and_right_value_1 = var_complete;
            Py_INCREF( tmp_and_right_value_1 );
            tmp_dict_value_12 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_dict_value_12 = tmp_and_left_value_1;
            and_end_1:;
            tmp_res = PyDict_SetItem( tmp_args_element_name_18, tmp_dict_key_12, tmp_dict_value_12 );
            Py_DECREF( tmp_dict_value_12 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_13 = const_str_plain_phase;
            CHECK_OBJECT( par_phase );
            tmp_dict_value_13 = par_phase;
            tmp_res = PyDict_SetItem( tmp_args_element_name_18, tmp_dict_key_13, tmp_dict_value_13 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_14 = const_str_plain_complete;
            if ( var_complete == NULL )
            {
                Py_DECREF( tmp_args_element_name_18 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "complete" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 418;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_14 = var_complete;
            tmp_res = PyDict_SetItem( tmp_args_element_name_18, tmp_dict_key_14, tmp_dict_value_14 );
            assert( !(tmp_res != 0) );
            frame_d10e208c55f06a087d29ee8430425022->m_frame.f_lineno = 408;
            {
                PyObject *call_args[] = { tmp_args_element_name_18 };
                tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_args_element_name_18 );
            if ( tmp_assign_source_66 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 408;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_res;
                var_res = tmp_assign_source_66;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_11;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_19;
            CHECK_OBJECT( par_callback );
            tmp_called_name_11 = par_callback;
            CHECK_OBJECT( var_res );
            tmp_args_element_name_19 = var_res;
            frame_d10e208c55f06a087d29ee8430425022->m_frame.f_lineno = 420;
            {
                PyObject *call_args[] = { tmp_args_element_name_19 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 420;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_11:;
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_operand_name_5;
        if ( var_complete == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "complete" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 422;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_5 = var_complete;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            if ( var_nit == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nit" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 423;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_10 = var_nit;
            CHECK_OBJECT( par_maxiter );
            tmp_compexpr_right_10 = par_maxiter;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 423;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
                PyObject *tmp_assign_source_67;
                tmp_assign_source_67 = const_int_pos_1;
                {
                    PyObject *old = par_status;
                    par_status = tmp_assign_source_67;
                    Py_INCREF( par_status );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_68;
                tmp_assign_source_68 = Py_True;
                {
                    PyObject *old = var_complete;
                    var_complete = tmp_assign_source_68;
                    Py_INCREF( var_complete );
                    Py_XDECREF( old );
                }

            }
            goto branch_end_13;
            branch_no_13:;
            {
                PyObject *tmp_called_name_12;
                PyObject *tmp_mvar_value_12;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_20;
                PyObject *tmp_args_element_name_21;
                PyObject *tmp_args_element_name_22;
                PyObject *tmp_args_element_name_23;
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain__apply_pivot );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__apply_pivot );
                }

                if ( tmp_mvar_value_12 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_apply_pivot" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 428;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_12 = tmp_mvar_value_12;
                CHECK_OBJECT( par_T );
                tmp_args_element_name_20 = par_T;
                CHECK_OBJECT( par_basis );
                tmp_args_element_name_21 = par_basis;
                CHECK_OBJECT( var_pivrow );
                tmp_args_element_name_22 = var_pivrow;
                CHECK_OBJECT( var_pivcol );
                tmp_args_element_name_23 = var_pivcol;
                frame_d10e208c55f06a087d29ee8430425022->m_frame.f_lineno = 428;
                {
                    PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23 };
                    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_12, call_args );
                }

                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 428;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            {
                PyObject *tmp_assign_source_69;
                PyObject *tmp_left_name_9;
                PyObject *tmp_right_name_9;
                if ( var_nit == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nit" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 429;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_9 = var_nit;
                tmp_right_name_9 = const_int_pos_1;
                tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 429;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_69 = tmp_left_name_9;
                var_nit = tmp_assign_source_69;

            }
            branch_end_13:;
        }
        branch_no_12:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        type_description_1 = "oooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_4;
    loop_end_4:;
    {
        PyObject *tmp_tuple_element_6;
        if ( var_nit == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nit" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 430;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = var_nit;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
        if ( par_status == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 430;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = par_status;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d10e208c55f06a087d29ee8430425022 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d10e208c55f06a087d29ee8430425022 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d10e208c55f06a087d29ee8430425022 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d10e208c55f06a087d29ee8430425022, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d10e208c55f06a087d29ee8430425022->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d10e208c55f06a087d29ee8430425022, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d10e208c55f06a087d29ee8430425022,
        type_description_1,
        par_T,
        par_n,
        par_basis,
        par_maxiter,
        par_phase,
        par_status,
        par_message,
        par_callback,
        par_tol,
        par_nit0,
        par_bland,
        par__T_o,
        var_nit,
        var_complete,
        var_m,
        var_pivrow,
        var_non_zero_row,
        var_pivcol,
        var_solution,
        var_pivcol_found,
        var_pivrow_found,
        var_x,
        var_c,
        var_A_ub,
        var_b_ub,
        var_A_eq,
        var_b_eq,
        var_bounds,
        var_undo,
        var_fun,
        var_slack,
        var_con,
        var__,
        var_res
    );


    // Release cached frame.
    if ( frame_d10e208c55f06a087d29ee8430425022 == cache_frame_d10e208c55f06a087d29ee8430425022 )
    {
        Py_DECREF( frame_d10e208c55f06a087d29ee8430425022 );
    }
    cache_frame_d10e208c55f06a087d29ee8430425022 = NULL;

    assertFrameObject( frame_d10e208c55f06a087d29ee8430425022 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_simplex$$$function_4__solve_simplex );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_T );
    Py_DECREF( par_T );
    par_T = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_basis );
    Py_DECREF( par_basis );
    par_basis = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_phase );
    Py_DECREF( par_phase );
    par_phase = NULL;

    Py_XDECREF( par_status );
    par_status = NULL;

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_nit0 );
    Py_DECREF( par_nit0 );
    par_nit0 = NULL;

    CHECK_OBJECT( (PyObject *)par_bland );
    Py_DECREF( par_bland );
    par_bland = NULL;

    CHECK_OBJECT( (PyObject *)par__T_o );
    Py_DECREF( par__T_o );
    par__T_o = NULL;

    Py_XDECREF( var_nit );
    var_nit = NULL;

    Py_XDECREF( var_complete );
    var_complete = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_pivrow );
    var_pivrow = NULL;

    Py_XDECREF( var_non_zero_row );
    var_non_zero_row = NULL;

    Py_XDECREF( var_pivcol );
    var_pivcol = NULL;

    CHECK_OBJECT( (PyObject *)var_solution );
    Py_DECREF( var_solution );
    var_solution = NULL;

    Py_XDECREF( var_pivcol_found );
    var_pivcol_found = NULL;

    Py_XDECREF( var_pivrow_found );
    var_pivrow_found = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_A_ub );
    var_A_ub = NULL;

    Py_XDECREF( var_b_ub );
    var_b_ub = NULL;

    Py_XDECREF( var_A_eq );
    var_A_eq = NULL;

    Py_XDECREF( var_b_eq );
    var_b_eq = NULL;

    Py_XDECREF( var_bounds );
    var_bounds = NULL;

    Py_XDECREF( var_undo );
    var_undo = NULL;

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

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_T );
    Py_DECREF( par_T );
    par_T = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_basis );
    Py_DECREF( par_basis );
    par_basis = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_phase );
    Py_DECREF( par_phase );
    par_phase = NULL;

    Py_XDECREF( par_status );
    par_status = NULL;

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_nit0 );
    Py_DECREF( par_nit0 );
    par_nit0 = NULL;

    CHECK_OBJECT( (PyObject *)par_bland );
    Py_DECREF( par_bland );
    par_bland = NULL;

    CHECK_OBJECT( (PyObject *)par__T_o );
    Py_DECREF( par__T_o );
    par__T_o = NULL;

    Py_XDECREF( var_nit );
    var_nit = NULL;

    Py_XDECREF( var_complete );
    var_complete = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_pivrow );
    var_pivrow = NULL;

    Py_XDECREF( var_non_zero_row );
    var_non_zero_row = NULL;

    Py_XDECREF( var_pivcol );
    var_pivcol = NULL;

    Py_XDECREF( var_solution );
    var_solution = NULL;

    Py_XDECREF( var_pivcol_found );
    var_pivcol_found = NULL;

    Py_XDECREF( var_pivrow_found );
    var_pivrow_found = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_A_ub );
    var_A_ub = NULL;

    Py_XDECREF( var_b_ub );
    var_b_ub = NULL;

    Py_XDECREF( var_A_eq );
    var_A_eq = NULL;

    Py_XDECREF( var_b_eq );
    var_b_eq = NULL;

    Py_XDECREF( var_bounds );
    var_bounds = NULL;

    Py_XDECREF( var_undo );
    var_undo = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_simplex$$$function_4__solve_simplex );
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


static PyObject *impl_scipy$optimize$_linprog_simplex$$$function_5__linprog_simplex( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *par_maxiter = python_pars[ 4 ];
    PyObject *par_disp = python_pars[ 5 ];
    PyObject *par_callback = python_pars[ 6 ];
    PyObject *par_tol = python_pars[ 7 ];
    PyObject *par_bland = python_pars[ 8 ];
    PyObject *par__T_o = python_pars[ 9 ];
    PyObject *par_unknown_options = python_pars[ 10 ];
    PyObject *var_status = NULL;
    PyObject *var_messages = NULL;
    PyObject *var_n = NULL;
    PyObject *var_m = NULL;
    PyObject *var_is_negative_constraint = NULL;
    PyObject *var_av = NULL;
    PyObject *var_basis = NULL;
    PyObject *var_row_constraints = NULL;
    PyObject *var_row_objective = NULL;
    PyObject *var_row_pseudo_objective = NULL;
    PyObject *var_T = NULL;
    PyObject *var_nit1 = NULL;
    PyObject *var_nit2 = NULL;
    PyObject *var_solution = NULL;
    PyObject *var_x = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_90ed65691af57b7c2a5aa7f33e7eff8b;
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
    int tmp_res;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_90ed65691af57b7c2a5aa7f33e7eff8b = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_90ed65691af57b7c2a5aa7f33e7eff8b, codeobj_90ed65691af57b7c2a5aa7f33e7eff8b, module_scipy$optimize$_linprog_simplex, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_90ed65691af57b7c2a5aa7f33e7eff8b = cache_frame_90ed65691af57b7c2a5aa7f33e7eff8b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_90ed65691af57b7c2a5aa7f33e7eff8b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_90ed65691af57b7c2a5aa7f33e7eff8b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain__check_unknown_options );

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

            exception_lineno = 578;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_unknown_options );
        tmp_args_element_name_1 = par_unknown_options;
        frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 578;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 578;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_Copy( const_dict_44921f618d132521f8a14af9e8052142 );
        assert( var_messages == NULL );
        var_messages = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 588;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 588;
            type_description_1 = "oooooooooooooooooooooooooo";
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


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 588;
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


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 588;
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

                    type_description_1 = "oooooooooooooooooooooooooo";
                    exception_lineno = 588;
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

            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 588;
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
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_n = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_m = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 591;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_2 = par_b;
        tmp_args_element_name_3 = const_int_0;
        frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 591;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_less, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 591;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_is_negative_constraint == NULL );
        var_is_negative_constraint = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( par_A );
        tmp_assign_source_8 = par_A;
        assert( tmp_inplace_assign_subscr_1__target == NULL );
        Py_INCREF( tmp_assign_source_8 );
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( var_is_negative_constraint );
        tmp_assign_source_9 = var_is_negative_constraint;
        assert( tmp_inplace_assign_subscr_1__subscript == NULL );
        Py_INCREF( tmp_assign_source_9 );
        tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_1 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_subscript_name_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 592;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_1 = const_int_neg_1;
        tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 592;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_ass_subscript_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 592;
            type_description_1 = "oooooooooooooooooooooooooo";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
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
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( par_b );
        tmp_assign_source_10 = par_b;
        assert( tmp_inplace_assign_subscr_2__target == NULL );
        Py_INCREF( tmp_assign_source_10 );
        tmp_inplace_assign_subscr_2__target = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( var_is_negative_constraint );
        tmp_assign_source_11 = var_is_negative_constraint;
        assert( tmp_inplace_assign_subscr_2__subscript == NULL );
        Py_INCREF( tmp_assign_source_11 );
        tmp_inplace_assign_subscr_2__subscript = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
        tmp_subscribed_name_2 = tmp_inplace_assign_subscr_2__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
        tmp_subscript_name_2 = tmp_inplace_assign_subscr_2__subscript;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 593;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_name_2 = const_int_neg_1;
        tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 593;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
        tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_2__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
        tmp_ass_subscript_2 = tmp_inplace_assign_subscr_2__subscript;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 593;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
    tmp_inplace_assign_subscr_2__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
    tmp_inplace_assign_subscr_2__subscript = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_right_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 597;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_4 = var_n;
        frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 597;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_left_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_arange, call_args );
        }

        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 597;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_m );
        tmp_right_name_3 = var_m;
        tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 597;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_av == NULL );
        var_av = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_av );
        tmp_called_instance_3 = var_av;
        frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 598;
        tmp_assign_source_13 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_copy );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 598;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_basis == NULL );
        var_basis = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 602;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_hstack );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 602;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        tmp_args_element_name_5 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_1 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 602;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_5;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_6 = var_n;
        frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 602;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_eye, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 602;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_b );
        tmp_subscribed_name_3 = par_b;
        tmp_tuple_element_2 = const_slice_none_none_none;
        tmp_subscript_name_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_2 );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_subscript_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 602;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_6;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_newaxis );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_subscript_name_3 );

            exception_lineno = 602;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_2 );
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 602;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_5, 2, tmp_tuple_element_1 );
        frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 602;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 602;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_row_constraints == NULL );
        var_row_constraints = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 603;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_7;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_hstack );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 603;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c );
        tmp_tuple_element_3 = par_c;
        tmp_args_element_name_7 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_element_name_7, 0, tmp_tuple_element_3 );
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 603;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_8;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_8 = var_n;
        frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 603;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_tuple_element_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_zeros, call_args );
        }

        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 603;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_7, 1, tmp_tuple_element_3 );
        CHECK_OBJECT( par_c0 );
        tmp_tuple_element_3 = par_c0;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_element_name_7, 2, tmp_tuple_element_3 );
        frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 603;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 603;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_row_objective == NULL );
        var_row_objective = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( var_row_constraints );
        tmp_source_name_5 = var_row_constraints;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_sum );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 604;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
        frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 604;
        tmp_operand_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 604;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 604;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_row_pseudo_objective == NULL );
        var_row_pseudo_objective = tmp_assign_source_16;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = const_int_0;
        CHECK_OBJECT( var_row_pseudo_objective );
        tmp_ass_subscribed_3 = var_row_pseudo_objective;
        CHECK_OBJECT( var_av );
        tmp_ass_subscript_3 = var_av;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 605;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_tuple_element_4;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 606;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_9;
        CHECK_OBJECT( var_row_constraints );
        tmp_tuple_element_4 = var_row_constraints;
        tmp_args_element_name_9 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_element_name_9, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_row_objective );
        tmp_tuple_element_4 = var_row_objective;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_element_name_9, 1, tmp_tuple_element_4 );
        CHECK_OBJECT( var_row_pseudo_objective );
        tmp_tuple_element_4 = var_row_pseudo_objective;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_element_name_9, 2, tmp_tuple_element_4 );
        frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 606;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_vstack, call_args );
        }

        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 606;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_T == NULL );
        var_T = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kw_name_2;
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
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain__solve_simplex );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__solve_simplex );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_solve_simplex" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 608;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_5 = tmp_mvar_value_10;
        CHECK_OBJECT( var_T );
        tmp_tuple_element_5 = var_T;
        tmp_args_name_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_n );
        tmp_tuple_element_5 = var_n;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_5 );
        CHECK_OBJECT( var_basis );
        tmp_tuple_element_5 = var_basis;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_5 );
        tmp_dict_key_1 = const_str_plain_phase;
        tmp_dict_value_1 = const_int_pos_1;
        tmp_kw_name_2 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_callback;
        CHECK_OBJECT( par_callback );
        tmp_dict_value_2 = par_callback;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_maxiter;
        CHECK_OBJECT( par_maxiter );
        tmp_dict_value_3 = par_maxiter;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_tol;
        CHECK_OBJECT( par_tol );
        tmp_dict_value_4 = par_tol;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_bland;
        CHECK_OBJECT( par_bland );
        tmp_dict_value_5 = par_bland;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain__T_o;
        CHECK_OBJECT( par__T_o );
        tmp_dict_value_6 = par__T_o;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 608;
        tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 608;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 608;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 608;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 608;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_20;
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

                    type_description_1 = "oooooooooooooooooooooooooo";
                    exception_lineno = 608;
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

            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 608;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_21 = tmp_tuple_unpack_2__element_1;
        assert( var_nit1 == NULL );
        Py_INCREF( tmp_assign_source_21 );
        var_nit1 = tmp_assign_source_21;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_22 = tmp_tuple_unpack_2__element_2;
        assert( var_status == NULL );
        Py_INCREF( tmp_assign_source_22 );
        var_status = tmp_assign_source_22;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( var_nit1 );
        tmp_assign_source_23 = var_nit1;
        assert( var_nit2 == NULL );
        Py_INCREF( tmp_assign_source_23 );
        var_nit2 = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_6 != NULL );
        CHECK_OBJECT( var_T );
        tmp_subscribed_name_4 = var_T;
        tmp_subscript_name_4 = const_tuple_int_neg_1_int_neg_1_tuple;
        tmp_args_element_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 613;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 613;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 613;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_1 = par_tol;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 613;
            type_description_1 = "oooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_24;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( var_T );
            tmp_subscribed_name_5 = var_T;
            tmp_subscript_name_5 = const_tuple_slice_none_int_neg_1_none_slice_none_none_none_tuple;
            tmp_assign_source_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 615;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_T;
                assert( old != NULL );
                var_T = tmp_assign_source_24;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 617;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_7 = tmp_mvar_value_11;
            CHECK_OBJECT( var_T );
            tmp_args_element_name_11 = var_T;
            CHECK_OBJECT( var_av );
            tmp_args_element_name_12 = var_av;
            tmp_args_element_name_13 = const_int_pos_1;
            frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 617;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
                tmp_assign_source_25 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_7, const_str_plain_delete, call_args );
            }

            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 617;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_T;
                assert( old != NULL );
                var_T = tmp_assign_source_25;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = const_int_pos_2;
            {
                PyObject *old = var_status;
                assert( old != NULL );
                var_status = tmp_assign_source_26;
                Py_INCREF( var_status );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_args_element_name_16;
            tmp_source_name_6 = const_str_digest_e42fdf717adaad492d5e8d7b09aabe66;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_format );
            assert( !(tmp_called_name_7 == NULL) );
            tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_8 != NULL );
            CHECK_OBJECT( var_T );
            tmp_subscribed_name_6 = var_T;
            tmp_subscript_name_6 = const_tuple_int_neg_1_int_neg_1_tuple;
            tmp_args_element_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 628;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 628;
            {
                PyObject *call_args[] = { tmp_args_element_name_15 };
                tmp_args_element_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_args_element_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 628;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_tol );
            tmp_args_element_name_16 = par_tol;
            frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 622;
            {
                PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_16 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_14 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 622;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_messages );
            tmp_dictset_dict = var_messages;
            tmp_dictset_key = const_int_pos_2;
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        branch_end_1:;
    }
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


            exception_lineno = 631;
            type_description_1 = "oooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_27;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_3;
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
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain__solve_simplex );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__solve_simplex );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_solve_simplex" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 633;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_called_name_9 = tmp_mvar_value_12;
            CHECK_OBJECT( var_T );
            tmp_tuple_element_6 = var_T;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( var_n );
            tmp_tuple_element_6 = var_n;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_6 );
            CHECK_OBJECT( var_basis );
            tmp_tuple_element_6 = var_basis;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_6 );
            tmp_dict_key_7 = const_str_plain_maxiter;
            CHECK_OBJECT( par_maxiter );
            tmp_dict_value_7 = par_maxiter;
            tmp_kw_name_3 = _PyDict_NewPresized( 7 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_8 = const_str_plain_phase;
            tmp_dict_value_8 = const_int_pos_2;
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_9 = const_str_plain_callback;
            CHECK_OBJECT( par_callback );
            tmp_dict_value_9 = par_callback;
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_9, tmp_dict_value_9 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_10 = const_str_plain_tol;
            CHECK_OBJECT( par_tol );
            tmp_dict_value_10 = par_tol;
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_10, tmp_dict_value_10 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_11 = const_str_plain_nit0;
            CHECK_OBJECT( var_nit1 );
            tmp_dict_value_11 = var_nit1;
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_11, tmp_dict_value_11 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_12 = const_str_plain_bland;
            CHECK_OBJECT( par_bland );
            tmp_dict_value_12 = par_bland;
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_12, tmp_dict_value_12 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_13 = const_str_plain__T_o;
            CHECK_OBJECT( par__T_o );
            tmp_dict_value_13 = par__T_o;
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_13, tmp_dict_value_13 );
            assert( !(tmp_res != 0) );
            frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 633;
            tmp_iter_arg_3 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_2, tmp_kw_name_3 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 633;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 633;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_3__source_iter == NULL );
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_27;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_28 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooo";
                exception_lineno = 633;
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_3__element_1 == NULL );
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooo";
                exception_lineno = 633;
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_29;
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

                        type_description_1 = "oooooooooooooooooooooooooo";
                        exception_lineno = 633;
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

                type_description_1 = "oooooooooooooooooooooooooo";
                exception_lineno = 633;
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
                PyObject *old = var_nit2;
                assert( old != NULL );
                var_nit2 = tmp_assign_source_30;
                Py_INCREF( var_nit2 );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_31 = tmp_tuple_unpack_3__element_2;
            {
                PyObject *old = var_status;
                assert( old != NULL );
                var_status = tmp_assign_source_31;
                Py_INCREF( var_status );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 637;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_13;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_zeros );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 637;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_left_name_4 = var_n;
        CHECK_OBJECT( var_m );
        tmp_right_name_4 = var_m;
        tmp_args_element_name_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_args_element_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );

            exception_lineno = 637;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame.f_lineno = 637;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_17 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 637;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_solution == NULL );
        var_solution = tmp_assign_source_32;
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( var_T );
        tmp_subscribed_name_7 = var_T;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_n );
        tmp_stop_name_1 = var_n;
        tmp_step_name_1 = Py_None;
        tmp_tuple_element_7 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_tuple_element_7 == NULL) );
        tmp_subscript_name_7 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_7, 0, tmp_tuple_element_7 );
        tmp_tuple_element_7 = const_int_neg_1;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_subscript_name_7, 1, tmp_tuple_element_7 );
        tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        Py_DECREF( tmp_subscript_name_7 );
        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 638;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_solution );
        tmp_ass_subscribed_4 = var_solution;
        CHECK_OBJECT( var_basis );
        tmp_subscribed_name_8 = var_basis;
        tmp_start_name_2 = Py_None;
        CHECK_OBJECT( var_n );
        tmp_stop_name_2 = var_n;
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_8 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        assert( !(tmp_subscript_name_8 == NULL) );
        tmp_ass_subscript_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        Py_DECREF( tmp_subscript_name_8 );
        if ( tmp_ass_subscript_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_4 );

            exception_lineno = 638;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subscript_4 );
        Py_DECREF( tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 638;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_step_name_3;
        CHECK_OBJECT( var_solution );
        tmp_subscribed_name_9 = var_solution;
        tmp_start_name_3 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_3 = var_m;
        tmp_step_name_3 = Py_None;
        tmp_subscript_name_9 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        assert( !(tmp_subscript_name_9 == NULL) );
        tmp_assign_source_33 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        Py_DECREF( tmp_subscript_name_9 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 639;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_33;
    }
    {
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT( var_x );
        tmp_tuple_element_8 = var_x;
        tmp_return_value = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_8 );
        if ( var_status == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 641;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_8 = var_status;
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_8 );
        CHECK_OBJECT( var_messages );
        tmp_dict_name_1 = var_messages;
        if ( var_status == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 641;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_key_name_1 = var_status;
        tmp_tuple_element_8 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_tuple_element_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 641;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_8 );
        CHECK_OBJECT( var_nit2 );
        tmp_int_arg_1 = var_nit2;
        tmp_tuple_element_8 = PyNumber_Int( tmp_int_arg_1 );
        if ( tmp_tuple_element_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 641;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_8 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_90ed65691af57b7c2a5aa7f33e7eff8b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_90ed65691af57b7c2a5aa7f33e7eff8b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_90ed65691af57b7c2a5aa7f33e7eff8b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_90ed65691af57b7c2a5aa7f33e7eff8b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_90ed65691af57b7c2a5aa7f33e7eff8b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_90ed65691af57b7c2a5aa7f33e7eff8b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_90ed65691af57b7c2a5aa7f33e7eff8b,
        type_description_1,
        par_c,
        par_c0,
        par_A,
        par_b,
        par_maxiter,
        par_disp,
        par_callback,
        par_tol,
        par_bland,
        par__T_o,
        par_unknown_options,
        var_status,
        var_messages,
        var_n,
        var_m,
        var_is_negative_constraint,
        var_av,
        var_basis,
        var_row_constraints,
        var_row_objective,
        var_row_pseudo_objective,
        var_T,
        var_nit1,
        var_nit2,
        var_solution,
        var_x
    );


    // Release cached frame.
    if ( frame_90ed65691af57b7c2a5aa7f33e7eff8b == cache_frame_90ed65691af57b7c2a5aa7f33e7eff8b )
    {
        Py_DECREF( frame_90ed65691af57b7c2a5aa7f33e7eff8b );
    }
    cache_frame_90ed65691af57b7c2a5aa7f33e7eff8b = NULL;

    assertFrameObject( frame_90ed65691af57b7c2a5aa7f33e7eff8b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_simplex$$$function_5__linprog_simplex );
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

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_bland );
    Py_DECREF( par_bland );
    par_bland = NULL;

    CHECK_OBJECT( (PyObject *)par__T_o );
    Py_DECREF( par__T_o );
    par__T_o = NULL;

    CHECK_OBJECT( (PyObject *)par_unknown_options );
    Py_DECREF( par_unknown_options );
    par_unknown_options = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    CHECK_OBJECT( (PyObject *)var_messages );
    Py_DECREF( var_messages );
    var_messages = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_is_negative_constraint );
    Py_DECREF( var_is_negative_constraint );
    var_is_negative_constraint = NULL;

    CHECK_OBJECT( (PyObject *)var_av );
    Py_DECREF( var_av );
    var_av = NULL;

    CHECK_OBJECT( (PyObject *)var_basis );
    Py_DECREF( var_basis );
    var_basis = NULL;

    CHECK_OBJECT( (PyObject *)var_row_constraints );
    Py_DECREF( var_row_constraints );
    var_row_constraints = NULL;

    CHECK_OBJECT( (PyObject *)var_row_objective );
    Py_DECREF( var_row_objective );
    var_row_objective = NULL;

    CHECK_OBJECT( (PyObject *)var_row_pseudo_objective );
    Py_DECREF( var_row_pseudo_objective );
    var_row_pseudo_objective = NULL;

    CHECK_OBJECT( (PyObject *)var_T );
    Py_DECREF( var_T );
    var_T = NULL;

    CHECK_OBJECT( (PyObject *)var_nit1 );
    Py_DECREF( var_nit1 );
    var_nit1 = NULL;

    CHECK_OBJECT( (PyObject *)var_nit2 );
    Py_DECREF( var_nit2 );
    var_nit2 = NULL;

    CHECK_OBJECT( (PyObject *)var_solution );
    Py_DECREF( var_solution );
    var_solution = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_bland );
    Py_DECREF( par_bland );
    par_bland = NULL;

    CHECK_OBJECT( (PyObject *)par__T_o );
    Py_DECREF( par__T_o );
    par__T_o = NULL;

    CHECK_OBJECT( (PyObject *)par_unknown_options );
    Py_DECREF( par_unknown_options );
    par_unknown_options = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_messages );
    var_messages = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_is_negative_constraint );
    var_is_negative_constraint = NULL;

    Py_XDECREF( var_av );
    var_av = NULL;

    Py_XDECREF( var_basis );
    var_basis = NULL;

    Py_XDECREF( var_row_constraints );
    var_row_constraints = NULL;

    Py_XDECREF( var_row_objective );
    var_row_objective = NULL;

    Py_XDECREF( var_row_pseudo_objective );
    var_row_pseudo_objective = NULL;

    Py_XDECREF( var_T );
    var_T = NULL;

    Py_XDECREF( var_nit1 );
    var_nit1 = NULL;

    Py_XDECREF( var_nit2 );
    var_nit2 = NULL;

    Py_XDECREF( var_solution );
    var_solution = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_simplex$$$function_5__linprog_simplex );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_simplex$$$function_1__pivot_col( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_simplex$$$function_1__pivot_col,
        const_str_plain__pivot_col,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0679492954c3db73db002ee196c7b301,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_simplex,
        const_str_digest_9cbfa8b7132ac66bc997b7eccd7b375e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_simplex$$$function_2__pivot_row( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_simplex$$$function_2__pivot_row,
        const_str_plain__pivot_row,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_23fba1a56c4b542b9557186ade64a1e2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_simplex,
        const_str_digest_543183ab5fd942c9f88a78a377eb5d7f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_simplex$$$function_3__apply_pivot( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_simplex$$$function_3__apply_pivot,
        const_str_plain__apply_pivot,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d8fe53d69e82ebec3029ece2de556857,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_simplex,
        const_str_digest_28df139ffd98389e92deff60b024bf93,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_simplex$$$function_4__solve_simplex( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_simplex$$$function_4__solve_simplex,
        const_str_plain__solve_simplex,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d10e208c55f06a087d29ee8430425022,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_simplex,
        const_str_digest_492b88908fea8c379a9227b9836492d2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_simplex$$$function_5__linprog_simplex( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_simplex$$$function_5__linprog_simplex,
        const_str_plain__linprog_simplex,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_90ed65691af57b7c2a5aa7f33e7eff8b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_simplex,
        const_str_digest_491c0271a5573e19024ab6c4a820a2d7,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_linprog_simplex =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._linprog_simplex",
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

MOD_INIT_DECL( scipy$optimize$_linprog_simplex )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_linprog_simplex );
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
    puts("scipy.optimize._linprog_simplex: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._linprog_simplex: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._linprog_simplex: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_linprog_simplex" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_linprog_simplex = Py_InitModule4(
        "scipy.optimize._linprog_simplex",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_linprog_simplex = PyModule_Create( &mdef_scipy$optimize$_linprog_simplex );
#endif

    moduledict_scipy$optimize$_linprog_simplex = MODULE_DICT( module_scipy$optimize$_linprog_simplex );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_linprog_simplex,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_linprog_simplex,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_linprog_simplex,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_linprog_simplex,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_linprog_simplex );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_ea582001f1fc1b888c5e6e01dafa6ad4, module_scipy$optimize$_linprog_simplex );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_04c5d16486588cd112f636f7943f3f05;
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
        tmp_assign_source_1 = const_str_digest_1838af3a0e0eda5d546142ab643a55ae;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_04c5d16486588cd112f636f7943f3f05 = MAKE_MODULE_FRAME( codeobj_04c5d16486588cd112f636f7943f3f05, module_scipy$optimize$_linprog_simplex );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_04c5d16486588cd112f636f7943f3f05 );
    assert( Py_REFCNT( frame_04c5d16486588cd112f636f7943f3f05 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_linprog_simplex;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_04c5d16486588cd112f636f7943f3f05->m_frame.f_lineno = 31;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_warnings;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_linprog_simplex;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_warn_tuple;
        tmp_level_name_2 = const_int_0;
        frame_04c5d16486588cd112f636f7943f3f05->m_frame.f_lineno = 32;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_warn );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_warn, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_optimize;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_linprog_simplex;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_d8587a4d57dcbef9b379d4407e4c1033_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_04c5d16486588cd112f636f7943f3f05->m_frame.f_lineno = 33;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$optimize$_linprog_simplex,
                const_str_plain_OptimizeResult,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_OptimizeResult );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_OptimizeResult, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_scipy$optimize$_linprog_simplex,
                const_str_plain_OptimizeWarning,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_OptimizeWarning );
        }

        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain_OptimizeWarning, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$optimize$_linprog_simplex,
                const_str_plain__check_unknown_options,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain__check_unknown_options );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain__check_unknown_options, tmp_assign_source_9 );
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain__linprog_util;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$_linprog_simplex;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain__postsolve_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_04c5d16486588cd112f636f7943f3f05->m_frame.f_lineno = 34;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$optimize$_linprog_simplex,
                const_str_plain__postsolve,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain__postsolve );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain__postsolve, tmp_assign_source_10 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_04c5d16486588cd112f636f7943f3f05 );
#endif
    popFrameStack();

    assertFrameObject( frame_04c5d16486588cd112f636f7943f3f05 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_04c5d16486588cd112f636f7943f3f05 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_04c5d16486588cd112f636f7943f3f05, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_04c5d16486588cd112f636f7943f3f05->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_04c5d16486588cd112f636f7943f3f05, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_float_1eminus_12_false_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_11 = MAKE_FUNCTION_scipy$optimize$_linprog_simplex$$$function_1__pivot_col( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain__pivot_col, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_float_1eminus_12_false_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_12 = MAKE_FUNCTION_scipy$optimize$_linprog_simplex$$$function_2__pivot_row( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain__pivot_row, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_float_1eminus_12_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_13 = MAKE_FUNCTION_scipy$optimize$_linprog_simplex$$$function_3__apply_pivot( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain__apply_pivot, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_dcb54ca58c40eb77dcb956873cfc2ce4_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_14 = MAKE_FUNCTION_scipy$optimize$_linprog_simplex$$$function_4__solve_simplex( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain__solve_simplex, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = const_tuple_int_pos_1000_false_none_float_1eminus_12_false_none_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_assign_source_15 = MAKE_FUNCTION_scipy$optimize$_linprog_simplex$$$function_5__linprog_simplex( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain__linprog_simplex, tmp_assign_source_15 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_simplex, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_linprog_simplex );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
