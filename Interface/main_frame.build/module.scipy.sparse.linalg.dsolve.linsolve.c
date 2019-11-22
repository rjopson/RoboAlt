/* Generated code for Python module 'scipy.sparse.linalg.dsolve.linsolve'
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

/* The "_module_scipy$sparse$linalg$dsolve$linsolve" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$sparse$linalg$dsolve$linsolve;
PyDictObject *moduledict_scipy$sparse$linalg$dsolve$linsolve;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_isspmatrix_csc;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_plain_UmfpackContext;
extern PyObject *const_str_plain_int32;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_family;
extern PyObject *const_str_plain_sum_duplicates;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_10da958c52186111220c09515b9519e4;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_UserWarning;
static PyObject *const_str_plain_gstrf;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_digest_7757d3c9d20877a9bb897d9bb4ae5582;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_solve;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
static PyObject *const_str_digest_b729412079229fc3528876e1d89f1215;
extern PyObject *const_str_plain_promote_types;
static PyObject *const_str_digest_548f7d74af9a253b8fcd84fea7c8434e;
extern PyObject *const_str_plain_asfptype;
extern PyObject *const_dict_4d1d638075572819465a0c6d70cdff6f;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_N;
static PyObject *const_str_plain_gssv;
extern PyObject *const_str_plain_indptr;
extern PyObject *const_str_plain_toarray;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_ILU_DropTol;
static PyObject *const_str_plain_PanelSize;
extern PyObject *const_str_plain_permc_spec;
extern PyObject *const_str_plain_astype;
extern PyObject *const_str_plain_zl;
static PyObject *const_tuple_str_plain_asarray_tuple;
extern PyObject *const_str_plain_row_indices;
extern PyObject *const_str_plain_full;
static PyObject *const_str_plain_diag_pivot_thresh;
static PyObject *const_str_digest_6da71c7a9bd46e94b23111405f83b9ee;
static PyObject *const_str_plain_autoTranspose;
extern PyObject *const_tuple_str_plain_kwargs_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_di;
static PyObject *const_str_digest_afe08b8241bded7b39d552a81320614d;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_dict_6ccf1996a79e7bc95b345c0d39aef510;
extern PyObject *const_str_plain_numeric;
static PyObject *const_tuple_true_false_false_tuple;
static PyObject *const_str_plain_noScikit;
static PyObject *const_str_digest_ad7f1d28c089e7489f74b230627f02eb;
static PyObject *const_str_plain_i_type;
extern PyObject *const_str_plain_nan;
static PyObject *const_str_digest_af0301c3a0266b67349f7d6fb64cea28;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_options;
static PyObject *const_str_plain_overwrite_A;
static PyObject *const_str_plain_f_type;
static PyObject *const_str_digest_b8775e2873f68ebdbe9d7b17a6b01691;
extern PyObject *const_tuple_str_plain_LinAlgError_tuple;
static PyObject *const_str_plain_umf;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_digest_05b568aeb851b08769cd65edf9b6d9ac;
extern PyObject *const_str_plain_numpy;
static PyObject *const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_tuple_none_none_none_none_none_none_none_none_tuple;
extern PyObject *const_str_plain_nnz;
static PyObject *const_tuple_85f830fda70bb024c7fa9d098dad0478_tuple;
extern PyObject *const_str_plain_int;
static PyObject *const_str_plain_assumeSortedIndices;
extern PyObject *const_str_plain_linsolve;
extern PyObject *const_dict_10010a04cba23a4ccc75195b8c45141a;
static PyObject *const_tuple_290d380a9581aade535af49fd4c8d61f_tuple;
static PyObject *const_str_digest_fd23c2bd576d906e73d606c4b0d336b6;
extern PyObject *const_str_plain__families;
extern PyObject *const_str_plain_asanyarray;
extern PyObject *const_str_plain_float;
static PyObject *const_list_1681adbc7e6f0f4fe6bf303657320e89_list;
static PyObject *const_str_digest_913faed04ee39dc0a01a096592776115;
static PyObject *const_dict_d651afcac12196dc5a0b74e25d976a33;
static PyObject *const_str_plain_UMFPACK_A;
static PyObject *const_str_plain_drop_tol;
extern PyObject *const_str_plain_indices;
static PyObject *const_str_plain_DiagPivotThresh;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_casting;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_digest_54824583ac1072b245c698a21ee5f8ff;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_76a9d16edf532be5e5e0588568cc8819;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_A_diagonal_index_row_i;
extern PyObject *const_str_plain_int64;
static PyObject *const_str_plain_fill_factor;
static PyObject *const_str_digest_a32417955b7f9bbcfd06dc84a7982101;
static PyObject *const_str_digest_534f6b5bb171eb874713bab98f5b0e32;
extern PyObject *const_str_plain_relax;
extern PyObject *const_str_plain_b;
static PyObject *const_str_plain_indptr_start;
static PyObject *const_str_digest_cd6b07ef5eca1f322deb69c874832295;
extern PyObject *const_str_plain_overwrite_b;
static PyObject *const_str_digest_ca1ad0289fff8e9baf016698c203b2d8;
extern PyObject *const_str_plain_result_type;
static PyObject *const_str_digest_1326693e03c12f3ce05e0efe10b07651;
extern PyObject *const_str_plain_concatenate;
static PyObject *const_tuple_d4c7c4dcdac2d0700eff08a07b9bd2b9_tuple;
extern PyObject *const_str_plain_False;
static PyObject *const_tuple_str_plain__superlu_tuple;
extern PyObject *const_str_plain_isspmatrix_csr;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_d339a876fdb49e8933e1cc695325521a;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_char;
static PyObject *const_str_plain_ILU_FillFactor;
static PyObject *const_str_digest_8b8ec29dd792cbce023ba0ed71f5d9e4;
static PyObject *const_str_plain_ColPerm;
extern PyObject *const_str_plain_spsolve;
static PyObject *const_str_plain_Relax;
extern PyObject *const_str_plain_same_kind;
static PyObject *const_str_digest_fc563d93ea6e87a880e51336e6cb654e;
static PyObject *const_str_digest_3bdc53b042d6a5ff32c86b8b1b3983c3;
extern PyObject *const_str_plain_LinAlgError;
extern PyObject *const_int_0;
static PyObject *const_str_digest_079f25b695a7beab5887c2fdc4dfc5e2;
extern PyObject *const_str_plain_splu;
static PyObject *const_str_plain_ilu;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_complex128;
static PyObject *const_str_plain_MatrixRankWarning;
extern PyObject *const_str_plain_float64;
extern PyObject *const_tuple_none_true_tuple;
extern PyObject *const_str_plain_SparseEfficiencyWarning;
static PyObject *const_str_plain_spsolve_triangular;
extern PyObject *const_str_plain_flatnonzero;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_ravel;
static PyObject *const_str_plain_x_dtype;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_digest_3380e4d2adc09b3ee154c9ad0312fef9;
extern PyObject *const_str_plain_x;
static PyObject *const_str_plain_A_values_in_row_i;
static PyObject *const_str_plain_zi;
static PyObject *const_str_plain_A_off_diagonal_indices_row_i;
extern PyObject *const_str_plain__options;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain__superlu;
extern PyObject *const_str_plain_sctypeDict;
extern PyObject *const_str_plain_dl;
static PyObject *const_str_digest_05c78a3a6f4726b03c6df15f0d2480fc;
static PyObject *const_str_plain_umfpack;
extern PyObject *const_str_plain_csc_matrix;
extern PyObject *const_str_plain_dot;
static PyObject *const_tuple_6e72312ea740ee2000830c462a435ce0_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_isspmatrix;
static PyObject *const_str_digest_1a6569860d07e998d6ccbf11bb49fe7b;
static PyObject *const_str_plain_indptr_stop;
static PyObject *const_tuple_82e2bcac355eb6905c8736430c3b7f98_tuple;
extern PyObject *const_str_plain_factorized;
static PyObject *const_str_plain_panel_size;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
static PyObject *const_tuple_str_plain_A_str_plain_umf_str_plain_solve_tuple;
extern PyObject *const_str_plain_copy;
static PyObject *const_tuple_str_plain_b_str_plain_umf_str_plain_A_tuple;
extern PyObject *const_str_plain_M;
static PyObject *const_str_plain_spilu;
extern PyObject *const_str_digest_9b568abd0afabc6e6ad6748919c47246;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_tuple_str_plain_warn_tuple;
static PyObject *const_str_plain_A_column_indices_in_row_i;
extern PyObject *const_str_plain_T;
static PyObject *const_str_digest_25fb379629483b29bbd23a14ab700f54;
static PyObject *const_str_plain_useUmfpack;
extern PyObject *const_str_plain_csr_matrix;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_plain_use_solver;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_configure;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_drop_rule;
extern PyObject *const_list_int_pos_1_int_pos_2_list;
static PyObject *const_str_plain__get_umf_family;
static PyObject *const_str_plain_dD;
extern PyObject *const_str_plain_fill;
extern PyObject *const_str_plain_can_cast;
static PyObject *const_str_plain_ILU_DropRule;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_UmfpackContext = UNSTREAM_STRING_ASCII( &constant_bin[ 5418320 ], 14, 1 );
    const_str_digest_10da958c52186111220c09515b9519e4 = UNSTREAM_STRING_ASCII( &constant_bin[ 5418334 ], 46, 0 );
    const_str_plain_gstrf = UNSTREAM_STRING_ASCII( &constant_bin[ 5418380 ], 5, 1 );
    const_str_digest_7757d3c9d20877a9bb897d9bb4ae5582 = UNSTREAM_STRING_ASCII( &constant_bin[ 5418385 ], 41, 0 );
    const_str_digest_b729412079229fc3528876e1d89f1215 = UNSTREAM_STRING_ASCII( &constant_bin[ 5418426 ], 25, 0 );
    const_str_digest_548f7d74af9a253b8fcd84fea7c8434e = UNSTREAM_STRING_ASCII( &constant_bin[ 5418451 ], 56, 0 );
    const_str_plain_gssv = UNSTREAM_STRING_ASCII( &constant_bin[ 5418507 ], 4, 1 );
    const_str_plain_ILU_DropTol = UNSTREAM_STRING_ASCII( &constant_bin[ 5418511 ], 11, 1 );
    const_str_plain_PanelSize = UNSTREAM_STRING_ASCII( &constant_bin[ 5418522 ], 9, 1 );
    const_tuple_str_plain_asarray_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_asarray_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    const_str_plain_diag_pivot_thresh = UNSTREAM_STRING_ASCII( &constant_bin[ 5418531 ], 17, 1 );
    const_str_digest_6da71c7a9bd46e94b23111405f83b9ee = UNSTREAM_STRING_ASCII( &constant_bin[ 5418548 ], 46, 0 );
    const_str_plain_autoTranspose = UNSTREAM_STRING_ASCII( &constant_bin[ 5418594 ], 13, 1 );
    const_str_digest_afe08b8241bded7b39d552a81320614d = UNSTREAM_STRING_ASCII( &constant_bin[ 5418607 ], 53, 0 );
    const_tuple_true_false_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_true_false_false_tuple, 0, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_true_false_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_true_false_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    const_str_plain_noScikit = UNSTREAM_STRING_ASCII( &constant_bin[ 5418660 ], 8, 1 );
    const_str_digest_ad7f1d28c089e7489f74b230627f02eb = UNSTREAM_STRING_ASCII( &constant_bin[ 5418668 ], 35, 0 );
    const_str_plain_i_type = UNSTREAM_STRING_ASCII( &constant_bin[ 5418703 ], 6, 1 );
    const_str_digest_af0301c3a0266b67349f7d6fb64cea28 = UNSTREAM_STRING_ASCII( &constant_bin[ 5418709 ], 1602, 0 );
    const_str_plain_overwrite_A = UNSTREAM_STRING_ASCII( &constant_bin[ 5420311 ], 11, 1 );
    const_str_plain_f_type = UNSTREAM_STRING_ASCII( &constant_bin[ 3913904 ], 6, 1 );
    const_str_digest_b8775e2873f68ebdbe9d7b17a6b01691 = UNSTREAM_STRING_ASCII( &constant_bin[ 5420322 ], 26, 0 );
    const_str_plain_umf = UNSTREAM_STRING_ASCII( &constant_bin[ 890737 ], 3, 1 );
    const_str_digest_05b568aeb851b08769cd65edf9b6d9ac = UNSTREAM_STRING_ASCII( &constant_bin[ 5420348 ], 30, 0 );
    const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple, 2, const_str_plain_lower ); Py_INCREF( const_str_plain_lower );
    PyTuple_SET_ITEM( const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple, 3, const_str_plain_overwrite_A ); Py_INCREF( const_str_plain_overwrite_A );
    PyTuple_SET_ITEM( const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple, 4, const_str_plain_overwrite_b ); Py_INCREF( const_str_plain_overwrite_b );
    const_str_plain_x_dtype = UNSTREAM_STRING_ASCII( &constant_bin[ 3551953 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple, 5, const_str_plain_x_dtype ); Py_INCREF( const_str_plain_x_dtype );
    PyTuple_SET_ITEM( const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple, 6, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple, 7, const_str_plain_row_indices ); Py_INCREF( const_str_plain_row_indices );
    PyTuple_SET_ITEM( const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple, 8, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_plain_indptr_start = UNSTREAM_STRING_ASCII( &constant_bin[ 5420378 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple, 9, const_str_plain_indptr_start ); Py_INCREF( const_str_plain_indptr_start );
    const_str_plain_indptr_stop = UNSTREAM_STRING_ASCII( &constant_bin[ 5420390 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple, 10, const_str_plain_indptr_stop ); Py_INCREF( const_str_plain_indptr_stop );
    const_str_plain_A_diagonal_index_row_i = UNSTREAM_STRING_ASCII( &constant_bin[ 5420401 ], 22, 1 );
    PyTuple_SET_ITEM( const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple, 11, const_str_plain_A_diagonal_index_row_i ); Py_INCREF( const_str_plain_A_diagonal_index_row_i );
    const_str_plain_A_off_diagonal_indices_row_i = UNSTREAM_STRING_ASCII( &constant_bin[ 5420423 ], 28, 1 );
    PyTuple_SET_ITEM( const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple, 12, const_str_plain_A_off_diagonal_indices_row_i ); Py_INCREF( const_str_plain_A_off_diagonal_indices_row_i );
    const_str_plain_A_column_indices_in_row_i = UNSTREAM_STRING_ASCII( &constant_bin[ 5420451 ], 25, 1 );
    PyTuple_SET_ITEM( const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple, 13, const_str_plain_A_column_indices_in_row_i ); Py_INCREF( const_str_plain_A_column_indices_in_row_i );
    const_str_plain_A_values_in_row_i = UNSTREAM_STRING_ASCII( &constant_bin[ 5420476 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple, 14, const_str_plain_A_values_in_row_i ); Py_INCREF( const_str_plain_A_values_in_row_i );
    const_tuple_85f830fda70bb024c7fa9d098dad0478_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_85f830fda70bb024c7fa9d098dad0478_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_85f830fda70bb024c7fa9d098dad0478_tuple, 1, const_str_plain__families ); Py_INCREF( const_str_plain__families );
    PyTuple_SET_ITEM( const_tuple_85f830fda70bb024c7fa9d098dad0478_tuple, 2, const_str_plain_f_type ); Py_INCREF( const_str_plain_f_type );
    PyTuple_SET_ITEM( const_tuple_85f830fda70bb024c7fa9d098dad0478_tuple, 3, const_str_plain_i_type ); Py_INCREF( const_str_plain_i_type );
    PyTuple_SET_ITEM( const_tuple_85f830fda70bb024c7fa9d098dad0478_tuple, 4, const_str_plain_family ); Py_INCREF( const_str_plain_family );
    PyTuple_SET_ITEM( const_tuple_85f830fda70bb024c7fa9d098dad0478_tuple, 5, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_plain_assumeSortedIndices = UNSTREAM_STRING_ASCII( &constant_bin[ 5420493 ], 19, 1 );
    const_tuple_290d380a9581aade535af49fd4c8d61f_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    const_str_plain_drop_tol = UNSTREAM_STRING_ASCII( &constant_bin[ 5418947 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 1, const_str_plain_drop_tol ); Py_INCREF( const_str_plain_drop_tol );
    const_str_plain_fill_factor = UNSTREAM_STRING_ASCII( &constant_bin[ 5419077 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 2, const_str_plain_fill_factor ); Py_INCREF( const_str_plain_fill_factor );
    const_str_plain_drop_rule = UNSTREAM_STRING_ASCII( &constant_bin[ 5419188 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 3, const_str_plain_drop_rule ); Py_INCREF( const_str_plain_drop_rule );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 4, const_str_plain_permc_spec ); Py_INCREF( const_str_plain_permc_spec );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 5, const_str_plain_diag_pivot_thresh ); Py_INCREF( const_str_plain_diag_pivot_thresh );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 6, const_str_plain_relax ); Py_INCREF( const_str_plain_relax );
    const_str_plain_panel_size = UNSTREAM_STRING_ASCII( &constant_bin[ 5420512 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 7, const_str_plain_panel_size ); Py_INCREF( const_str_plain_panel_size );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 8, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 9, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 10, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 11, const_str_plain__options ); Py_INCREF( const_str_plain__options );
    const_str_digest_fd23c2bd576d906e73d606c4b0d336b6 = UNSTREAM_STRING_ASCII( &constant_bin[ 5420522 ], 31, 0 );
    const_list_1681adbc7e6f0f4fe6bf303657320e89_list = PyList_New( 7 );
    const_str_plain_use_solver = UNSTREAM_STRING_ASCII( &constant_bin[ 5391911 ], 10, 1 );
    PyList_SET_ITEM( const_list_1681adbc7e6f0f4fe6bf303657320e89_list, 0, const_str_plain_use_solver ); Py_INCREF( const_str_plain_use_solver );
    PyList_SET_ITEM( const_list_1681adbc7e6f0f4fe6bf303657320e89_list, 1, const_str_plain_spsolve ); Py_INCREF( const_str_plain_spsolve );
    PyList_SET_ITEM( const_list_1681adbc7e6f0f4fe6bf303657320e89_list, 2, const_str_plain_splu ); Py_INCREF( const_str_plain_splu );
    const_str_plain_spilu = UNSTREAM_STRING_ASCII( &constant_bin[ 5393499 ], 5, 1 );
    PyList_SET_ITEM( const_list_1681adbc7e6f0f4fe6bf303657320e89_list, 3, const_str_plain_spilu ); Py_INCREF( const_str_plain_spilu );
    PyList_SET_ITEM( const_list_1681adbc7e6f0f4fe6bf303657320e89_list, 4, const_str_plain_factorized ); Py_INCREF( const_str_plain_factorized );
    const_str_plain_MatrixRankWarning = UNSTREAM_STRING_ASCII( &constant_bin[ 5391850 ], 17, 1 );
    PyList_SET_ITEM( const_list_1681adbc7e6f0f4fe6bf303657320e89_list, 5, const_str_plain_MatrixRankWarning ); Py_INCREF( const_str_plain_MatrixRankWarning );
    const_str_plain_spsolve_triangular = UNSTREAM_STRING_ASCII( &constant_bin[ 5391689 ], 18, 1 );
    PyList_SET_ITEM( const_list_1681adbc7e6f0f4fe6bf303657320e89_list, 6, const_str_plain_spsolve_triangular ); Py_INCREF( const_str_plain_spsolve_triangular );
    const_str_digest_913faed04ee39dc0a01a096592776115 = UNSTREAM_STRING_ASCII( &constant_bin[ 5420553 ], 56, 0 );
    const_dict_d651afcac12196dc5a0b74e25d976a33 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_d651afcac12196dc5a0b74e25d976a33, const_str_plain_autoTranspose, Py_True );
    assert( PyDict_Size( const_dict_d651afcac12196dc5a0b74e25d976a33 ) == 1 );
    const_str_plain_UMFPACK_A = UNSTREAM_STRING_ASCII( &constant_bin[ 5420609 ], 9, 1 );
    const_str_plain_DiagPivotThresh = UNSTREAM_STRING_ASCII( &constant_bin[ 5420618 ], 15, 1 );
    const_str_digest_54824583ac1072b245c698a21ee5f8ff = UNSTREAM_STRING_ASCII( &constant_bin[ 5420633 ], 90, 0 );
    const_str_digest_76a9d16edf532be5e5e0588568cc8819 = UNSTREAM_STRING_ASCII( &constant_bin[ 5420723 ], 36, 0 );
    const_str_digest_a32417955b7f9bbcfd06dc84a7982101 = UNSTREAM_STRING_ASCII( &constant_bin[ 5420759 ], 38, 0 );
    const_str_digest_534f6b5bb171eb874713bab98f5b0e32 = UNSTREAM_STRING_ASCII( &constant_bin[ 5420797 ], 35, 0 );
    const_str_digest_cd6b07ef5eca1f322deb69c874832295 = UNSTREAM_STRING_ASCII( &constant_bin[ 5420832 ], 31, 0 );
    const_str_digest_ca1ad0289fff8e9baf016698c203b2d8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5420863 ], 1927, 0 );
    const_str_digest_1326693e03c12f3ce05e0efe10b07651 = UNSTREAM_STRING_ASCII( &constant_bin[ 5422790 ], 1594, 0 );
    const_tuple_d4c7c4dcdac2d0700eff08a07b9bd2b9_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5424384 ], 225 );
    const_tuple_str_plain__superlu_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__superlu_tuple, 0, const_str_plain__superlu ); Py_INCREF( const_str_plain__superlu );
    const_str_digest_d339a876fdb49e8933e1cc695325521a = UNSTREAM_STRING_ASCII( &constant_bin[ 5424609 ], 136, 0 );
    const_str_plain_ILU_FillFactor = UNSTREAM_STRING_ASCII( &constant_bin[ 5424745 ], 14, 1 );
    const_str_digest_8b8ec29dd792cbce023ba0ed71f5d9e4 = UNSTREAM_STRING_ASCII( &constant_bin[ 5424759 ], 44, 0 );
    const_str_plain_ColPerm = UNSTREAM_STRING_ASCII( &constant_bin[ 5424803 ], 7, 1 );
    const_str_plain_Relax = UNSTREAM_STRING_ASCII( &constant_bin[ 2022227 ], 5, 1 );
    const_str_digest_fc563d93ea6e87a880e51336e6cb654e = UNSTREAM_STRING_ASCII( &constant_bin[ 5424810 ], 44, 0 );
    const_str_digest_3bdc53b042d6a5ff32c86b8b1b3983c3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5424854 ], 867, 0 );
    const_str_digest_079f25b695a7beab5887c2fdc4dfc5e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5425721 ], 109, 0 );
    const_str_plain_ilu = UNSTREAM_STRING_ASCII( &constant_bin[ 742891 ], 3, 1 );
    const_str_digest_3380e4d2adc09b3ee154c9ad0312fef9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5425830 ], 706, 0 );
    const_str_plain_zi = UNSTREAM_STRING_ASCII( &constant_bin[ 12908 ], 2, 1 );
    const_str_digest_05c78a3a6f4726b03c6df15f0d2480fc = UNSTREAM_STRING_ASCII( &constant_bin[ 5426536 ], 67, 0 );
    const_str_plain_umfpack = UNSTREAM_STRING_ASCII( &constant_bin[ 4059690 ], 7, 1 );
    const_tuple_6e72312ea740ee2000830c462a435ce0_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_6e72312ea740ee2000830c462a435ce0_tuple, 0, const_str_plain_isspmatrix_csc ); Py_INCREF( const_str_plain_isspmatrix_csc );
    PyTuple_SET_ITEM( const_tuple_6e72312ea740ee2000830c462a435ce0_tuple, 1, const_str_plain_isspmatrix_csr ); Py_INCREF( const_str_plain_isspmatrix_csr );
    PyTuple_SET_ITEM( const_tuple_6e72312ea740ee2000830c462a435ce0_tuple, 2, const_str_plain_isspmatrix ); Py_INCREF( const_str_plain_isspmatrix );
    PyTuple_SET_ITEM( const_tuple_6e72312ea740ee2000830c462a435ce0_tuple, 3, const_str_plain_SparseEfficiencyWarning ); Py_INCREF( const_str_plain_SparseEfficiencyWarning );
    PyTuple_SET_ITEM( const_tuple_6e72312ea740ee2000830c462a435ce0_tuple, 4, const_str_plain_csc_matrix ); Py_INCREF( const_str_plain_csc_matrix );
    PyTuple_SET_ITEM( const_tuple_6e72312ea740ee2000830c462a435ce0_tuple, 5, const_str_plain_csr_matrix ); Py_INCREF( const_str_plain_csr_matrix );
    const_str_digest_1a6569860d07e998d6ccbf11bb49fe7b = UNSTREAM_STRING_ASCII( &constant_bin[ 5426603 ], 2142, 0 );
    const_tuple_82e2bcac355eb6905c8736430c3b7f98_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_82e2bcac355eb6905c8736430c3b7f98_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_82e2bcac355eb6905c8736430c3b7f98_tuple, 1, const_str_plain_permc_spec ); Py_INCREF( const_str_plain_permc_spec );
    PyTuple_SET_ITEM( const_tuple_82e2bcac355eb6905c8736430c3b7f98_tuple, 2, const_str_plain_diag_pivot_thresh ); Py_INCREF( const_str_plain_diag_pivot_thresh );
    PyTuple_SET_ITEM( const_tuple_82e2bcac355eb6905c8736430c3b7f98_tuple, 3, const_str_plain_relax ); Py_INCREF( const_str_plain_relax );
    PyTuple_SET_ITEM( const_tuple_82e2bcac355eb6905c8736430c3b7f98_tuple, 4, const_str_plain_panel_size ); Py_INCREF( const_str_plain_panel_size );
    PyTuple_SET_ITEM( const_tuple_82e2bcac355eb6905c8736430c3b7f98_tuple, 5, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_82e2bcac355eb6905c8736430c3b7f98_tuple, 6, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_82e2bcac355eb6905c8736430c3b7f98_tuple, 7, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_82e2bcac355eb6905c8736430c3b7f98_tuple, 8, const_str_plain__options ); Py_INCREF( const_str_plain__options );
    const_tuple_str_plain_A_str_plain_umf_str_plain_solve_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_umf_str_plain_solve_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_umf_str_plain_solve_tuple, 1, const_str_plain_umf ); Py_INCREF( const_str_plain_umf );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_umf_str_plain_solve_tuple, 2, const_str_plain_solve ); Py_INCREF( const_str_plain_solve );
    const_tuple_str_plain_b_str_plain_umf_str_plain_A_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_umf_str_plain_A_tuple, 0, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_umf_str_plain_A_tuple, 1, const_str_plain_umf ); Py_INCREF( const_str_plain_umf );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_umf_str_plain_A_tuple, 2, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    const_str_digest_25fb379629483b29bbd23a14ab700f54 = UNSTREAM_STRING_ASCII( &constant_bin[ 5428745 ], 42, 0 );
    const_str_plain_useUmfpack = UNSTREAM_STRING_ASCII( &constant_bin[ 5413753 ], 10, 1 );
    const_str_plain__get_umf_family = UNSTREAM_STRING_ASCII( &constant_bin[ 5428787 ], 15, 1 );
    const_str_plain_dD = UNSTREAM_STRING_ASCII( &constant_bin[ 517185 ], 2, 1 );
    const_str_plain_ILU_DropRule = UNSTREAM_STRING_ASCII( &constant_bin[ 5428802 ], 12, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$sparse$linalg$dsolve$linsolve( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a90ac1249c79974e9a77e73da84682c0;
static PyCodeObject *codeobj_929db4faae6ed466642b71ce5e418556;
static PyCodeObject *codeobj_2586354cbe9564e1108b3c6933311482;
static PyCodeObject *codeobj_798f86b7dd54840f212380084b2cbdce;
static PyCodeObject *codeobj_9fd69656000d335e3cbf88faca5ccf36;
static PyCodeObject *codeobj_70e852041d066caa0550299ba1357e82;
static PyCodeObject *codeobj_ab681ddcff95de5391c6e9ba21ea6ccd;
static PyCodeObject *codeobj_996fa87603a033f4b96dad99c15ccfcb;
static PyCodeObject *codeobj_720a59584b69465b066bd1541edc9817;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_a32417955b7f9bbcfd06dc84a7982101 );
    codeobj_a90ac1249c79974e9a77e73da84682c0 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8b8ec29dd792cbce023ba0ed71f5d9e4, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_929db4faae6ed466642b71ce5e418556 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_umf_family, 60, const_tuple_85f830fda70bb024c7fa9d098dad0478_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2586354cbe9564e1108b3c6933311482 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_factorized, 392, const_tuple_str_plain_A_str_plain_umf_str_plain_solve_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_798f86b7dd54840f212380084b2cbdce = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve, 438, const_tuple_str_plain_b_str_plain_umf_str_plain_A_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_9fd69656000d335e3cbf88faca5ccf36 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_spilu, 314, const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_70e852041d066caa0550299ba1357e82 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_splu, 228, const_tuple_82e2bcac355eb6905c8736430c3b7f98_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ab681ddcff95de5391c6e9ba21ea6ccd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_spsolve, 83, const_tuple_d4c7c4dcdac2d0700eff08a07b9bd2b9_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_996fa87603a033f4b96dad99c15ccfcb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_spsolve_triangular, 446, const_tuple_3b9a0062ccd70c7aa29b7f078200e93b_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_720a59584b69465b066bd1541edc9817 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_use_solver, 29, const_tuple_str_plain_kwargs_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_1_use_solver(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_2__get_umf_family(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_3_spsolve( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_4_splu( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_5_spilu( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_6_factorized(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_6_factorized$$$function_1_solve(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_7_spsolve_triangular( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$sparse$linalg$dsolve$linsolve$$$function_1_use_solver( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_kwargs = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_720a59584b69465b066bd1541edc9817;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_720a59584b69465b066bd1541edc9817 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_720a59584b69465b066bd1541edc9817, codeobj_720a59584b69465b066bd1541edc9817, module_scipy$sparse$linalg$dsolve$linsolve, sizeof(void *) );
    frame_720a59584b69465b066bd1541edc9817 = cache_frame_720a59584b69465b066bd1541edc9817;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_720a59584b69465b066bd1541edc9817 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_720a59584b69465b066bd1541edc9817 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = const_str_plain_useUmfpack;
        CHECK_OBJECT( par_kwargs );
        tmp_compexpr_right_1 = par_kwargs;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( par_kwargs );
            tmp_subscribed_name_1 = par_kwargs;
            tmp_subscript_name_1 = const_str_plain_useUmfpack;
            tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscribed_1 = (PyObject *)moduledict_scipy$sparse$linalg$dsolve$linsolve;
            tmp_ass_subscript_1 = const_str_plain_useUmfpack;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_useUmfpack );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_useUmfpack );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "useUmfpack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_mvar_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "o";
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
        tmp_compexpr_left_2 = const_str_plain_assumeSortedIndices;
        CHECK_OBJECT( par_kwargs );
        tmp_compexpr_right_2 = par_kwargs;
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_umfpack );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umfpack );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "umfpack" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 58;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_configure );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_assumeSortedIndices;
            CHECK_OBJECT( par_kwargs );
            tmp_subscribed_name_2 = par_kwargs;
            tmp_subscript_name_2 = const_str_plain_assumeSortedIndices;
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 58;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_720a59584b69465b066bd1541edc9817->m_frame.f_lineno = 58;
            tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_720a59584b69465b066bd1541edc9817 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_720a59584b69465b066bd1541edc9817 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_720a59584b69465b066bd1541edc9817, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_720a59584b69465b066bd1541edc9817->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_720a59584b69465b066bd1541edc9817, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_720a59584b69465b066bd1541edc9817,
        type_description_1,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_720a59584b69465b066bd1541edc9817 == cache_frame_720a59584b69465b066bd1541edc9817 )
    {
        Py_DECREF( frame_720a59584b69465b066bd1541edc9817 );
    }
    cache_frame_720a59584b69465b066bd1541edc9817 = NULL;

    assertFrameObject( frame_720a59584b69465b066bd1541edc9817 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_1_use_solver );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_1_use_solver );
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


static PyObject *impl_scipy$sparse$linalg$dsolve$linsolve$$$function_2__get_umf_family( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *var__families = NULL;
    PyObject *var_f_type = NULL;
    PyObject *var_i_type = NULL;
    PyObject *var_family = NULL;
    PyObject *var_msg = NULL;
    struct Nuitka_FrameObject *frame_929db4faae6ed466642b71ce5e418556;
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
    static struct Nuitka_FrameObject *cache_frame_929db4faae6ed466642b71ce5e418556 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_929db4faae6ed466642b71ce5e418556, codeobj_929db4faae6ed466642b71ce5e418556, module_scipy$sparse$linalg$dsolve$linsolve, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_929db4faae6ed466642b71ce5e418556 = cache_frame_929db4faae6ed466642b71ce5e418556;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_929db4faae6ed466642b71ce5e418556 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_929db4faae6ed466642b71ce5e418556 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_float64 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_dict_key_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_dict_key_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_int32 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dict_key_1 );

            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_dict_key_1, 1, tmp_tuple_element_1 );
        tmp_dict_value_1 = const_str_plain_di;
        tmp_assign_source_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_key_1 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 62;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_assign_source_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_complex128 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_dict_key_2, 0, tmp_tuple_element_2 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_key_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_int32 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_key_2 );

            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_dict_key_2, 1, tmp_tuple_element_2 );
        tmp_dict_value_2 = const_str_plain_zi;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_key_2 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 62;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_assign_source_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_5;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_float64 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_dict_key_3, 0, tmp_tuple_element_3 );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_key_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_6;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_int64 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_key_3 );

            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_dict_key_3, 1, tmp_tuple_element_3 );
        tmp_dict_value_3 = const_str_plain_dl;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_key_3 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 62;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_assign_source_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_7;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_complex128 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_dict_key_4, 0, tmp_tuple_element_4 );
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_key_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_8;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_int64 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_key_4 );

            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_dict_key_4, 1, tmp_tuple_element_4 );
        tmp_dict_value_4 = const_str_plain_zl;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_key_4 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 62;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var__families == NULL );
        var__families = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_10;
        PyObject *tmp_source_name_11;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_9;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_sctypeDict );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_source_name_11 = par_A;
        tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_dtype );
        if ( tmp_source_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_name );
        Py_DECREF( tmp_source_name_10 );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f_type == NULL );
        var_f_type = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_source_name_13;
        PyObject *tmp_source_name_14;
        PyObject *tmp_source_name_15;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 70;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_10;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_sctypeDict );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_source_name_15 = par_A;
        tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_indices );
        if ( tmp_source_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_2 );

            exception_lineno = 70;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_dtype );
        Py_DECREF( tmp_source_name_14 );
        if ( tmp_source_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_2 );

            exception_lineno = 70;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_name );
        Py_DECREF( tmp_source_name_13 );
        if ( tmp_subscript_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_2 );

            exception_lineno = 70;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_i_type == NULL );
        var_i_type = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT( var__families );
        tmp_dict_name_1 = var__families;
        CHECK_OBJECT( var_f_type );
        tmp_tuple_element_5 = var_f_type;
        tmp_key_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_key_name_1, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_i_type );
        tmp_tuple_element_5 = var_i_type;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_key_name_1, 1, tmp_tuple_element_5 );
        tmp_assign_source_4 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
        Py_DECREF( tmp_key_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert( var_family == NULL );
        var_family = tmp_assign_source_4;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_929db4faae6ed466642b71ce5e418556, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_929db4faae6ed466642b71ce5e418556, exception_keeper_lineno_1 );
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
        tmp_compexpr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_6;
            tmp_left_name_1 = const_str_digest_079f25b695a7beab5887c2fdc4dfc5e2;
            CHECK_OBJECT( var_f_type );
            tmp_tuple_element_6 = var_f_type;
            tmp_right_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( var_i_type );
            tmp_tuple_element_6 = var_i_type;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_6 );
            tmp_assign_source_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            assert( var_msg == NULL );
            var_msg = tmp_assign_source_5;
        }
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            CHECK_OBJECT( var_msg );
            tmp_make_exception_arg_1 = var_msg;
            frame_929db4faae6ed466642b71ce5e418556->m_frame.f_lineno = 79;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 79;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 72;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_929db4faae6ed466642b71ce5e418556->m_frame) frame_929db4faae6ed466642b71ce5e418556->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_2__get_umf_family );
    return NULL;
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
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_929db4faae6ed466642b71ce5e418556 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_929db4faae6ed466642b71ce5e418556 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_929db4faae6ed466642b71ce5e418556, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_929db4faae6ed466642b71ce5e418556->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_929db4faae6ed466642b71ce5e418556, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_929db4faae6ed466642b71ce5e418556,
        type_description_1,
        par_A,
        var__families,
        var_f_type,
        var_i_type,
        var_family,
        var_msg
    );


    // Release cached frame.
    if ( frame_929db4faae6ed466642b71ce5e418556 == cache_frame_929db4faae6ed466642b71ce5e418556 )
    {
        Py_DECREF( frame_929db4faae6ed466642b71ce5e418556 );
    }
    cache_frame_929db4faae6ed466642b71ce5e418556 = NULL;

    assertFrameObject( frame_929db4faae6ed466642b71ce5e418556 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_family );
    tmp_return_value = var_family;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_2__get_umf_family );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)var__families );
    Py_DECREF( var__families );
    var__families = NULL;

    CHECK_OBJECT( (PyObject *)var_f_type );
    Py_DECREF( var_f_type );
    var_f_type = NULL;

    CHECK_OBJECT( (PyObject *)var_i_type );
    Py_DECREF( var_i_type );
    var_i_type = NULL;

    CHECK_OBJECT( (PyObject *)var_family );
    Py_DECREF( var_family );
    var_family = NULL;

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

    Py_XDECREF( var__families );
    var__families = NULL;

    Py_XDECREF( var_f_type );
    var_f_type = NULL;

    Py_XDECREF( var_i_type );
    var_i_type = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_2__get_umf_family );
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


static PyObject *impl_scipy$sparse$linalg$dsolve$linsolve$$$function_3_spsolve( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_permc_spec = python_pars[ 2 ];
    PyObject *par_use_umfpack = python_pars[ 3 ];
    PyObject *var_b_is_sparse = NULL;
    PyObject *var_b_is_vector = NULL;
    PyObject *var_result_dtype = NULL;
    PyObject *var_M = NULL;
    PyObject *var_N = NULL;
    PyObject *var_b_vec = NULL;
    PyObject *var_umf = NULL;
    PyObject *var_x = NULL;
    PyObject *var_flag = NULL;
    PyObject *var_options = NULL;
    PyObject *var_info = NULL;
    PyObject *var_Afactsolve = NULL;
    PyObject *var_data_segs = NULL;
    PyObject *var_row_segs = NULL;
    PyObject *var_col_segs = NULL;
    PyObject *var_j = NULL;
    PyObject *var_bj = NULL;
    PyObject *var_xj = NULL;
    PyObject *var_w = NULL;
    PyObject *var_segment_length = NULL;
    PyObject *var_sparse_data = NULL;
    PyObject *var_sparse_row = NULL;
    PyObject *var_sparse_col = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_ab681ddcff95de5391c6e9ba21ea6ccd;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ab681ddcff95de5391c6e9ba21ea6ccd = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ab681ddcff95de5391c6e9ba21ea6ccd, codeobj_ab681ddcff95de5391c6e9ba21ea6ccd, module_scipy$sparse$linalg$dsolve$linsolve, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ab681ddcff95de5391c6e9ba21ea6ccd = cache_frame_ab681ddcff95de5391c6e9ba21ea6ccd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ab681ddcff95de5391c6e9ba21ea6ccd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ab681ddcff95de5391c6e9ba21ea6ccd ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isspmatrix_csc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_or_left_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_or_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF( tmp_or_left_value_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csr );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csr );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isspmatrix_csr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_2 = par_A;
        frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_or_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_or_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_operand_name_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooo";
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_csc_matrix );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csc_matrix" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 131;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_3 = par_A;
            frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 131;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_A;
                assert( old != NULL );
                par_A = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_warn );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 132;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            tmp_args_element_name_4 = const_str_digest_10da958c52186111220c09515b9519e4;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SparseEfficiencyWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 133;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_5 = tmp_mvar_value_5;
            frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 132;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 132;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isspmatrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_6;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_6 = par_b;
        frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_b_is_sparse == NULL );
        var_b_is_sparse = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( var_b_is_sparse );
        tmp_operand_name_2 = var_b_is_sparse;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_asarray );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 138;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_7;
            CHECK_OBJECT( par_b );
            tmp_args_element_name_7 = par_b;
            frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 138;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_b;
                assert( old != NULL );
                par_b = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_4;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_b );
        tmp_source_name_1 = par_b;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_or_left_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_or_left_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_2 );

            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF( tmp_or_left_value_2 );
        CHECK_OBJECT( par_b );
        tmp_source_name_2 = par_b;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_2;
        tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_and_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_1 );

            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooo";
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
        CHECK_OBJECT( par_b );
        tmp_source_name_3 = par_b;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_pos_1;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_and_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_2 = tmp_and_left_value_1;
        and_end_1:;
        tmp_assign_source_4 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_assign_source_4 = tmp_or_left_value_2;
        or_end_2:;
        assert( var_b_is_vector == NULL );
        var_b_is_vector = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( par_A );
        tmp_called_instance_1 = par_A;
        frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 142;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_sum_duplicates );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_A );
        tmp_called_instance_2 = par_A;
        frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 143;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_asfptype );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_5;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_source_name_6;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_8;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_promote_types );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_source_name_5 = par_A;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_source_name_6 = par_b;
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_result_dtype == NULL );
        var_result_dtype = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_A );
        tmp_source_name_7 = par_A;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dtype );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result_dtype );
        tmp_compexpr_right_4 = var_result_dtype;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_10;
            CHECK_OBJECT( par_A );
            tmp_called_instance_3 = par_A;
            CHECK_OBJECT( var_result_dtype );
            tmp_args_element_name_10 = var_result_dtype;
            frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 146;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_astype, call_args );
            }

            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_A;
                assert( old != NULL );
                par_A = tmp_assign_source_7;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_b );
        tmp_source_name_8 = par_b;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dtype );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result_dtype );
        tmp_compexpr_right_5 = var_result_dtype;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_11;
            CHECK_OBJECT( par_b );
            tmp_called_instance_4 = par_b;
            CHECK_OBJECT( var_result_dtype );
            tmp_args_element_name_11 = var_result_dtype;
            frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 148;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_astype, call_args );
            }

            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_b;
                assert( old != NULL );
                par_b = tmp_assign_source_8;
                Py_DECREF( old );
            }

        }
        branch_no_4:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( par_A );
        tmp_source_name_9 = par_A;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 151;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 151;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
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

                    type_description_1 = "ooooooooooooooooooooooooooo";
                    exception_lineno = 151;
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

            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 151;
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
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        assert( var_M == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_M = tmp_assign_source_12;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
        assert( var_N == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_N = tmp_assign_source_13;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( var_M );
        tmp_compexpr_left_6 = var_M;
        CHECK_OBJECT( var_N );
        tmp_compexpr_right_6 = var_N;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_tuple_element_2;
            tmp_left_name_1 = const_str_digest_76a9d16edf532be5e5e0588568cc8819;
            CHECK_OBJECT( var_M );
            tmp_tuple_element_2 = var_M;
            tmp_tuple_element_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_N );
            tmp_tuple_element_2 = var_N;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
            tmp_right_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 153;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 153;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_10;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_M );
        tmp_compexpr_left_7 = var_M;
        if ( par_b == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = par_b;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_0;
        tmp_compexpr_right_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_compexpr_right_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooooooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_source_name_11;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_source_name_12;
            PyObject *tmp_subscript_name_3;
            tmp_left_name_2 = const_str_digest_7757d3c9d20877a9bb897d9bb4ae5582;
            CHECK_OBJECT( par_A );
            tmp_source_name_11 = par_A;
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_shape );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_3 );
            if ( par_b == NULL )
            {
                Py_DECREF( tmp_right_name_2 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 157;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_12 = par_b;
            tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_shape );
            if ( tmp_subscribed_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_2 );

                exception_lineno = 157;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_3 = const_int_0;
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            Py_DECREF( tmp_subscribed_name_3 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_2 );

                exception_lineno = 157;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_3 );
            tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 156;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 156;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 156;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_14;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_mvar_value_9;
        CHECK_OBJECT( par_use_umfpack );
        tmp_and_left_value_2 = par_use_umfpack;
        tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
        if ( tmp_and_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
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
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_useUmfpack );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_useUmfpack );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "useUmfpack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 159;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_and_right_value_2 = tmp_mvar_value_9;
        tmp_assign_source_14 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_assign_source_14 = tmp_and_left_value_2;
        and_end_2:;
        {
            PyObject *old = par_use_umfpack;
            assert( old != NULL );
            par_use_umfpack = tmp_assign_source_14;
            Py_INCREF( par_use_umfpack );
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_b_is_vector );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_b_is_vector );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_use_umfpack );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_use_umfpack );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_7 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_7 = tmp_and_left_value_3;
        and_end_3:;
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
            nuitka_bool tmp_condition_result_8;
            int tmp_truth_name_3;
            CHECK_OBJECT( var_b_is_sparse );
            tmp_truth_name_3 = CHECK_IF_TRUE( var_b_is_sparse );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_8 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_15;
                PyObject *tmp_called_instance_5;
                if ( par_b == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 163;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_5 = par_b;
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 163;
                tmp_assign_source_15 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_toarray );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 163;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_b_vec == NULL );
                var_b_vec = tmp_assign_source_15;
            }
            goto branch_end_8;
            branch_no_8:;
            {
                PyObject *tmp_assign_source_16;
                if ( par_b == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 165;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_assign_source_16 = par_b;
                assert( var_b_vec == NULL );
                Py_INCREF( tmp_assign_source_16 );
                var_b_vec = tmp_assign_source_16;
            }
            branch_end_8:;
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_13;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_asarray );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 166;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_8 = tmp_mvar_value_10;
            CHECK_OBJECT( var_b_vec );
            tmp_tuple_element_4 = var_b_vec;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_4 );
            tmp_dict_key_1 = const_str_plain_dtype;
            CHECK_OBJECT( par_A );
            tmp_source_name_13 = par_A;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_dtype );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 166;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 166;
            tmp_called_instance_6 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_called_instance_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 166;
            tmp_assign_source_17 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_ravel );
            Py_DECREF( tmp_called_instance_6 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_b_vec;
                assert( old != NULL );
                var_b_vec = tmp_assign_source_17;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_mvar_value_11;
            int tmp_truth_name_4;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_noScikit );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_noScikit );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "noScikit" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 168;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_truth_name_4 = CHECK_IF_TRUE( tmp_mvar_value_11 );
            if ( tmp_truth_name_4 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 168;
                type_description_1 = "ooooooooooooooooooooooooooo";
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
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_05b568aeb851b08769cd65edf9b6d9ac;
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 169;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
                }

                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 169;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_9:;
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_source_name_14;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( par_A );
            tmp_source_name_15 = par_A;
            tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_dtype );
            if ( tmp_source_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_char );
            Py_DECREF( tmp_source_name_14 );
            if ( tmp_compexpr_left_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_8 = const_str_plain_dD;
            tmp_res = PySequence_Contains( tmp_compexpr_right_8, tmp_compexpr_left_8 );
            Py_DECREF( tmp_compexpr_left_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ooooooooooooooooooooooooooo";
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
                PyObject *tmp_raise_type_4;
                PyObject *tmp_make_exception_arg_4;
                tmp_make_exception_arg_4 = const_str_digest_54824583ac1072b245c698a21ee5f8ff;
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 172;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_4 };
                    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_4 == NULL) );
                exception_type = tmp_raise_type_4;
                exception_lineno = 172;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_10:;
        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_16;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_args_element_name_13;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_umfpack );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umfpack );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "umfpack" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 175;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_16 = tmp_mvar_value_12;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_UmfpackContext );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain__get_umf_family );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_umf_family );
            }

            if ( tmp_mvar_value_13 == NULL )
            {
                Py_DECREF( tmp_called_name_9 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_umf_family" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 175;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_10 = tmp_mvar_value_13;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_13 = par_A;
            frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 175;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_args_element_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            if ( tmp_args_element_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_9 );

                exception_lineno = 175;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 175;
            {
                PyObject *call_args[] = { tmp_args_element_name_12 };
                tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_12 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_umf == NULL );
            var_umf = tmp_assign_source_18;
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_17;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_source_name_18;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( var_umf );
            tmp_source_name_17 = var_umf;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_linsolve );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_umfpack );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umfpack );
            }

            if ( tmp_mvar_value_14 == NULL )
            {
                Py_DECREF( tmp_called_name_11 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "umfpack" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 176;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_18 = tmp_mvar_value_14;
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_UMFPACK_A );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_11 );

                exception_lineno = 176;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_2 = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( par_A );
            tmp_tuple_element_5 = par_A;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_5 );
            CHECK_OBJECT( var_b_vec );
            tmp_tuple_element_5 = var_b_vec;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_5 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_d651afcac12196dc5a0b74e25d976a33 );
            frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 176;
            tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_x == NULL );
            var_x = tmp_assign_source_19;
        }
        goto branch_end_7;
        branch_no_7:;
        {
            nuitka_bool tmp_condition_result_11;
            int tmp_and_left_truth_4;
            nuitka_bool tmp_and_left_value_4;
            nuitka_bool tmp_and_right_value_4;
            int tmp_truth_name_5;
            int tmp_truth_name_6;
            CHECK_OBJECT( var_b_is_vector );
            tmp_truth_name_5 = CHECK_IF_TRUE( var_b_is_vector );
            if ( tmp_truth_name_5 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_4 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( var_b_is_sparse );
            tmp_truth_name_6 = CHECK_IF_TRUE( var_b_is_sparse );
            if ( tmp_truth_name_6 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_4 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_11 = tmp_and_right_value_4;
            goto and_end_4;
            and_left_4:;
            tmp_condition_result_11 = tmp_and_left_value_4;
            and_end_4:;
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
                PyObject *tmp_assign_source_20;
                PyObject *tmp_called_instance_7;
                if ( par_b == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 180;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_7 = par_b;
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 180;
                tmp_assign_source_20 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_toarray );
                if ( tmp_assign_source_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 180;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_b;
                    par_b = tmp_assign_source_20;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_21;
                tmp_assign_source_21 = Py_False;
                {
                    PyObject *old = var_b_is_sparse;
                    assert( old != NULL );
                    var_b_is_sparse = tmp_assign_source_21;
                    Py_INCREF( var_b_is_sparse );
                    Py_DECREF( old );
                }

            }
            branch_no_11:;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_operand_name_3;
            CHECK_OBJECT( var_b_is_sparse );
            tmp_operand_name_3 = var_b_is_sparse;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "ooooooooooooooooooooooooooo";
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
                PyObject *tmp_called_name_12;
                PyObject *tmp_mvar_value_15;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_14;
                int tmp_truth_name_7;
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );
                }

                if ( tmp_mvar_value_15 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isspmatrix_csc" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 184;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_12 = tmp_mvar_value_15;
                CHECK_OBJECT( par_A );
                tmp_args_element_name_14 = par_A;
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 184;
                {
                    PyObject *call_args[] = { tmp_args_element_name_14 };
                    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
                }

                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 184;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_7 = CHECK_IF_TRUE( tmp_call_result_3 );
                if ( tmp_truth_name_7 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_3 );

                    exception_lineno = 184;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_13 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_3 );
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
                    PyObject *tmp_assign_source_22;
                    tmp_assign_source_22 = const_int_pos_1;
                    assert( var_flag == NULL );
                    Py_INCREF( tmp_assign_source_22 );
                    var_flag = tmp_assign_source_22;
                }
                goto branch_end_13;
                branch_no_13:;
                {
                    PyObject *tmp_assign_source_23;
                    tmp_assign_source_23 = const_int_0;
                    assert( var_flag == NULL );
                    Py_INCREF( tmp_assign_source_23 );
                    var_flag = tmp_assign_source_23;
                }
                branch_end_13:;
            }
            {
                PyObject *tmp_assign_source_24;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                tmp_dict_key_2 = const_str_plain_ColPerm;
                CHECK_OBJECT( par_permc_spec );
                tmp_dict_value_2 = par_permc_spec;
                tmp_assign_source_24 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_assign_source_24, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                assert( var_options == NULL );
                var_options = tmp_assign_source_24;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_25;
                PyObject *tmp_iter_arg_2;
                PyObject *tmp_called_name_13;
                PyObject *tmp_source_name_19;
                PyObject *tmp_mvar_value_16;
                PyObject *tmp_args_name_3;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_source_name_20;
                PyObject *tmp_source_name_21;
                PyObject *tmp_source_name_22;
                PyObject *tmp_source_name_23;
                PyObject *tmp_kw_name_3;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain__superlu );

                if (unlikely( tmp_mvar_value_16 == NULL ))
                {
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__superlu );
                }

                if ( tmp_mvar_value_16 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_superlu" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 190;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_19 = tmp_mvar_value_16;
                tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_gssv );
                if ( tmp_called_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 190;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_N );
                tmp_tuple_element_6 = var_N;
                tmp_args_name_3 = PyTuple_New( 7 );
                Py_INCREF( tmp_tuple_element_6 );
                PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
                CHECK_OBJECT( par_A );
                tmp_source_name_20 = par_A;
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_nnz );
                if ( tmp_tuple_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_13 );
                    Py_DECREF( tmp_args_name_3 );

                    exception_lineno = 190;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
                CHECK_OBJECT( par_A );
                tmp_source_name_21 = par_A;
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_data );
                if ( tmp_tuple_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_13 );
                    Py_DECREF( tmp_args_name_3 );

                    exception_lineno = 190;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_args_name_3, 2, tmp_tuple_element_6 );
                CHECK_OBJECT( par_A );
                tmp_source_name_22 = par_A;
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_indices );
                if ( tmp_tuple_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_13 );
                    Py_DECREF( tmp_args_name_3 );

                    exception_lineno = 190;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_args_name_3, 3, tmp_tuple_element_6 );
                CHECK_OBJECT( par_A );
                tmp_source_name_23 = par_A;
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_indptr );
                if ( tmp_tuple_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_13 );
                    Py_DECREF( tmp_args_name_3 );

                    exception_lineno = 190;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_args_name_3, 4, tmp_tuple_element_6 );
                if ( par_b == NULL )
                {
                    Py_DECREF( tmp_called_name_13 );
                    Py_DECREF( tmp_args_name_3 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 191;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }

                tmp_tuple_element_6 = par_b;
                Py_INCREF( tmp_tuple_element_6 );
                PyTuple_SET_ITEM( tmp_args_name_3, 5, tmp_tuple_element_6 );
                CHECK_OBJECT( var_flag );
                tmp_tuple_element_6 = var_flag;
                Py_INCREF( tmp_tuple_element_6 );
                PyTuple_SET_ITEM( tmp_args_name_3, 6, tmp_tuple_element_6 );
                tmp_dict_key_3 = const_str_plain_options;
                CHECK_OBJECT( var_options );
                tmp_dict_value_3 = var_options;
                tmp_kw_name_3 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 190;
                tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_3, tmp_kw_name_3 );
                Py_DECREF( tmp_called_name_13 );
                Py_DECREF( tmp_args_name_3 );
                Py_DECREF( tmp_kw_name_3 );
                if ( tmp_iter_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 190;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_2 );
                Py_DECREF( tmp_iter_arg_2 );
                if ( tmp_assign_source_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 190;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                assert( tmp_tuple_unpack_2__source_iter == NULL );
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_25;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_26;
                PyObject *tmp_unpack_3;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_26 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


                    type_description_1 = "ooooooooooooooooooooooooooo";
                    exception_lineno = 190;
                    goto try_except_handler_5;
                }
                assert( tmp_tuple_unpack_2__element_1 == NULL );
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_26;
            }
            {
                PyObject *tmp_assign_source_27;
                PyObject *tmp_unpack_4;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_27 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


                    type_description_1 = "ooooooooooooooooooooooooooo";
                    exception_lineno = 190;
                    goto try_except_handler_5;
                }
                assert( tmp_tuple_unpack_2__element_2 == NULL );
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_27;
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

                            type_description_1 = "ooooooooooooooooooooooooooo";
                            exception_lineno = 190;
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

                    type_description_1 = "ooooooooooooooooooooooooooo";
                    exception_lineno = 190;
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
                PyObject *tmp_assign_source_28;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
                tmp_assign_source_28 = tmp_tuple_unpack_2__element_1;
                assert( var_x == NULL );
                Py_INCREF( tmp_assign_source_28 );
                var_x = tmp_assign_source_28;
            }
            Py_XDECREF( tmp_tuple_unpack_2__element_1 );
            tmp_tuple_unpack_2__element_1 = NULL;

            {
                PyObject *tmp_assign_source_29;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
                tmp_assign_source_29 = tmp_tuple_unpack_2__element_2;
                assert( var_info == NULL );
                Py_INCREF( tmp_assign_source_29 );
                var_info = tmp_assign_source_29;
            }
            Py_XDECREF( tmp_tuple_unpack_2__element_2 );
            tmp_tuple_unpack_2__element_2 = NULL;

            {
                nuitka_bool tmp_condition_result_14;
                PyObject *tmp_compexpr_left_9;
                PyObject *tmp_compexpr_right_9;
                CHECK_OBJECT( var_info );
                tmp_compexpr_left_9 = var_info;
                tmp_compexpr_right_9 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 192;
                    type_description_1 = "ooooooooooooooooooooooooooo";
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
                    PyObject *tmp_called_name_14;
                    PyObject *tmp_mvar_value_17;
                    PyObject *tmp_call_result_4;
                    PyObject *tmp_args_element_name_15;
                    PyObject *tmp_args_element_name_16;
                    PyObject *tmp_mvar_value_18;
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_warn );

                    if (unlikely( tmp_mvar_value_17 == NULL ))
                    {
                        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
                    }

                    if ( tmp_mvar_value_17 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 193;
                        type_description_1 = "ooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_14 = tmp_mvar_value_17;
                    tmp_args_element_name_15 = const_str_digest_b8775e2873f68ebdbe9d7b17a6b01691;
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_MatrixRankWarning );

                    if (unlikely( tmp_mvar_value_18 == NULL ))
                    {
                        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MatrixRankWarning );
                    }

                    if ( tmp_mvar_value_18 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MatrixRankWarning" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 193;
                        type_description_1 = "ooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_args_element_name_16 = tmp_mvar_value_18;
                    frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 193;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
                    }

                    if ( tmp_call_result_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 193;
                        type_description_1 = "ooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_4 );
                }
                {
                    PyObject *tmp_called_name_15;
                    PyObject *tmp_source_name_24;
                    PyObject *tmp_call_result_5;
                    PyObject *tmp_args_element_name_17;
                    PyObject *tmp_source_name_25;
                    PyObject *tmp_mvar_value_19;
                    CHECK_OBJECT( var_x );
                    tmp_source_name_24 = var_x;
                    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_fill );
                    if ( tmp_called_name_15 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 194;
                        type_description_1 = "ooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

                    if (unlikely( tmp_mvar_value_19 == NULL ))
                    {
                        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                    }

                    if ( tmp_mvar_value_19 == NULL )
                    {
                        Py_DECREF( tmp_called_name_15 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 194;
                        type_description_1 = "ooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_25 = tmp_mvar_value_19;
                    tmp_args_element_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_nan );
                    if ( tmp_args_element_name_17 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_15 );

                        exception_lineno = 194;
                        type_description_1 = "ooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 194;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_17 };
                        tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
                    }

                    Py_DECREF( tmp_called_name_15 );
                    Py_DECREF( tmp_args_element_name_17 );
                    if ( tmp_call_result_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 194;
                        type_description_1 = "ooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_5 );
                }
                branch_no_14:;
            }
            {
                nuitka_bool tmp_condition_result_15;
                int tmp_truth_name_8;
                CHECK_OBJECT( var_b_is_vector );
                tmp_truth_name_8 = CHECK_IF_TRUE( var_b_is_vector );
                if ( tmp_truth_name_8 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 195;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_15 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_30;
                    PyObject *tmp_called_instance_8;
                    CHECK_OBJECT( var_x );
                    tmp_called_instance_8 = var_x;
                    frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 196;
                    tmp_assign_source_30 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_ravel );
                    if ( tmp_assign_source_30 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 196;
                        type_description_1 = "ooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_x;
                        assert( old != NULL );
                        var_x = tmp_assign_source_30;
                        Py_DECREF( old );
                    }

                }
                branch_no_15:;
            }
            goto branch_end_12;
            branch_no_12:;
            {
                PyObject *tmp_assign_source_31;
                PyObject *tmp_called_name_16;
                PyObject *tmp_mvar_value_20;
                PyObject *tmp_args_element_name_18;
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_factorized );

                if (unlikely( tmp_mvar_value_20 == NULL ))
                {
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_factorized );
                }

                if ( tmp_mvar_value_20 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "factorized" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 199;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_16 = tmp_mvar_value_20;
                CHECK_OBJECT( par_A );
                tmp_args_element_name_18 = par_A;
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 199;
                {
                    PyObject *call_args[] = { tmp_args_element_name_18 };
                    tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
                }

                if ( tmp_assign_source_31 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 199;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_Afactsolve == NULL );
                var_Afactsolve = tmp_assign_source_31;
            }
            {
                nuitka_bool tmp_condition_result_16;
                PyObject *tmp_operand_name_4;
                PyObject *tmp_called_name_17;
                PyObject *tmp_mvar_value_21;
                PyObject *tmp_args_element_name_19;
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );

                if (unlikely( tmp_mvar_value_21 == NULL ))
                {
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );
                }

                if ( tmp_mvar_value_21 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isspmatrix_csc" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 201;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_17 = tmp_mvar_value_21;
                if ( par_b == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 201;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_19 = par_b;
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 201;
                {
                    PyObject *call_args[] = { tmp_args_element_name_19 };
                    tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
                }

                if ( tmp_operand_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 201;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
                Py_DECREF( tmp_operand_name_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 201;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
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
                {
                    PyObject *tmp_called_name_18;
                    PyObject *tmp_mvar_value_22;
                    PyObject *tmp_call_result_6;
                    PyObject *tmp_args_element_name_20;
                    PyObject *tmp_args_element_name_21;
                    PyObject *tmp_mvar_value_23;
                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_warn );

                    if (unlikely( tmp_mvar_value_22 == NULL ))
                    {
                        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
                    }

                    if ( tmp_mvar_value_22 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 202;
                        type_description_1 = "ooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_18 = tmp_mvar_value_22;
                    tmp_args_element_name_20 = const_str_digest_05c78a3a6f4726b03c6df15f0d2480fc;
                    tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );

                    if (unlikely( tmp_mvar_value_23 == NULL ))
                    {
                        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );
                    }

                    if ( tmp_mvar_value_23 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SparseEfficiencyWarning" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 203;
                        type_description_1 = "ooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_args_element_name_21 = tmp_mvar_value_23;
                    frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 202;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21 };
                        tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
                    }

                    if ( tmp_call_result_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 202;
                        type_description_1 = "ooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_6 );
                }
                {
                    PyObject *tmp_assign_source_32;
                    PyObject *tmp_called_name_19;
                    PyObject *tmp_mvar_value_24;
                    PyObject *tmp_args_element_name_22;
                    tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_csc_matrix );

                    if (unlikely( tmp_mvar_value_24 == NULL ))
                    {
                        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
                    }

                    if ( tmp_mvar_value_24 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csc_matrix" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 204;
                        type_description_1 = "ooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_19 = tmp_mvar_value_24;
                    if ( par_b == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 204;
                        type_description_1 = "ooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_args_element_name_22 = par_b;
                    frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 204;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_22 };
                        tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
                    }

                    if ( tmp_assign_source_32 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 204;
                        type_description_1 = "ooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_b;
                        par_b = tmp_assign_source_32;
                        Py_XDECREF( old );
                    }

                }
                branch_no_16:;
            }
            {
                PyObject *tmp_assign_source_33;
                tmp_assign_source_33 = PyList_New( 0 );
                assert( var_data_segs == NULL );
                var_data_segs = tmp_assign_source_33;
            }
            {
                PyObject *tmp_assign_source_34;
                tmp_assign_source_34 = PyList_New( 0 );
                assert( var_row_segs == NULL );
                var_row_segs = tmp_assign_source_34;
            }
            {
                PyObject *tmp_assign_source_35;
                tmp_assign_source_35 = PyList_New( 0 );
                assert( var_col_segs == NULL );
                var_col_segs = tmp_assign_source_35;
            }
            {
                PyObject *tmp_assign_source_36;
                PyObject *tmp_iter_arg_3;
                PyObject *tmp_xrange_low_1;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_source_name_26;
                PyObject *tmp_subscript_name_4;
                if ( par_b == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 211;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_26 = par_b;
                tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_shape );
                if ( tmp_subscribed_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 211;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_4 = const_int_pos_1;
                tmp_xrange_low_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 1 );
                Py_DECREF( tmp_subscribed_name_4 );
                if ( tmp_xrange_low_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 211;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_iter_arg_3 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
                Py_DECREF( tmp_xrange_low_1 );
                if ( tmp_iter_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 211;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_36 = MAKE_ITERATOR( tmp_iter_arg_3 );
                Py_DECREF( tmp_iter_arg_3 );
                if ( tmp_assign_source_36 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 211;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_for_loop_1__for_iterator == NULL );
                tmp_for_loop_1__for_iterator = tmp_assign_source_36;
            }
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_37;
                CHECK_OBJECT( tmp_for_loop_1__for_iterator );
                tmp_next_source_1 = tmp_for_loop_1__for_iterator;
                tmp_assign_source_37 = ITERATOR_NEXT( tmp_next_source_1 );
                if ( tmp_assign_source_37 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_1;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooooooooooooooooooooooo";
                        exception_lineno = 211;
                        goto try_except_handler_6;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_1__iter_value;
                    tmp_for_loop_1__iter_value = tmp_assign_source_37;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_38;
                CHECK_OBJECT( tmp_for_loop_1__iter_value );
                tmp_assign_source_38 = tmp_for_loop_1__iter_value;
                {
                    PyObject *old = var_j;
                    var_j = tmp_assign_source_38;
                    Py_INCREF( var_j );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_39;
                PyObject *tmp_called_instance_9;
                PyObject *tmp_source_name_27;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_tuple_element_7;
                if ( par_b == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }

                tmp_subscribed_name_5 = par_b;
                tmp_tuple_element_7 = const_slice_none_none_none;
                tmp_subscript_name_5 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_7 );
                PyTuple_SET_ITEM( tmp_subscript_name_5, 0, tmp_tuple_element_7 );
                CHECK_OBJECT( var_j );
                tmp_tuple_element_7 = var_j;
                Py_INCREF( tmp_tuple_element_7 );
                PyTuple_SET_ITEM( tmp_subscript_name_5, 1, tmp_tuple_element_7 );
                tmp_source_name_27 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                Py_DECREF( tmp_subscript_name_5 );
                if ( tmp_source_name_27 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_called_instance_9 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_A );
                Py_DECREF( tmp_source_name_27 );
                if ( tmp_called_instance_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 212;
                tmp_assign_source_39 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_ravel );
                Py_DECREF( tmp_called_instance_9 );
                if ( tmp_assign_source_39 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                {
                    PyObject *old = var_bj;
                    var_bj = tmp_assign_source_39;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_40;
                PyObject *tmp_called_name_20;
                PyObject *tmp_args_element_name_23;
                CHECK_OBJECT( var_Afactsolve );
                tmp_called_name_20 = var_Afactsolve;
                CHECK_OBJECT( var_bj );
                tmp_args_element_name_23 = var_bj;
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 213;
                {
                    PyObject *call_args[] = { tmp_args_element_name_23 };
                    tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
                }

                if ( tmp_assign_source_40 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 213;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                {
                    PyObject *old = var_xj;
                    var_xj = tmp_assign_source_40;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_41;
                PyObject *tmp_called_instance_10;
                PyObject *tmp_mvar_value_25;
                PyObject *tmp_args_element_name_24;
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 214;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }

                tmp_called_instance_10 = tmp_mvar_value_25;
                CHECK_OBJECT( var_xj );
                tmp_args_element_name_24 = var_xj;
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 214;
                {
                    PyObject *call_args[] = { tmp_args_element_name_24 };
                    tmp_assign_source_41 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_flatnonzero, call_args );
                }

                if ( tmp_assign_source_41 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 214;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                {
                    PyObject *old = var_w;
                    var_w = tmp_assign_source_41;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_42;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_source_name_28;
                PyObject *tmp_subscript_name_6;
                CHECK_OBJECT( var_w );
                tmp_source_name_28 = var_w;
                tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_shape );
                if ( tmp_subscribed_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 215;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_subscript_name_6 = const_int_0;
                tmp_assign_source_42 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
                Py_DECREF( tmp_subscribed_name_6 );
                if ( tmp_assign_source_42 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 215;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                {
                    PyObject *old = var_segment_length;
                    var_segment_length = tmp_assign_source_42;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_called_instance_11;
                PyObject *tmp_call_result_7;
                PyObject *tmp_args_element_name_25;
                CHECK_OBJECT( var_row_segs );
                tmp_called_instance_11 = var_row_segs;
                CHECK_OBJECT( var_w );
                tmp_args_element_name_25 = var_w;
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 216;
                {
                    PyObject *call_args[] = { tmp_args_element_name_25 };
                    tmp_call_result_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_append, call_args );
                }

                if ( tmp_call_result_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 216;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                Py_DECREF( tmp_call_result_7 );
            }
            {
                PyObject *tmp_called_name_21;
                PyObject *tmp_source_name_29;
                PyObject *tmp_call_result_8;
                PyObject *tmp_args_element_name_26;
                PyObject *tmp_called_name_22;
                PyObject *tmp_source_name_30;
                PyObject *tmp_mvar_value_26;
                PyObject *tmp_args_name_4;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_kw_name_4;
                CHECK_OBJECT( var_col_segs );
                tmp_source_name_29 = var_col_segs;
                tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_append );
                if ( tmp_called_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 217;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_26 == NULL ))
                {
                    tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_26 == NULL )
                {
                    Py_DECREF( tmp_called_name_21 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 217;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }

                tmp_source_name_30 = tmp_mvar_value_26;
                tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_full );
                if ( tmp_called_name_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_21 );

                    exception_lineno = 217;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                CHECK_OBJECT( var_segment_length );
                tmp_tuple_element_8 = var_segment_length;
                tmp_args_name_4 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_8 );
                PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
                CHECK_OBJECT( var_j );
                tmp_tuple_element_8 = var_j;
                Py_INCREF( tmp_tuple_element_8 );
                PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
                tmp_kw_name_4 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 217;
                tmp_args_element_name_26 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_4, tmp_kw_name_4 );
                Py_DECREF( tmp_called_name_22 );
                Py_DECREF( tmp_args_name_4 );
                Py_DECREF( tmp_kw_name_4 );
                if ( tmp_args_element_name_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_21 );

                    exception_lineno = 217;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 217;
                {
                    PyObject *call_args[] = { tmp_args_element_name_26 };
                    tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
                }

                Py_DECREF( tmp_called_name_21 );
                Py_DECREF( tmp_args_element_name_26 );
                if ( tmp_call_result_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 217;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                Py_DECREF( tmp_call_result_8 );
            }
            {
                PyObject *tmp_called_name_23;
                PyObject *tmp_source_name_31;
                PyObject *tmp_call_result_9;
                PyObject *tmp_args_element_name_27;
                PyObject *tmp_called_name_24;
                PyObject *tmp_source_name_32;
                PyObject *tmp_mvar_value_27;
                PyObject *tmp_args_name_5;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_subscribed_name_7;
                PyObject *tmp_subscript_name_7;
                PyObject *tmp_kw_name_5;
                PyObject *tmp_dict_key_4;
                PyObject *tmp_dict_value_4;
                PyObject *tmp_source_name_33;
                CHECK_OBJECT( var_data_segs );
                tmp_source_name_31 = var_data_segs;
                tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_append );
                if ( tmp_called_name_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 218;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_27 == NULL ))
                {
                    tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_27 == NULL )
                {
                    Py_DECREF( tmp_called_name_23 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 218;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }

                tmp_source_name_32 = tmp_mvar_value_27;
                tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_asarray );
                if ( tmp_called_name_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_23 );

                    exception_lineno = 218;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                CHECK_OBJECT( var_xj );
                tmp_subscribed_name_7 = var_xj;
                CHECK_OBJECT( var_w );
                tmp_subscript_name_7 = var_w;
                tmp_tuple_element_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
                if ( tmp_tuple_element_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_23 );
                    Py_DECREF( tmp_called_name_24 );

                    exception_lineno = 218;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_args_name_5 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_9 );
                tmp_dict_key_4 = const_str_plain_dtype;
                CHECK_OBJECT( par_A );
                tmp_source_name_33 = par_A;
                tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_dtype );
                if ( tmp_dict_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_23 );
                    Py_DECREF( tmp_called_name_24 );
                    Py_DECREF( tmp_args_name_5 );

                    exception_lineno = 218;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_kw_name_5 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_4, tmp_dict_value_4 );
                Py_DECREF( tmp_dict_value_4 );
                assert( !(tmp_res != 0) );
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 218;
                tmp_args_element_name_27 = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_5, tmp_kw_name_5 );
                Py_DECREF( tmp_called_name_24 );
                Py_DECREF( tmp_args_name_5 );
                Py_DECREF( tmp_kw_name_5 );
                if ( tmp_args_element_name_27 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_23 );

                    exception_lineno = 218;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 218;
                {
                    PyObject *call_args[] = { tmp_args_element_name_27 };
                    tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
                }

                Py_DECREF( tmp_called_name_23 );
                Py_DECREF( tmp_args_element_name_27 );
                if ( tmp_call_result_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 218;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                Py_DECREF( tmp_call_result_9 );
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 211;
                type_description_1 = "ooooooooooooooooooooooooooo";
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
                PyObject *tmp_assign_source_43;
                PyObject *tmp_called_instance_12;
                PyObject *tmp_mvar_value_28;
                PyObject *tmp_args_element_name_28;
                tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 219;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_12 = tmp_mvar_value_28;
                CHECK_OBJECT( var_data_segs );
                tmp_args_element_name_28 = var_data_segs;
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 219;
                {
                    PyObject *call_args[] = { tmp_args_element_name_28 };
                    tmp_assign_source_43 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_concatenate, call_args );
                }

                if ( tmp_assign_source_43 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 219;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_sparse_data == NULL );
                var_sparse_data = tmp_assign_source_43;
            }
            {
                PyObject *tmp_assign_source_44;
                PyObject *tmp_called_instance_13;
                PyObject *tmp_mvar_value_29;
                PyObject *tmp_args_element_name_29;
                tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_29 == NULL ))
                {
                    tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_29 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 220;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_13 = tmp_mvar_value_29;
                CHECK_OBJECT( var_row_segs );
                tmp_args_element_name_29 = var_row_segs;
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 220;
                {
                    PyObject *call_args[] = { tmp_args_element_name_29 };
                    tmp_assign_source_44 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_concatenate, call_args );
                }

                if ( tmp_assign_source_44 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 220;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_sparse_row == NULL );
                var_sparse_row = tmp_assign_source_44;
            }
            {
                PyObject *tmp_assign_source_45;
                PyObject *tmp_called_instance_14;
                PyObject *tmp_mvar_value_30;
                PyObject *tmp_args_element_name_30;
                tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 221;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_14 = tmp_mvar_value_30;
                CHECK_OBJECT( var_col_segs );
                tmp_args_element_name_30 = var_col_segs;
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 221;
                {
                    PyObject *call_args[] = { tmp_args_element_name_30 };
                    tmp_assign_source_45 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_concatenate, call_args );
                }

                if ( tmp_assign_source_45 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 221;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_sparse_col == NULL );
                var_sparse_col = tmp_assign_source_45;
            }
            {
                PyObject *tmp_assign_source_46;
                PyObject *tmp_called_name_25;
                PyObject *tmp_source_name_34;
                PyObject *tmp_args_name_6;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_kw_name_6;
                PyObject *tmp_dict_key_5;
                PyObject *tmp_dict_value_5;
                PyObject *tmp_source_name_35;
                PyObject *tmp_dict_key_6;
                PyObject *tmp_dict_value_6;
                PyObject *tmp_source_name_36;
                CHECK_OBJECT( par_A );
                tmp_source_name_34 = par_A;
                tmp_called_name_25 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_34 );
                if ( tmp_called_name_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 222;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_sparse_data );
                tmp_tuple_element_11 = var_sparse_data;
                tmp_tuple_element_10 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_11 );
                PyTuple_SET_ITEM( tmp_tuple_element_10, 0, tmp_tuple_element_11 );
                CHECK_OBJECT( var_sparse_row );
                tmp_tuple_element_12 = var_sparse_row;
                tmp_tuple_element_11 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_12 );
                PyTuple_SET_ITEM( tmp_tuple_element_11, 0, tmp_tuple_element_12 );
                CHECK_OBJECT( var_sparse_col );
                tmp_tuple_element_12 = var_sparse_col;
                Py_INCREF( tmp_tuple_element_12 );
                PyTuple_SET_ITEM( tmp_tuple_element_11, 1, tmp_tuple_element_12 );
                PyTuple_SET_ITEM( tmp_tuple_element_10, 1, tmp_tuple_element_11 );
                tmp_args_name_6 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_10 );
                tmp_dict_key_5 = const_str_plain_shape;
                if ( par_b == NULL )
                {
                    Py_DECREF( tmp_called_name_25 );
                    Py_DECREF( tmp_args_name_6 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 223;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_35 = par_b;
                tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_shape );
                if ( tmp_dict_value_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_25 );
                    Py_DECREF( tmp_args_name_6 );

                    exception_lineno = 223;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_kw_name_6 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_5, tmp_dict_value_5 );
                Py_DECREF( tmp_dict_value_5 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_6 = const_str_plain_dtype;
                CHECK_OBJECT( par_A );
                tmp_source_name_36 = par_A;
                tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_dtype );
                if ( tmp_dict_value_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_25 );
                    Py_DECREF( tmp_args_name_6 );
                    Py_DECREF( tmp_kw_name_6 );

                    exception_lineno = 223;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_6, tmp_dict_value_6 );
                Py_DECREF( tmp_dict_value_6 );
                assert( !(tmp_res != 0) );
                frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame.f_lineno = 222;
                tmp_assign_source_46 = CALL_FUNCTION( tmp_called_name_25, tmp_args_name_6, tmp_kw_name_6 );
                Py_DECREF( tmp_called_name_25 );
                Py_DECREF( tmp_args_name_6 );
                Py_DECREF( tmp_kw_name_6 );
                if ( tmp_assign_source_46 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 222;
                    type_description_1 = "ooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_x == NULL );
                var_x = tmp_assign_source_46;
            }
            branch_end_12:;
        }
        branch_end_7:;
    }
    if ( var_x == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_x;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab681ddcff95de5391c6e9ba21ea6ccd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab681ddcff95de5391c6e9ba21ea6ccd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab681ddcff95de5391c6e9ba21ea6ccd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ab681ddcff95de5391c6e9ba21ea6ccd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ab681ddcff95de5391c6e9ba21ea6ccd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ab681ddcff95de5391c6e9ba21ea6ccd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ab681ddcff95de5391c6e9ba21ea6ccd,
        type_description_1,
        par_A,
        par_b,
        par_permc_spec,
        par_use_umfpack,
        var_b_is_sparse,
        var_b_is_vector,
        var_result_dtype,
        var_M,
        var_N,
        var_b_vec,
        var_umf,
        var_x,
        var_flag,
        var_options,
        var_info,
        var_Afactsolve,
        var_data_segs,
        var_row_segs,
        var_col_segs,
        var_j,
        var_bj,
        var_xj,
        var_w,
        var_segment_length,
        var_sparse_data,
        var_sparse_row,
        var_sparse_col
    );


    // Release cached frame.
    if ( frame_ab681ddcff95de5391c6e9ba21ea6ccd == cache_frame_ab681ddcff95de5391c6e9ba21ea6ccd )
    {
        Py_DECREF( frame_ab681ddcff95de5391c6e9ba21ea6ccd );
    }
    cache_frame_ab681ddcff95de5391c6e9ba21ea6ccd = NULL;

    assertFrameObject( frame_ab681ddcff95de5391c6e9ba21ea6ccd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_3_spsolve );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    Py_XDECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_permc_spec );
    Py_DECREF( par_permc_spec );
    par_permc_spec = NULL;

    CHECK_OBJECT( (PyObject *)par_use_umfpack );
    Py_DECREF( par_use_umfpack );
    par_use_umfpack = NULL;

    Py_XDECREF( var_b_is_sparse );
    var_b_is_sparse = NULL;

    CHECK_OBJECT( (PyObject *)var_b_is_vector );
    Py_DECREF( var_b_is_vector );
    var_b_is_vector = NULL;

    CHECK_OBJECT( (PyObject *)var_result_dtype );
    Py_DECREF( var_result_dtype );
    var_result_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_M );
    Py_DECREF( var_M );
    var_M = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_b_vec );
    var_b_vec = NULL;

    Py_XDECREF( var_umf );
    var_umf = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    Py_XDECREF( var_options );
    var_options = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_Afactsolve );
    var_Afactsolve = NULL;

    Py_XDECREF( var_data_segs );
    var_data_segs = NULL;

    Py_XDECREF( var_row_segs );
    var_row_segs = NULL;

    Py_XDECREF( var_col_segs );
    var_col_segs = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_bj );
    var_bj = NULL;

    Py_XDECREF( var_xj );
    var_xj = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_segment_length );
    var_segment_length = NULL;

    Py_XDECREF( var_sparse_data );
    var_sparse_data = NULL;

    Py_XDECREF( var_sparse_row );
    var_sparse_row = NULL;

    Py_XDECREF( var_sparse_col );
    var_sparse_col = NULL;

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

    Py_XDECREF( par_A );
    par_A = NULL;

    Py_XDECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_permc_spec );
    Py_DECREF( par_permc_spec );
    par_permc_spec = NULL;

    CHECK_OBJECT( (PyObject *)par_use_umfpack );
    Py_DECREF( par_use_umfpack );
    par_use_umfpack = NULL;

    Py_XDECREF( var_b_is_sparse );
    var_b_is_sparse = NULL;

    Py_XDECREF( var_b_is_vector );
    var_b_is_vector = NULL;

    Py_XDECREF( var_result_dtype );
    var_result_dtype = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_b_vec );
    var_b_vec = NULL;

    Py_XDECREF( var_umf );
    var_umf = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    Py_XDECREF( var_options );
    var_options = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_Afactsolve );
    var_Afactsolve = NULL;

    Py_XDECREF( var_data_segs );
    var_data_segs = NULL;

    Py_XDECREF( var_row_segs );
    var_row_segs = NULL;

    Py_XDECREF( var_col_segs );
    var_col_segs = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_bj );
    var_bj = NULL;

    Py_XDECREF( var_xj );
    var_xj = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_segment_length );
    var_segment_length = NULL;

    Py_XDECREF( var_sparse_data );
    var_sparse_data = NULL;

    Py_XDECREF( var_sparse_row );
    var_sparse_row = NULL;

    Py_XDECREF( var_sparse_col );
    var_sparse_col = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_3_spsolve );
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


static PyObject *impl_scipy$sparse$linalg$dsolve$linsolve$$$function_4_splu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_permc_spec = python_pars[ 1 ];
    PyObject *par_diag_pivot_thresh = python_pars[ 2 ];
    PyObject *par_relax = python_pars[ 3 ];
    PyObject *par_panel_size = python_pars[ 4 ];
    PyObject *par_options = python_pars[ 5 ];
    PyObject *var_M = NULL;
    PyObject *var_N = NULL;
    PyObject *var__options = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_70e852041d066caa0550299ba1357e82;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_70e852041d066caa0550299ba1357e82 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_70e852041d066caa0550299ba1357e82, codeobj_70e852041d066caa0550299ba1357e82, module_scipy$sparse$linalg$dsolve$linsolve, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_70e852041d066caa0550299ba1357e82 = cache_frame_70e852041d066caa0550299ba1357e82;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_70e852041d066caa0550299ba1357e82 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_70e852041d066caa0550299ba1357e82 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isspmatrix_csc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 294;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_70e852041d066caa0550299ba1357e82->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_csc_matrix );

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

                exception_lineno = 295;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_2 = par_A;
            frame_70e852041d066caa0550299ba1357e82->m_frame.f_lineno = 295;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_A;
                assert( old != NULL );
                par_A = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_warn );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 296;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            tmp_args_element_name_3 = const_str_digest_cd6b07ef5eca1f322deb69c874832295;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SparseEfficiencyWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 296;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_4 = tmp_mvar_value_4;
            frame_70e852041d066caa0550299ba1357e82->m_frame.f_lineno = 296;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( par_A );
        tmp_called_instance_1 = par_A;
        frame_70e852041d066caa0550299ba1357e82->m_frame.f_lineno = 299;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_sum_duplicates );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_A );
        tmp_called_instance_2 = par_A;
        frame_70e852041d066caa0550299ba1357e82->m_frame.f_lineno = 300;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_asfptype );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "ooooooooo";
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "ooooooooo";
            exception_lineno = 302;
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
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "ooooooooo";
            exception_lineno = 302;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 302;
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

            type_description_1 = "ooooooooo";
            exception_lineno = 302;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert( var_M == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_M = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert( var_N == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_N = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_M );
        tmp_compexpr_left_1 = var_M;
        CHECK_OBJECT( var_N );
        tmp_compexpr_right_1 = var_N;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "ooooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_fd23c2bd576d906e73d606c4b0d336b6;
            frame_70e852041d066caa0550299ba1357e82->m_frame.f_lineno = 304;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 304;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_1 = const_str_plain_DiagPivotThresh;
        CHECK_OBJECT( par_diag_pivot_thresh );
        tmp_dict_value_1 = par_diag_pivot_thresh;
        tmp_assign_source_8 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_ColPerm;
        CHECK_OBJECT( par_permc_spec );
        tmp_dict_value_2 = par_permc_spec;
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_PanelSize;
        CHECK_OBJECT( par_panel_size );
        tmp_dict_value_3 = par_panel_size;
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_Relax;
        CHECK_OBJECT( par_relax );
        tmp_dict_value_4 = par_relax;
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        assert( var__options == NULL );
        var__options = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_options );
        tmp_compexpr_left_2 = par_options;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( var__options );
            tmp_called_instance_3 = var__options;
            CHECK_OBJECT( par_options );
            tmp_args_element_name_5 = par_options;
            frame_70e852041d066caa0550299ba1357e82->m_frame.f_lineno = 309;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_update, call_args );
            }

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 309;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain__superlu );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__superlu );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_superlu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 310;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_gstrf );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_N );
        tmp_tuple_element_1 = var_N;
        tmp_args_name_1 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_A );
        tmp_source_name_3 = par_A;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_nnz );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 310;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_A );
        tmp_source_name_4 = par_A;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_data );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 310;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( par_A );
        tmp_source_name_5 = par_A;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_indices );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 310;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 3, tmp_tuple_element_1 );
        CHECK_OBJECT( par_A );
        tmp_source_name_6 = par_A;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_indptr );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 310;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 4, tmp_tuple_element_1 );
        tmp_dict_key_5 = const_str_plain_ilu;
        tmp_dict_value_5 = Py_False;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_options;
        CHECK_OBJECT( var__options );
        tmp_dict_value_6 = var__options;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        frame_70e852041d066caa0550299ba1357e82->m_frame.f_lineno = 310;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_70e852041d066caa0550299ba1357e82 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_70e852041d066caa0550299ba1357e82 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_70e852041d066caa0550299ba1357e82 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_70e852041d066caa0550299ba1357e82, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_70e852041d066caa0550299ba1357e82->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_70e852041d066caa0550299ba1357e82, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_70e852041d066caa0550299ba1357e82,
        type_description_1,
        par_A,
        par_permc_spec,
        par_diag_pivot_thresh,
        par_relax,
        par_panel_size,
        par_options,
        var_M,
        var_N,
        var__options
    );


    // Release cached frame.
    if ( frame_70e852041d066caa0550299ba1357e82 == cache_frame_70e852041d066caa0550299ba1357e82 )
    {
        Py_DECREF( frame_70e852041d066caa0550299ba1357e82 );
    }
    cache_frame_70e852041d066caa0550299ba1357e82 = NULL;

    assertFrameObject( frame_70e852041d066caa0550299ba1357e82 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_4_splu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_permc_spec );
    Py_DECREF( par_permc_spec );
    par_permc_spec = NULL;

    CHECK_OBJECT( (PyObject *)par_diag_pivot_thresh );
    Py_DECREF( par_diag_pivot_thresh );
    par_diag_pivot_thresh = NULL;

    CHECK_OBJECT( (PyObject *)par_relax );
    Py_DECREF( par_relax );
    par_relax = NULL;

    CHECK_OBJECT( (PyObject *)par_panel_size );
    Py_DECREF( par_panel_size );
    par_panel_size = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)var_M );
    Py_DECREF( var_M );
    var_M = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var__options );
    Py_DECREF( var__options );
    var__options = NULL;

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

    Py_XDECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_permc_spec );
    Py_DECREF( par_permc_spec );
    par_permc_spec = NULL;

    CHECK_OBJECT( (PyObject *)par_diag_pivot_thresh );
    Py_DECREF( par_diag_pivot_thresh );
    par_diag_pivot_thresh = NULL;

    CHECK_OBJECT( (PyObject *)par_relax );
    Py_DECREF( par_relax );
    par_relax = NULL;

    CHECK_OBJECT( (PyObject *)par_panel_size );
    Py_DECREF( par_panel_size );
    par_panel_size = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var__options );
    var__options = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_4_splu );
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


static PyObject *impl_scipy$sparse$linalg$dsolve$linsolve$$$function_5_spilu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_drop_tol = python_pars[ 1 ];
    PyObject *par_fill_factor = python_pars[ 2 ];
    PyObject *par_drop_rule = python_pars[ 3 ];
    PyObject *par_permc_spec = python_pars[ 4 ];
    PyObject *par_diag_pivot_thresh = python_pars[ 5 ];
    PyObject *par_relax = python_pars[ 6 ];
    PyObject *par_panel_size = python_pars[ 7 ];
    PyObject *par_options = python_pars[ 8 ];
    PyObject *var_M = NULL;
    PyObject *var_N = NULL;
    PyObject *var__options = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9fd69656000d335e3cbf88faca5ccf36;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9fd69656000d335e3cbf88faca5ccf36 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9fd69656000d335e3cbf88faca5ccf36, codeobj_9fd69656000d335e3cbf88faca5ccf36, module_scipy$sparse$linalg$dsolve$linsolve, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9fd69656000d335e3cbf88faca5ccf36 = cache_frame_9fd69656000d335e3cbf88faca5ccf36;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9fd69656000d335e3cbf88faca5ccf36 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9fd69656000d335e3cbf88faca5ccf36 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isspmatrix_csc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 370;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_9fd69656000d335e3cbf88faca5ccf36->m_frame.f_lineno = 370;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "oooooooooooo";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_csc_matrix );

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

                exception_lineno = 371;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_2 = par_A;
            frame_9fd69656000d335e3cbf88faca5ccf36->m_frame.f_lineno = 371;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 371;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_A;
                assert( old != NULL );
                par_A = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_warn );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 372;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            tmp_args_element_name_3 = const_str_digest_cd6b07ef5eca1f322deb69c874832295;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SparseEfficiencyWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 372;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_4 = tmp_mvar_value_4;
            frame_9fd69656000d335e3cbf88faca5ccf36->m_frame.f_lineno = 372;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 372;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( par_A );
        tmp_called_instance_1 = par_A;
        frame_9fd69656000d335e3cbf88faca5ccf36->m_frame.f_lineno = 375;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_sum_duplicates );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_A );
        tmp_called_instance_2 = par_A;
        frame_9fd69656000d335e3cbf88faca5ccf36->m_frame.f_lineno = 376;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_asfptype );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "oooooooooooo";
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 378;
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
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 378;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 378;
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

            type_description_1 = "oooooooooooo";
            exception_lineno = 378;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert( var_M == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_M = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert( var_N == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_N = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_M );
        tmp_compexpr_left_1 = var_M;
        CHECK_OBJECT( var_N );
        tmp_compexpr_right_1 = var_N;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "oooooooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_fd23c2bd576d906e73d606c4b0d336b6;
            frame_9fd69656000d335e3cbf88faca5ccf36->m_frame.f_lineno = 380;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 380;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_8;
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
        tmp_dict_key_1 = const_str_plain_ILU_DropRule;
        CHECK_OBJECT( par_drop_rule );
        tmp_dict_value_1 = par_drop_rule;
        tmp_assign_source_8 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_ILU_DropTol;
        CHECK_OBJECT( par_drop_tol );
        tmp_dict_value_2 = par_drop_tol;
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_ILU_FillFactor;
        CHECK_OBJECT( par_fill_factor );
        tmp_dict_value_3 = par_fill_factor;
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_DiagPivotThresh;
        CHECK_OBJECT( par_diag_pivot_thresh );
        tmp_dict_value_4 = par_diag_pivot_thresh;
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_ColPerm;
        CHECK_OBJECT( par_permc_spec );
        tmp_dict_value_5 = par_permc_spec;
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_PanelSize;
        CHECK_OBJECT( par_panel_size );
        tmp_dict_value_6 = par_panel_size;
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_Relax;
        CHECK_OBJECT( par_relax );
        tmp_dict_value_7 = par_relax;
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        assert( var__options == NULL );
        var__options = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_options );
        tmp_compexpr_left_2 = par_options;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( var__options );
            tmp_called_instance_3 = var__options;
            CHECK_OBJECT( par_options );
            tmp_args_element_name_5 = par_options;
            frame_9fd69656000d335e3cbf88faca5ccf36->m_frame.f_lineno = 387;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_update, call_args );
            }

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 387;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain__superlu );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__superlu );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_superlu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 388;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_gstrf );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_N );
        tmp_tuple_element_1 = var_N;
        tmp_args_name_1 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_A );
        tmp_source_name_3 = par_A;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_nnz );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 388;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_A );
        tmp_source_name_4 = par_A;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_data );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 388;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( par_A );
        tmp_source_name_5 = par_A;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_indices );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 388;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 3, tmp_tuple_element_1 );
        CHECK_OBJECT( par_A );
        tmp_source_name_6 = par_A;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_indptr );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 388;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 4, tmp_tuple_element_1 );
        tmp_dict_key_8 = const_str_plain_ilu;
        tmp_dict_value_8 = Py_True;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_options;
        CHECK_OBJECT( var__options );
        tmp_dict_value_9 = var__options;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        frame_9fd69656000d335e3cbf88faca5ccf36->m_frame.f_lineno = 388;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9fd69656000d335e3cbf88faca5ccf36 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9fd69656000d335e3cbf88faca5ccf36 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9fd69656000d335e3cbf88faca5ccf36 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9fd69656000d335e3cbf88faca5ccf36, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9fd69656000d335e3cbf88faca5ccf36->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9fd69656000d335e3cbf88faca5ccf36, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9fd69656000d335e3cbf88faca5ccf36,
        type_description_1,
        par_A,
        par_drop_tol,
        par_fill_factor,
        par_drop_rule,
        par_permc_spec,
        par_diag_pivot_thresh,
        par_relax,
        par_panel_size,
        par_options,
        var_M,
        var_N,
        var__options
    );


    // Release cached frame.
    if ( frame_9fd69656000d335e3cbf88faca5ccf36 == cache_frame_9fd69656000d335e3cbf88faca5ccf36 )
    {
        Py_DECREF( frame_9fd69656000d335e3cbf88faca5ccf36 );
    }
    cache_frame_9fd69656000d335e3cbf88faca5ccf36 = NULL;

    assertFrameObject( frame_9fd69656000d335e3cbf88faca5ccf36 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_5_spilu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_drop_tol );
    Py_DECREF( par_drop_tol );
    par_drop_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_fill_factor );
    Py_DECREF( par_fill_factor );
    par_fill_factor = NULL;

    CHECK_OBJECT( (PyObject *)par_drop_rule );
    Py_DECREF( par_drop_rule );
    par_drop_rule = NULL;

    CHECK_OBJECT( (PyObject *)par_permc_spec );
    Py_DECREF( par_permc_spec );
    par_permc_spec = NULL;

    CHECK_OBJECT( (PyObject *)par_diag_pivot_thresh );
    Py_DECREF( par_diag_pivot_thresh );
    par_diag_pivot_thresh = NULL;

    CHECK_OBJECT( (PyObject *)par_relax );
    Py_DECREF( par_relax );
    par_relax = NULL;

    CHECK_OBJECT( (PyObject *)par_panel_size );
    Py_DECREF( par_panel_size );
    par_panel_size = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)var_M );
    Py_DECREF( var_M );
    var_M = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var__options );
    Py_DECREF( var__options );
    var__options = NULL;

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

    Py_XDECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_drop_tol );
    Py_DECREF( par_drop_tol );
    par_drop_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_fill_factor );
    Py_DECREF( par_fill_factor );
    par_fill_factor = NULL;

    CHECK_OBJECT( (PyObject *)par_drop_rule );
    Py_DECREF( par_drop_rule );
    par_drop_rule = NULL;

    CHECK_OBJECT( (PyObject *)par_permc_spec );
    Py_DECREF( par_permc_spec );
    par_permc_spec = NULL;

    CHECK_OBJECT( (PyObject *)par_diag_pivot_thresh );
    Py_DECREF( par_diag_pivot_thresh );
    par_diag_pivot_thresh = NULL;

    CHECK_OBJECT( (PyObject *)par_relax );
    Py_DECREF( par_relax );
    par_relax = NULL;

    CHECK_OBJECT( (PyObject *)par_panel_size );
    Py_DECREF( par_panel_size );
    par_panel_size = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var__options );
    var__options = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_5_spilu );
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


static PyObject *impl_scipy$sparse$linalg$dsolve$linsolve$$$function_6_factorized( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_A = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *var_umf = PyCell_EMPTY();
    PyObject *var_solve = NULL;
    struct Nuitka_FrameObject *frame_2586354cbe9564e1108b3c6933311482;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2586354cbe9564e1108b3c6933311482 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2586354cbe9564e1108b3c6933311482, codeobj_2586354cbe9564e1108b3c6933311482, module_scipy$sparse$linalg$dsolve$linsolve, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2586354cbe9564e1108b3c6933311482 = cache_frame_2586354cbe9564e1108b3c6933311482;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2586354cbe9564e1108b3c6933311482 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2586354cbe9564e1108b3c6933311482 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_useUmfpack );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_useUmfpack );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "useUmfpack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 419;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_mvar_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "cco";
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_mvar_value_2;
            int tmp_truth_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_noScikit );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_noScikit );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "noScikit" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 420;
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }

            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_mvar_value_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 420;
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                tmp_make_exception_arg_1 = const_str_digest_05b568aeb851b08769cd65edf9b6d9ac;
                frame_2586354cbe9564e1108b3c6933311482->m_frame.f_lineno = 421;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 421;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isspmatrix_csc" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 423;
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_3;
            CHECK_OBJECT( PyCell_GET( par_A ) );
            tmp_args_element_name_1 = PyCell_GET( par_A );
            frame_2586354cbe9564e1108b3c6933311482->m_frame.f_lineno = 423;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 423;
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 423;
                type_description_1 = "cco";
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
                PyObject *tmp_assign_source_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_2;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_csc_matrix );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csc_matrix" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 424;
                    type_description_1 = "cco";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_4;
                CHECK_OBJECT( PyCell_GET( par_A ) );
                tmp_args_element_name_2 = PyCell_GET( par_A );
                frame_2586354cbe9564e1108b3c6933311482->m_frame.f_lineno = 424;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                if ( tmp_assign_source_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 424;
                    type_description_1 = "cco";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = PyCell_GET( par_A );
                    PyCell_SET( par_A, tmp_assign_source_1 );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_mvar_value_6;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_warn );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 425;
                    type_description_1 = "cco";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_5;
                tmp_args_element_name_3 = const_str_digest_cd6b07ef5eca1f322deb69c874832295;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SparseEfficiencyWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 425;
                    type_description_1 = "cco";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_4 = tmp_mvar_value_6;
                frame_2586354cbe9564e1108b3c6933311482->m_frame.f_lineno = 425;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 425;
                    type_description_1 = "cco";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( PyCell_GET( par_A ) );
            tmp_called_instance_1 = PyCell_GET( par_A );
            frame_2586354cbe9564e1108b3c6933311482->m_frame.f_lineno = 427;
            tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_asfptype );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 427;
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = PyCell_GET( par_A );
                PyCell_SET( par_A, tmp_assign_source_2 );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( PyCell_GET( par_A ) );
            tmp_source_name_2 = PyCell_GET( par_A );
            tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
            if ( tmp_source_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 429;
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_char );
            Py_DECREF( tmp_source_name_1 );
            if ( tmp_compexpr_left_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 429;
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_1 = const_str_plain_dD;
            tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
            Py_DECREF( tmp_compexpr_left_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 429;
                type_description_1 = "cco";
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_54824583ac1072b245c698a21ee5f8ff;
                frame_2586354cbe9564e1108b3c6933311482->m_frame.f_lineno = 430;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 430;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_umfpack );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umfpack );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "umfpack" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 433;
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_7;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_UmfpackContext );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 433;
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain__get_umf_family );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_umf_family );
            }

            if ( tmp_mvar_value_8 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_umf_family" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 433;
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_8;
            CHECK_OBJECT( PyCell_GET( par_A ) );
            tmp_args_element_name_6 = PyCell_GET( par_A );
            frame_2586354cbe9564e1108b3c6933311482->m_frame.f_lineno = 433;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 433;
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }
            frame_2586354cbe9564e1108b3c6933311482->m_frame.f_lineno = 433;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 433;
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }
            assert( PyCell_GET( var_umf ) == NULL );
            PyCell_SET( var_umf, tmp_assign_source_3 );

        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_7;
            CHECK_OBJECT( PyCell_GET( var_umf ) );
            tmp_called_instance_2 = PyCell_GET( var_umf );
            CHECK_OBJECT( PyCell_GET( par_A ) );
            tmp_args_element_name_7 = PyCell_GET( par_A );
            frame_2586354cbe9564e1108b3c6933311482->m_frame.f_lineno = 436;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_numeric, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 436;
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_6_factorized$$$function_1_solve(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] = par_A;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[1] = var_umf;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[1] );


            assert( var_solve == NULL );
            var_solve = tmp_assign_source_4;
        }
        CHECK_OBJECT( var_solve );
        tmp_return_value = var_solve;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_source_name_4;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_splu );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_splu );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "splu" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 443;
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_9;
            CHECK_OBJECT( PyCell_GET( par_A ) );
            tmp_args_element_name_8 = PyCell_GET( par_A );
            frame_2586354cbe9564e1108b3c6933311482->m_frame.f_lineno = 443;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 443;
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_solve );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 443;
                type_description_1 = "cco";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2586354cbe9564e1108b3c6933311482 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2586354cbe9564e1108b3c6933311482 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2586354cbe9564e1108b3c6933311482 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2586354cbe9564e1108b3c6933311482, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2586354cbe9564e1108b3c6933311482->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2586354cbe9564e1108b3c6933311482, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2586354cbe9564e1108b3c6933311482,
        type_description_1,
        par_A,
        var_umf,
        var_solve
    );


    // Release cached frame.
    if ( frame_2586354cbe9564e1108b3c6933311482 == cache_frame_2586354cbe9564e1108b3c6933311482 )
    {
        Py_DECREF( frame_2586354cbe9564e1108b3c6933311482 );
    }
    cache_frame_2586354cbe9564e1108b3c6933311482 = NULL;

    assertFrameObject( frame_2586354cbe9564e1108b3c6933311482 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_6_factorized );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)var_umf );
    Py_DECREF( var_umf );
    var_umf = NULL;

    Py_XDECREF( var_solve );
    var_solve = NULL;

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

    CHECK_OBJECT( (PyObject *)var_umf );
    Py_DECREF( var_umf );
    var_umf = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_6_factorized );
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


static PyObject *impl_scipy$sparse$linalg$dsolve$linsolve$$$function_6_factorized$$$function_1_solve( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_b = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_798f86b7dd54840f212380084b2cbdce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_798f86b7dd54840f212380084b2cbdce = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_798f86b7dd54840f212380084b2cbdce, codeobj_798f86b7dd54840f212380084b2cbdce, module_scipy$sparse$linalg$dsolve$linsolve, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_798f86b7dd54840f212380084b2cbdce = cache_frame_798f86b7dd54840f212380084b2cbdce;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_798f86b7dd54840f212380084b2cbdce );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_798f86b7dd54840f212380084b2cbdce ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "umf" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 439;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_solve );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_umfpack );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umfpack );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "umfpack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 439;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_UMFPACK_A );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 439;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 439;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[0] );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_b );
        tmp_tuple_element_1 = par_b;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_d651afcac12196dc5a0b74e25d976a33 );
        frame_798f86b7dd54840f212380084b2cbdce->m_frame.f_lineno = 439;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_798f86b7dd54840f212380084b2cbdce );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_798f86b7dd54840f212380084b2cbdce );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_798f86b7dd54840f212380084b2cbdce );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_798f86b7dd54840f212380084b2cbdce, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_798f86b7dd54840f212380084b2cbdce->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_798f86b7dd54840f212380084b2cbdce, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_798f86b7dd54840f212380084b2cbdce,
        type_description_1,
        par_b,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_798f86b7dd54840f212380084b2cbdce == cache_frame_798f86b7dd54840f212380084b2cbdce )
    {
        Py_DECREF( frame_798f86b7dd54840f212380084b2cbdce );
    }
    cache_frame_798f86b7dd54840f212380084b2cbdce = NULL;

    assertFrameObject( frame_798f86b7dd54840f212380084b2cbdce );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_6_factorized$$$function_1_solve );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_6_factorized$$$function_1_solve );
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


static PyObject *impl_scipy$sparse$linalg$dsolve$linsolve$$$function_7_spsolve_triangular( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_lower = python_pars[ 2 ];
    PyObject *par_overwrite_A = python_pars[ 3 ];
    PyObject *par_overwrite_b = python_pars[ 4 ];
    PyObject *var_x_dtype = NULL;
    PyObject *var_x = NULL;
    PyObject *var_row_indices = NULL;
    PyObject *var_i = NULL;
    PyObject *var_indptr_start = NULL;
    PyObject *var_indptr_stop = NULL;
    PyObject *var_A_diagonal_index_row_i = NULL;
    PyObject *var_A_off_diagonal_indices_row_i = NULL;
    PyObject *var_A_column_indices_in_row_i = NULL;
    PyObject *var_A_values_in_row_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    struct Nuitka_FrameObject *frame_996fa87603a033f4b96dad99c15ccfcb;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_996fa87603a033f4b96dad99c15ccfcb = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_996fa87603a033f4b96dad99c15ccfcb, codeobj_996fa87603a033f4b96dad99c15ccfcb, module_scipy$sparse$linalg$dsolve$linsolve, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_996fa87603a033f4b96dad99c15ccfcb = cache_frame_996fa87603a033f4b96dad99c15ccfcb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_996fa87603a033f4b96dad99c15ccfcb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_996fa87603a033f4b96dad99c15ccfcb ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csr );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csr );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isspmatrix_csr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 497;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 497;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 497;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 497;
            type_description_1 = "ooooooooooooooo";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_warn );

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

                exception_lineno = 498;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            tmp_args_element_name_2 = const_str_digest_913faed04ee39dc0a01a096592776115;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SparseEfficiencyWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 499;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_3 = tmp_mvar_value_3;
            frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 498;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 498;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_csr_matrix );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_matrix );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csr_matrix" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 500;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_4;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_4 = par_A;
            frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 500;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 500;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_A;
                assert( old != NULL );
                par_A = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_2;
            CHECK_OBJECT( par_overwrite_A );
            tmp_operand_name_2 = par_overwrite_A;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 501;
                type_description_1 = "ooooooooooooooo";
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
                PyObject *tmp_assign_source_2;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT( par_A );
                tmp_called_instance_1 = par_A;
                frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 502;
                tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 502;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_A;
                    assert( old != NULL );
                    par_A = tmp_assign_source_2;
                    Py_DECREF( old );
                }

            }
            branch_no_2:;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_2;
        if ( par_A == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 504;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = par_A;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 504;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 504;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( par_A == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 504;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = par_A;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 504;
            type_description_1 = "ooooooooooooooo";
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

            exception_lineno = 504;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 504;
            type_description_1 = "ooooooooooooooo";
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
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_4;
            tmp_source_name_3 = const_str_digest_6da71c7a9bd46e94b23111405f83b9ee;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
            assert( !(tmp_called_name_4 == NULL) );
            if ( par_A == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 506;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = par_A;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 506;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 506;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 506;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 505;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 505;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        if ( par_A == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 509;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_A;
        frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 509;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_sum_duplicates );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 509;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 511;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_5;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_6 = par_b;
        frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 511;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_asanyarray, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 511;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_b;
            assert( old != NULL );
            par_b = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_b );
        tmp_source_name_5 = par_b;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ndim );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 513;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = LIST_COPY( const_list_int_pos_1_int_pos_2_list );
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 513;
            type_description_1 = "ooooooooooooooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_7;
            tmp_source_name_6 = const_str_digest_fc563d93ea6e87a880e51336e6cb654e;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_format );
            assert( !(tmp_called_name_5 == NULL) );
            CHECK_OBJECT( par_b );
            tmp_source_name_7 = par_b;
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 515;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 515;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 515;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 514;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 514;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_8;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_subscript_name_4;
        if ( par_A == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 516;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = par_A;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 516;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 516;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_source_name_9 = par_b;
        tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 516;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = const_int_0;
        tmp_compexpr_right_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 516;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 516;
            type_description_1 = "ooooooooooooooo";
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_source_name_11;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_source_name_12;
            tmp_source_name_10 = const_str_digest_d339a876fdb49e8933e1cc695325521a;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_format );
            assert( !(tmp_called_name_6 == NULL) );
            if ( par_A == NULL )
            {
                Py_DECREF( tmp_called_name_6 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 520;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_11 = par_A;
            tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_shape );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 520;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_b );
            tmp_source_name_12 = par_b;
            tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_shape );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_args_element_name_8 );

                exception_lineno = 520;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 518;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_make_exception_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_8 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_make_exception_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 518;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 517;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_3 );
            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 517;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_14;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 523;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_6;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_result_type );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 523;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( par_A == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 523;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = par_A;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_data );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 523;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_args_element_name_11 = par_b;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 523;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = tmp_mvar_value_7;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_float );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 523;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 523;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 523;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x_dtype == NULL );
        var_x_dtype = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_overwrite_b );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_overwrite_b );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 524;
            type_description_1 = "ooooooooooooooo";
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
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_16;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_17;
            PyObject *tmp_kw_name_1;
            int tmp_truth_name_2;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 525;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_16 = tmp_mvar_value_8;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_can_cast );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 525;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_b );
            tmp_source_name_17 = par_b;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_dtype );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_8 );

                exception_lineno = 525;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_x_dtype );
            tmp_tuple_element_1 = var_x_dtype;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_4d1d638075572819465a0c6d70cdff6f );
            frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 525;
            tmp_call_result_3 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 525;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_3 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_3 );

                exception_lineno = 525;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_7 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            {
                PyObject *tmp_assign_source_5;
                CHECK_OBJECT( par_b );
                tmp_assign_source_5 = par_b;
                assert( var_x == NULL );
                Py_INCREF( tmp_assign_source_5 );
                var_x = tmp_assign_source_5;
            }
            goto branch_end_7;
            branch_no_7:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_make_exception_arg_4;
                PyObject *tmp_called_name_9;
                PyObject *tmp_source_name_18;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_source_name_19;
                PyObject *tmp_args_element_name_14;
                tmp_source_name_18 = const_str_digest_afe08b8241bded7b39d552a81320614d;
                tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_format );
                assert( !(tmp_called_name_9 == NULL) );
                CHECK_OBJECT( par_b );
                tmp_source_name_19 = par_b;
                tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_dtype );
                if ( tmp_args_element_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_9 );

                    exception_lineno = 530;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_x_dtype );
                tmp_args_element_name_14 = var_x_dtype;
                frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 529;
                {
                    PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                    tmp_make_exception_arg_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
                }

                Py_DECREF( tmp_called_name_9 );
                Py_DECREF( tmp_args_element_name_13 );
                if ( tmp_make_exception_arg_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 529;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 528;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_4 };
                    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_4 );
                assert( !(tmp_raise_type_4 == NULL) );
                exception_type = tmp_raise_type_4;
                exception_lineno = 528;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_end_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_20;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( par_b );
            tmp_source_name_20 = par_b;
            tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_astype );
            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 532;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x_dtype );
            tmp_tuple_element_2 = var_x_dtype;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_10010a04cba23a4ccc75195b8c45141a );
            frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 532;
            tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 532;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_x == NULL );
            var_x = tmp_assign_source_6;
        }
        branch_end_6:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_lower );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_lower );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 535;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT( par_b );
            tmp_len_arg_1 = par_b;
            tmp_xrange_low_1 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_xrange_low_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 536;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
            Py_DECREF( tmp_xrange_low_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 536;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_row_indices == NULL );
            var_row_indices = tmp_assign_source_7;
        }
        goto branch_end_8;
        branch_no_8:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_xrange_low_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_len_arg_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_xrange_high_1;
            PyObject *tmp_xrange_step_1;
            CHECK_OBJECT( par_b );
            tmp_len_arg_2 = par_b;
            tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 538;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_xrange_low_2 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            assert( !(tmp_xrange_low_2 == NULL) );
            tmp_xrange_high_1 = const_int_neg_1;
            tmp_xrange_step_1 = const_int_neg_1;
            tmp_assign_source_8 = BUILTIN_XRANGE3( tmp_xrange_low_2, tmp_xrange_high_1, tmp_xrange_step_1 );
            Py_DECREF( tmp_xrange_low_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 538;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_row_indices == NULL );
            var_row_indices = tmp_assign_source_8;
        }
        branch_end_8:;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_row_indices );
        tmp_iter_arg_1 = var_row_indices;
        tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 541;
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
                exception_lineno = 541;
                goto try_except_handler_2;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_11;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_source_name_21;
        PyObject *tmp_subscript_name_5;
        if ( par_A == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 544;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_21 = par_A;
        tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_indptr );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 544;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_i );
        tmp_subscript_name_5 = var_i;
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 544;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_indptr_start;
            var_indptr_start = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_source_name_22;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        if ( par_A == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 545;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_22 = par_A;
        tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_indptr );
        if ( tmp_subscribed_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_i );
        tmp_left_name_2 = var_i;
        tmp_right_name_2 = const_int_pos_1;
        tmp_subscript_name_6 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_subscript_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_6 );

            exception_lineno = 545;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscribed_name_6 );
        Py_DECREF( tmp_subscript_name_6 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_indptr_stop;
            var_indptr_stop = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_4;
        CHECK_OBJECT( par_lower );
        tmp_truth_name_4 = CHECK_IF_TRUE( par_lower );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 546;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_14;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( var_indptr_stop );
            tmp_left_name_3 = var_indptr_stop;
            tmp_right_name_3 = const_int_pos_1;
            tmp_assign_source_14 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 547;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_A_diagonal_index_row_i;
                var_A_diagonal_index_row_i = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_step_name_1;
            CHECK_OBJECT( var_indptr_start );
            tmp_start_name_1 = var_indptr_start;
            CHECK_OBJECT( var_indptr_stop );
            tmp_left_name_4 = var_indptr_stop;
            tmp_right_name_4 = const_int_pos_1;
            tmp_stop_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_stop_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 548;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_step_name_1 = Py_None;
            tmp_assign_source_15 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            Py_DECREF( tmp_stop_name_1 );
            assert( !(tmp_assign_source_15 == NULL) );
            {
                PyObject *old = var_A_off_diagonal_indices_row_i;
                var_A_off_diagonal_indices_row_i = tmp_assign_source_15;
                Py_XDECREF( old );
            }

        }
        goto branch_end_9;
        branch_no_9:;
        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( var_indptr_start );
            tmp_assign_source_16 = var_indptr_start;
            {
                PyObject *old = var_A_diagonal_index_row_i;
                var_A_diagonal_index_row_i = tmp_assign_source_16;
                Py_INCREF( var_A_diagonal_index_row_i );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_start_name_2;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_step_name_2;
            CHECK_OBJECT( var_indptr_start );
            tmp_left_name_5 = var_indptr_start;
            tmp_right_name_5 = const_int_pos_1;
            tmp_start_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_start_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 551;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_indptr_stop );
            tmp_stop_name_2 = var_indptr_stop;
            tmp_step_name_2 = Py_None;
            tmp_assign_source_17 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            Py_DECREF( tmp_start_name_2 );
            assert( !(tmp_assign_source_17 == NULL) );
            {
                PyObject *old = var_A_off_diagonal_indices_row_i;
                var_A_off_diagonal_indices_row_i = tmp_assign_source_17;
                Py_XDECREF( old );
            }

        }
        branch_end_9:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_source_name_23;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT( var_indptr_stop );
        tmp_compexpr_left_4 = var_indptr_stop;
        CHECK_OBJECT( var_indptr_start );
        tmp_compexpr_right_4 = var_indptr_start;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 554;
            type_description_1 = "ooooooooooooooo";
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
        if ( par_A == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 554;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_23 = par_A;
        tmp_subscribed_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_indices );
        if ( tmp_subscribed_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 554;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_A_diagonal_index_row_i );
        tmp_subscript_name_7 = var_A_diagonal_index_row_i;
        tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        Py_DECREF( tmp_subscribed_name_7 );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 554;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_i );
        tmp_compexpr_right_5 = var_i;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 554;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_10 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_10 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_raise_type_5;
            PyObject *tmp_called_name_11;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_16;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_LinAlgError );

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

                exception_lineno = 555;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_11 = tmp_mvar_value_9;
            tmp_called_instance_4 = const_str_digest_ad7f1d28c089e7489f74b230627f02eb;
            CHECK_OBJECT( var_i );
            tmp_args_element_name_16 = var_i;
            frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 556;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_args_element_name_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_format, call_args );
            }

            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 556;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }
            frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 555;
            {
                PyObject *call_args[] = { tmp_args_element_name_15 };
                tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_raise_type_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 555;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }
            exception_type = tmp_raise_type_5;
            exception_lineno = 555;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        branch_no_10:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_source_name_24;
        PyObject *tmp_subscript_name_8;
        if ( par_A == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 557;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_24 = par_A;
        tmp_subscribed_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_indices );
        if ( tmp_subscribed_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 557;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_A_diagonal_index_row_i );
        tmp_subscript_name_8 = var_A_diagonal_index_row_i;
        tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        Py_DECREF( tmp_subscribed_name_8 );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 557;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_i );
        tmp_compexpr_right_6 = var_i;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 557;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_raise_type_6;
            PyObject *tmp_called_name_12;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_called_name_13;
            PyObject *tmp_source_name_25;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_source_name_26;
            PyObject *tmp_subscript_name_9;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_LinAlgError );

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

                exception_lineno = 558;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_12 = tmp_mvar_value_10;
            tmp_source_name_25 = const_str_digest_25fb379629483b29bbd23a14ab700f54;
            tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_format );
            assert( !(tmp_called_name_13 == NULL) );
            CHECK_OBJECT( var_i );
            tmp_args_element_name_18 = var_i;
            if ( par_A == NULL )
            {
                Py_DECREF( tmp_called_name_13 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 560;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_26 = par_A;
            tmp_subscribed_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_indices );
            if ( tmp_subscribed_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_13 );

                exception_lineno = 560;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_A_diagonal_index_row_i );
            tmp_subscript_name_9 = var_A_diagonal_index_row_i;
            tmp_args_element_name_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
            Py_DECREF( tmp_subscribed_name_9 );
            if ( tmp_args_element_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_13 );

                exception_lineno = 560;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }
            frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 559;
            {
                PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
                tmp_args_element_name_17 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
            }

            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_19 );
            if ( tmp_args_element_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 559;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }
            frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 558;
            {
                PyObject *call_args[] = { tmp_args_element_name_17 };
                tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
            }

            Py_DECREF( tmp_args_element_name_17 );
            if ( tmp_raise_type_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 558;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }
            exception_type = tmp_raise_type_6;
            exception_lineno = 558;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        branch_no_11:;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_source_name_27;
        PyObject *tmp_subscript_name_10;
        if ( par_A == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 563;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_27 = par_A;
        tmp_subscribed_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_indices );
        if ( tmp_subscribed_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 563;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_A_off_diagonal_indices_row_i );
        tmp_subscript_name_10 = var_A_off_diagonal_indices_row_i;
        tmp_assign_source_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        Py_DECREF( tmp_subscribed_name_10 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 563;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_A_column_indices_in_row_i;
            var_A_column_indices_in_row_i = tmp_assign_source_18;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_source_name_28;
        PyObject *tmp_subscript_name_11;
        if ( par_A == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 564;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_28 = par_A;
        tmp_subscribed_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_data );
        if ( tmp_subscribed_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 564;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_A_off_diagonal_indices_row_i );
        tmp_subscript_name_11 = var_A_off_diagonal_indices_row_i;
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
        Py_DECREF( tmp_subscribed_name_11 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 564;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_A_values_in_row_i;
            var_A_values_in_row_i = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_20;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 565;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assign_source_20 = var_x;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_20;
            Py_INCREF( tmp_inplace_assign_subscr_1__target );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( var_i );
        tmp_assign_source_21 = var_i;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_21;
            Py_INCREF( tmp_inplace_assign_subscr_1__subscript );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_6;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_right_name_6;
        PyObject *tmp_called_name_14;
        PyObject *tmp_source_name_29;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_source_name_30;
        PyObject *tmp_subscribed_name_13;
        PyObject *tmp_subscript_name_13;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_12 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_subscript_name_12 = tmp_inplace_assign_subscr_1__subscript;
        tmp_left_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 565;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_left_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 565;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_29 = tmp_mvar_value_11;
        tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_dot );
        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 565;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        if ( var_x == NULL )
        {
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_called_name_14 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 565;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscribed_name_13 = var_x;
        CHECK_OBJECT( var_A_column_indices_in_row_i );
        tmp_subscript_name_13 = var_A_column_indices_in_row_i;
        tmp_source_name_30 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
        if ( tmp_source_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_called_name_14 );

            exception_lineno = 565;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_T );
        Py_DECREF( tmp_source_name_30 );
        if ( tmp_args_element_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_called_name_14 );

            exception_lineno = 565;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_A_values_in_row_i );
        tmp_args_element_name_21 = var_A_values_in_row_i;
        frame_996fa87603a033f4b96dad99c15ccfcb->m_frame.f_lineno = 565;
        {
            PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21 };
            tmp_right_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 565;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 565;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
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


            exception_lineno = 565;
            type_description_1 = "ooooooooooooooo";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    {
        PyObject *tmp_assign_source_22;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 568;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assign_source_22 = var_x;
        {
            PyObject *old = tmp_inplace_assign_subscr_2__target;
            tmp_inplace_assign_subscr_2__target = tmp_assign_source_22;
            Py_INCREF( tmp_inplace_assign_subscr_2__target );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( var_i );
        tmp_assign_source_23 = var_i;
        {
            PyObject *old = tmp_inplace_assign_subscr_2__subscript;
            tmp_inplace_assign_subscr_2__subscript = tmp_assign_source_23;
            Py_INCREF( tmp_inplace_assign_subscr_2__subscript );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_7;
        PyObject *tmp_subscribed_name_14;
        PyObject *tmp_subscript_name_14;
        PyObject *tmp_right_name_7;
        PyObject *tmp_subscribed_name_15;
        PyObject *tmp_source_name_31;
        PyObject *tmp_subscript_name_15;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
        tmp_subscribed_name_14 = tmp_inplace_assign_subscr_2__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
        tmp_subscript_name_14 = tmp_inplace_assign_subscr_2__subscript;
        tmp_left_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 568;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        if ( par_A == NULL )
        {
            Py_DECREF( tmp_left_name_7 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 568;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_source_name_31 = par_A;
        tmp_subscribed_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_data );
        if ( tmp_subscribed_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 568;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_A_diagonal_index_row_i );
        tmp_subscript_name_15 = var_A_diagonal_index_row_i;
        tmp_right_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
        Py_DECREF( tmp_subscribed_name_15 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 568;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_InPlaceTrueDivide, tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 568;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
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


            exception_lineno = 568;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
    tmp_inplace_assign_subscr_2__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
    tmp_inplace_assign_subscr_2__subscript = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 541;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    if ( var_x == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 570;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_x;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_996fa87603a033f4b96dad99c15ccfcb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_996fa87603a033f4b96dad99c15ccfcb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_996fa87603a033f4b96dad99c15ccfcb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_996fa87603a033f4b96dad99c15ccfcb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_996fa87603a033f4b96dad99c15ccfcb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_996fa87603a033f4b96dad99c15ccfcb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_996fa87603a033f4b96dad99c15ccfcb,
        type_description_1,
        par_A,
        par_b,
        par_lower,
        par_overwrite_A,
        par_overwrite_b,
        var_x_dtype,
        var_x,
        var_row_indices,
        var_i,
        var_indptr_start,
        var_indptr_stop,
        var_A_diagonal_index_row_i,
        var_A_off_diagonal_indices_row_i,
        var_A_column_indices_in_row_i,
        var_A_values_in_row_i
    );


    // Release cached frame.
    if ( frame_996fa87603a033f4b96dad99c15ccfcb == cache_frame_996fa87603a033f4b96dad99c15ccfcb )
    {
        Py_DECREF( frame_996fa87603a033f4b96dad99c15ccfcb );
    }
    cache_frame_996fa87603a033f4b96dad99c15ccfcb = NULL;

    assertFrameObject( frame_996fa87603a033f4b96dad99c15ccfcb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_7_spsolve_triangular );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_lower );
    Py_DECREF( par_lower );
    par_lower = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_A );
    Py_DECREF( par_overwrite_A );
    par_overwrite_A = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_b );
    Py_DECREF( par_overwrite_b );
    par_overwrite_b = NULL;

    CHECK_OBJECT( (PyObject *)var_x_dtype );
    Py_DECREF( var_x_dtype );
    var_x_dtype = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_row_indices );
    Py_DECREF( var_row_indices );
    var_row_indices = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_indptr_start );
    var_indptr_start = NULL;

    Py_XDECREF( var_indptr_stop );
    var_indptr_stop = NULL;

    Py_XDECREF( var_A_diagonal_index_row_i );
    var_A_diagonal_index_row_i = NULL;

    Py_XDECREF( var_A_off_diagonal_indices_row_i );
    var_A_off_diagonal_indices_row_i = NULL;

    Py_XDECREF( var_A_column_indices_in_row_i );
    var_A_column_indices_in_row_i = NULL;

    Py_XDECREF( var_A_values_in_row_i );
    var_A_values_in_row_i = NULL;

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

    Py_XDECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_lower );
    Py_DECREF( par_lower );
    par_lower = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_A );
    Py_DECREF( par_overwrite_A );
    par_overwrite_A = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_b );
    Py_DECREF( par_overwrite_b );
    par_overwrite_b = NULL;

    Py_XDECREF( var_x_dtype );
    var_x_dtype = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_row_indices );
    var_row_indices = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_indptr_start );
    var_indptr_start = NULL;

    Py_XDECREF( var_indptr_stop );
    var_indptr_stop = NULL;

    Py_XDECREF( var_A_diagonal_index_row_i );
    var_A_diagonal_index_row_i = NULL;

    Py_XDECREF( var_A_off_diagonal_indices_row_i );
    var_A_off_diagonal_indices_row_i = NULL;

    Py_XDECREF( var_A_column_indices_in_row_i );
    var_A_column_indices_in_row_i = NULL;

    Py_XDECREF( var_A_values_in_row_i );
    var_A_values_in_row_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve$$$function_7_spsolve_triangular );
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



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_1_use_solver(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$dsolve$linsolve$$$function_1_use_solver,
        const_str_plain_use_solver,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_720a59584b69465b066bd1541edc9817,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_digest_3bdc53b042d6a5ff32c86b8b1b3983c3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_2__get_umf_family(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$dsolve$linsolve$$$function_2__get_umf_family,
        const_str_plain__get_umf_family,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_929db4faae6ed466642b71ce5e418556,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_digest_548f7d74af9a253b8fcd84fea7c8434e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_3_spsolve( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$dsolve$linsolve$$$function_3_spsolve,
        const_str_plain_spsolve,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ab681ddcff95de5391c6e9ba21ea6ccd,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_digest_ca1ad0289fff8e9baf016698c203b2d8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_4_splu( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$dsolve$linsolve$$$function_4_splu,
        const_str_plain_splu,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_70e852041d066caa0550299ba1357e82,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_digest_1a6569860d07e998d6ccbf11bb49fe7b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_5_spilu( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$dsolve$linsolve$$$function_5_spilu,
        const_str_plain_spilu,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9fd69656000d335e3cbf88faca5ccf36,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_digest_af0301c3a0266b67349f7d6fb64cea28,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_6_factorized(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$dsolve$linsolve$$$function_6_factorized,
        const_str_plain_factorized,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2586354cbe9564e1108b3c6933311482,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_digest_3380e4d2adc09b3ee154c9ad0312fef9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_6_factorized$$$function_1_solve(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$dsolve$linsolve$$$function_6_factorized$$$function_1_solve,
        const_str_plain_solve,
#if PYTHON_VERSION >= 300
        const_str_digest_b729412079229fc3528876e1d89f1215,
#endif
        codeobj_798f86b7dd54840f212380084b2cbdce,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$dsolve$linsolve,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_7_spsolve_triangular( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$dsolve$linsolve$$$function_7_spsolve_triangular,
        const_str_plain_spsolve_triangular,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_996fa87603a033f4b96dad99c15ccfcb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_digest_1326693e03c12f3ce05e0efe10b07651,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$linalg$dsolve$linsolve =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.linalg.dsolve.linsolve",
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

MOD_INIT_DECL( scipy$sparse$linalg$dsolve$linsolve )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$linalg$dsolve$linsolve );
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
    puts("scipy.sparse.linalg.dsolve.linsolve: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.linalg.dsolve.linsolve: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.linalg.dsolve.linsolve: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$sparse$linalg$dsolve$linsolve" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$linalg$dsolve$linsolve = Py_InitModule4(
        "scipy.sparse.linalg.dsolve.linsolve",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$sparse$linalg$dsolve$linsolve = PyModule_Create( &mdef_scipy$sparse$linalg$dsolve$linsolve );
#endif

    moduledict_scipy$sparse$linalg$dsolve$linsolve = MODULE_DICT( module_scipy$sparse$linalg$dsolve$linsolve );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$sparse$linalg$dsolve$linsolve,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$sparse$linalg$dsolve$linsolve,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$dsolve$linsolve,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$dsolve$linsolve,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$sparse$linalg$dsolve$linsolve );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_534f6b5bb171eb874713bab98f5b0e32, module_scipy$sparse$linalg$dsolve$linsolve );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    struct Nuitka_FrameObject *frame_a90ac1249c79974e9a77e73da84682c0;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_scipy$sparse$linalg$dsolve$linsolve_25 = NULL;
    PyObject *tmp_dictset_value;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_a90ac1249c79974e9a77e73da84682c0 = MAKE_MODULE_FRAME( codeobj_a90ac1249c79974e9a77e73da84682c0, module_scipy$sparse$linalg$dsolve$linsolve );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a90ac1249c79974e9a77e73da84682c0 );
    assert( Py_REFCNT( frame_a90ac1249c79974e9a77e73da84682c0 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_a90ac1249c79974e9a77e73da84682c0->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$linalg$dsolve$linsolve;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_warn_tuple;
        tmp_level_name_1 = const_int_0;
        frame_a90ac1249c79974e9a77e73da84682c0->m_frame.f_lineno = 3;
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_warn, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$sparse$linalg$dsolve$linsolve;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_a90ac1249c79974e9a77e73da84682c0->m_frame.f_lineno = 5;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_numpy;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$sparse$linalg$dsolve$linsolve;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_asarray_tuple;
        tmp_level_name_3 = const_int_0;
        frame_a90ac1249c79974e9a77e73da84682c0->m_frame.f_lineno = 6;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_asarray );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$sparse$linalg$dsolve$linsolve;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_6e72312ea740ee2000830c462a435ce0_tuple;
        tmp_level_name_4 = const_int_0;
        frame_a90ac1249c79974e9a77e73da84682c0->m_frame.f_lineno = 7;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

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
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_isspmatrix_csc );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_isspmatrix_csr );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csr, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_isspmatrix );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_SparseEfficiencyWarning );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_csc_matrix );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_csc_matrix, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_csr_matrix );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_csr_matrix, tmp_assign_source_17 );
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$sparse$linalg$dsolve$linsolve;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_LinAlgError_tuple;
        tmp_level_name_5 = const_int_0;
        frame_a90ac1249c79974e9a77e73da84682c0->m_frame.f_lineno = 9;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_LinAlgError );
        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_LinAlgError, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_empty;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$sparse$linalg$dsolve$linsolve;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain__superlu_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_a90ac1249c79974e9a77e73da84682c0->m_frame.f_lineno = 11;
        tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_13 ) )
        {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_scipy$sparse$linalg$dsolve$linsolve,
                const_str_plain__superlu,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain__superlu );
        }

        Py_DECREF( tmp_import_name_from_13 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain__superlu, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = Py_False;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_noScikit, tmp_assign_source_20 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_9b568abd0afabc6e6ad6748919c47246;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$sparse$linalg$dsolve$linsolve;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = Py_None;
        tmp_level_name_7 = const_int_0;
        frame_a90ac1249c79974e9a77e73da84682c0->m_frame.f_lineno = 15;
        tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_umfpack );
        Py_DECREF( tmp_import_name_from_14 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_umfpack, tmp_assign_source_21 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_a90ac1249c79974e9a77e73da84682c0, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_a90ac1249c79974e9a77e73da84682c0, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_4;
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
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = Py_True;
            UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_noScikit, tmp_assign_source_22 );
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 14;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_a90ac1249c79974e9a77e73da84682c0->m_frame) frame_a90ac1249c79974e9a77e73da84682c0->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_4;
        branch_end_1:;
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
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_noScikit );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_noScikit );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "noScikit" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_operand_name_1 = tmp_mvar_value_3;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = ( tmp_res == 0 ) ? Py_True : Py_False;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_useUmfpack, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = LIST_COPY( const_list_1681adbc7e6f0f4fe6bf303657320e89_list );
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_24 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_UserWarning );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UserWarning" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;

            goto try_except_handler_5;
        }

        tmp_tuple_element_1 = tmp_mvar_value_4;
        tmp_assign_source_25 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_25, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
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


            exception_lineno = 25;

            goto try_except_handler_5;
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


            exception_lineno = 25;

            goto try_except_handler_5;
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


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_27 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_27;
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


            exception_lineno = 25;

            goto try_except_handler_5;
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


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_1 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_1, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_28;
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


                exception_lineno = 25;

                goto try_except_handler_5;
            }
            tmp_tuple_element_2 = const_str_plain_MatrixRankWarning;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_a90ac1249c79974e9a77e73da84682c0->m_frame.f_lineno = 25;
            tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_5;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_28;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_3 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_3, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_5;
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


                    exception_lineno = 25;

                    goto try_except_handler_5;
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

                    exception_lineno = 25;

                    goto try_except_handler_5;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 25;

                    goto try_except_handler_5;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 25;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_5;
            }
            branch_no_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_29;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$sparse$linalg$dsolve$linsolve_25 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_534f6b5bb171eb874713bab98f5b0e32;
        tmp_res = PyObject_SetItem( locals_scipy$sparse$linalg$dsolve$linsolve_25, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_plain_MatrixRankWarning;
        tmp_res = PyObject_SetItem( locals_scipy$sparse$linalg$dsolve$linsolve_25, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_MatrixRankWarning;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_scipy$sparse$linalg$dsolve$linsolve_25;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_a90ac1249c79974e9a77e73da84682c0->m_frame.f_lineno = 25;
            tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_7;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_30 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_30 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_scipy$sparse$linalg$dsolve$linsolve_25 );
        locals_scipy$sparse$linalg$dsolve$linsolve_25 = NULL;
        goto try_return_handler_6;
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

        Py_DECREF( locals_scipy$sparse$linalg$dsolve$linsolve_25 );
        locals_scipy$sparse$linalg$dsolve$linsolve_25 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$dsolve$linsolve );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 25;
        goto try_except_handler_5;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_MatrixRankWarning, tmp_assign_source_30 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a90ac1249c79974e9a77e73da84682c0 );
#endif
    popFrameStack();

    assertFrameObject( frame_a90ac1249c79974e9a77e73da84682c0 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a90ac1249c79974e9a77e73da84682c0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a90ac1249c79974e9a77e73da84682c0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a90ac1249c79974e9a77e73da84682c0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a90ac1249c79974e9a77e73da84682c0, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
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
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_1_use_solver(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_use_solver, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_2__get_umf_family(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain__get_umf_family, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_true_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_34 = MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_3_spsolve( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_spsolve, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = Py_None;
        tmp_defaults_2 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_5 );
        tmp_tuple_element_5 = Py_None;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_5 );
        tmp_tuple_element_5 = Py_None;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_defaults_2, 2, tmp_tuple_element_5 );
        tmp_tuple_element_5 = Py_None;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_defaults_2, 3, tmp_tuple_element_5 );
        tmp_tuple_element_5 = PyDict_New();
        PyTuple_SET_ITEM( tmp_defaults_2, 4, tmp_tuple_element_5 );
        tmp_assign_source_35 = MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_4_splu( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_splu, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_none_none_none_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_36 = MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_5_spilu( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_spilu, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_6_factorized(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_factorized, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_true_false_false_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_38 = MAKE_FUNCTION_scipy$sparse$linalg$dsolve$linsolve$$$function_7_spsolve_triangular( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_spsolve_triangular, tmp_assign_source_38 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$linalg$dsolve$linsolve );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
