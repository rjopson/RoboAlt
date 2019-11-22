/* Generated code for Python module 'scipy.linalg._decomp_ldl'
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

/* The "_module_scipy$linalg$_decomp_ldl" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$linalg$_decomp_ldl;
PyDictObject *moduledict_scipy$linalg$_decomp_ldl;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_ComplexWarning;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_tril;
extern PyObject *const_str_plain_zeros_like;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_a;
static PyObject *const_tuple_c79379c6dad126148071c9cda1bc4c82_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_neg_1;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
extern PyObject *const_str_plain_overwrite_a;
extern PyObject *const_str_plain_size;
static PyObject *const_tuple_782916ab8bb05006334ebe71374fb5f0_tuple;
extern PyObject *const_str_plain_perm;
static PyObject *const_str_plain_pivs;
extern PyObject *const_str_plain_check_finite;
static PyObject *const_str_plain_blk_i;
extern PyObject *const_tuple_int_pos_1_int_0_tuple;
static PyObject *const_str_plain_sytrf_lwork;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain_blk;
static PyObject *const_str_plain_hetrf_lwork;
static PyObject *const_str_digest_e6210dd69929f627ff2168179f3a0520;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_58a0042039176e012b8ae7c49af45776;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_dict_6ccf1996a79e7bc95b345c0d39aef510;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain__asarray_validated;
extern PyObject *const_str_plain_diag;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_plain_diag_inds;
static PyObject *const_str_plain_swap_;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_digest_f6f29c6b50b6331093334c2b4e89a8a1;
extern PyObject *const_str_plain_lu;
extern PyObject *const_str_plain_n;
static PyObject *const_str_plain_sytrf;
static PyObject *const_str_plain_swap_vec;
extern PyObject *const_str_plain_int;
static PyObject *const_str_plain__ldl_sanitize_ipiv;
extern PyObject *const_str_plain__compute_lwork;
extern PyObject *const_str_plain_float;
static PyObject *const_tuple_2f5c8ba9100f5bfa986f9f55e1d370db_tuple;
extern PyObject *const_str_plain_argsort;
static PyObject *const_tuple_b635fb73aaa849e0525f6af0fb8eea52_tuple;
extern PyObject *const_str_plain_imag;
extern PyObject *const_str_plain_rs;
extern PyObject *const_str_plain_arange;
static PyObject *const_str_plain_ldl;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple;
extern PyObject *const_str_plain_conj;
static PyObject *const_str_plain_col_e;
extern PyObject *const_str_plain_triu;
static PyObject *const_str_plain_col_s;
extern PyObject *const_str_plain_lapack;
static PyObject *const_str_digest_75cf62a8c925d241205a9887229b147c;
extern PyObject *const_str_plain_lwork;
extern PyObject *const_str_plain_decomp;
extern PyObject *const_str_plain_stacklevel;
static PyObject *const_str_digest_ca19b739225a884991e40cdd878b88a6;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_atleast_2d;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_upper;
static PyObject *const_str_digest_5c20a871bca34b20cf8d345767e3c116;
extern PyObject *const_tuple_int_0_int_pos_1_tuple;
static PyObject *const_str_plain_cur_val;
extern PyObject *const_str_plain_complex;
static PyObject *const_str_plain_pivots;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_ri;
static PyObject *const_str_digest_c508e56e57ebfd8d3feb5cb3e84bc362;
static PyObject *const_tuple_str_plain_hetrf_str_plain_hetrf_lwork_tuple;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_ind;
static PyObject *const_str_plain_hetrf;
extern PyObject *const_tuple_str_plain__asarray_validated_tuple;
extern PyObject *const_str_plain_empty_like;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_s_ind;
static PyObject *const_str_plain_ldu;
static PyObject *const_str_plain_skip_2x2;
extern PyObject *const_str_plain_hermitian;
extern PyObject *const_str_plain_inc;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_get_lapack_funcs;
extern PyObject *const_tuple_str_plain_get_lapack_funcs_str_plain__compute_lwork_tuple;
extern PyObject *const_str_plain_iscomplexobj;
extern PyObject *const_tuple_true_true_tuple;
static PyObject *const_str_digest_2d1c5ad67760b55bc5d9f5ab6d5a944a;
static PyObject *const_list_str_plain_ldl_list;
extern PyObject *const_str_plain_dtype;
static PyObject *const_tuple_str_plain_sytrf_str_plain_sytrf_lwork_tuple;
extern PyObject *const_tuple_list_empty_tuple;
extern PyObject *const_tuple_str_plain_warn_tuple;
static PyObject *const_str_plain__ldl_get_d_and_l;
extern PyObject *const_list_empty;
static PyObject *const_str_plain__ldl_construct_tri_factor;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_3cf50d89b5dc3f85ed7850a33dcf84d0;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_7083c0a2a6dbadb429c985be14d4d3ba;
static PyObject *const_tuple_true_true_false_true_tuple;
extern PyObject *const_str_plain_format;
static PyObject *const_str_digest_c4c1e809ce817a65f8dfc3797cad85e6;
static PyObject *const_str_plain_is_c;
extern PyObject *const_float_0_0;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_c79379c6dad126148071c9cda1bc4c82_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_c79379c6dad126148071c9cda1bc4c82_tuple, 0, const_str_plain_atleast_2d ); Py_INCREF( const_str_plain_atleast_2d );
    PyTuple_SET_ITEM( const_tuple_c79379c6dad126148071c9cda1bc4c82_tuple, 1, const_str_plain_ComplexWarning ); Py_INCREF( const_str_plain_ComplexWarning );
    PyTuple_SET_ITEM( const_tuple_c79379c6dad126148071c9cda1bc4c82_tuple, 2, const_str_plain_arange ); Py_INCREF( const_str_plain_arange );
    PyTuple_SET_ITEM( const_tuple_c79379c6dad126148071c9cda1bc4c82_tuple, 3, const_str_plain_zeros_like ); Py_INCREF( const_str_plain_zeros_like );
    PyTuple_SET_ITEM( const_tuple_c79379c6dad126148071c9cda1bc4c82_tuple, 4, const_str_plain_imag ); Py_INCREF( const_str_plain_imag );
    PyTuple_SET_ITEM( const_tuple_c79379c6dad126148071c9cda1bc4c82_tuple, 5, const_str_plain_diag ); Py_INCREF( const_str_plain_diag );
    PyTuple_SET_ITEM( const_tuple_c79379c6dad126148071c9cda1bc4c82_tuple, 6, const_str_plain_iscomplexobj ); Py_INCREF( const_str_plain_iscomplexobj );
    PyTuple_SET_ITEM( const_tuple_c79379c6dad126148071c9cda1bc4c82_tuple, 7, const_str_plain_tril ); Py_INCREF( const_str_plain_tril );
    PyTuple_SET_ITEM( const_tuple_c79379c6dad126148071c9cda1bc4c82_tuple, 8, const_str_plain_triu ); Py_INCREF( const_str_plain_triu );
    PyTuple_SET_ITEM( const_tuple_c79379c6dad126148071c9cda1bc4c82_tuple, 9, const_str_plain_argsort ); Py_INCREF( const_str_plain_argsort );
    PyTuple_SET_ITEM( const_tuple_c79379c6dad126148071c9cda1bc4c82_tuple, 10, const_str_plain_empty_like ); Py_INCREF( const_str_plain_empty_like );
    const_tuple_782916ab8bb05006334ebe71374fb5f0_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_782916ab8bb05006334ebe71374fb5f0_tuple, 0, const_str_plain_lu ); Py_INCREF( const_str_plain_lu );
    const_str_plain_swap_vec = UNSTREAM_STRING_ASCII( &constant_bin[ 4467605 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_782916ab8bb05006334ebe71374fb5f0_tuple, 1, const_str_plain_swap_vec ); Py_INCREF( const_str_plain_swap_vec );
    const_str_plain_pivs = UNSTREAM_STRING_ASCII( &constant_bin[ 4467613 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_782916ab8bb05006334ebe71374fb5f0_tuple, 2, const_str_plain_pivs ); Py_INCREF( const_str_plain_pivs );
    PyTuple_SET_ITEM( const_tuple_782916ab8bb05006334ebe71374fb5f0_tuple, 3, const_str_plain_lower ); Py_INCREF( const_str_plain_lower );
    PyTuple_SET_ITEM( const_tuple_782916ab8bb05006334ebe71374fb5f0_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_782916ab8bb05006334ebe71374fb5f0_tuple, 5, const_str_plain_perm ); Py_INCREF( const_str_plain_perm );
    PyTuple_SET_ITEM( const_tuple_782916ab8bb05006334ebe71374fb5f0_tuple, 6, const_str_plain_rs ); Py_INCREF( const_str_plain_rs );
    PyTuple_SET_ITEM( const_tuple_782916ab8bb05006334ebe71374fb5f0_tuple, 7, const_str_plain_re ); Py_INCREF( const_str_plain_re );
    PyTuple_SET_ITEM( const_tuple_782916ab8bb05006334ebe71374fb5f0_tuple, 8, const_str_plain_ri ); Py_INCREF( const_str_plain_ri );
    PyTuple_SET_ITEM( const_tuple_782916ab8bb05006334ebe71374fb5f0_tuple, 9, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    const_str_plain_s_ind = UNSTREAM_STRING_ASCII( &constant_bin[ 1326988 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_782916ab8bb05006334ebe71374fb5f0_tuple, 10, const_str_plain_s_ind ); Py_INCREF( const_str_plain_s_ind );
    const_str_plain_col_s = UNSTREAM_STRING_ASCII( &constant_bin[ 871142 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_782916ab8bb05006334ebe71374fb5f0_tuple, 11, const_str_plain_col_s ); Py_INCREF( const_str_plain_col_s );
    const_str_plain_col_e = UNSTREAM_STRING_ASCII( &constant_bin[ 4467617 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_782916ab8bb05006334ebe71374fb5f0_tuple, 12, const_str_plain_col_e ); Py_INCREF( const_str_plain_col_e );
    const_str_plain_blk_i = UNSTREAM_STRING_ASCII( &constant_bin[ 4467622 ], 5, 1 );
    const_str_plain_sytrf_lwork = UNSTREAM_STRING_ASCII( &constant_bin[ 4467627 ], 11, 1 );
    const_str_plain_hetrf_lwork = UNSTREAM_STRING_ASCII( &constant_bin[ 4467638 ], 11, 1 );
    const_str_digest_e6210dd69929f627ff2168179f3a0520 = UNSTREAM_STRING_ASCII( &constant_bin[ 4467649 ], 1163, 0 );
    const_str_digest_58a0042039176e012b8ae7c49af45776 = UNSTREAM_STRING_ASCII( &constant_bin[ 4468812 ], 665, 0 );
    const_str_plain_diag_inds = UNSTREAM_STRING_ASCII( &constant_bin[ 4469477 ], 9, 1 );
    const_str_plain_swap_ = UNSTREAM_STRING_ASCII( &constant_bin[ 4467605 ], 5, 1 );
    const_str_digest_f6f29c6b50b6331093334c2b4e89a8a1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4469486 ], 3911, 0 );
    const_str_plain_sytrf = UNSTREAM_STRING_ASCII( &constant_bin[ 4467627 ], 5, 1 );
    const_str_plain__ldl_sanitize_ipiv = UNSTREAM_STRING_ASCII( &constant_bin[ 4468402 ], 18, 1 );
    const_tuple_2f5c8ba9100f5bfa986f9f55e1d370db_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4473397 ], 150 );
    const_tuple_b635fb73aaa849e0525f6af0fb8eea52_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_b635fb73aaa849e0525f6af0fb8eea52_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_b635fb73aaa849e0525f6af0fb8eea52_tuple, 1, const_str_plain_lower ); Py_INCREF( const_str_plain_lower );
    PyTuple_SET_ITEM( const_tuple_b635fb73aaa849e0525f6af0fb8eea52_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_b635fb73aaa849e0525f6af0fb8eea52_tuple, 3, const_str_plain_swap_ ); Py_INCREF( const_str_plain_swap_ );
    const_str_plain_pivots = UNSTREAM_STRING_ASCII( &constant_bin[ 4463744 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_b635fb73aaa849e0525f6af0fb8eea52_tuple, 4, const_str_plain_pivots ); Py_INCREF( const_str_plain_pivots );
    const_str_plain_skip_2x2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4473547 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_b635fb73aaa849e0525f6af0fb8eea52_tuple, 5, const_str_plain_skip_2x2 ); Py_INCREF( const_str_plain_skip_2x2 );
    PyTuple_SET_ITEM( const_tuple_b635fb73aaa849e0525f6af0fb8eea52_tuple, 6, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_b635fb73aaa849e0525f6af0fb8eea52_tuple, 7, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_b635fb73aaa849e0525f6af0fb8eea52_tuple, 8, const_str_plain_rs ); Py_INCREF( const_str_plain_rs );
    PyTuple_SET_ITEM( const_tuple_b635fb73aaa849e0525f6af0fb8eea52_tuple, 9, const_str_plain_re ); Py_INCREF( const_str_plain_re );
    PyTuple_SET_ITEM( const_tuple_b635fb73aaa849e0525f6af0fb8eea52_tuple, 10, const_str_plain_ri ); Py_INCREF( const_str_plain_ri );
    PyTuple_SET_ITEM( const_tuple_b635fb73aaa849e0525f6af0fb8eea52_tuple, 11, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    const_str_plain_cur_val = UNSTREAM_STRING_ASCII( &constant_bin[ 4473555 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_b635fb73aaa849e0525f6af0fb8eea52_tuple, 12, const_str_plain_cur_val ); Py_INCREF( const_str_plain_cur_val );
    const_str_plain_ldl = UNSTREAM_STRING_ASCII( &constant_bin[ 59786 ], 3, 1 );
    const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple = PyTuple_New( 14 );
    const_str_plain_ldu = UNSTREAM_STRING_ASCII( &constant_bin[ 3318939 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple, 0, const_str_plain_ldu ); Py_INCREF( const_str_plain_ldu );
    PyTuple_SET_ITEM( const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple, 1, const_str_plain_pivs ); Py_INCREF( const_str_plain_pivs );
    PyTuple_SET_ITEM( const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple, 2, const_str_plain_lower ); Py_INCREF( const_str_plain_lower );
    PyTuple_SET_ITEM( const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple, 3, const_str_plain_hermitian ); Py_INCREF( const_str_plain_hermitian );
    const_str_plain_is_c = UNSTREAM_STRING_ASCII( &constant_bin[ 93495 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple, 4, const_str_plain_is_c ); Py_INCREF( const_str_plain_is_c );
    PyTuple_SET_ITEM( const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple, 5, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple, 6, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple, 7, const_str_plain_blk_i ); Py_INCREF( const_str_plain_blk_i );
    PyTuple_SET_ITEM( const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple, 8, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple, 9, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple, 10, const_str_plain_lu ); Py_INCREF( const_str_plain_lu );
    PyTuple_SET_ITEM( const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple, 11, const_str_plain_diag_inds ); Py_INCREF( const_str_plain_diag_inds );
    PyTuple_SET_ITEM( const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple, 12, const_str_plain_blk ); Py_INCREF( const_str_plain_blk );
    PyTuple_SET_ITEM( const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple, 13, const_str_plain_inc ); Py_INCREF( const_str_plain_inc );
    const_str_digest_75cf62a8c925d241205a9887229b147c = UNSTREAM_STRING_ASCII( &constant_bin[ 4473562 ], 37, 0 );
    const_str_digest_ca19b739225a884991e40cdd878b88a6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4473599 ], 1668, 0 );
    const_str_digest_5c20a871bca34b20cf8d345767e3c116 = UNSTREAM_STRING_ASCII( &constant_bin[ 4475267 ], 118, 0 );
    const_str_digest_c508e56e57ebfd8d3feb5cb3e84bc362 = UNSTREAM_STRING_ASCII( &constant_bin[ 4475385 ], 27, 0 );
    const_tuple_str_plain_hetrf_str_plain_hetrf_lwork_tuple = PyTuple_New( 2 );
    const_str_plain_hetrf = UNSTREAM_STRING_ASCII( &constant_bin[ 4467638 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hetrf_str_plain_hetrf_lwork_tuple, 0, const_str_plain_hetrf ); Py_INCREF( const_str_plain_hetrf );
    PyTuple_SET_ITEM( const_tuple_str_plain_hetrf_str_plain_hetrf_lwork_tuple, 1, const_str_plain_hetrf_lwork ); Py_INCREF( const_str_plain_hetrf_lwork );
    const_str_digest_2d1c5ad67760b55bc5d9f5ab6d5a944a = UNSTREAM_STRING_ASCII( &constant_bin[ 4475412 ], 33, 0 );
    const_list_str_plain_ldl_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_ldl_list, 0, const_str_plain_ldl ); Py_INCREF( const_str_plain_ldl );
    const_tuple_str_plain_sytrf_str_plain_sytrf_lwork_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sytrf_str_plain_sytrf_lwork_tuple, 0, const_str_plain_sytrf ); Py_INCREF( const_str_plain_sytrf );
    PyTuple_SET_ITEM( const_tuple_str_plain_sytrf_str_plain_sytrf_lwork_tuple, 1, const_str_plain_sytrf_lwork ); Py_INCREF( const_str_plain_sytrf_lwork );
    const_str_plain__ldl_get_d_and_l = UNSTREAM_STRING_ASCII( &constant_bin[ 4475445 ], 16, 1 );
    const_str_plain__ldl_construct_tri_factor = UNSTREAM_STRING_ASCII( &constant_bin[ 4475461 ], 25, 1 );
    const_str_digest_3cf50d89b5dc3f85ed7850a33dcf84d0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4475420 ], 24, 0 );
    const_str_digest_7083c0a2a6dbadb429c985be14d4d3ba = UNSTREAM_STRING_ASCII( &constant_bin[ 4475486 ], 110, 0 );
    const_tuple_true_true_false_true_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_true_true_false_true_tuple, 0, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_true_true_false_true_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_true_true_false_true_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_true_true_false_true_tuple, 3, Py_True ); Py_INCREF( Py_True );
    const_str_digest_c4c1e809ce817a65f8dfc3797cad85e6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4475596 ], 135, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$linalg$_decomp_ldl( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_841a88013c52cbff58ee51c15900c52c;
static PyCodeObject *codeobj_1aea72887730b4978b8e78f8c319a1b3;
static PyCodeObject *codeobj_a778b1701068072f28e0b25ca07612e7;
static PyCodeObject *codeobj_8f154d3d14c31413e195b7cbb172c58b;
static PyCodeObject *codeobj_7c91a8ee31b48b2aa5fdc5714191ce4e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_c508e56e57ebfd8d3feb5cb3e84bc362 );
    codeobj_841a88013c52cbff58ee51c15900c52c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2d1c5ad67760b55bc5d9f5ab6d5a944a, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_1aea72887730b4978b8e78f8c319a1b3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ldl_construct_tri_factor, 300, const_tuple_782916ab8bb05006334ebe71374fb5f0_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a778b1701068072f28e0b25ca07612e7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ldl_get_d_and_l, 244, const_tuple_f42d0e2d08d1cba7f8313b5d60dbc578_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8f154d3d14c31413e195b7cbb172c58b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ldl_sanitize_ipiv, 159, const_tuple_b635fb73aaa849e0525f6af0fb8eea52_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7c91a8ee31b48b2aa5fdc5714191ce4e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ldl, 14, const_tuple_2f5c8ba9100f5bfa986f9f55e1d370db_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$linalg$_decomp_ldl$$$function_1_ldl( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$linalg$_decomp_ldl$$$function_2__ldl_sanitize_ipiv( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$linalg$_decomp_ldl$$$function_3__ldl_get_d_and_l( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$linalg$_decomp_ldl$$$function_4__ldl_construct_tri_factor( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$linalg$_decomp_ldl$$$function_1_ldl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_lower = python_pars[ 1 ];
    PyObject *par_hermitian = python_pars[ 2 ];
    PyObject *par_overwrite_a = python_pars[ 3 ];
    PyObject *par_check_finite = python_pars[ 4 ];
    PyObject *var_a = NULL;
    PyObject *var_n = NULL;
    PyObject *var_r_or_c = NULL;
    PyObject *var_s = NULL;
    PyObject *var_sl = NULL;
    PyObject *var_solver = NULL;
    PyObject *var_solver_lwork = NULL;
    PyObject *var_lwork = NULL;
    PyObject *var_ldu = NULL;
    PyObject *var_piv = NULL;
    PyObject *var_info = NULL;
    PyObject *var_swap_arr = NULL;
    PyObject *var_pivot_arr = NULL;
    PyObject *var_d = NULL;
    PyObject *var_lu = NULL;
    PyObject *var_perm = NULL;
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
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
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
    struct Nuitka_FrameObject *frame_7c91a8ee31b48b2aa5fdc5714191ce4e;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_7c91a8ee31b48b2aa5fdc5714191ce4e = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7c91a8ee31b48b2aa5fdc5714191ce4e, codeobj_7c91a8ee31b48b2aa5fdc5714191ce4e, module_scipy$linalg$_decomp_ldl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7c91a8ee31b48b2aa5fdc5714191ce4e = cache_frame_7c91a8ee31b48b2aa5fdc5714191ce4e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7c91a8ee31b48b2aa5fdc5714191ce4e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7c91a8ee31b48b2aa5fdc5714191ce4e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_atleast_2d );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_2d );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "atleast_2d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain__asarray_validated );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__asarray_validated );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_asarray_validated" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_check_finite;
        CHECK_OBJECT( par_check_finite );
        tmp_dict_value_1 = par_check_finite;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 123;
        tmp_args_element_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_a == NULL );
        var_a = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_a );
        tmp_source_name_1 = var_a;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_a );
        tmp_source_name_2 = var_a;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_compexpr_right_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_75cf62a8c925d241205a9887229b147c;
            frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 125;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 125;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( var_a );
        tmp_source_name_3 = var_a;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_size );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooooooo";
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
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_name_2;
            PyObject *tmp_kw_name_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_empty_like );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_empty_like );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "empty_like" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 128;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_a );
            tmp_args_element_name_2 = var_a;
            frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 128;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_empty_like );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_empty_like );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_return_value );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "empty_like" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 128;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            CHECK_OBJECT( var_a );
            tmp_args_element_name_3 = var_a;
            frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 128;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 128;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 128;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_5;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_array );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 128;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_2 = DEEP_COPY( const_tuple_list_empty_tuple );
            tmp_kw_name_2 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
            frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 128;
            tmp_tuple_element_2 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 128;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_a );
        tmp_source_name_5 = var_a;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_iscomplexobj );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iscomplexobj );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "iscomplexobj" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        CHECK_OBJECT( var_a );
        tmp_args_element_name_4 = var_a;
        frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_3 = (PyObject *)&PyComplex_Type;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_3 = (PyObject *)&PyFloat_Type;
        condexpr_end_1:;
        assert( var_r_or_c == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_r_or_c = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_r_or_c );
        tmp_compexpr_left_3 = var_r_or_c;
        tmp_compexpr_right_3 = (PyObject *)&PyComplex_Type;
        tmp_and_left_value_1 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_hermitian );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_hermitian );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = const_tuple_str_plain_hetrf_str_plain_hetrf_lwork_tuple;
            tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
            assert( !(tmp_assign_source_4 == NULL) );
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
        }
        // Tried code:
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


                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 135;
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


                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 135;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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
            assert( var_s == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_s = tmp_assign_source_7;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
            assert( var_sl == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_sl = tmp_assign_source_8;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_7;
            int tmp_truth_name_3;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 136;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_7;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_any );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_imag );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_imag );
            }

            if ( tmp_mvar_value_8 == NULL )
            {
                Py_DECREF( tmp_called_name_7 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "imag" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 136;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_8 = tmp_mvar_value_8;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_diag );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diag );
            }

            if ( tmp_mvar_value_9 == NULL )
            {
                Py_DECREF( tmp_called_name_7 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "diag" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 136;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_9 = tmp_mvar_value_9;
            CHECK_OBJECT( var_a );
            tmp_args_element_name_7 = var_a;
            frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 136;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 136;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 136;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 136;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 136;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 136;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
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
                PyObject *tmp_called_name_10;
                PyObject *tmp_mvar_value_10;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_name_3;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_mvar_value_11;
                PyObject *tmp_kw_name_3;
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_warn );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 137;
                    type_description_1 = "ooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_10 = tmp_mvar_value_10;
                tmp_tuple_element_3 = const_str_digest_c4c1e809ce817a65f8dfc3797cad85e6;
                tmp_args_name_3 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_ComplexWarning );

                if (unlikely( tmp_mvar_value_11 == NULL ))
                {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ComplexWarning );
                }

                if ( tmp_mvar_value_11 == NULL )
                {
                    Py_DECREF( tmp_args_name_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ComplexWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 139;
                    type_description_1 = "ooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_3 = tmp_mvar_value_11;
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
                tmp_kw_name_3 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
                frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 137;
                tmp_call_result_3 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_3, tmp_kw_name_3 );
                Py_DECREF( tmp_args_name_3 );
                Py_DECREF( tmp_kw_name_3 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 137;
                    type_description_1 = "ooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            branch_no_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_2;
            tmp_iter_arg_2 = const_tuple_str_plain_sytrf_str_plain_sytrf_lwork_tuple;
            tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
            assert( !(tmp_assign_source_9 == NULL) );
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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
                exception_lineno = 141;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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
                exception_lineno = 141;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
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
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
            assert( var_s == NULL );
            Py_INCREF( tmp_assign_source_12 );
            var_s = tmp_assign_source_12;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
            assert( var_sl == NULL );
            Py_INCREF( tmp_assign_source_13 );
            var_sl = tmp_assign_source_13;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        branch_end_3:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_tuple_element_5;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_lapack_funcs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_11 = tmp_mvar_value_12;
        CHECK_OBJECT( var_s );
        tmp_tuple_element_4 = var_s;
        tmp_args_element_name_8 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_element_name_8, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_sl );
        tmp_tuple_element_4 = var_sl;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_element_name_8, 1, tmp_tuple_element_4 );
        CHECK_OBJECT( var_a );
        tmp_tuple_element_5 = var_a;
        tmp_args_element_name_9 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_element_name_9, 0, tmp_tuple_element_5 );
        frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 143;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_3__source_iter == NULL );
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 143;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_1 == NULL );
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 143;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_2 == NULL );
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_3__source_iter;
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
                    exception_lineno = 143;
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

            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 143;
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
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_17 = tmp_tuple_unpack_3__element_1;
        assert( var_solver == NULL );
        Py_INCREF( tmp_assign_source_17 );
        var_solver = tmp_assign_source_17;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_18 = tmp_tuple_unpack_3__element_2;
        assert( var_solver_lwork == NULL );
        Py_INCREF( tmp_assign_source_18 );
        var_solver_lwork = tmp_assign_source_18;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain__compute_lwork );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_lwork );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_compute_lwork" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_12 = tmp_mvar_value_13;
        CHECK_OBJECT( var_solver_lwork );
        tmp_tuple_element_6 = var_solver_lwork;
        tmp_args_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_n );
        tmp_tuple_element_6 = var_n;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
        tmp_dict_key_2 = const_str_plain_lower;
        CHECK_OBJECT( par_lower );
        tmp_dict_value_2 = par_lower;
        tmp_kw_name_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 144;
        tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lwork == NULL );
        var_lwork = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kw_name_5;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        CHECK_OBJECT( var_solver );
        tmp_called_name_13 = var_solver;
        CHECK_OBJECT( var_a );
        tmp_tuple_element_7 = var_a;
        tmp_args_name_5 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
        tmp_dict_key_3 = const_str_plain_lwork;
        CHECK_OBJECT( var_lwork );
        tmp_dict_value_3 = var_lwork;
        tmp_kw_name_5 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_lower;
        CHECK_OBJECT( par_lower );
        tmp_dict_value_4 = par_lower;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_overwrite_a;
        CHECK_OBJECT( par_overwrite_a );
        tmp_dict_value_5 = par_overwrite_a;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 145;
        tmp_iter_arg_4 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_5, tmp_kw_name_5 );
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_5 );
        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert( tmp_tuple_unpack_4__source_iter == NULL );
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_7, 0, 3 );
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 145;
            goto try_except_handler_9;
        }
        assert( tmp_tuple_unpack_4__element_1 == NULL );
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_8, 1, 3 );
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
            exception_lineno = 145;
            goto try_except_handler_9;
        }
        assert( tmp_tuple_unpack_4__element_2 == NULL );
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_9, 2, 3 );
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
            exception_lineno = 145;
            goto try_except_handler_9;
        }
        assert( tmp_tuple_unpack_4__element_3 == NULL );
        tmp_tuple_unpack_4__element_3 = tmp_assign_source_23;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_iterator_name_2 = tmp_tuple_unpack_4__source_iter;
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
                    exception_lineno = 145;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 145;
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

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_3 );
    tmp_tuple_unpack_4__element_3 = NULL;

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
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_24 = tmp_tuple_unpack_4__element_1;
        assert( var_ldu == NULL );
        Py_INCREF( tmp_assign_source_24 );
        var_ldu = tmp_assign_source_24;
    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
        tmp_assign_source_25 = tmp_tuple_unpack_4__element_2;
        assert( var_piv == NULL );
        Py_INCREF( tmp_assign_source_25 );
        var_piv = tmp_assign_source_25;
    }
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_3 );
        tmp_assign_source_26 = tmp_tuple_unpack_4__element_3;
        assert( var_info == NULL );
        Py_INCREF( tmp_assign_source_26 );
        var_info = tmp_assign_source_26;
    }
    Py_XDECREF( tmp_tuple_unpack_4__element_3 );
    tmp_tuple_unpack_4__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_info );
        tmp_compexpr_left_4 = var_info;
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
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
            PyObject *tmp_called_name_14;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_operand_name_1;
            tmp_source_name_7 = const_str_digest_5c20a871bca34b20cf8d345767e3c116;
            tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_format );
            assert( !(tmp_called_name_14 == NULL) );
            CHECK_OBJECT( var_s );
            tmp_called_instance_1 = var_s;
            frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 150;
            tmp_args_element_name_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );

                exception_lineno = 150;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_info );
            tmp_operand_name_1 = var_info;
            tmp_args_element_name_11 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );
                Py_DECREF( tmp_args_element_name_10 );

                exception_lineno = 150;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 148;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
            }

            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 148;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 148;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_name_6;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kw_name_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain__ldl_sanitize_ipiv );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ldl_sanitize_ipiv );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ldl_sanitize_ipiv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_called_name_15 = tmp_mvar_value_14;
        CHECK_OBJECT( var_piv );
        tmp_tuple_element_8 = var_piv;
        tmp_args_name_6 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_8 );
        tmp_dict_key_6 = const_str_plain_lower;
        CHECK_OBJECT( par_lower );
        tmp_dict_value_6 = par_lower;
        tmp_kw_name_6 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 152;
        tmp_iter_arg_5 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_6, tmp_kw_name_6 );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_6 );
        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert( tmp_tuple_unpack_5__source_iter == NULL );
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_27;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT( tmp_unpack_10, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 152;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__element_1 == NULL );
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_11, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 152;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__element_2 == NULL );
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_29;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_iterator_name_3 = tmp_tuple_unpack_5__source_iter;
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

                    type_description_1 = "ooooooooooooooooooooo";
                    exception_lineno = 152;
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

            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 152;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

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

    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
        tmp_assign_source_30 = tmp_tuple_unpack_5__element_1;
        assert( var_swap_arr == NULL );
        Py_INCREF( tmp_assign_source_30 );
        var_swap_arr = tmp_assign_source_30;
    }
    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
        tmp_assign_source_31 = tmp_tuple_unpack_5__element_2;
        assert( var_pivot_arr == NULL );
        Py_INCREF( tmp_assign_source_31 );
        var_pivot_arr = tmp_assign_source_31;
    }
    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_name_16;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_name_7;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kw_name_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain__ldl_get_d_and_l );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ldl_get_d_and_l );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ldl_get_d_and_l" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_name_16 = tmp_mvar_value_15;
        CHECK_OBJECT( var_ldu );
        tmp_tuple_element_9 = var_ldu;
        tmp_args_name_7 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_9 );
        CHECK_OBJECT( var_pivot_arr );
        tmp_tuple_element_9 = var_pivot_arr;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_9 );
        tmp_dict_key_7 = const_str_plain_lower;
        CHECK_OBJECT( par_lower );
        tmp_dict_value_7 = par_lower;
        tmp_kw_name_7 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_hermitian;
        CHECK_OBJECT( par_hermitian );
        tmp_dict_value_8 = par_hermitian;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 153;
        tmp_iter_arg_6 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_7, tmp_kw_name_7 );
        Py_DECREF( tmp_args_name_7 );
        Py_DECREF( tmp_kw_name_7 );
        if ( tmp_iter_arg_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_32 = MAKE_ITERATOR( tmp_iter_arg_6 );
        Py_DECREF( tmp_iter_arg_6 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert( tmp_tuple_unpack_6__source_iter == NULL );
        tmp_tuple_unpack_6__source_iter = tmp_assign_source_32;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
        tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT( tmp_unpack_12, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 153;
            goto try_except_handler_13;
        }
        assert( tmp_tuple_unpack_6__element_1 == NULL );
        tmp_tuple_unpack_6__element_1 = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
        tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_13, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 153;
            goto try_except_handler_13;
        }
        assert( tmp_tuple_unpack_6__element_2 == NULL );
        tmp_tuple_unpack_6__element_2 = tmp_assign_source_34;
    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
        tmp_iterator_name_4 = tmp_tuple_unpack_6__source_iter;
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

                    type_description_1 = "ooooooooooooooooooooo";
                    exception_lineno = 153;
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

            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 153;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
    Py_DECREF( tmp_tuple_unpack_6__source_iter );
    tmp_tuple_unpack_6__source_iter = NULL;

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

    Py_XDECREF( tmp_tuple_unpack_6__element_1 );
    tmp_tuple_unpack_6__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_6__element_2 );
    tmp_tuple_unpack_6__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
    Py_DECREF( tmp_tuple_unpack_6__source_iter );
    tmp_tuple_unpack_6__source_iter = NULL;

    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT( tmp_tuple_unpack_6__element_1 );
        tmp_assign_source_35 = tmp_tuple_unpack_6__element_1;
        assert( var_d == NULL );
        Py_INCREF( tmp_assign_source_35 );
        var_d = tmp_assign_source_35;
    }
    Py_XDECREF( tmp_tuple_unpack_6__element_1 );
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT( tmp_tuple_unpack_6__element_2 );
        tmp_assign_source_36 = tmp_tuple_unpack_6__element_2;
        assert( var_lu == NULL );
        Py_INCREF( tmp_assign_source_36 );
        var_lu = tmp_assign_source_36;
    }
    Py_XDECREF( tmp_tuple_unpack_6__element_2 );
    tmp_tuple_unpack_6__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_name_17;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_name_8;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kw_name_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain__ldl_construct_tri_factor );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ldl_construct_tri_factor );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ldl_construct_tri_factor" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_called_name_17 = tmp_mvar_value_16;
        CHECK_OBJECT( var_lu );
        tmp_tuple_element_10 = var_lu;
        tmp_args_name_8 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_10 );
        CHECK_OBJECT( var_swap_arr );
        tmp_tuple_element_10 = var_swap_arr;
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_10 );
        CHECK_OBJECT( var_pivot_arr );
        tmp_tuple_element_10 = var_pivot_arr;
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_10 );
        tmp_dict_key_9 = const_str_plain_lower;
        CHECK_OBJECT( par_lower );
        tmp_dict_value_9 = par_lower;
        tmp_kw_name_8 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame.f_lineno = 154;
        tmp_iter_arg_7 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_8, tmp_kw_name_8 );
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_kw_name_8 );
        if ( tmp_iter_arg_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_37 = MAKE_ITERATOR( tmp_iter_arg_7 );
        Py_DECREF( tmp_iter_arg_7 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        assert( tmp_tuple_unpack_7__source_iter == NULL );
        tmp_tuple_unpack_7__source_iter = tmp_assign_source_37;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_14 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_38 = UNPACK_NEXT( tmp_unpack_14, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 154;
            goto try_except_handler_15;
        }
        assert( tmp_tuple_unpack_7__element_1 == NULL );
        tmp_tuple_unpack_7__element_1 = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_39 = UNPACK_NEXT( tmp_unpack_15, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 154;
            goto try_except_handler_15;
        }
        assert( tmp_tuple_unpack_7__element_2 == NULL );
        tmp_tuple_unpack_7__element_2 = tmp_assign_source_39;
    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_iterator_name_5 = tmp_tuple_unpack_7__source_iter;
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

                    type_description_1 = "ooooooooooooooooooooo";
                    exception_lineno = 154;
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

            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 154;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
    Py_DECREF( tmp_tuple_unpack_7__source_iter );
    tmp_tuple_unpack_7__source_iter = NULL;

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

    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7c91a8ee31b48b2aa5fdc5714191ce4e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7c91a8ee31b48b2aa5fdc5714191ce4e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7c91a8ee31b48b2aa5fdc5714191ce4e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7c91a8ee31b48b2aa5fdc5714191ce4e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7c91a8ee31b48b2aa5fdc5714191ce4e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7c91a8ee31b48b2aa5fdc5714191ce4e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7c91a8ee31b48b2aa5fdc5714191ce4e,
        type_description_1,
        par_A,
        par_lower,
        par_hermitian,
        par_overwrite_a,
        par_check_finite,
        var_a,
        var_n,
        var_r_or_c,
        var_s,
        var_sl,
        var_solver,
        var_solver_lwork,
        var_lwork,
        var_ldu,
        var_piv,
        var_info,
        var_swap_arr,
        var_pivot_arr,
        var_d,
        var_lu,
        var_perm
    );


    // Release cached frame.
    if ( frame_7c91a8ee31b48b2aa5fdc5714191ce4e == cache_frame_7c91a8ee31b48b2aa5fdc5714191ce4e )
    {
        Py_DECREF( frame_7c91a8ee31b48b2aa5fdc5714191ce4e );
    }
    cache_frame_7c91a8ee31b48b2aa5fdc5714191ce4e = NULL;

    assertFrameObject( frame_7c91a8ee31b48b2aa5fdc5714191ce4e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
    Py_DECREF( tmp_tuple_unpack_7__source_iter );
    tmp_tuple_unpack_7__source_iter = NULL;

    {
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_1 );
        tmp_assign_source_40 = tmp_tuple_unpack_7__element_1;
        {
            PyObject *old = var_lu;
            assert( old != NULL );
            var_lu = tmp_assign_source_40;
            Py_INCREF( var_lu );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_2 );
        tmp_assign_source_41 = tmp_tuple_unpack_7__element_2;
        assert( var_perm == NULL );
        Py_INCREF( tmp_assign_source_41 );
        var_perm = tmp_assign_source_41;
    }
    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    {
        PyObject *tmp_tuple_element_11;
        CHECK_OBJECT( var_lu );
        tmp_tuple_element_11 = var_lu;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_11 );
        CHECK_OBJECT( var_d );
        tmp_tuple_element_11 = var_d;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_11 );
        CHECK_OBJECT( var_perm );
        tmp_tuple_element_11 = var_perm;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_11 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_decomp_ldl$$$function_1_ldl );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_lower );
    Py_DECREF( par_lower );
    par_lower = NULL;

    CHECK_OBJECT( (PyObject *)par_hermitian );
    Py_DECREF( par_hermitian );
    par_hermitian = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_a );
    Py_DECREF( par_overwrite_a );
    par_overwrite_a = NULL;

    CHECK_OBJECT( (PyObject *)par_check_finite );
    Py_DECREF( par_check_finite );
    par_check_finite = NULL;

    CHECK_OBJECT( (PyObject *)var_a );
    Py_DECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_r_or_c );
    var_r_or_c = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_sl );
    var_sl = NULL;

    Py_XDECREF( var_solver );
    var_solver = NULL;

    Py_XDECREF( var_solver_lwork );
    var_solver_lwork = NULL;

    Py_XDECREF( var_lwork );
    var_lwork = NULL;

    Py_XDECREF( var_ldu );
    var_ldu = NULL;

    Py_XDECREF( var_piv );
    var_piv = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_swap_arr );
    var_swap_arr = NULL;

    Py_XDECREF( var_pivot_arr );
    var_pivot_arr = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_lu );
    var_lu = NULL;

    Py_XDECREF( var_perm );
    var_perm = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_lower );
    Py_DECREF( par_lower );
    par_lower = NULL;

    CHECK_OBJECT( (PyObject *)par_hermitian );
    Py_DECREF( par_hermitian );
    par_hermitian = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_a );
    Py_DECREF( par_overwrite_a );
    par_overwrite_a = NULL;

    CHECK_OBJECT( (PyObject *)par_check_finite );
    Py_DECREF( par_check_finite );
    par_check_finite = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_r_or_c );
    var_r_or_c = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_sl );
    var_sl = NULL;

    Py_XDECREF( var_solver );
    var_solver = NULL;

    Py_XDECREF( var_solver_lwork );
    var_solver_lwork = NULL;

    Py_XDECREF( var_lwork );
    var_lwork = NULL;

    Py_XDECREF( var_ldu );
    var_ldu = NULL;

    Py_XDECREF( var_piv );
    var_piv = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_swap_arr );
    var_swap_arr = NULL;

    Py_XDECREF( var_pivot_arr );
    var_pivot_arr = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_lu );
    var_lu = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_decomp_ldl$$$function_1_ldl );
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


static PyObject *impl_scipy$linalg$_decomp_ldl$$$function_2__ldl_sanitize_ipiv( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_lower = python_pars[ 1 ];
    PyObject *var_n = NULL;
    PyObject *var_swap_ = NULL;
    PyObject *var_pivots = NULL;
    PyObject *var_skip_2x2 = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_rs = NULL;
    PyObject *var_re = NULL;
    PyObject *var_ri = NULL;
    PyObject *var_ind = NULL;
    PyObject *var_cur_val = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8f154d3d14c31413e195b7cbb172c58b;
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
    static struct Nuitka_FrameObject *cache_frame_8f154d3d14c31413e195b7cbb172c58b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8f154d3d14c31413e195b7cbb172c58b, codeobj_8f154d3d14c31413e195b7cbb172c58b, module_scipy$linalg$_decomp_ldl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8f154d3d14c31413e195b7cbb172c58b = cache_frame_8f154d3d14c31413e195b7cbb172c58b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8f154d3d14c31413e195b7cbb172c58b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8f154d3d14c31413e195b7cbb172c58b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_a );
        tmp_source_name_1 = par_a;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_arange );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "arange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 208;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_1 = var_n;
        frame_8f154d3d14c31413e195b7cbb172c58b->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_swap_ == NULL );
        var_swap_ = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_zeros_like );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros_like );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros_like" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 209;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_swap_ );
        tmp_tuple_element_1 = var_swap_;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
        frame_8f154d3d14c31413e195b7cbb172c58b->m_frame.f_lineno = 209;
        tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pivots == NULL );
        var_pivots = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_False;
        assert( var_skip_2x2 == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_skip_2x2 = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_lower );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_lower );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_tuple_element_2 = const_int_pos_1;
        tmp_iter_arg_1 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_int_0;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_int_0;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 2, tmp_tuple_element_2 );
        CHECK_OBJECT( var_n );
        tmp_tuple_element_2 = var_n;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 3, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 4, tmp_tuple_element_2 );
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_tuple_element_3 = const_int_neg_1;
        tmp_iter_arg_1 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_3 );
        tmp_tuple_element_3 = const_int_neg_1;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_3 );
        CHECK_OBJECT( var_n );
        tmp_left_name_1 = var_n;
        tmp_right_name_1 = const_int_pos_1;
        tmp_tuple_element_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 214;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 2, tmp_tuple_element_3 );
        tmp_tuple_element_3 = const_int_neg_1;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 3, tmp_tuple_element_3 );
        tmp_tuple_element_3 = const_int_neg_1;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 4, tmp_tuple_element_3 );
        condexpr_end_1:;
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooooooooooooo";
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
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0, 5 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 214;
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
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1, 5 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 214;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_3, 2, 5 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 214;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_4, 3, 5 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 214;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_5, 4, 5 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 214;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_5 == NULL );
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_10;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 214;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooo";
            exception_lineno = 214;
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
        assert( var_y == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_y = tmp_assign_source_12;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;
        assert( var_rs == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_rs = tmp_assign_source_13;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_4;
        assert( var_re == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_re = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_5 );
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_5;
        assert( var_ri == NULL );
        Py_INCREF( tmp_assign_source_15 );
        var_ri = tmp_assign_source_15;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_xrange_step_1;
        CHECK_OBJECT( var_rs );
        tmp_xrange_low_1 = var_rs;
        CHECK_OBJECT( var_re );
        tmp_xrange_high_1 = var_re;
        CHECK_OBJECT( var_ri );
        tmp_xrange_step_1 = var_ri;
        tmp_iter_arg_2 = BUILTIN_XRANGE3( tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_16;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_17 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooo";
                exception_lineno = 216;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_18 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ind;
            var_ind = tmp_assign_source_18;
            Py_INCREF( var_ind );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        if ( var_skip_2x2 == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "skip_2x2" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 218;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE( var_skip_2x2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = Py_False;
            {
                PyObject *old = var_skip_2x2;
                var_skip_2x2 = tmp_assign_source_19;
                Py_INCREF( var_skip_2x2 );
                Py_XDECREF( old );
            }

        }
        goto loop_start_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_a );
        tmp_subscribed_name_1 = par_a;
        CHECK_OBJECT( var_ind );
        tmp_subscript_name_1 = var_ind;
        tmp_assign_source_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_cur_val;
            var_cur_val = tmp_assign_source_20;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_cur_val );
        tmp_compexpr_left_1 = var_cur_val;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
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
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( var_cur_val );
            tmp_compexpr_left_2 = var_cur_val;
            CHECK_OBJECT( var_ind );
            tmp_left_name_2 = var_ind;
            tmp_right_name_2 = const_int_pos_1;
            tmp_compexpr_right_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 225;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 225;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
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
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                CHECK_OBJECT( var_swap_ );
                tmp_subscribed_name_2 = var_swap_;
                CHECK_OBJECT( var_cur_val );
                tmp_left_name_3 = var_cur_val;
                tmp_right_name_3 = const_int_pos_1;
                tmp_subscript_name_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
                if ( tmp_subscript_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 227;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                Py_DECREF( tmp_subscript_name_2 );
                if ( tmp_ass_subvalue_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 227;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_swap_ );
                tmp_ass_subscribed_1 = var_swap_;
                CHECK_OBJECT( var_ind );
                tmp_ass_subscript_1 = var_ind;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subvalue_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 227;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = const_int_pos_1;
            CHECK_OBJECT( var_pivots );
            tmp_ass_subscribed_2 = var_pivots;
            CHECK_OBJECT( var_ind );
            tmp_ass_subscript_2 = var_ind;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 228;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_5;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( var_cur_val );
            tmp_compexpr_left_3 = var_cur_val;
            tmp_compexpr_right_3 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
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
            CHECK_OBJECT( var_cur_val );
            tmp_compexpr_left_4 = var_cur_val;
            CHECK_OBJECT( par_a );
            tmp_subscribed_name_3 = par_a;
            CHECK_OBJECT( var_ind );
            tmp_left_name_4 = var_ind;
            CHECK_OBJECT( var_x );
            tmp_right_name_4 = var_x;
            tmp_subscript_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_subscript_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_compexpr_right_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            Py_DECREF( tmp_subscript_name_3 );
            if ( tmp_compexpr_right_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_5 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_5 = tmp_and_left_value_1;
            and_end_1:;
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
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                CHECK_OBJECT( var_cur_val );
                tmp_operand_name_1 = var_cur_val;
                tmp_compexpr_left_5 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
                if ( tmp_compexpr_left_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 232;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_ind );
                tmp_left_name_5 = var_ind;
                tmp_right_name_5 = const_int_pos_2;
                tmp_compexpr_right_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
                if ( tmp_compexpr_right_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_5 );

                    exception_lineno = 232;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_left_5 );
                Py_DECREF( tmp_compexpr_right_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 232;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_5;
                }
                else
                {
                    goto branch_no_5;
                }
                branch_yes_5:;
                {
                    PyObject *tmp_ass_subvalue_3;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_subscript_name_4;
                    PyObject *tmp_left_name_6;
                    PyObject *tmp_operand_name_2;
                    PyObject *tmp_right_name_6;
                    PyObject *tmp_ass_subscribed_3;
                    PyObject *tmp_ass_subscript_3;
                    PyObject *tmp_left_name_7;
                    PyObject *tmp_right_name_7;
                    CHECK_OBJECT( var_swap_ );
                    tmp_subscribed_name_4 = var_swap_;
                    CHECK_OBJECT( var_cur_val );
                    tmp_operand_name_2 = var_cur_val;
                    tmp_left_name_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
                    if ( tmp_left_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 234;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_4;
                    }
                    tmp_right_name_6 = const_int_pos_1;
                    tmp_subscript_name_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
                    Py_DECREF( tmp_left_name_6 );
                    if ( tmp_subscript_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 234;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_4;
                    }
                    tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                    Py_DECREF( tmp_subscript_name_4 );
                    if ( tmp_ass_subvalue_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 234;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_4;
                    }
                    CHECK_OBJECT( var_swap_ );
                    tmp_ass_subscribed_3 = var_swap_;
                    CHECK_OBJECT( var_ind );
                    tmp_left_name_7 = var_ind;
                    CHECK_OBJECT( var_x );
                    tmp_right_name_7 = var_x;
                    tmp_ass_subscript_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
                    if ( tmp_ass_subscript_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_ass_subvalue_3 );

                        exception_lineno = 234;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_4;
                    }
                    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
                    Py_DECREF( tmp_ass_subscript_3 );
                    Py_DECREF( tmp_ass_subvalue_3 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 234;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_4;
                    }
                }
                branch_no_5:;
            }
            {
                PyObject *tmp_ass_subvalue_4;
                PyObject *tmp_ass_subscribed_4;
                PyObject *tmp_ass_subscript_4;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_8;
                tmp_ass_subvalue_4 = const_int_pos_2;
                CHECK_OBJECT( var_pivots );
                tmp_ass_subscribed_4 = var_pivots;
                CHECK_OBJECT( var_ind );
                tmp_left_name_8 = var_ind;
                CHECK_OBJECT( var_y );
                tmp_right_name_8 = var_y;
                tmp_ass_subscript_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
                if ( tmp_ass_subscript_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 235;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
                Py_DECREF( tmp_ass_subscript_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 235;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
            }
            {
                PyObject *tmp_assign_source_21;
                tmp_assign_source_21 = Py_True;
                {
                    PyObject *old = var_skip_2x2;
                    var_skip_2x2 = tmp_assign_source_21;
                    Py_INCREF( var_skip_2x2 );
                    Py_XDECREF( old );
                }

            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_7083c0a2a6dbadb429c985be14d4d3ba;
                frame_8f154d3d14c31413e195b7cbb172c58b->m_frame.f_lineno = 238;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 238;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            branch_end_4:;
        }
        branch_end_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "ooooooooooooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f154d3d14c31413e195b7cbb172c58b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f154d3d14c31413e195b7cbb172c58b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8f154d3d14c31413e195b7cbb172c58b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8f154d3d14c31413e195b7cbb172c58b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8f154d3d14c31413e195b7cbb172c58b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8f154d3d14c31413e195b7cbb172c58b,
        type_description_1,
        par_a,
        par_lower,
        var_n,
        var_swap_,
        var_pivots,
        var_skip_2x2,
        var_x,
        var_y,
        var_rs,
        var_re,
        var_ri,
        var_ind,
        var_cur_val
    );


    // Release cached frame.
    if ( frame_8f154d3d14c31413e195b7cbb172c58b == cache_frame_8f154d3d14c31413e195b7cbb172c58b )
    {
        Py_DECREF( frame_8f154d3d14c31413e195b7cbb172c58b );
    }
    cache_frame_8f154d3d14c31413e195b7cbb172c58b = NULL;

    assertFrameObject( frame_8f154d3d14c31413e195b7cbb172c58b );

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

    {
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT( var_swap_ );
        tmp_tuple_element_4 = var_swap_;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_pivots );
        tmp_tuple_element_4 = var_pivots;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_decomp_ldl$$$function_2__ldl_sanitize_ipiv );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_lower );
    Py_DECREF( par_lower );
    par_lower = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_swap_ );
    Py_DECREF( var_swap_ );
    var_swap_ = NULL;

    CHECK_OBJECT( (PyObject *)var_pivots );
    Py_DECREF( var_pivots );
    var_pivots = NULL;

    Py_XDECREF( var_skip_2x2 );
    var_skip_2x2 = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)var_rs );
    Py_DECREF( var_rs );
    var_rs = NULL;

    CHECK_OBJECT( (PyObject *)var_re );
    Py_DECREF( var_re );
    var_re = NULL;

    CHECK_OBJECT( (PyObject *)var_ri );
    Py_DECREF( var_ri );
    var_ri = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_cur_val );
    var_cur_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_lower );
    Py_DECREF( par_lower );
    par_lower = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_swap_ );
    var_swap_ = NULL;

    Py_XDECREF( var_pivots );
    var_pivots = NULL;

    Py_XDECREF( var_skip_2x2 );
    var_skip_2x2 = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_rs );
    var_rs = NULL;

    Py_XDECREF( var_re );
    var_re = NULL;

    Py_XDECREF( var_ri );
    var_ri = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_cur_val );
    var_cur_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_decomp_ldl$$$function_2__ldl_sanitize_ipiv );
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


static PyObject *impl_scipy$linalg$_decomp_ldl$$$function_3__ldl_get_d_and_l( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ldu = python_pars[ 0 ];
    PyObject *par_pivs = python_pars[ 1 ];
    PyObject *par_lower = python_pars[ 2 ];
    PyObject *par_hermitian = python_pars[ 3 ];
    PyObject *var_is_c = NULL;
    PyObject *var_d = NULL;
    PyObject *var_n = NULL;
    PyObject *var_blk_i = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_lu = NULL;
    PyObject *var_diag_inds = NULL;
    PyObject *var_blk = NULL;
    PyObject *var_inc = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a778b1701068072f28e0b25ca07612e7;
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
    static struct Nuitka_FrameObject *cache_frame_a778b1701068072f28e0b25ca07612e7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a778b1701068072f28e0b25ca07612e7, codeobj_a778b1701068072f28e0b25ca07612e7, module_scipy$linalg$_decomp_ldl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a778b1701068072f28e0b25ca07612e7 = cache_frame_a778b1701068072f28e0b25ca07612e7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a778b1701068072f28e0b25ca07612e7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a778b1701068072f28e0b25ca07612e7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_iscomplexobj );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iscomplexobj );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "iscomplexobj" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 268;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_ldu );
        tmp_args_element_name_1 = par_ldu;
        frame_a778b1701068072f28e0b25ca07612e7->m_frame.f_lineno = 268;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_is_c == NULL );
        var_is_c = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_diag );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diag );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "diag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 269;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_diag );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diag );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "diag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 269;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_ldu );
        tmp_args_element_name_3 = par_ldu;
        frame_a778b1701068072f28e0b25ca07612e7->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a778b1701068072f28e0b25ca07612e7->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_d == NULL );
        var_d = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_d );
        tmp_source_name_1 = var_d;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_int_0;
        assert( var_blk_i == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_blk_i = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_lower );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_lower );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_iter_arg_1 = const_tuple_int_pos_1_int_0_tuple;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_iter_arg_1 = const_tuple_int_0_int_pos_1_tuple;
        condexpr_end_1:;
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "oooooooooooooo";
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 274;
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 274;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 274;
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

            type_description_1 = "oooooooooooooo";
            exception_lineno = 274;
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
        assert( var_x == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_x = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert( var_y == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_y = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( par_lower );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_lower );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_tril );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tril );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tril" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 276;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_ldu );
        tmp_args_element_name_4 = par_ldu;
        tmp_args_element_name_5 = const_int_neg_1;
        frame_a778b1701068072f28e0b25ca07612e7->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_triu );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_triu );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "triu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 276;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT( par_ldu );
        tmp_args_element_name_6 = par_ldu;
        tmp_args_element_name_7 = const_int_pos_1;
        frame_a778b1701068072f28e0b25ca07612e7->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        assert( var_lu == NULL );
        var_lu = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_arange );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "arange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_8 = var_n;
        frame_a778b1701068072f28e0b25ca07612e7->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_diag_inds == NULL );
        var_diag_inds = tmp_assign_source_11;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_1;
        tmp_ass_subvalue_1 = const_int_pos_1;
        CHECK_OBJECT( var_lu );
        tmp_ass_subscribed_1 = var_lu;
        CHECK_OBJECT( var_diag_inds );
        tmp_tuple_element_1 = var_diag_inds;
        tmp_ass_subscript_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_diag_inds );
        tmp_tuple_element_1 = var_diag_inds;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_1 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_pivs );
        tmp_subscribed_name_2 = par_pivs;
        CHECK_OBJECT( par_pivs );
        tmp_compexpr_left_1 = par_pivs;
        tmp_compexpr_right_1 = const_int_0;
        tmp_subscript_name_2 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_subscript_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "oooooooooooooo";
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
                type_description_1 = "oooooooooooooo";
                exception_lineno = 280;
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
            PyObject *old = var_blk;
            var_blk = tmp_assign_source_14;
            Py_INCREF( var_blk );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_blk_i );
        tmp_left_name_1 = var_blk_i;
        CHECK_OBJECT( var_blk );
        tmp_right_name_1 = var_blk;
        tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_inc;
            var_inc = tmp_assign_source_15;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_blk );
        tmp_compexpr_left_2 = var_blk;
        tmp_compexpr_right_2 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
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
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( par_ldu );
            tmp_subscribed_name_3 = par_ldu;
            CHECK_OBJECT( var_blk_i );
            tmp_left_name_2 = var_blk_i;
            CHECK_OBJECT( var_x );
            tmp_right_name_2 = var_x;
            tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 286;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_subscript_name_3 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_blk_i );
            tmp_left_name_3 = var_blk_i;
            CHECK_OBJECT( var_y );
            tmp_right_name_3 = var_y;
            tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscript_name_3 );

                exception_lineno = 286;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_2 );
            tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            Py_DECREF( tmp_subscript_name_3 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 286;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_d );
            tmp_ass_subscribed_2 = var_d;
            CHECK_OBJECT( var_blk_i );
            tmp_left_name_4 = var_blk_i;
            CHECK_OBJECT( var_x );
            tmp_right_name_4 = var_x;
            tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 286;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_ass_subscript_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_ass_subscript_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_blk_i );
            tmp_left_name_5 = var_blk_i;
            CHECK_OBJECT( var_y );
            tmp_right_name_5 = var_y;
            tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );
                Py_DECREF( tmp_ass_subscript_2 );

                exception_lineno = 286;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            PyTuple_SET_ITEM( tmp_ass_subscript_2, 1, tmp_tuple_element_3 );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 286;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_4;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            int tmp_truth_name_3;
            int tmp_truth_name_4;
            CHECK_OBJECT( var_is_c );
            tmp_truth_name_3 = CHECK_IF_TRUE( var_is_c );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 289;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
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
            CHECK_OBJECT( par_hermitian );
            tmp_truth_name_4 = CHECK_IF_TRUE( par_hermitian );
            if ( tmp_truth_name_4 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 289;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_and_right_value_1 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_4 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_4 = tmp_and_left_value_1;
            and_end_1:;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_ass_subvalue_3;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                PyObject *tmp_ass_subscribed_3;
                PyObject *tmp_ass_subscript_3;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_8;
                PyObject *tmp_left_name_9;
                PyObject *tmp_right_name_9;
                CHECK_OBJECT( par_ldu );
                tmp_subscribed_name_4 = par_ldu;
                CHECK_OBJECT( var_blk_i );
                tmp_left_name_6 = var_blk_i;
                CHECK_OBJECT( var_x );
                tmp_right_name_6 = var_x;
                tmp_tuple_element_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 290;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_subscript_name_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_subscript_name_4, 0, tmp_tuple_element_4 );
                CHECK_OBJECT( var_blk_i );
                tmp_left_name_7 = var_blk_i;
                CHECK_OBJECT( var_y );
                tmp_right_name_7 = var_y;
                tmp_tuple_element_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscript_name_4 );

                    exception_lineno = 290;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_subscript_name_4, 1, tmp_tuple_element_4 );
                tmp_called_instance_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                Py_DECREF( tmp_subscript_name_4 );
                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 290;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_4;
                }
                frame_a778b1701068072f28e0b25ca07612e7->m_frame.f_lineno = 290;
                tmp_ass_subvalue_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_conj );
                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_ass_subvalue_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 290;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_d );
                tmp_ass_subscribed_3 = var_d;
                CHECK_OBJECT( var_blk_i );
                tmp_left_name_8 = var_blk_i;
                CHECK_OBJECT( var_y );
                tmp_right_name_8 = var_y;
                tmp_tuple_element_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_ass_subvalue_3 );

                    exception_lineno = 290;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_ass_subscript_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_ass_subscript_3, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( var_blk_i );
                tmp_left_name_9 = var_blk_i;
                CHECK_OBJECT( var_x );
                tmp_right_name_9 = var_x;
                tmp_tuple_element_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_ass_subvalue_3 );
                    Py_DECREF( tmp_ass_subscript_3 );

                    exception_lineno = 290;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_ass_subscript_3, 1, tmp_tuple_element_5 );
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
                Py_DECREF( tmp_ass_subscript_3 );
                Py_DECREF( tmp_ass_subvalue_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 290;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_4;
                }
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_ass_subvalue_4;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_left_name_10;
                PyObject *tmp_right_name_10;
                PyObject *tmp_left_name_11;
                PyObject *tmp_right_name_11;
                PyObject *tmp_ass_subscribed_4;
                PyObject *tmp_ass_subscript_4;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_left_name_12;
                PyObject *tmp_right_name_12;
                PyObject *tmp_left_name_13;
                PyObject *tmp_right_name_13;
                CHECK_OBJECT( par_ldu );
                tmp_subscribed_name_5 = par_ldu;
                CHECK_OBJECT( var_blk_i );
                tmp_left_name_10 = var_blk_i;
                CHECK_OBJECT( var_x );
                tmp_right_name_10 = var_x;
                tmp_tuple_element_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
                if ( tmp_tuple_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 292;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_subscript_name_5 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_subscript_name_5, 0, tmp_tuple_element_6 );
                CHECK_OBJECT( var_blk_i );
                tmp_left_name_11 = var_blk_i;
                CHECK_OBJECT( var_y );
                tmp_right_name_11 = var_y;
                tmp_tuple_element_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
                if ( tmp_tuple_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscript_name_5 );

                    exception_lineno = 292;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_subscript_name_5, 1, tmp_tuple_element_6 );
                tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                Py_DECREF( tmp_subscript_name_5 );
                if ( tmp_ass_subvalue_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 292;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_d );
                tmp_ass_subscribed_4 = var_d;
                CHECK_OBJECT( var_blk_i );
                tmp_left_name_12 = var_blk_i;
                CHECK_OBJECT( var_y );
                tmp_right_name_12 = var_y;
                tmp_tuple_element_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_ass_subvalue_4 );

                    exception_lineno = 292;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_ass_subscript_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_ass_subscript_4, 0, tmp_tuple_element_7 );
                CHECK_OBJECT( var_blk_i );
                tmp_left_name_13 = var_blk_i;
                CHECK_OBJECT( var_x );
                tmp_right_name_13 = var_x;
                tmp_tuple_element_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_ass_subvalue_4 );
                    Py_DECREF( tmp_ass_subscript_4 );

                    exception_lineno = 292;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_ass_subscript_4, 1, tmp_tuple_element_7 );
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
                Py_DECREF( tmp_ass_subscript_4 );
                Py_DECREF( tmp_ass_subvalue_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 292;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_4;
                }
            }
            branch_end_2:;
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_left_name_14;
            PyObject *tmp_right_name_14;
            PyObject *tmp_left_name_15;
            PyObject *tmp_right_name_15;
            tmp_ass_subvalue_5 = const_float_0_0;
            CHECK_OBJECT( var_lu );
            tmp_ass_subscribed_5 = var_lu;
            CHECK_OBJECT( var_blk_i );
            tmp_left_name_14 = var_blk_i;
            CHECK_OBJECT( var_x );
            tmp_right_name_14 = var_x;
            tmp_tuple_element_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
            if ( tmp_tuple_element_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 294;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_ass_subscript_5 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_ass_subscript_5, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( var_blk_i );
            tmp_left_name_15 = var_blk_i;
            CHECK_OBJECT( var_y );
            tmp_right_name_15 = var_y;
            tmp_tuple_element_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
            if ( tmp_tuple_element_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subscript_5 );

                exception_lineno = 294;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            PyTuple_SET_ITEM( tmp_ass_subscript_5, 1, tmp_tuple_element_8 );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
            Py_DECREF( tmp_ass_subscript_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 294;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( var_inc );
        tmp_assign_source_16 = var_inc;
        {
            PyObject *old = var_blk_i;
            assert( old != NULL );
            var_blk_i = tmp_assign_source_16;
            Py_INCREF( var_blk_i );
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooooooooooooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a778b1701068072f28e0b25ca07612e7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a778b1701068072f28e0b25ca07612e7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a778b1701068072f28e0b25ca07612e7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a778b1701068072f28e0b25ca07612e7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a778b1701068072f28e0b25ca07612e7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a778b1701068072f28e0b25ca07612e7,
        type_description_1,
        par_ldu,
        par_pivs,
        par_lower,
        par_hermitian,
        var_is_c,
        var_d,
        var_n,
        var_blk_i,
        var_x,
        var_y,
        var_lu,
        var_diag_inds,
        var_blk,
        var_inc
    );


    // Release cached frame.
    if ( frame_a778b1701068072f28e0b25ca07612e7 == cache_frame_a778b1701068072f28e0b25ca07612e7 )
    {
        Py_DECREF( frame_a778b1701068072f28e0b25ca07612e7 );
    }
    cache_frame_a778b1701068072f28e0b25ca07612e7 = NULL;

    assertFrameObject( frame_a778b1701068072f28e0b25ca07612e7 );

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

    {
        PyObject *tmp_tuple_element_9;
        CHECK_OBJECT( var_d );
        tmp_tuple_element_9 = var_d;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_9 );
        CHECK_OBJECT( var_lu );
        tmp_tuple_element_9 = var_lu;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_9 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_decomp_ldl$$$function_3__ldl_get_d_and_l );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ldu );
    Py_DECREF( par_ldu );
    par_ldu = NULL;

    CHECK_OBJECT( (PyObject *)par_pivs );
    Py_DECREF( par_pivs );
    par_pivs = NULL;

    CHECK_OBJECT( (PyObject *)par_lower );
    Py_DECREF( par_lower );
    par_lower = NULL;

    CHECK_OBJECT( (PyObject *)par_hermitian );
    Py_DECREF( par_hermitian );
    par_hermitian = NULL;

    CHECK_OBJECT( (PyObject *)var_is_c );
    Py_DECREF( var_is_c );
    var_is_c = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_blk_i );
    Py_DECREF( var_blk_i );
    var_blk_i = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)var_lu );
    Py_DECREF( var_lu );
    var_lu = NULL;

    CHECK_OBJECT( (PyObject *)var_diag_inds );
    Py_DECREF( var_diag_inds );
    var_diag_inds = NULL;

    Py_XDECREF( var_blk );
    var_blk = NULL;

    Py_XDECREF( var_inc );
    var_inc = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ldu );
    Py_DECREF( par_ldu );
    par_ldu = NULL;

    CHECK_OBJECT( (PyObject *)par_pivs );
    Py_DECREF( par_pivs );
    par_pivs = NULL;

    CHECK_OBJECT( (PyObject *)par_lower );
    Py_DECREF( par_lower );
    par_lower = NULL;

    CHECK_OBJECT( (PyObject *)par_hermitian );
    Py_DECREF( par_hermitian );
    par_hermitian = NULL;

    Py_XDECREF( var_is_c );
    var_is_c = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_blk_i );
    var_blk_i = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_lu );
    var_lu = NULL;

    Py_XDECREF( var_diag_inds );
    var_diag_inds = NULL;

    Py_XDECREF( var_blk );
    var_blk = NULL;

    Py_XDECREF( var_inc );
    var_inc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_decomp_ldl$$$function_3__ldl_get_d_and_l );
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


static PyObject *impl_scipy$linalg$_decomp_ldl$$$function_4__ldl_construct_tri_factor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_lu = python_pars[ 0 ];
    PyObject *par_swap_vec = python_pars[ 1 ];
    PyObject *par_pivs = python_pars[ 2 ];
    PyObject *par_lower = python_pars[ 3 ];
    PyObject *var_n = NULL;
    PyObject *var_perm = NULL;
    PyObject *var_rs = NULL;
    PyObject *var_re = NULL;
    PyObject *var_ri = NULL;
    PyObject *var_ind = NULL;
    PyObject *var_s_ind = NULL;
    PyObject *var_col_s = NULL;
    PyObject *var_col_e = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1aea72887730b4978b8e78f8c319a1b3;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1aea72887730b4978b8e78f8c319a1b3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1aea72887730b4978b8e78f8c319a1b3, codeobj_1aea72887730b4978b8e78f8c319a1b3, module_scipy$linalg$_decomp_ldl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1aea72887730b4978b8e78f8c319a1b3 = cache_frame_1aea72887730b4978b8e78f8c319a1b3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1aea72887730b4978b8e78f8c319a1b3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1aea72887730b4978b8e78f8c319a1b3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_lu );
        tmp_source_name_1 = par_lu;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 335;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 335;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_arange );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "arange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 336;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_1 = var_n;
        frame_1aea72887730b4978b8e78f8c319a1b3->m_frame.f_lineno = 336;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_perm == NULL );
        var_perm = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( par_lower );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_lower );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( var_n );
        tmp_left_name_1 = var_n;
        tmp_right_name_1 = const_int_pos_1;
        tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_neg_1;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_neg_1;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 2, tmp_tuple_element_1 );
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_tuple_element_2 = const_int_0;
        tmp_iter_arg_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_n );
        tmp_tuple_element_2 = var_n;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 2, tmp_tuple_element_2 );
        condexpr_end_1:;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "ooooooooooooo";
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 338;
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
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 338;
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
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 338;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 338;
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

            type_description_1 = "ooooooooooooo";
            exception_lineno = 338;
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert( var_rs == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_rs = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert( var_re == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_re = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert( var_ri == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_ri = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_xrange_step_1;
        CHECK_OBJECT( var_rs );
        tmp_xrange_low_1 = var_rs;
        CHECK_OBJECT( var_re );
        tmp_xrange_high_1 = var_re;
        CHECK_OBJECT( var_ri );
        tmp_xrange_step_1 = var_ri;
        tmp_iter_arg_2 = BUILTIN_XRANGE3( tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_10;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooo";
                exception_lineno = 340;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_12 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ind;
            var_ind = tmp_assign_source_12;
            Py_INCREF( var_ind );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_swap_vec );
        tmp_subscribed_name_2 = par_swap_vec;
        CHECK_OBJECT( var_ind );
        tmp_subscript_name_2 = var_ind;
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_s_ind;
            var_s_ind = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_s_ind );
        tmp_compexpr_left_1 = var_s_ind;
        CHECK_OBJECT( var_ind );
        tmp_compexpr_right_1 = var_ind;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "ooooooooooooo";
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
        {
            PyObject *tmp_assign_source_14;
            nuitka_bool tmp_condition_result_3;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_lower );
            tmp_truth_name_2 = CHECK_IF_TRUE( par_lower );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 344;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_2;
            }
            else
            {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            CHECK_OBJECT( var_ind );
            tmp_assign_source_14 = var_ind;
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_assign_source_14 = const_int_0;
            condexpr_end_2:;
            {
                PyObject *old = var_col_s;
                var_col_s = tmp_assign_source_14;
                Py_INCREF( var_col_s );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            nuitka_bool tmp_condition_result_4;
            int tmp_truth_name_3;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_lower );
            tmp_truth_name_3 = CHECK_IF_TRUE( par_lower );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 345;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_3;
            }
            else
            {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            CHECK_OBJECT( var_n );
            tmp_assign_source_15 = var_n;
            Py_INCREF( tmp_assign_source_15 );
            goto condexpr_end_3;
            condexpr_false_3:;
            CHECK_OBJECT( var_ind );
            tmp_left_name_2 = var_ind;
            tmp_right_name_2 = const_int_pos_1;
            tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 345;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            condexpr_end_3:;
            {
                PyObject *old = var_col_e;
                var_col_e = tmp_assign_source_15;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            nuitka_bool tmp_condition_result_6;
            int tmp_truth_name_4;
            CHECK_OBJECT( par_pivs );
            tmp_subscribed_name_3 = par_pivs;
            CHECK_OBJECT( var_ind );
            tmp_subscript_name_3 = var_ind;
            tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 348;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( par_lower );
            tmp_truth_name_4 = CHECK_IF_TRUE( par_lower );
            if ( tmp_truth_name_4 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_2 );

                exception_lineno = 348;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_condition_result_6 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_4;
            }
            else
            {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_compexpr_right_2 = const_int_0;
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_compexpr_right_2 = const_int_pos_2;
            condexpr_end_4:;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 348;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                nuitka_bool tmp_condition_result_7;
                int tmp_truth_name_5;
                CHECK_OBJECT( var_col_s );
                tmp_left_name_3 = var_col_s;
                CHECK_OBJECT( par_lower );
                tmp_truth_name_5 = CHECK_IF_TRUE( par_lower );
                if ( tmp_truth_name_5 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 349;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_condition_result_7 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
                {
                    goto condexpr_true_5;
                }
                else
                {
                    goto condexpr_false_5;
                }
                condexpr_true_5:;
                tmp_right_name_3 = const_int_neg_1;
                goto condexpr_end_5;
                condexpr_false_5:;
                tmp_right_name_3 = const_int_0;
                condexpr_end_5:;
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 349;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_16 = tmp_left_name_3;
                var_col_s = tmp_assign_source_16;

            }
            {
                PyObject *tmp_assign_source_17;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                nuitka_bool tmp_condition_result_8;
                int tmp_truth_name_6;
                CHECK_OBJECT( var_col_e );
                tmp_left_name_4 = var_col_e;
                CHECK_OBJECT( par_lower );
                tmp_truth_name_6 = CHECK_IF_TRUE( par_lower );
                if ( tmp_truth_name_6 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 350;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_condition_result_8 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
                {
                    goto condexpr_true_6;
                }
                else
                {
                    goto condexpr_false_6;
                }
                condexpr_true_6:;
                tmp_right_name_4 = const_int_0;
                goto condexpr_end_6;
                condexpr_false_6:;
                tmp_right_name_4 = const_int_pos_1;
                condexpr_end_6:;
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 350;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_17 = tmp_left_name_4;
                var_col_e = tmp_assign_source_17;

            }
            branch_no_2:;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_list_element_1;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_step_name_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_list_element_2;
            PyObject *tmp_start_name_2;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_step_name_2;
            CHECK_OBJECT( par_lu );
            tmp_subscribed_name_4 = par_lu;
            CHECK_OBJECT( var_ind );
            tmp_list_element_1 = var_ind;
            tmp_tuple_element_3 = PyList_New( 2 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_tuple_element_3, 0, tmp_list_element_1 );
            CHECK_OBJECT( var_s_ind );
            tmp_list_element_1 = var_s_ind;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_tuple_element_3, 1, tmp_list_element_1 );
            tmp_subscript_name_4 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_subscript_name_4, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_col_s );
            tmp_start_name_1 = var_col_s;
            CHECK_OBJECT( var_col_e );
            tmp_stop_name_1 = var_col_e;
            tmp_step_name_1 = Py_None;
            tmp_tuple_element_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            assert( !(tmp_tuple_element_3 == NULL) );
            PyTuple_SET_ITEM( tmp_subscript_name_4, 1, tmp_tuple_element_3 );
            tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 351;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( par_lu );
            tmp_ass_subscribed_1 = par_lu;
            CHECK_OBJECT( var_s_ind );
            tmp_list_element_2 = var_s_ind;
            tmp_tuple_element_4 = PyList_New( 2 );
            Py_INCREF( tmp_list_element_2 );
            PyList_SET_ITEM( tmp_tuple_element_4, 0, tmp_list_element_2 );
            CHECK_OBJECT( var_ind );
            tmp_list_element_2 = var_ind;
            Py_INCREF( tmp_list_element_2 );
            PyList_SET_ITEM( tmp_tuple_element_4, 1, tmp_list_element_2 );
            tmp_ass_subscript_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( var_col_s );
            tmp_start_name_2 = var_col_s;
            CHECK_OBJECT( var_col_e );
            tmp_stop_name_2 = var_col_e;
            tmp_step_name_2 = Py_None;
            tmp_tuple_element_4 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            assert( !(tmp_tuple_element_4 == NULL) );
            PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_4 );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 351;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_list_element_3;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_list_element_4;
            CHECK_OBJECT( var_perm );
            tmp_subscribed_name_5 = var_perm;
            CHECK_OBJECT( var_ind );
            tmp_list_element_3 = var_ind;
            tmp_subscript_name_5 = PyList_New( 2 );
            Py_INCREF( tmp_list_element_3 );
            PyList_SET_ITEM( tmp_subscript_name_5, 0, tmp_list_element_3 );
            CHECK_OBJECT( var_s_ind );
            tmp_list_element_3 = var_s_ind;
            Py_INCREF( tmp_list_element_3 );
            PyList_SET_ITEM( tmp_subscript_name_5, 1, tmp_list_element_3 );
            tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            Py_DECREF( tmp_subscript_name_5 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_perm );
            tmp_ass_subscribed_2 = var_perm;
            CHECK_OBJECT( var_s_ind );
            tmp_list_element_4 = var_s_ind;
            tmp_ass_subscript_2 = PyList_New( 2 );
            Py_INCREF( tmp_list_element_4 );
            PyList_SET_ITEM( tmp_ass_subscript_2, 0, tmp_list_element_4 );
            CHECK_OBJECT( var_ind );
            tmp_list_element_4 = var_ind;
            Py_INCREF( tmp_list_element_4 );
            PyList_SET_ITEM( tmp_ass_subscript_2, 1, tmp_list_element_4 );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        type_description_1 = "ooooooooooooo";
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
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_lu );
        tmp_tuple_element_5 = par_lu;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_argsort );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_argsort );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "argsort" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 354;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_perm );
        tmp_args_element_name_2 = var_perm;
        frame_1aea72887730b4978b8e78f8c319a1b3->m_frame.f_lineno = 354;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_tuple_element_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 354;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1aea72887730b4978b8e78f8c319a1b3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1aea72887730b4978b8e78f8c319a1b3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1aea72887730b4978b8e78f8c319a1b3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1aea72887730b4978b8e78f8c319a1b3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1aea72887730b4978b8e78f8c319a1b3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1aea72887730b4978b8e78f8c319a1b3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1aea72887730b4978b8e78f8c319a1b3,
        type_description_1,
        par_lu,
        par_swap_vec,
        par_pivs,
        par_lower,
        var_n,
        var_perm,
        var_rs,
        var_re,
        var_ri,
        var_ind,
        var_s_ind,
        var_col_s,
        var_col_e
    );


    // Release cached frame.
    if ( frame_1aea72887730b4978b8e78f8c319a1b3 == cache_frame_1aea72887730b4978b8e78f8c319a1b3 )
    {
        Py_DECREF( frame_1aea72887730b4978b8e78f8c319a1b3 );
    }
    cache_frame_1aea72887730b4978b8e78f8c319a1b3 = NULL;

    assertFrameObject( frame_1aea72887730b4978b8e78f8c319a1b3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_decomp_ldl$$$function_4__ldl_construct_tri_factor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_lu );
    Py_DECREF( par_lu );
    par_lu = NULL;

    CHECK_OBJECT( (PyObject *)par_swap_vec );
    Py_DECREF( par_swap_vec );
    par_swap_vec = NULL;

    CHECK_OBJECT( (PyObject *)par_pivs );
    Py_DECREF( par_pivs );
    par_pivs = NULL;

    CHECK_OBJECT( (PyObject *)par_lower );
    Py_DECREF( par_lower );
    par_lower = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_perm );
    Py_DECREF( var_perm );
    var_perm = NULL;

    CHECK_OBJECT( (PyObject *)var_rs );
    Py_DECREF( var_rs );
    var_rs = NULL;

    CHECK_OBJECT( (PyObject *)var_re );
    Py_DECREF( var_re );
    var_re = NULL;

    CHECK_OBJECT( (PyObject *)var_ri );
    Py_DECREF( var_ri );
    var_ri = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_s_ind );
    var_s_ind = NULL;

    Py_XDECREF( var_col_s );
    var_col_s = NULL;

    Py_XDECREF( var_col_e );
    var_col_e = NULL;

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

    CHECK_OBJECT( (PyObject *)par_lu );
    Py_DECREF( par_lu );
    par_lu = NULL;

    CHECK_OBJECT( (PyObject *)par_swap_vec );
    Py_DECREF( par_swap_vec );
    par_swap_vec = NULL;

    CHECK_OBJECT( (PyObject *)par_pivs );
    Py_DECREF( par_pivs );
    par_pivs = NULL;

    CHECK_OBJECT( (PyObject *)par_lower );
    Py_DECREF( par_lower );
    par_lower = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_perm );
    var_perm = NULL;

    Py_XDECREF( var_rs );
    var_rs = NULL;

    Py_XDECREF( var_re );
    var_re = NULL;

    Py_XDECREF( var_ri );
    var_ri = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_s_ind );
    var_s_ind = NULL;

    Py_XDECREF( var_col_s );
    var_col_s = NULL;

    Py_XDECREF( var_col_e );
    var_col_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_decomp_ldl$$$function_4__ldl_construct_tri_factor );
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



static PyObject *MAKE_FUNCTION_scipy$linalg$_decomp_ldl$$$function_1_ldl( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_decomp_ldl$$$function_1_ldl,
        const_str_plain_ldl,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7c91a8ee31b48b2aa5fdc5714191ce4e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_decomp_ldl,
        const_str_digest_f6f29c6b50b6331093334c2b4e89a8a1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_decomp_ldl$$$function_2__ldl_sanitize_ipiv( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_decomp_ldl$$$function_2__ldl_sanitize_ipiv,
        const_str_plain__ldl_sanitize_ipiv,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8f154d3d14c31413e195b7cbb172c58b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_decomp_ldl,
        const_str_digest_ca19b739225a884991e40cdd878b88a6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_decomp_ldl$$$function_3__ldl_get_d_and_l( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_decomp_ldl$$$function_3__ldl_get_d_and_l,
        const_str_plain__ldl_get_d_and_l,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a778b1701068072f28e0b25ca07612e7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_decomp_ldl,
        const_str_digest_58a0042039176e012b8ae7c49af45776,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_decomp_ldl$$$function_4__ldl_construct_tri_factor( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_decomp_ldl$$$function_4__ldl_construct_tri_factor,
        const_str_plain__ldl_construct_tri_factor,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1aea72887730b4978b8e78f8c319a1b3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_decomp_ldl,
        const_str_digest_e6210dd69929f627ff2168179f3a0520,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$linalg$_decomp_ldl =
{
    PyModuleDef_HEAD_INIT,
    "scipy.linalg._decomp_ldl",
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

MOD_INIT_DECL( scipy$linalg$_decomp_ldl )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$linalg$_decomp_ldl );
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
    puts("scipy.linalg._decomp_ldl: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.linalg._decomp_ldl: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.linalg._decomp_ldl: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$linalg$_decomp_ldl" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$linalg$_decomp_ldl = Py_InitModule4(
        "scipy.linalg._decomp_ldl",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$linalg$_decomp_ldl = PyModule_Create( &mdef_scipy$linalg$_decomp_ldl );
#endif

    moduledict_scipy$linalg$_decomp_ldl = MODULE_DICT( module_scipy$linalg$_decomp_ldl );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$linalg$_decomp_ldl,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$linalg$_decomp_ldl,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$_decomp_ldl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$_decomp_ldl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$linalg$_decomp_ldl );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_3cf50d89b5dc3f85ed7850a33dcf84d0, module_scipy$linalg$_decomp_ldl );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_841a88013c52cbff58ee51c15900c52c;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_841a88013c52cbff58ee51c15900c52c = MAKE_MODULE_FRAME( codeobj_841a88013c52cbff58ee51c15900c52c, module_scipy$linalg$_decomp_ldl );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_841a88013c52cbff58ee51c15900c52c );
    assert( Py_REFCNT( frame_841a88013c52cbff58ee51c15900c52c ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_841a88013c52cbff58ee51c15900c52c->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$linalg$_decomp_ldl;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_warn_tuple;
        tmp_level_name_1 = const_int_0;
        frame_841a88013c52cbff58ee51c15900c52c->m_frame.f_lineno = 3;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_warn );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_warn, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$linalg$_decomp_ldl;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_841a88013c52cbff58ee51c15900c52c->m_frame.f_lineno = 5;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_numpy;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$linalg$_decomp_ldl;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_c79379c6dad126148071c9cda1bc4c82_tuple;
        tmp_level_name_3 = const_int_0;
        frame_841a88013c52cbff58ee51c15900c52c->m_frame.f_lineno = 6;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_atleast_2d );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_atleast_2d, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_ComplexWarning );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_ComplexWarning, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_arange );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_arange, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_zeros_like );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_zeros_like, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_imag );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_imag, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_diag );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_diag, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_iscomplexobj );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_iscomplexobj, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_12 = tmp_import_from_2__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_tril );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_tril, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_13 = tmp_import_from_2__module;
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_triu );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_triu, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_14 = tmp_import_from_2__module;
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_argsort );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_argsort, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_15 = tmp_import_from_2__module;
        tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_empty_like );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_empty_like, tmp_assign_source_21 );
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_decomp;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$linalg$_decomp_ldl;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain__asarray_validated_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_841a88013c52cbff58ee51c15900c52c->m_frame.f_lineno = 8;
        tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_16 ) )
        {
           tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_scipy$linalg$_decomp_ldl,
                const_str_plain__asarray_validated,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain__asarray_validated );
        }

        Py_DECREF( tmp_import_name_from_16 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain__asarray_validated, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_lapack;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$linalg$_decomp_ldl;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_get_lapack_funcs_str_plain__compute_lwork_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_841a88013c52cbff58ee51c15900c52c->m_frame.f_lineno = 9;
        tmp_assign_source_23 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_17 ) )
        {
           tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_scipy$linalg$_decomp_ldl,
                const_str_plain_get_lapack_funcs,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_get_lapack_funcs );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_18 ) )
        {
           tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_scipy$linalg$_decomp_ldl,
                const_str_plain__compute_lwork,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain__compute_lwork );
        }

        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain__compute_lwork, tmp_assign_source_25 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_841a88013c52cbff58ee51c15900c52c );
#endif
    popFrameStack();

    assertFrameObject( frame_841a88013c52cbff58ee51c15900c52c );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_841a88013c52cbff58ee51c15900c52c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_841a88013c52cbff58ee51c15900c52c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_841a88013c52cbff58ee51c15900c52c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_841a88013c52cbff58ee51c15900c52c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = LIST_COPY( const_list_str_plain_ldl_list );
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_true_true_false_true_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_27 = MAKE_FUNCTION_scipy$linalg$_decomp_ldl$$$function_1_ldl( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain_ldl, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_true_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_28 = MAKE_FUNCTION_scipy$linalg$_decomp_ldl$$$function_2__ldl_sanitize_ipiv( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain__ldl_sanitize_ipiv, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_true_true_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_29 = MAKE_FUNCTION_scipy$linalg$_decomp_ldl$$$function_3__ldl_get_d_and_l( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain__ldl_get_d_and_l, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_true_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_30 = MAKE_FUNCTION_scipy$linalg$_decomp_ldl$$$function_4__ldl_construct_tri_factor( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain__ldl_construct_tri_factor, tmp_assign_source_30 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_decomp_ldl, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$linalg$_decomp_ldl );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
