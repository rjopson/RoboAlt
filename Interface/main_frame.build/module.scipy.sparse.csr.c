/* Generated code for Python module 'scipy.sparse.csr'
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

/* The "_module_scipy$sparse$csr" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$sparse$csr;
PyDictObject *moduledict_scipy$sparse$csr;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_sum_duplicates;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain_xrange_tuple;
extern PyObject *const_str_plain__swap;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_idx_dtype;
extern PyObject *const_str_plain_arg1;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_get_csr_submatrix;
static PyObject *const_str_digest_37b70b90954a7b618fddbec819d4dd01;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_minor;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_max;
static PyObject *const_tuple_int_neg_1_int_pos_1_int_pos_1_tuple;
static PyObject *const_str_plain_row_indptr;
extern PyObject *const_str_plain_jj;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain__get_arrayXarray;
static PyObject *const_str_digest_1346614ceb8757f47d1ef7e860d09147;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_plain_lil;
extern PyObject *const_str_plain_indptr;
extern PyObject *const_str_plain_tocsc;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_end;
extern PyObject *const_str_digest_c2bcb1dd8b023454e57e8981ce5bee63;
extern PyObject *const_str_plain_blocksize;
static PyObject *const_str_digest_ecb75f8652c241b4d6dd45125e63538d;
extern PyObject *const_str_digest_0150659f9f0791193f239e0c4134b553;
extern PyObject *const_str_plain_compressed;
extern PyObject *const_str_plain_astype;
extern PyObject *const_str_plain__cs_matrix;
static PyObject *const_str_digest_e3f4280e34badc0917f32516215b467f;
extern PyObject *const_str_plain_row_indices;
static PyObject *const_str_digest_d277e83538760a18da79250ddae3d44f;
extern PyObject *const_str_plain_stride;
extern PyObject *const_str_plain__minor_index_fancy;
extern PyObject *const_str_plain___docformat__;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain_reshape;
static PyObject *const_str_digest_a312756b77b9be66821594c4ca57fc4d;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain__major_slice;
static PyObject *const_str_plain_spfuncs;
extern PyObject *const_str_plain_tolist;
extern PyObject *const_str_plain__get_sliceXint;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_digest_e58b8e238daae7f316f45d0978267798;
extern PyObject *const_str_plain_transpose;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_estimate_blocksize;
extern PyObject *const_tuple_none_false_tuple;
extern PyObject *const_str_digest_c88389693d9d476899c1c6e170568469;
static PyObject *const_str_digest_d0f5f3304ccce7953bff4c1238fd634d;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_upcast;
extern PyObject *const_str_plain_ptr;
extern PyObject *const_str_plain_get_index_dtype;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_nnz;
extern PyObject *const_tuple_str_plain_self_str_plain_x_tuple;
extern PyObject *const_dict_10010a04cba23a4ccc75195b8c45141a;
static PyObject *const_tuple_94a85eb0192b0b05c65c4d90e7d70df5_tuple;
static PyObject *const_list_str_plain_csr_matrix_str_plain_isspmatrix_csr_list;
extern PyObject *const_str_digest_964ee60bd36ab22bde9da821d792d448;
extern PyObject *const_str_plain_csr_count_blocks;
extern PyObject *const_str_plain_csc;
static PyObject *const_str_digest_0d7ce383d6bcbcbd9b2a45ad974c24ac;
extern PyObject *const_str_plain__major_index_fancy;
extern PyObject *const_str_plain_dat;
static PyObject *const_str_digest_76356a684e4d7841a8b73483e14a2bd4;
extern PyObject *const_str_plain_indices;
extern PyObject *const_str_plain_tolil;
static PyObject *const_str_digest_cca046b924ccd23efa439053770243b8;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain_getcol;
static PyObject *const_str_digest_7dca4ca71ef48b1c4e7c2d2411ba247d;
extern PyObject *const_tuple_str_plain_self_str_plain_copy_tuple;
extern PyObject *const_str_plain__get_arrayXslice;
extern PyObject *const_str_plain_tocsr;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_c629f2e642dd397f087bb2cf183cebcc_tuple;
extern PyObject *const_tuple_str_plain_csc_matrix_tuple;
extern PyObject *const_tuple_int_pos_1_none_tuple;
extern PyObject *const_str_plain_getrow;
static PyObject *const_str_digest_c2cc2c5adff71f4b09fe65736849c7e9;
static PyObject *const_str_digest_01b9d2ddd97c52e325ee6570d757dcf8;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_str_digest_c413276f7bf54c3d5436d22b664aeeb8;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_rows;
extern PyObject *const_str_plain_xrange;
static PyObject *const_tuple_0488897bae46acc5d449c9f7228285f5_tuple;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_21a40118994cde2edbeec424bb7c9b89;
extern PyObject *const_str_plain_isspmatrix_csr;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_8fccc22c88ea0a978c8f0f686fb8012f;
static PyObject *const_str_digest_2501cd96d895390b2151e5462fb157f4;
extern PyObject *const_str_plain_col;
extern PyObject *const_tuple_str_plain_spmatrix_tuple;
extern PyObject *const_int_0;
extern PyObject *const_tuple_int_pos_1_int_pos_1_tuple;
extern PyObject *const_str_plain_spmatrix;
extern PyObject *const_str_plain_lil_matrix;
static PyObject *const_str_plain_blks;
extern PyObject *const_str_plain_row;
static PyObject *const_tuple_5929fc2bfd66bf8b75af99e1506f1430_tuple;
extern PyObject *const_tuple_int_pos_2_tuple;
extern PyObject *const_tuple_none_true_tuple;
extern PyObject *const_str_plain__get_submatrix;
extern PyObject *const_str_plain_origin;
extern PyObject *const_tuple_str_plain_upcast_str_plain_get_index_dtype_tuple;
extern PyObject *const_str_plain_ravel;
extern PyObject *const_str_plain_ii;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_step;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_ind;
extern PyObject *const_str_plain_maxval;
static PyObject *const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple;
static PyObject *const_str_digest_bc9453a4fe1bc0a3d9a82c60e1ce017a;
extern PyObject *const_str_plain_C;
extern PyObject *const_str_plain_base;
static PyObject *const_tuple_str_plain_estimate_blocksize_tuple;
static PyObject *const_str_digest_7b2cda98b59c6b1605ee87aa16b985a7;
extern PyObject *const_str_plain_i0;
extern PyObject *const_str_plain_tobsr;
extern PyObject *const_str_plain_i1;
extern PyObject *const_str_digest_0c99774661662127e01320e28464e03d;
static PyObject *const_str_digest_81cde62be4c73d6a27e797419f2f7b52;
extern PyObject *const_slice_none_none_int_neg_1;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_csr_tocsc;
static PyObject *const_str_plain_row_data;
extern PyObject *const_str_plain_csc_matrix;
static PyObject *const_str_plain_csr_tobsr;
static PyObject *const_str_digest_30a709741156267e72f59280e09d2c8e;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_digest_2b4b2904a33de8fed3d1208f30009a01;
extern PyObject *const_tuple_str_plain_bsr_matrix_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_str_plain_self_str_plain_row_str_plain_col_tuple;
static PyObject *const_tuple_4435daf59841c2a3341816e701f8cb85_tuple;
extern PyObject *const_str_plain__get_arrayXint;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_M;
extern PyObject *const_str_plain__get_sliceXarray;
extern PyObject *const_str_plain_stop;
extern PyObject *const_str_plain__get_intXslice;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain__get_intXarray;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_R;
static PyObject *const_str_digest_6f2ebd097735788c18cfb54da56412c7;
static PyObject *const_tuple_766fd70cae994f879e97f01a70d0f249_tuple;
static PyObject *const_tuple_str_plain_lil_matrix_tuple;
extern PyObject *const_str_plain_sputils;
extern PyObject *const_str_plain_csr_matrix;
extern PyObject *const_str_plain_axes;
extern PyObject *const_str_plain_csr;
extern PyObject *const_str_plain__sparsetools;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_bsr_matrix;
extern PyObject *const_tuple_str_plain__cs_matrix_tuple;
extern PyObject *const_str_plain_format;
static PyObject *const_tuple_bba67ec68e1d0606ac8226dd94e45341_tuple;
extern PyObject *const_str_plain_ceil;
extern PyObject *const_str_plain___iter__;
extern PyObject *const_str_plain_bsr;
extern PyObject *const_str_plain_has_sorted_indices;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_37b70b90954a7b618fddbec819d4dd01 = UNSTREAM_STRING_ASCII( &constant_bin[ 5365676 ], 99, 0 );
    const_tuple_int_neg_1_int_pos_1_int_pos_1_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_int_pos_1_int_pos_1_tuple, 0, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_int_pos_1_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_int_pos_1_int_pos_1_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_plain_row_indptr = UNSTREAM_STRING_ASCII( &constant_bin[ 5365775 ], 10, 1 );
    const_str_digest_1346614ceb8757f47d1ef7e860d09147 = UNSTREAM_STRING_ASCII( &constant_bin[ 5365785 ], 25, 0 );
    const_str_digest_ecb75f8652c241b4d6dd45125e63538d = UNSTREAM_STRING_ASCII( &constant_bin[ 5365810 ], 16, 0 );
    const_str_digest_e3f4280e34badc0917f32516215b467f = UNSTREAM_STRING_ASCII( &constant_bin[ 5365826 ], 16, 0 );
    const_str_digest_d277e83538760a18da79250ddae3d44f = UNSTREAM_STRING_ASCII( &constant_bin[ 5365842 ], 20, 0 );
    const_str_digest_a312756b77b9be66821594c4ca57fc4d = UNSTREAM_STRING_ASCII( &constant_bin[ 5365862 ], 20, 0 );
    const_str_plain_spfuncs = UNSTREAM_STRING_ASCII( &constant_bin[ 5365882 ], 7, 1 );
    const_str_digest_d0f5f3304ccce7953bff4c1238fd634d = UNSTREAM_STRING_ASCII( &constant_bin[ 5365889 ], 25, 0 );
    const_tuple_94a85eb0192b0b05c65c4d90e7d70df5_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_94a85eb0192b0b05c65c4d90e7d70df5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_94a85eb0192b0b05c65c4d90e7d70df5_tuple, 1, const_str_plain_copy ); Py_INCREF( const_str_plain_copy );
    PyTuple_SET_ITEM( const_tuple_94a85eb0192b0b05c65c4d90e7d70df5_tuple, 2, const_str_plain_lil_matrix ); Py_INCREF( const_str_plain_lil_matrix );
    PyTuple_SET_ITEM( const_tuple_94a85eb0192b0b05c65c4d90e7d70df5_tuple, 3, const_str_plain_lil ); Py_INCREF( const_str_plain_lil );
    PyTuple_SET_ITEM( const_tuple_94a85eb0192b0b05c65c4d90e7d70df5_tuple, 4, const_str_plain_ptr ); Py_INCREF( const_str_plain_ptr );
    PyTuple_SET_ITEM( const_tuple_94a85eb0192b0b05c65c4d90e7d70df5_tuple, 5, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    PyTuple_SET_ITEM( const_tuple_94a85eb0192b0b05c65c4d90e7d70df5_tuple, 6, const_str_plain_dat ); Py_INCREF( const_str_plain_dat );
    PyTuple_SET_ITEM( const_tuple_94a85eb0192b0b05c65c4d90e7d70df5_tuple, 7, const_str_plain_rows ); Py_INCREF( const_str_plain_rows );
    PyTuple_SET_ITEM( const_tuple_94a85eb0192b0b05c65c4d90e7d70df5_tuple, 8, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_94a85eb0192b0b05c65c4d90e7d70df5_tuple, 9, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_94a85eb0192b0b05c65c4d90e7d70df5_tuple, 10, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_94a85eb0192b0b05c65c4d90e7d70df5_tuple, 11, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    const_list_str_plain_csr_matrix_str_plain_isspmatrix_csr_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_csr_matrix_str_plain_isspmatrix_csr_list, 0, const_str_plain_csr_matrix ); Py_INCREF( const_str_plain_csr_matrix );
    PyList_SET_ITEM( const_list_str_plain_csr_matrix_str_plain_isspmatrix_csr_list, 1, const_str_plain_isspmatrix_csr ); Py_INCREF( const_str_plain_isspmatrix_csr );
    const_str_digest_0d7ce383d6bcbcbd9b2a45ad974c24ac = UNSTREAM_STRING_ASCII( &constant_bin[ 5365914 ], 17, 0 );
    const_str_digest_76356a684e4d7841a8b73483e14a2bd4 = UNSTREAM_STRING_ASCII( &constant_bin[ 5365931 ], 27, 0 );
    const_str_digest_cca046b924ccd23efa439053770243b8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5365958 ], 25, 0 );
    const_str_digest_7dca4ca71ef48b1c4e7c2d2411ba247d = UNSTREAM_STRING_ASCII( &constant_bin[ 5365983 ], 25, 0 );
    const_tuple_c629f2e642dd397f087bb2cf183cebcc_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_c629f2e642dd397f087bb2cf183cebcc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c629f2e642dd397f087bb2cf183cebcc_tuple, 1, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_c629f2e642dd397f087bb2cf183cebcc_tuple, 2, const_str_plain_copy ); Py_INCREF( const_str_plain_copy );
    PyTuple_SET_ITEM( const_tuple_c629f2e642dd397f087bb2cf183cebcc_tuple, 3, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_c629f2e642dd397f087bb2cf183cebcc_tuple, 4, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_c629f2e642dd397f087bb2cf183cebcc_tuple, 5, const_str_plain_csc_matrix ); Py_INCREF( const_str_plain_csc_matrix );
    const_str_digest_c2cc2c5adff71f4b09fe65736849c7e9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5366008 ], 461, 0 );
    const_str_digest_01b9d2ddd97c52e325ee6570d757dcf8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5366469 ], 3398, 0 );
    const_str_digest_c413276f7bf54c3d5436d22b664aeeb8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5369867 ], 16, 0 );
    const_tuple_0488897bae46acc5d449c9f7228285f5_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_0488897bae46acc5d449c9f7228285f5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0488897bae46acc5d449c9f7228285f5_tuple, 1, const_str_plain_copy ); Py_INCREF( const_str_plain_copy );
    PyTuple_SET_ITEM( const_tuple_0488897bae46acc5d449c9f7228285f5_tuple, 2, const_str_plain_idx_dtype ); Py_INCREF( const_str_plain_idx_dtype );
    PyTuple_SET_ITEM( const_tuple_0488897bae46acc5d449c9f7228285f5_tuple, 3, const_str_plain_indptr ); Py_INCREF( const_str_plain_indptr );
    PyTuple_SET_ITEM( const_tuple_0488897bae46acc5d449c9f7228285f5_tuple, 4, const_str_plain_indices ); Py_INCREF( const_str_plain_indices );
    PyTuple_SET_ITEM( const_tuple_0488897bae46acc5d449c9f7228285f5_tuple, 5, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_0488897bae46acc5d449c9f7228285f5_tuple, 6, const_str_plain_csc_matrix ); Py_INCREF( const_str_plain_csc_matrix );
    PyTuple_SET_ITEM( const_tuple_0488897bae46acc5d449c9f7228285f5_tuple, 7, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    const_str_digest_21a40118994cde2edbeec424bb7c9b89 = UNSTREAM_STRING_ASCII( &constant_bin[ 5369883 ], 35, 0 );
    const_str_digest_8fccc22c88ea0a978c8f0f686fb8012f = UNSTREAM_STRING_ASCII( &constant_bin[ 5369918 ], 19, 0 );
    const_str_digest_2501cd96d895390b2151e5462fb157f4 = UNSTREAM_STRING_ASCII( &constant_bin[ 5369937 ], 27, 0 );
    const_str_plain_blks = UNSTREAM_STRING_ASCII( &constant_bin[ 5369964 ], 4, 1 );
    const_tuple_5929fc2bfd66bf8b75af99e1506f1430_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_5929fc2bfd66bf8b75af99e1506f1430_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5929fc2bfd66bf8b75af99e1506f1430_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_5929fc2bfd66bf8b75af99e1506f1430_tuple, 2, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_5929fc2bfd66bf8b75af99e1506f1430_tuple, 3, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_5929fc2bfd66bf8b75af99e1506f1430_tuple, 4, const_str_plain_indptr ); Py_INCREF( const_str_plain_indptr );
    PyTuple_SET_ITEM( const_tuple_5929fc2bfd66bf8b75af99e1506f1430_tuple, 5, const_str_plain_indices ); Py_INCREF( const_str_plain_indices );
    PyTuple_SET_ITEM( const_tuple_5929fc2bfd66bf8b75af99e1506f1430_tuple, 6, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple, 1, const_str_plain_blocksize ); Py_INCREF( const_str_plain_blocksize );
    PyTuple_SET_ITEM( const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple, 2, const_str_plain_copy ); Py_INCREF( const_str_plain_copy );
    PyTuple_SET_ITEM( const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple, 3, const_str_plain_bsr_matrix ); Py_INCREF( const_str_plain_bsr_matrix );
    PyTuple_SET_ITEM( const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple, 4, const_str_plain_estimate_blocksize ); Py_INCREF( const_str_plain_estimate_blocksize );
    PyTuple_SET_ITEM( const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple, 5, const_str_plain_arg1 ); Py_INCREF( const_str_plain_arg1 );
    PyTuple_SET_ITEM( const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple, 6, const_str_plain_R ); Py_INCREF( const_str_plain_R );
    PyTuple_SET_ITEM( const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple, 7, const_str_plain_C ); Py_INCREF( const_str_plain_C );
    PyTuple_SET_ITEM( const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple, 8, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple, 9, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple, 10, const_str_plain_blks ); Py_INCREF( const_str_plain_blks );
    PyTuple_SET_ITEM( const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple, 11, const_str_plain_idx_dtype ); Py_INCREF( const_str_plain_idx_dtype );
    PyTuple_SET_ITEM( const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple, 12, const_str_plain_indptr ); Py_INCREF( const_str_plain_indptr );
    PyTuple_SET_ITEM( const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple, 13, const_str_plain_indices ); Py_INCREF( const_str_plain_indices );
    PyTuple_SET_ITEM( const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple, 14, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_digest_bc9453a4fe1bc0a3d9a82c60e1ce017a = UNSTREAM_STRING_ASCII( &constant_bin[ 5369968 ], 25, 0 );
    const_tuple_str_plain_estimate_blocksize_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_estimate_blocksize_tuple, 0, const_str_plain_estimate_blocksize ); Py_INCREF( const_str_plain_estimate_blocksize );
    const_str_digest_7b2cda98b59c6b1605ee87aa16b985a7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5369993 ], 17, 0 );
    const_str_digest_81cde62be4c73d6a27e797419f2f7b52 = UNSTREAM_STRING_ASCII( &constant_bin[ 5370010 ], 19, 0 );
    const_str_plain_csr_tocsc = UNSTREAM_STRING_ASCII( &constant_bin[ 5370029 ], 9, 1 );
    const_str_plain_row_data = UNSTREAM_STRING_ASCII( &constant_bin[ 5370038 ], 8, 1 );
    const_str_plain_csr_tobsr = UNSTREAM_STRING_ASCII( &constant_bin[ 5370046 ], 9, 1 );
    const_str_digest_30a709741156267e72f59280e09d2c8e = UNSTREAM_STRING_ASCII( &constant_bin[ 5365991 ], 16, 0 );
    const_str_digest_2b4b2904a33de8fed3d1208f30009a01 = UNSTREAM_STRING_ASCII( &constant_bin[ 5370055 ], 16, 0 );
    const_tuple_4435daf59841c2a3341816e701f8cb85_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_4435daf59841c2a3341816e701f8cb85_tuple, 0, const_str_plain_csr_tocsc ); Py_INCREF( const_str_plain_csr_tocsc );
    PyTuple_SET_ITEM( const_tuple_4435daf59841c2a3341816e701f8cb85_tuple, 1, const_str_plain_csr_tobsr ); Py_INCREF( const_str_plain_csr_tobsr );
    PyTuple_SET_ITEM( const_tuple_4435daf59841c2a3341816e701f8cb85_tuple, 2, const_str_plain_csr_count_blocks ); Py_INCREF( const_str_plain_csr_count_blocks );
    PyTuple_SET_ITEM( const_tuple_4435daf59841c2a3341816e701f8cb85_tuple, 3, const_str_plain_get_csr_submatrix ); Py_INCREF( const_str_plain_get_csr_submatrix );
    const_str_digest_6f2ebd097735788c18cfb54da56412c7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5370071 ], 16, 0 );
    const_tuple_766fd70cae994f879e97f01a70d0f249_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_766fd70cae994f879e97f01a70d0f249_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_766fd70cae994f879e97f01a70d0f249_tuple, 1, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    PyTuple_SET_ITEM( const_tuple_766fd70cae994f879e97f01a70d0f249_tuple, 2, const_str_plain_col ); Py_INCREF( const_str_plain_col );
    PyTuple_SET_ITEM( const_tuple_766fd70cae994f879e97f01a70d0f249_tuple, 3, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_766fd70cae994f879e97f01a70d0f249_tuple, 4, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_766fd70cae994f879e97f01a70d0f249_tuple, 5, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_766fd70cae994f879e97f01a70d0f249_tuple, 6, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_766fd70cae994f879e97f01a70d0f249_tuple, 7, const_str_plain_stride ); Py_INCREF( const_str_plain_stride );
    PyTuple_SET_ITEM( const_tuple_766fd70cae994f879e97f01a70d0f249_tuple, 8, const_str_plain_ii ); Py_INCREF( const_str_plain_ii );
    PyTuple_SET_ITEM( const_tuple_766fd70cae994f879e97f01a70d0f249_tuple, 9, const_str_plain_jj ); Py_INCREF( const_str_plain_jj );
    PyTuple_SET_ITEM( const_tuple_766fd70cae994f879e97f01a70d0f249_tuple, 10, const_str_plain_row_indices ); Py_INCREF( const_str_plain_row_indices );
    PyTuple_SET_ITEM( const_tuple_766fd70cae994f879e97f01a70d0f249_tuple, 11, const_str_plain_row_data ); Py_INCREF( const_str_plain_row_data );
    PyTuple_SET_ITEM( const_tuple_766fd70cae994f879e97f01a70d0f249_tuple, 12, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    PyTuple_SET_ITEM( const_tuple_766fd70cae994f879e97f01a70d0f249_tuple, 13, const_str_plain_row_indptr ); Py_INCREF( const_str_plain_row_indptr );
    PyTuple_SET_ITEM( const_tuple_766fd70cae994f879e97f01a70d0f249_tuple, 14, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    const_tuple_str_plain_lil_matrix_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_lil_matrix_tuple, 0, const_str_plain_lil_matrix ); Py_INCREF( const_str_plain_lil_matrix );
    const_tuple_bba67ec68e1d0606ac8226dd94e45341_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_bba67ec68e1d0606ac8226dd94e45341_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_bba67ec68e1d0606ac8226dd94e45341_tuple, 1, const_str_plain_indptr ); Py_INCREF( const_str_plain_indptr );
    PyTuple_SET_ITEM( const_tuple_bba67ec68e1d0606ac8226dd94e45341_tuple, 2, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_bba67ec68e1d0606ac8226dd94e45341_tuple, 3, const_str_plain_i0 ); Py_INCREF( const_str_plain_i0 );
    PyTuple_SET_ITEM( const_tuple_bba67ec68e1d0606ac8226dd94e45341_tuple, 4, const_str_plain_i1 ); Py_INCREF( const_str_plain_i1 );
    PyTuple_SET_ITEM( const_tuple_bba67ec68e1d0606ac8226dd94e45341_tuple, 5, const_str_plain_indices ); Py_INCREF( const_str_plain_indices );
    PyTuple_SET_ITEM( const_tuple_bba67ec68e1d0606ac8226dd94e45341_tuple, 6, const_str_plain_data ); Py_INCREF( const_str_plain_data );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$sparse$csr( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4c11c9f8e4e047a239b6ed47e9a3e9c3;
static PyCodeObject *codeobj_b00788ea6da86d956853af9eda214158;
static PyCodeObject *codeobj_7999d1dd40077406928096b8cd46e31b;
static PyCodeObject *codeobj_9a4032ba08ae7f7be3cc670b7ff93206;
static PyCodeObject *codeobj_e50c80017cb7dc4f44c55178e3f60159;
static PyCodeObject *codeobj_2d197ca50c29eab1ca4f630791f0cc95;
static PyCodeObject *codeobj_7f365766f8ceafdcb2ef9fdabcd35a2f;
static PyCodeObject *codeobj_fcd6ca8181de8f8b9a365c47562b4c18;
static PyCodeObject *codeobj_db7e2a331d11d14a352c4d715c9f561e;
static PyCodeObject *codeobj_4eaf5761065d4855f840b7630c072e3d;
static PyCodeObject *codeobj_1f82b6ac6e7b50bb6c9a321f454c922b;
static PyCodeObject *codeobj_f2b5b95278406b53bf2c92d77f45658d;
static PyCodeObject *codeobj_108d1ab8dbaeb975bc5274152acdd558;
static PyCodeObject *codeobj_99b399e64ec17baa9d3c7e971368203e;
static PyCodeObject *codeobj_6fcac3d82b69b07c84af19086af8bfc4;
static PyCodeObject *codeobj_10cca7d43f89827b8f6bff377fbbc7b1;
static PyCodeObject *codeobj_c6383d9797de9950d7e4d68388c65668;
static PyCodeObject *codeobj_d9d233f5bc180404fbb41f1c5e0ebf4d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_8fccc22c88ea0a978c8f0f686fb8012f );
    codeobj_4c11c9f8e4e047a239b6ed47e9a3e9c3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_7dca4ca71ef48b1c4e7c2d2411ba247d, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_b00788ea6da86d956853af9eda214158 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 233, const_tuple_bba67ec68e1d0606ac8226dd94e45341_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7999d1dd40077406928096b8cd46e31b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_arrayXint, 318, const_tuple_str_plain_self_str_plain_row_str_plain_col_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9a4032ba08ae7f7be3cc670b7ff93206 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_arrayXslice, 321, const_tuple_str_plain_self_str_plain_row_str_plain_col_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e50c80017cb7dc4f44c55178e3f60159 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_intXarray, 274, const_tuple_str_plain_self_str_plain_row_str_plain_col_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2d197ca50c29eab1ca4f630791f0cc95 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_intXslice, 277, const_tuple_766fd70cae994f879e97f01a70d0f249_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7f365766f8ceafdcb2ef9fdabcd35a2f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_sliceXarray, 315, const_tuple_str_plain_self_str_plain_row_str_plain_col_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fcd6ca8181de8f8b9a365c47562b4c18 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_sliceXint, 310, const_tuple_str_plain_self_str_plain_row_str_plain_col_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_db7e2a331d11d14a352c4d715c9f561e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__swap, 228, const_tuple_str_plain_self_str_plain_x_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4eaf5761065d4855f840b7630c072e3d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_csr_matrix, 20, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_1f82b6ac6e7b50bb6c9a321f454c922b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getcol, 259, const_tuple_5929fc2bfd66bf8b75af99e1506f1430_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f2b5b95278406b53bf2c92d77f45658d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getrow, 244, const_tuple_5929fc2bfd66bf8b75af99e1506f1430_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_108d1ab8dbaeb975bc5274152acdd558 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isspmatrix_csr, 328, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_99b399e64ec17baa9d3c7e971368203e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tobsr, 190, const_tuple_12c496aa7b3d939b50d2ee95a8590c54_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6fcac3d82b69b07c84af19086af8bfc4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tocsc, 168, const_tuple_0488897bae46acc5d449c9f7228285f5_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_10cca7d43f89827b8f6bff377fbbc7b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tocsr, 160, const_tuple_str_plain_self_str_plain_copy_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c6383d9797de9950d7e4d68388c65668 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tolil, 142, const_tuple_94a85eb0192b0b05c65c4d90e7d70df5_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d9d233f5bc180404fbb41f1c5e0ebf4d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_transpose, 128, const_tuple_c629f2e642dd397f087bb2cf183cebcc_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *scipy$sparse$csr$$$function_7___iter__$$$genobj_1___iter___maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_10__get_intXarray(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_11__get_intXslice(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_12__get_sliceXint(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_13__get_sliceXarray(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_14__get_arrayXint(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_15__get_arrayXslice(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_16_isspmatrix_csr(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_1_transpose( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_2_tolil( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_3_tocsr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_4_tocsc( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_5_tobsr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_6__swap(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_7___iter__(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_8_getrow(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_9_getcol(  );


// The module function definitions.
static PyObject *impl_scipy$sparse$csr$$$function_1_transpose( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_axes = python_pars[ 1 ];
    PyObject *par_copy = python_pars[ 2 ];
    PyObject *var_M = NULL;
    PyObject *var_N = NULL;
    PyObject *var_csc_matrix = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d9d233f5bc180404fbb41f1c5e0ebf4d;
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
    static struct Nuitka_FrameObject *cache_frame_d9d233f5bc180404fbb41f1c5e0ebf4d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9d233f5bc180404fbb41f1c5e0ebf4d, codeobj_d9d233f5bc180404fbb41f1c5e0ebf4d, module_scipy$sparse$csr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d9d233f5bc180404fbb41f1c5e0ebf4d = cache_frame_d9d233f5bc180404fbb41f1c5e0ebf4d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9d233f5bc180404fbb41f1c5e0ebf4d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9d233f5bc180404fbb41f1c5e0ebf4d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_axes );
        tmp_compexpr_left_1 = par_axes;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_964ee60bd36ab22bde9da821d792d448;
            frame_d9d233f5bc180404fbb41f1c5e0ebf4d->m_frame.f_lineno = 130;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 130;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "oooooo";
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


            type_description_1 = "oooooo";
            exception_lineno = 134;
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


            type_description_1 = "oooooo";
            exception_lineno = 134;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 134;
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

            type_description_1 = "oooooo";
            exception_lineno = 134;
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
        assert( var_M == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_M = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_N == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_N = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_csc;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$csr;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_csc_matrix_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_d9d233f5bc180404fbb41f1c5e0ebf4d->m_frame.f_lineno = 136;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$sparse$csr,
                const_str_plain_csc_matrix,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_csc_matrix );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_csc_matrix == NULL );
        var_csc_matrix = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT( var_csc_matrix );
        tmp_called_name_1 = var_csc_matrix;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_data );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_indices );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_tuple_element_1 );

            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_indptr );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_tuple_element_1 );

            exception_lineno = 138;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_2 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_shape;
        CHECK_OBJECT( var_N );
        tmp_tuple_element_3 = var_N;
        tmp_dict_value_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_M );
        tmp_tuple_element_3 = var_M;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dict_value_1, 1, tmp_tuple_element_3 );
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_copy;
        CHECK_OBJECT( par_copy );
        tmp_dict_value_2 = par_copy;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_d9d233f5bc180404fbb41f1c5e0ebf4d->m_frame.f_lineno = 137;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9d233f5bc180404fbb41f1c5e0ebf4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9d233f5bc180404fbb41f1c5e0ebf4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9d233f5bc180404fbb41f1c5e0ebf4d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9d233f5bc180404fbb41f1c5e0ebf4d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9d233f5bc180404fbb41f1c5e0ebf4d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9d233f5bc180404fbb41f1c5e0ebf4d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d9d233f5bc180404fbb41f1c5e0ebf4d,
        type_description_1,
        par_self,
        par_axes,
        par_copy,
        var_M,
        var_N,
        var_csc_matrix
    );


    // Release cached frame.
    if ( frame_d9d233f5bc180404fbb41f1c5e0ebf4d == cache_frame_d9d233f5bc180404fbb41f1c5e0ebf4d )
    {
        Py_DECREF( frame_d9d233f5bc180404fbb41f1c5e0ebf4d );
    }
    cache_frame_d9d233f5bc180404fbb41f1c5e0ebf4d = NULL;

    assertFrameObject( frame_d9d233f5bc180404fbb41f1c5e0ebf4d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_1_transpose );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

    CHECK_OBJECT( (PyObject *)var_M );
    Py_DECREF( var_M );
    var_M = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var_csc_matrix );
    Py_DECREF( var_csc_matrix );
    var_csc_matrix = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_csc_matrix );
    var_csc_matrix = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_1_transpose );
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


static PyObject *impl_scipy$sparse$csr$$$function_2_tolil( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_copy = python_pars[ 1 ];
    PyObject *var_lil_matrix = NULL;
    PyObject *var_lil = NULL;
    PyObject *var_ptr = NULL;
    PyObject *var_ind = NULL;
    PyObject *var_dat = NULL;
    PyObject *var_rows = NULL;
    PyObject *var_data = NULL;
    PyObject *var_n = NULL;
    PyObject *var_start = NULL;
    PyObject *var_end = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c6383d9797de9950d7e4d68388c65668;
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
    static struct Nuitka_FrameObject *cache_frame_c6383d9797de9950d7e4d68388c65668 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c6383d9797de9950d7e4d68388c65668, codeobj_c6383d9797de9950d7e4d68388c65668, module_scipy$sparse$csr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c6383d9797de9950d7e4d68388c65668 = cache_frame_c6383d9797de9950d7e4d68388c65668;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c6383d9797de9950d7e4d68388c65668 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c6383d9797de9950d7e4d68388c65668 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_lil;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$csr;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_lil_matrix_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_c6383d9797de9950d7e4d68388c65668->m_frame.f_lineno = 143;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$sparse$csr,
                const_str_plain_lil_matrix,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_lil_matrix );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lil_matrix == NULL );
        var_lil_matrix = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_lil_matrix );
        tmp_called_name_1 = var_lil_matrix;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 144;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_c6383d9797de9950d7e4d68388c65668->m_frame.f_lineno = 144;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lil == NULL );
        var_lil = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_c6383d9797de9950d7e4d68388c65668->m_frame.f_lineno = 146;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_sum_duplicates );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_indptr );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_indices );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 147;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_data );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 147;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 2, tmp_tuple_element_2 );
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 147;
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 147;
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 147;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
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
        assert( var_ptr == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_ptr = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert( var_ind == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_ind = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert( var_dat == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_dat = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( var_lil );
        tmp_source_name_6 = var_lil;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_rows );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        tmp_iter_arg_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_lil );
        tmp_source_name_7 = var_lil;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_data );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_2 );

            exception_lineno = 148;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_3 );
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_4, 0, 2 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 148;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_5, 1, 2 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 148;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
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
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
        assert( var_rows == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_rows = tmp_assign_source_13;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
        assert( var_data == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_data = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_8;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_xrange );

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

            exception_lineno = 150;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c6383d9797de9950d7e4d68388c65668->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_15;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_16 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooo";
                exception_lineno = 150;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_16;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_17 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_n;
            var_n = tmp_assign_source_17;
            Py_INCREF( var_n );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_ptr );
        tmp_subscribed_name_2 = var_ptr;
        CHECK_OBJECT( var_n );
        tmp_subscript_name_2 = var_n;
        tmp_assign_source_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_start;
            var_start = tmp_assign_source_18;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_ptr );
        tmp_subscribed_name_3 = var_ptr;
        CHECK_OBJECT( var_n );
        tmp_left_name_1 = var_n;
        tmp_right_name_1 = const_int_pos_1;
        tmp_subscript_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_subscript_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_end;
            var_end = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( var_ind );
        tmp_subscribed_name_4 = var_ind;
        CHECK_OBJECT( var_start );
        tmp_start_name_1 = var_start;
        CHECK_OBJECT( var_end );
        tmp_stop_name_1 = var_end;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_4 == NULL) );
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        frame_c6383d9797de9950d7e4d68388c65668->m_frame.f_lineno = 153;
        tmp_ass_subvalue_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_tolist );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_rows );
        tmp_ass_subscribed_1 = var_rows;
        CHECK_OBJECT( var_n );
        tmp_ass_subscript_1 = var_n;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( var_dat );
        tmp_subscribed_name_5 = var_dat;
        CHECK_OBJECT( var_start );
        tmp_start_name_2 = var_start;
        CHECK_OBJECT( var_end );
        tmp_stop_name_2 = var_end;
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        assert( !(tmp_subscript_name_5 == NULL) );
        tmp_called_instance_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscript_name_5 );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        frame_c6383d9797de9950d7e4d68388c65668->m_frame.f_lineno = 154;
        tmp_ass_subvalue_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_tolist );
        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_data );
        tmp_ass_subscribed_2 = var_data;
        CHECK_OBJECT( var_n );
        tmp_ass_subscript_2 = var_n;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "oooooooooooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6383d9797de9950d7e4d68388c65668 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6383d9797de9950d7e4d68388c65668 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c6383d9797de9950d7e4d68388c65668, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c6383d9797de9950d7e4d68388c65668->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c6383d9797de9950d7e4d68388c65668, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c6383d9797de9950d7e4d68388c65668,
        type_description_1,
        par_self,
        par_copy,
        var_lil_matrix,
        var_lil,
        var_ptr,
        var_ind,
        var_dat,
        var_rows,
        var_data,
        var_n,
        var_start,
        var_end
    );


    // Release cached frame.
    if ( frame_c6383d9797de9950d7e4d68388c65668 == cache_frame_c6383d9797de9950d7e4d68388c65668 )
    {
        Py_DECREF( frame_c6383d9797de9950d7e4d68388c65668 );
    }
    cache_frame_c6383d9797de9950d7e4d68388c65668 = NULL;

    assertFrameObject( frame_c6383d9797de9950d7e4d68388c65668 );

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

    CHECK_OBJECT( var_lil );
    tmp_return_value = var_lil;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_2_tolil );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

    CHECK_OBJECT( (PyObject *)var_lil_matrix );
    Py_DECREF( var_lil_matrix );
    var_lil_matrix = NULL;

    CHECK_OBJECT( (PyObject *)var_lil );
    Py_DECREF( var_lil );
    var_lil = NULL;

    CHECK_OBJECT( (PyObject *)var_ptr );
    Py_DECREF( var_ptr );
    var_ptr = NULL;

    CHECK_OBJECT( (PyObject *)var_ind );
    Py_DECREF( var_ind );
    var_ind = NULL;

    CHECK_OBJECT( (PyObject *)var_dat );
    Py_DECREF( var_dat );
    var_dat = NULL;

    CHECK_OBJECT( (PyObject *)var_rows );
    Py_DECREF( var_rows );
    var_rows = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

    Py_XDECREF( var_lil_matrix );
    var_lil_matrix = NULL;

    Py_XDECREF( var_lil );
    var_lil = NULL;

    Py_XDECREF( var_ptr );
    var_ptr = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_dat );
    var_dat = NULL;

    Py_XDECREF( var_rows );
    var_rows = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_2_tolil );
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


static PyObject *impl_scipy$sparse$csr$$$function_3_tocsr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_copy = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_10cca7d43f89827b8f6bff377fbbc7b1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_10cca7d43f89827b8f6bff377fbbc7b1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_10cca7d43f89827b8f6bff377fbbc7b1, codeobj_10cca7d43f89827b8f6bff377fbbc7b1, module_scipy$sparse$csr, sizeof(void *)+sizeof(void *) );
    frame_10cca7d43f89827b8f6bff377fbbc7b1 = cache_frame_10cca7d43f89827b8f6bff377fbbc7b1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_10cca7d43f89827b8f6bff377fbbc7b1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_10cca7d43f89827b8f6bff377fbbc7b1 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_copy );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_copy );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "oo";
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
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            frame_10cca7d43f89827b8f6bff377fbbc7b1->m_frame.f_lineno = 162;
            tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        CHECK_OBJECT( par_self );
        tmp_return_value = par_self;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10cca7d43f89827b8f6bff377fbbc7b1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_10cca7d43f89827b8f6bff377fbbc7b1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10cca7d43f89827b8f6bff377fbbc7b1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10cca7d43f89827b8f6bff377fbbc7b1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10cca7d43f89827b8f6bff377fbbc7b1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10cca7d43f89827b8f6bff377fbbc7b1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10cca7d43f89827b8f6bff377fbbc7b1,
        type_description_1,
        par_self,
        par_copy
    );


    // Release cached frame.
    if ( frame_10cca7d43f89827b8f6bff377fbbc7b1 == cache_frame_10cca7d43f89827b8f6bff377fbbc7b1 )
    {
        Py_DECREF( frame_10cca7d43f89827b8f6bff377fbbc7b1 );
    }
    cache_frame_10cca7d43f89827b8f6bff377fbbc7b1 = NULL;

    assertFrameObject( frame_10cca7d43f89827b8f6bff377fbbc7b1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_3_tocsr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

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

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_3_tocsr );
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


static PyObject *impl_scipy$sparse$csr$$$function_4_tocsc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_copy = python_pars[ 1 ];
    PyObject *var_idx_dtype = NULL;
    PyObject *var_indptr = NULL;
    PyObject *var_indices = NULL;
    PyObject *var_data = NULL;
    PyObject *var_csc_matrix = NULL;
    PyObject *var_A = NULL;
    struct Nuitka_FrameObject *frame_6fcac3d82b69b07c84af19086af8bfc4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6fcac3d82b69b07c84af19086af8bfc4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6fcac3d82b69b07c84af19086af8bfc4, codeobj_6fcac3d82b69b07c84af19086af8bfc4, module_scipy$sparse$csr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6fcac3d82b69b07c84af19086af8bfc4 = cache_frame_6fcac3d82b69b07c84af19086af8bfc4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6fcac3d82b69b07c84af19086af8bfc4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6fcac3d82b69b07c84af19086af8bfc4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_get_index_dtype );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_index_dtype );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_index_dtype" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 169;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_indptr );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_indices );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_tuple_element_1 );

            exception_lineno = 169;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_maxval;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_nnz );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 170;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 170;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 170;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_6fcac3d82b69b07c84af19086af8bfc4->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 170;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_6fcac3d82b69b07c84af19086af8bfc4->m_frame.f_lineno = 169;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_idx_dtype == NULL );
        var_idx_dtype = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 171;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_2;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_empty );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 171;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 171;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 171;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
        tmp_dict_key_2 = const_str_plain_dtype;
        CHECK_OBJECT( var_idx_dtype );
        tmp_dict_value_2 = var_idx_dtype;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_6fcac3d82b69b07c84af19086af8bfc4->m_frame.f_lineno = 171;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_indptr == NULL );
        var_indptr = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_source_name_8;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 172;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_3;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_empty );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_nnz );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 172;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_3 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
        tmp_dict_key_3 = const_str_plain_dtype;
        CHECK_OBJECT( var_idx_dtype );
        tmp_dict_value_3 = var_idx_dtype;
        tmp_kw_name_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_6fcac3d82b69b07c84af19086af8bfc4->m_frame.f_lineno = 172;
        tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_indices == NULL );
        var_indices = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_source_name_10;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_11;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 173;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_4;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_empty );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_nnz );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 173;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_4 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
        tmp_dict_key_4 = const_str_plain_dtype;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_upcast );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_upcast );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "upcast" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 173;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_dtype );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_4 );

            exception_lineno = 173;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_6fcac3d82b69b07c84af19086af8bfc4->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_dict_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_4 );

            exception_lineno = 173;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        frame_6fcac3d82b69b07c84af19086af8bfc4->m_frame.f_lineno = 173;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_data == NULL );
        var_data = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_12;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_source_name_13;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_14;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_15;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_16;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_csr_tocsc );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_tocsc );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csr_tocsc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 175;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_args_element_name_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_13 = par_self;
        tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_shape );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 175;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = const_int_pos_1;
        tmp_args_element_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 1 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 175;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_indptr );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 176;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_idx_dtype );
        tmp_args_element_name_7 = var_idx_dtype;
        frame_6fcac3d82b69b07c84af19086af8bfc4->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_astype, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 176;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_15 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_indices );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 177;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_idx_dtype );
        tmp_args_element_name_9 = var_idx_dtype;
        frame_6fcac3d82b69b07c84af19086af8bfc4->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_args_element_name_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_astype, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 177;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_data );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 178;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_indptr );
        tmp_args_element_name_11 = var_indptr;
        CHECK_OBJECT( var_indices );
        tmp_args_element_name_12 = var_indices;
        CHECK_OBJECT( var_data );
        tmp_args_element_name_13 = var_data;
        frame_6fcac3d82b69b07c84af19086af8bfc4->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_8, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS8( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_csc;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$csr;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_csc_matrix_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_6fcac3d82b69b07c84af19086af8bfc4->m_frame.f_lineno = 183;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$sparse$csr,
                const_str_plain_csc_matrix,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_csc_matrix );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_csc_matrix == NULL );
        var_csc_matrix = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kw_name_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT( var_csc_matrix );
        tmp_called_name_8 = var_csc_matrix;
        CHECK_OBJECT( var_data );
        tmp_tuple_element_7 = var_data;
        tmp_tuple_element_6 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_tuple_element_6, 0, tmp_tuple_element_7 );
        CHECK_OBJECT( var_indices );
        tmp_tuple_element_7 = var_indices;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_tuple_element_6, 1, tmp_tuple_element_7 );
        CHECK_OBJECT( var_indptr );
        tmp_tuple_element_7 = var_indptr;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_tuple_element_6, 2, tmp_tuple_element_7 );
        tmp_args_name_5 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_6 );
        tmp_dict_key_5 = const_str_plain_shape;
        CHECK_OBJECT( par_self );
        tmp_source_name_17 = par_self;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_shape );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_5 );

            exception_lineno = 184;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_5 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        frame_6fcac3d82b69b07c84af19086af8bfc4->m_frame.f_lineno = 184;
        tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_5, tmp_kw_name_5 );
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_5 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A == NULL );
        var_A = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_True;
        CHECK_OBJECT( var_A );
        tmp_assattr_target_1 = var_A;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_has_sorted_indices, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6fcac3d82b69b07c84af19086af8bfc4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6fcac3d82b69b07c84af19086af8bfc4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6fcac3d82b69b07c84af19086af8bfc4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6fcac3d82b69b07c84af19086af8bfc4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6fcac3d82b69b07c84af19086af8bfc4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6fcac3d82b69b07c84af19086af8bfc4,
        type_description_1,
        par_self,
        par_copy,
        var_idx_dtype,
        var_indptr,
        var_indices,
        var_data,
        var_csc_matrix,
        var_A
    );


    // Release cached frame.
    if ( frame_6fcac3d82b69b07c84af19086af8bfc4 == cache_frame_6fcac3d82b69b07c84af19086af8bfc4 )
    {
        Py_DECREF( frame_6fcac3d82b69b07c84af19086af8bfc4 );
    }
    cache_frame_6fcac3d82b69b07c84af19086af8bfc4 = NULL;

    assertFrameObject( frame_6fcac3d82b69b07c84af19086af8bfc4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_A );
    tmp_return_value = var_A;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_4_tocsc );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

    CHECK_OBJECT( (PyObject *)var_idx_dtype );
    Py_DECREF( var_idx_dtype );
    var_idx_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_indptr );
    Py_DECREF( var_indptr );
    var_indptr = NULL;

    CHECK_OBJECT( (PyObject *)var_indices );
    Py_DECREF( var_indices );
    var_indices = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

    CHECK_OBJECT( (PyObject *)var_csc_matrix );
    Py_DECREF( var_csc_matrix );
    var_csc_matrix = NULL;

    CHECK_OBJECT( (PyObject *)var_A );
    Py_DECREF( var_A );
    var_A = NULL;

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

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

    Py_XDECREF( var_idx_dtype );
    var_idx_dtype = NULL;

    Py_XDECREF( var_indptr );
    var_indptr = NULL;

    Py_XDECREF( var_indices );
    var_indices = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_csc_matrix );
    var_csc_matrix = NULL;

    Py_XDECREF( var_A );
    var_A = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_4_tocsc );
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


static PyObject *impl_scipy$sparse$csr$$$function_5_tobsr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_blocksize = python_pars[ 1 ];
    PyObject *par_copy = python_pars[ 2 ];
    PyObject *var_bsr_matrix = NULL;
    PyObject *var_estimate_blocksize = NULL;
    PyObject *var_arg1 = NULL;
    PyObject *var_R = NULL;
    PyObject *var_C = NULL;
    PyObject *var_M = NULL;
    PyObject *var_N = NULL;
    PyObject *var_blks = NULL;
    PyObject *var_idx_dtype = NULL;
    PyObject *var_indptr = NULL;
    PyObject *var_indices = NULL;
    PyObject *var_data = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_99b399e64ec17baa9d3c7e971368203e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_99b399e64ec17baa9d3c7e971368203e = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_99b399e64ec17baa9d3c7e971368203e, codeobj_99b399e64ec17baa9d3c7e971368203e, module_scipy$sparse$csr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_99b399e64ec17baa9d3c7e971368203e = cache_frame_99b399e64ec17baa9d3c7e971368203e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_99b399e64ec17baa9d3c7e971368203e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_99b399e64ec17baa9d3c7e971368203e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_bsr;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$csr;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_bsr_matrix_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 191;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$sparse$csr,
                const_str_plain_bsr_matrix,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_bsr_matrix );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_bsr_matrix == NULL );
        var_bsr_matrix = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_blocksize );
        tmp_compexpr_left_1 = par_blocksize;
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
            PyObject *tmp_import_name_from_2;
            PyObject *tmp_name_name_2;
            PyObject *tmp_globals_name_2;
            PyObject *tmp_locals_name_2;
            PyObject *tmp_fromlist_name_2;
            PyObject *tmp_level_name_2;
            tmp_name_name_2 = const_str_plain_spfuncs;
            tmp_globals_name_2 = (PyObject *)moduledict_scipy$sparse$csr;
            tmp_locals_name_2 = Py_None;
            tmp_fromlist_name_2 = const_tuple_str_plain_estimate_blocksize_tuple;
            tmp_level_name_2 = const_int_pos_1;
            frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 194;
            tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
            if ( tmp_import_name_from_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 194;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( PyModule_Check( tmp_import_name_from_2 ) )
            {
               tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                    tmp_import_name_from_2,
                    (PyObject *)moduledict_scipy$sparse$csr,
                    const_str_plain_estimate_blocksize,
                    const_int_pos_1
                );
            }
            else
            {
               tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_estimate_blocksize );
            }

            Py_DECREF( tmp_import_name_from_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 194;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_estimate_blocksize == NULL );
            var_estimate_blocksize = tmp_assign_source_2;
        }
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_1 = par_self;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tobsr );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_blocksize;
            CHECK_OBJECT( var_estimate_blocksize );
            tmp_called_name_2 = var_estimate_blocksize;
            CHECK_OBJECT( par_self );
            tmp_args_element_name_1 = par_self;
            frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 195;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 195;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 195;
            tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_blocksize );
            tmp_compexpr_left_2 = par_blocksize;
            tmp_compexpr_right_2 = const_tuple_int_pos_1_int_pos_1_tuple;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 197;
                type_description_1 = "ooooooooooooooo";
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
                PyObject *tmp_assign_source_3;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_source_name_2;
                PyObject *tmp_source_name_3;
                PyObject *tmp_source_name_4;
                CHECK_OBJECT( par_self );
                tmp_source_name_2 = par_self;
                tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_data );
                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 198;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 198;
                tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_int_neg_1_int_pos_1_int_pos_1_tuple, 0 ) );

                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 198;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_3 = PyTuple_New( 3 );
                PyTuple_SET_ITEM( tmp_assign_source_3, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( par_self );
                tmp_source_name_3 = par_self;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_indices );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_assign_source_3 );

                    exception_lineno = 198;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_assign_source_3, 1, tmp_tuple_element_1 );
                CHECK_OBJECT( par_self );
                tmp_source_name_4 = par_self;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_indptr );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_assign_source_3 );

                    exception_lineno = 198;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_assign_source_3, 2, tmp_tuple_element_1 );
                assert( var_arg1 == NULL );
                var_arg1 = tmp_assign_source_3;
            }
            {
                PyObject *tmp_called_name_3;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_source_name_5;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                CHECK_OBJECT( var_bsr_matrix );
                tmp_called_name_3 = var_bsr_matrix;
                CHECK_OBJECT( var_arg1 );
                tmp_tuple_element_2 = var_arg1;
                tmp_args_name_1 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
                tmp_dict_key_2 = const_str_plain_shape;
                CHECK_OBJECT( par_self );
                tmp_source_name_5 = par_self;
                tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
                if ( tmp_dict_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_name_1 );

                    exception_lineno = 199;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_kw_name_2 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
                Py_DECREF( tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_3 = const_str_plain_copy;
                CHECK_OBJECT( par_copy );
                tmp_dict_value_3 = par_copy;
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 199;
                tmp_return_value = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_2 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 199;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            // Tried code:
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_iter_arg_1;
                CHECK_OBJECT( par_blocksize );
                tmp_iter_arg_1 = par_blocksize;
                tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 202;
                    type_description_1 = "ooooooooooooooo";
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


                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 202;
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


                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 202;
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

                            type_description_1 = "ooooooooooooooo";
                            exception_lineno = 202;
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
                    exception_lineno = 202;
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
                assert( var_R == NULL );
                Py_INCREF( tmp_assign_source_7 );
                var_R = tmp_assign_source_7;
            }
            Py_XDECREF( tmp_tuple_unpack_1__element_1 );
            tmp_tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_8;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
                tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
                assert( var_C == NULL );
                Py_INCREF( tmp_assign_source_8 );
                var_C = tmp_assign_source_8;
            }
            Py_XDECREF( tmp_tuple_unpack_1__element_2 );
            tmp_tuple_unpack_1__element_2 = NULL;

            // Tried code:
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_iter_arg_2;
                PyObject *tmp_source_name_6;
                CHECK_OBJECT( par_self );
                tmp_source_name_6 = par_self;
                tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
                if ( tmp_iter_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 203;
                    type_description_1 = "ooooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
                Py_DECREF( tmp_iter_arg_2 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 203;
                    type_description_1 = "ooooooooooooooo";
                    goto try_except_handler_4;
                }
                assert( tmp_tuple_unpack_2__source_iter == NULL );
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
            }
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


                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 203;
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


                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 203;
                    goto try_except_handler_5;
                }
                assert( tmp_tuple_unpack_2__element_2 == NULL );
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
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

                            type_description_1 = "ooooooooooooooo";
                            exception_lineno = 203;
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

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 203;
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
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
                tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
                assert( var_M == NULL );
                Py_INCREF( tmp_assign_source_12 );
                var_M = tmp_assign_source_12;
            }
            Py_XDECREF( tmp_tuple_unpack_2__element_1 );
            tmp_tuple_unpack_2__element_1 = NULL;

            {
                PyObject *tmp_assign_source_13;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
                tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
                assert( var_N == NULL );
                Py_INCREF( tmp_assign_source_13 );
                var_N = tmp_assign_source_13;
            }
            Py_XDECREF( tmp_tuple_unpack_2__element_2 );
            tmp_tuple_unpack_2__element_2 = NULL;

            {
                nuitka_bool tmp_condition_result_3;
                int tmp_or_left_truth_1;
                nuitka_bool tmp_or_left_value_1;
                nuitka_bool tmp_or_right_value_1;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                int tmp_or_left_truth_2;
                nuitka_bool tmp_or_left_value_2;
                nuitka_bool tmp_or_right_value_2;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                int tmp_or_left_truth_3;
                nuitka_bool tmp_or_left_value_3;
                nuitka_bool tmp_or_right_value_3;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_compexpr_left_6;
                PyObject *tmp_compexpr_right_6;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                CHECK_OBJECT( var_R );
                tmp_compexpr_left_3 = var_R;
                tmp_compexpr_right_3 = const_int_pos_1;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooo";
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
                CHECK_OBJECT( var_C );
                tmp_compexpr_left_4 = var_C;
                tmp_compexpr_right_4 = const_int_pos_1;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
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
                CHECK_OBJECT( var_M );
                tmp_left_name_1 = var_M;
                CHECK_OBJECT( var_R );
                tmp_right_name_1 = var_R;
                tmp_compexpr_left_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_compexpr_left_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_5 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_left_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_or_left_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
                if ( tmp_or_left_truth_3 == 1 )
                {
                    goto or_left_3;
                }
                else
                {
                    goto or_right_3;
                }
                or_right_3:;
                CHECK_OBJECT( var_N );
                tmp_left_name_2 = var_N;
                CHECK_OBJECT( var_C );
                tmp_right_name_2 = var_C;
                tmp_compexpr_left_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                if ( tmp_compexpr_left_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_6 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                Py_DECREF( tmp_compexpr_left_6 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_or_right_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_or_right_value_2 = tmp_or_right_value_3;
                goto or_end_3;
                or_left_3:;
                tmp_or_right_value_2 = tmp_or_left_value_3;
                or_end_3:;
                tmp_or_right_value_1 = tmp_or_right_value_2;
                goto or_end_2;
                or_left_2:;
                tmp_or_right_value_1 = tmp_or_left_value_2;
                or_end_2:;
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
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_make_exception_arg_1;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_right_name_3;
                    tmp_left_name_3 = const_str_digest_d277e83538760a18da79250ddae3d44f;
                    CHECK_OBJECT( par_blocksize );
                    tmp_right_name_3 = par_blocksize;
                    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                    if ( tmp_make_exception_arg_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 206;
                        type_description_1 = "ooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 206;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_1 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_1 );
                    assert( !(tmp_raise_type_1 == NULL) );
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 206;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_3:;
            }
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_source_name_7;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_source_name_8;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_csr_count_blocks );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_count_blocks );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csr_count_blocks" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 208;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_1;
                CHECK_OBJECT( var_M );
                tmp_args_element_name_2 = var_M;
                CHECK_OBJECT( var_N );
                tmp_args_element_name_3 = var_N;
                CHECK_OBJECT( var_R );
                tmp_args_element_name_4 = var_R;
                CHECK_OBJECT( var_C );
                tmp_args_element_name_5 = var_C;
                CHECK_OBJECT( par_self );
                tmp_source_name_7 = par_self;
                tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_indptr );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 208;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_8 = par_self;
                tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_indices );
                if ( tmp_args_element_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_6 );

                    exception_lineno = 208;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 208;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_args_element_name_6 );
                Py_DECREF( tmp_args_element_name_7 );
                if ( tmp_assign_source_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 208;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_blks == NULL );
                var_blks = tmp_assign_source_14;
            }
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_called_name_5;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_source_name_9;
                PyObject *tmp_source_name_10;
                PyObject *tmp_kw_name_3;
                PyObject *tmp_dict_key_4;
                PyObject *tmp_dict_value_4;
                PyObject *tmp_called_name_6;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_args_element_name_9;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_get_index_dtype );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_index_dtype );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_index_dtype" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 210;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_5 = tmp_mvar_value_2;
                CHECK_OBJECT( par_self );
                tmp_source_name_9 = par_self;
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_indptr );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 210;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
                CHECK_OBJECT( par_self );
                tmp_source_name_10 = par_self;
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_indices );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_tuple_element_3 );

                    exception_lineno = 210;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_tuple_element_3, 1, tmp_tuple_element_4 );
                tmp_args_name_2 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
                tmp_dict_key_4 = const_str_plain_maxval;
                tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_max );
                assert( tmp_called_name_6 != NULL );
                CHECK_OBJECT( var_N );
                tmp_left_name_4 = var_N;
                CHECK_OBJECT( var_C );
                tmp_right_name_4 = var_C;
                tmp_args_element_name_8 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
                if ( tmp_args_element_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_name_2 );

                    exception_lineno = 211;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_blks );
                tmp_args_element_name_9 = var_blks;
                frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 211;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                    tmp_dict_value_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
                }

                Py_DECREF( tmp_args_element_name_8 );
                if ( tmp_dict_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_name_2 );

                    exception_lineno = 211;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_kw_name_3 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
                Py_DECREF( tmp_dict_value_4 );
                assert( !(tmp_res != 0) );
                frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 210;
                tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_3 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_3 );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 210;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_idx_dtype == NULL );
                var_idx_dtype = tmp_assign_source_15;
            }
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_called_name_7;
                PyObject *tmp_source_name_11;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_name_3;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_left_name_5;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_5;
                PyObject *tmp_right_name_6;
                PyObject *tmp_kw_name_4;
                PyObject *tmp_dict_key_5;
                PyObject *tmp_dict_value_5;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_11 = tmp_mvar_value_3;
                tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_empty );
                if ( tmp_called_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_M );
                tmp_left_name_6 = var_M;
                CHECK_OBJECT( var_R );
                tmp_right_name_5 = var_R;
                tmp_left_name_5 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
                if ( tmp_left_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );

                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_6 = const_int_pos_1;
                tmp_tuple_element_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_6 );
                Py_DECREF( tmp_left_name_5 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );

                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_name_3 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
                tmp_dict_key_5 = const_str_plain_dtype;
                CHECK_OBJECT( var_idx_dtype );
                tmp_dict_value_5 = var_idx_dtype;
                tmp_kw_name_4 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_5, tmp_dict_value_5 );
                assert( !(tmp_res != 0) );
                frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 212;
                tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_4 );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_name_3 );
                Py_DECREF( tmp_kw_name_4 );
                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_indptr == NULL );
                var_indptr = tmp_assign_source_16;
            }
            {
                PyObject *tmp_assign_source_17;
                PyObject *tmp_called_name_8;
                PyObject *tmp_source_name_12;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_name_4;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_kw_name_5;
                PyObject *tmp_dict_key_6;
                PyObject *tmp_dict_value_6;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_np );

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
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_12 = tmp_mvar_value_4;
                tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_empty );
                if ( tmp_called_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 213;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_blks );
                tmp_tuple_element_6 = var_blks;
                tmp_args_name_4 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_6 );
                PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
                tmp_dict_key_6 = const_str_plain_dtype;
                CHECK_OBJECT( var_idx_dtype );
                tmp_dict_value_6 = var_idx_dtype;
                tmp_kw_name_5 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_6, tmp_dict_value_6 );
                assert( !(tmp_res != 0) );
                frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 213;
                tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_4, tmp_kw_name_5 );
                Py_DECREF( tmp_called_name_8 );
                Py_DECREF( tmp_args_name_4 );
                Py_DECREF( tmp_kw_name_5 );
                if ( tmp_assign_source_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 213;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_indices == NULL );
                var_indices = tmp_assign_source_17;
            }
            {
                PyObject *tmp_assign_source_18;
                PyObject *tmp_called_name_9;
                PyObject *tmp_source_name_13;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_name_5;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_kw_name_6;
                PyObject *tmp_dict_key_7;
                PyObject *tmp_dict_value_7;
                PyObject *tmp_source_name_14;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 214;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_13 = tmp_mvar_value_5;
                tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_zeros );
                if ( tmp_called_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 214;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_blks );
                tmp_tuple_element_8 = var_blks;
                tmp_tuple_element_7 = PyTuple_New( 3 );
                Py_INCREF( tmp_tuple_element_8 );
                PyTuple_SET_ITEM( tmp_tuple_element_7, 0, tmp_tuple_element_8 );
                CHECK_OBJECT( var_R );
                tmp_tuple_element_8 = var_R;
                Py_INCREF( tmp_tuple_element_8 );
                PyTuple_SET_ITEM( tmp_tuple_element_7, 1, tmp_tuple_element_8 );
                CHECK_OBJECT( var_C );
                tmp_tuple_element_8 = var_C;
                Py_INCREF( tmp_tuple_element_8 );
                PyTuple_SET_ITEM( tmp_tuple_element_7, 2, tmp_tuple_element_8 );
                tmp_args_name_5 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
                tmp_dict_key_7 = const_str_plain_dtype;
                CHECK_OBJECT( par_self );
                tmp_source_name_14 = par_self;
                tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_dtype );
                if ( tmp_dict_value_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_9 );
                    Py_DECREF( tmp_args_name_5 );

                    exception_lineno = 214;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_kw_name_6 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_7, tmp_dict_value_7 );
                Py_DECREF( tmp_dict_value_7 );
                assert( !(tmp_res != 0) );
                frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 214;
                tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_5, tmp_kw_name_6 );
                Py_DECREF( tmp_called_name_9 );
                Py_DECREF( tmp_args_name_5 );
                Py_DECREF( tmp_kw_name_6 );
                if ( tmp_assign_source_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 214;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_data == NULL );
                var_data = tmp_assign_source_18;
            }
            {
                PyObject *tmp_called_name_10;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_10;
                PyObject *tmp_args_element_name_11;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_args_element_name_14;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_source_name_15;
                PyObject *tmp_args_element_name_15;
                PyObject *tmp_args_element_name_16;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_source_name_16;
                PyObject *tmp_args_element_name_17;
                PyObject *tmp_args_element_name_18;
                PyObject *tmp_source_name_17;
                PyObject *tmp_args_element_name_19;
                PyObject *tmp_args_element_name_20;
                PyObject *tmp_args_element_name_21;
                PyObject *tmp_called_instance_4;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_csr_tobsr );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_tobsr );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csr_tobsr" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 216;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_10 = tmp_mvar_value_6;
                CHECK_OBJECT( var_M );
                tmp_args_element_name_10 = var_M;
                CHECK_OBJECT( var_N );
                tmp_args_element_name_11 = var_N;
                CHECK_OBJECT( var_R );
                tmp_args_element_name_12 = var_R;
                CHECK_OBJECT( var_C );
                tmp_args_element_name_13 = var_C;
                CHECK_OBJECT( par_self );
                tmp_source_name_15 = par_self;
                tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_indptr );
                if ( tmp_called_instance_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 217;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_idx_dtype );
                tmp_args_element_name_15 = var_idx_dtype;
                frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 217;
                {
                    PyObject *call_args[] = { tmp_args_element_name_15 };
                    tmp_args_element_name_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_astype, call_args );
                }

                Py_DECREF( tmp_called_instance_2 );
                if ( tmp_args_element_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 217;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_16 = par_self;
                tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_indices );
                if ( tmp_called_instance_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_14 );

                    exception_lineno = 218;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_idx_dtype );
                tmp_args_element_name_17 = var_idx_dtype;
                frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 218;
                {
                    PyObject *call_args[] = { tmp_args_element_name_17 };
                    tmp_args_element_name_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_astype, call_args );
                }

                Py_DECREF( tmp_called_instance_3 );
                if ( tmp_args_element_name_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_14 );

                    exception_lineno = 218;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_17 = par_self;
                tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_data );
                if ( tmp_args_element_name_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_14 );
                    Py_DECREF( tmp_args_element_name_16 );

                    exception_lineno = 219;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_indptr );
                tmp_args_element_name_19 = var_indptr;
                CHECK_OBJECT( var_indices );
                tmp_args_element_name_20 = var_indices;
                CHECK_OBJECT( var_data );
                tmp_called_instance_4 = var_data;
                frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 220;
                tmp_args_element_name_21 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_ravel );
                if ( tmp_args_element_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_14 );
                    Py_DECREF( tmp_args_element_name_16 );
                    Py_DECREF( tmp_args_element_name_18 );

                    exception_lineno = 220;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 216;
                {
                    PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_16, tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS10( tmp_called_name_10, call_args );
                }

                Py_DECREF( tmp_args_element_name_14 );
                Py_DECREF( tmp_args_element_name_16 );
                Py_DECREF( tmp_args_element_name_18 );
                Py_DECREF( tmp_args_element_name_21 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 216;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            {
                PyObject *tmp_called_name_11;
                PyObject *tmp_args_name_6;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_kw_name_7;
                PyObject *tmp_dict_key_8;
                PyObject *tmp_dict_value_8;
                PyObject *tmp_source_name_18;
                CHECK_OBJECT( var_bsr_matrix );
                tmp_called_name_11 = var_bsr_matrix;
                CHECK_OBJECT( var_data );
                tmp_tuple_element_10 = var_data;
                tmp_tuple_element_9 = PyTuple_New( 3 );
                Py_INCREF( tmp_tuple_element_10 );
                PyTuple_SET_ITEM( tmp_tuple_element_9, 0, tmp_tuple_element_10 );
                CHECK_OBJECT( var_indices );
                tmp_tuple_element_10 = var_indices;
                Py_INCREF( tmp_tuple_element_10 );
                PyTuple_SET_ITEM( tmp_tuple_element_9, 1, tmp_tuple_element_10 );
                CHECK_OBJECT( var_indptr );
                tmp_tuple_element_10 = var_indptr;
                Py_INCREF( tmp_tuple_element_10 );
                PyTuple_SET_ITEM( tmp_tuple_element_9, 2, tmp_tuple_element_10 );
                tmp_args_name_6 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_9 );
                tmp_dict_key_8 = const_str_plain_shape;
                CHECK_OBJECT( par_self );
                tmp_source_name_18 = par_self;
                tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_shape );
                if ( tmp_dict_value_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_name_6 );

                    exception_lineno = 222;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_kw_name_7 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_8, tmp_dict_value_8 );
                Py_DECREF( tmp_dict_value_8 );
                assert( !(tmp_res != 0) );
                frame_99b399e64ec17baa9d3c7e971368203e->m_frame.f_lineno = 222;
                tmp_return_value = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_6, tmp_kw_name_7 );
                Py_DECREF( tmp_args_name_6 );
                Py_DECREF( tmp_kw_name_7 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 222;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99b399e64ec17baa9d3c7e971368203e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_99b399e64ec17baa9d3c7e971368203e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99b399e64ec17baa9d3c7e971368203e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_99b399e64ec17baa9d3c7e971368203e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_99b399e64ec17baa9d3c7e971368203e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_99b399e64ec17baa9d3c7e971368203e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_99b399e64ec17baa9d3c7e971368203e,
        type_description_1,
        par_self,
        par_blocksize,
        par_copy,
        var_bsr_matrix,
        var_estimate_blocksize,
        var_arg1,
        var_R,
        var_C,
        var_M,
        var_N,
        var_blks,
        var_idx_dtype,
        var_indptr,
        var_indices,
        var_data
    );


    // Release cached frame.
    if ( frame_99b399e64ec17baa9d3c7e971368203e == cache_frame_99b399e64ec17baa9d3c7e971368203e )
    {
        Py_DECREF( frame_99b399e64ec17baa9d3c7e971368203e );
    }
    cache_frame_99b399e64ec17baa9d3c7e971368203e = NULL;

    assertFrameObject( frame_99b399e64ec17baa9d3c7e971368203e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_5_tobsr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_blocksize );
    Py_DECREF( par_blocksize );
    par_blocksize = NULL;

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

    CHECK_OBJECT( (PyObject *)var_bsr_matrix );
    Py_DECREF( var_bsr_matrix );
    var_bsr_matrix = NULL;

    Py_XDECREF( var_estimate_blocksize );
    var_estimate_blocksize = NULL;

    Py_XDECREF( var_arg1 );
    var_arg1 = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_C );
    var_C = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_blks );
    var_blks = NULL;

    Py_XDECREF( var_idx_dtype );
    var_idx_dtype = NULL;

    Py_XDECREF( var_indptr );
    var_indptr = NULL;

    Py_XDECREF( var_indices );
    var_indices = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_blocksize );
    Py_DECREF( par_blocksize );
    par_blocksize = NULL;

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

    Py_XDECREF( var_bsr_matrix );
    var_bsr_matrix = NULL;

    Py_XDECREF( var_estimate_blocksize );
    var_estimate_blocksize = NULL;

    Py_XDECREF( var_arg1 );
    var_arg1 = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_C );
    var_C = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_blks );
    var_blks = NULL;

    Py_XDECREF( var_idx_dtype );
    var_idx_dtype = NULL;

    Py_XDECREF( var_indptr );
    var_indptr = NULL;

    Py_XDECREF( var_indices );
    var_indices = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_5_tobsr );
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


static PyObject *impl_scipy$sparse$csr$$$function_6__swap( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_x );
    tmp_return_value = par_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_6__swap );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_6__swap );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$sparse$csr$$$function_7___iter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = scipy$sparse$csr$$$function_7___iter__$$$genobj_1___iter___maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_7___iter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_7___iter__ );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct scipy$sparse$csr$$$function_7___iter__$$$genobj_1___iter___locals {
    PyObject *var_indptr;
    PyObject *var_shape;
    PyObject *var_i0;
    PyObject *var_i1;
    PyObject *var_indices;
    PyObject *var_data;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *scipy$sparse$csr$$$function_7___iter__$$$genobj_1___iter___context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$sparse$csr$$$function_7___iter__$$$genobj_1___iter___locals *generator_heap = (struct scipy$sparse$csr$$$function_7___iter__$$$genobj_1___iter___locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_indptr = NULL;
    generator_heap->var_shape = NULL;
    generator_heap->var_i0 = NULL;
    generator_heap->var_i1 = NULL;
    generator_heap->var_indices = NULL;
    generator_heap->var_data = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_b00788ea6da86d956853af9eda214158, module_scipy$sparse$csr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 234;
            generator_heap->type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 234;
            generator_heap->type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = const_tuple_int_pos_2_tuple;
        tmp_dict_key_1 = const_str_plain_dtype;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 234;
            generator_heap->type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = PyCell_GET( generator->m_closure[0] );
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_indptr );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_called_name_1 );

            generator_heap->exception_lineno = 234;
            generator_heap->type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_called_name_1 );

            generator_heap->exception_lineno = 234;
            generator_heap->type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        generator_heap->tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(generator_heap->tmp_res != 0) );
        generator->m_frame->m_frame.f_lineno = 234;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 234;
            generator_heap->type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->var_indptr == NULL );
        generator_heap->var_indptr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_1;
        tmp_tuple_element_1 = const_int_pos_1;
        tmp_assign_source_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_2, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_assign_source_2 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 235;
            generator_heap->type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = PyCell_GET( generator->m_closure[0] );
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_assign_source_2 );

            generator_heap->exception_lineno = 235;
            generator_heap->type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_assign_source_2 );

            generator_heap->exception_lineno = 235;
            generator_heap->type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_assign_source_2, 1, tmp_tuple_element_1 );
        assert( generator_heap->var_shape == NULL );
        generator_heap->var_shape = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_int_0;
        assert( generator_heap->var_i0 == NULL );
        Py_INCREF( tmp_assign_source_3 );
        generator_heap->var_i0 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_subscript_name_2;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 237;
            generator_heap->type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = PyCell_GET( generator->m_closure[0] );
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_indptr );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 237;
            generator_heap->type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_slice_int_pos_1_none_none;
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 237;
            generator_heap->type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 237;
            generator_heap->type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->tmp_for_loop_1__for_iterator == NULL );
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "coooooo";
                generator_heap->exception_lineno = 237;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__iter_value );
        tmp_assign_source_6 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_i1;
            generator_heap->var_i1 = tmp_assign_source_6;
            Py_INCREF( generator_heap->var_i1 );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( generator_heap->var_i1 );
        tmp_left_name_1 = generator_heap->var_i1;
        CHECK_OBJECT( generator_heap->var_i0 );
        tmp_right_name_1 = generator_heap->var_i0;
        tmp_ass_subvalue_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 238;
            generator_heap->type_description_1 = "coooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( generator_heap->var_indptr );
        tmp_ass_subscribed_1 = generator_heap->var_indptr;
        tmp_ass_subscript_1 = const_int_pos_1;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 238;
            generator_heap->type_description_1 = "coooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 239;
            generator_heap->type_description_1 = "coooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_6 = PyCell_GET( generator->m_closure[0] );
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_indices );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 239;
            generator_heap->type_description_1 = "coooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( generator_heap->var_i0 );
        tmp_start_name_1 = generator_heap->var_i0;
        CHECK_OBJECT( generator_heap->var_i1 );
        tmp_stop_name_1 = generator_heap->var_i1;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_3 == NULL) );
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscribed_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 239;
            generator_heap->type_description_1 = "coooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_indices;
            generator_heap->var_indices = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 240;
            generator_heap->type_description_1 = "coooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_7 = PyCell_GET( generator->m_closure[0] );
        tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_data );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 240;
            generator_heap->type_description_1 = "coooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( generator_heap->var_i0 );
        tmp_start_name_2 = generator_heap->var_i0;
        CHECK_OBJECT( generator_heap->var_i1 );
        tmp_stop_name_2 = generator_heap->var_i1;
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        assert( !(tmp_subscript_name_4 == NULL) );
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscribed_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 240;
            generator_heap->type_description_1 = "coooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_data;
            generator_heap->var_data = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_csr_matrix );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_matrix );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csr_matrix" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 241;
            generator_heap->type_description_1 = "coooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( generator_heap->var_data );
        tmp_tuple_element_3 = generator_heap->var_data;
        tmp_tuple_element_2 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( generator_heap->var_indices );
        tmp_tuple_element_3 = generator_heap->var_indices;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
        CHECK_OBJECT( generator_heap->var_indptr );
        tmp_tuple_element_3 = generator_heap->var_indptr;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 2, tmp_tuple_element_3 );
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_dict_key_2 = const_str_plain_shape;
        CHECK_OBJECT( generator_heap->var_shape );
        tmp_dict_value_2 = generator_heap->var_shape;
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        generator_heap->tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(generator_heap->tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_copy;
        tmp_dict_value_3 = Py_True;
        generator_heap->tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(generator_heap->tmp_res != 0) );
        generator->m_frame->m_frame.f_lineno = 241;
        tmp_expression_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 241;
            generator_heap->type_description_1 = "coooooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_name_2, sizeof(PyObject *), &tmp_mvar_value_2, sizeof(PyObject *), &tmp_args_name_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_tuple_element_3, sizeof(PyObject *), &tmp_kw_name_2, sizeof(PyObject *), &tmp_dict_key_2, sizeof(PyObject *), &tmp_dict_value_2, sizeof(PyObject *), &tmp_dict_key_3, sizeof(PyObject *), &tmp_dict_value_3, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_name_2, sizeof(PyObject *), &tmp_mvar_value_2, sizeof(PyObject *), &tmp_args_name_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_tuple_element_3, sizeof(PyObject *), &tmp_kw_name_2, sizeof(PyObject *), &tmp_dict_key_2, sizeof(PyObject *), &tmp_dict_value_2, sizeof(PyObject *), &tmp_dict_key_3, sizeof(PyObject *), &tmp_dict_value_3, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 241;
            generator_heap->type_description_1 = "coooooo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( generator_heap->var_i1 );
        tmp_assign_source_9 = generator_heap->var_i1;
        {
            PyObject *old = generator_heap->var_i0;
            assert( old != NULL );
            generator_heap->var_i0 = tmp_assign_source_9;
            Py_INCREF( generator_heap->var_i0 );
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 237;
        generator_heap->type_description_1 = "coooooo";
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

    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

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
            generator->m_closure[0],
            generator_heap->var_indptr,
            generator_heap->var_shape,
            generator_heap->var_i0,
            generator_heap->var_i1,
            generator_heap->var_indices,
            generator_heap->var_data
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

    Py_XDECREF( generator_heap->var_indptr );
    generator_heap->var_indptr = NULL;

    Py_XDECREF( generator_heap->var_shape );
    generator_heap->var_shape = NULL;

    Py_XDECREF( generator_heap->var_i0 );
    generator_heap->var_i0 = NULL;

    Py_XDECREF( generator_heap->var_i1 );
    generator_heap->var_i1 = NULL;

    Py_XDECREF( generator_heap->var_indices );
    generator_heap->var_indices = NULL;

    Py_XDECREF( generator_heap->var_data );
    generator_heap->var_data = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->var_indptr );
    Py_DECREF( generator_heap->var_indptr );
    generator_heap->var_indptr = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->var_shape );
    Py_DECREF( generator_heap->var_shape );
    generator_heap->var_shape = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->var_i0 );
    Py_DECREF( generator_heap->var_i0 );
    generator_heap->var_i0 = NULL;

    Py_XDECREF( generator_heap->var_i1 );
    generator_heap->var_i1 = NULL;

    Py_XDECREF( generator_heap->var_indices );
    generator_heap->var_indices = NULL;

    Py_XDECREF( generator_heap->var_data );
    generator_heap->var_data = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$sparse$csr$$$function_7___iter__$$$genobj_1___iter___maker( void )
{
    return Nuitka_Generator_New(
        scipy$sparse$csr$$$function_7___iter__$$$genobj_1___iter___context,
        module_scipy$sparse$csr,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 350
        const_str_digest_81cde62be4c73d6a27e797419f2f7b52,
#endif
        codeobj_b00788ea6da86d956853af9eda214158,
        1,
        sizeof(struct scipy$sparse$csr$$$function_7___iter__$$$genobj_1___iter___locals)
    );
}


static PyObject *impl_scipy$sparse$csr$$$function_8_getrow( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_i = python_pars[ 1 ];
    PyObject *var_M = NULL;
    PyObject *var_N = NULL;
    PyObject *var_indptr = NULL;
    PyObject *var_indices = NULL;
    PyObject *var_data = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f2b5b95278406b53bf2c92d77f45658d;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f2b5b95278406b53bf2c92d77f45658d = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f2b5b95278406b53bf2c92d77f45658d, codeobj_f2b5b95278406b53bf2c92d77f45658d, module_scipy$sparse$csr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f2b5b95278406b53bf2c92d77f45658d = cache_frame_f2b5b95278406b53bf2c92d77f45658d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f2b5b95278406b53bf2c92d77f45658d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f2b5b95278406b53bf2c92d77f45658d ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "ooooooo";
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


            type_description_1 = "ooooooo";
            exception_lineno = 248;
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


            type_description_1 = "ooooooo";
            exception_lineno = 248;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 248;
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

            type_description_1 = "ooooooo";
            exception_lineno = 248;
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
        assert( var_M == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_M = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_N == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_N = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT( par_i );
        tmp_int_arg_1 = par_i;
        tmp_assign_source_6 = PyNumber_Int( tmp_int_arg_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_i;
            assert( old != NULL );
            par_i = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_i );
        tmp_compexpr_left_1 = par_i;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_i );
            tmp_left_name_1 = par_i;
            CHECK_OBJECT( var_M );
            tmp_right_name_1 = var_M;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = tmp_left_name_1;
            par_i = tmp_assign_source_7;

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_i );
        tmp_compexpr_left_2 = par_i;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "ooooooo";
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
        CHECK_OBJECT( par_i );
        tmp_compexpr_left_3 = par_i;
        CHECK_OBJECT( var_M );
        tmp_compexpr_right_3 = var_M;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            tmp_left_name_2 = const_str_digest_c2bcb1dd8b023454e57e8981ce5bee63;
            CHECK_OBJECT( par_i );
            tmp_right_name_2 = par_i;
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 253;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_f2b5b95278406b53bf2c92d77f45658d->m_frame.f_lineno = 253;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_IndexError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 253;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_get_csr_submatrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_csr_submatrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_csr_submatrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_M );
        tmp_args_element_name_1 = var_M;
        CHECK_OBJECT( var_N );
        tmp_args_element_name_2 = var_N;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_indptr );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_indices );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_data );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_i );
        tmp_args_element_name_6 = par_i;
        CHECK_OBJECT( par_i );
        tmp_left_name_3 = par_i;
        tmp_right_name_3 = const_int_pos_1;
        tmp_args_element_name_7 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_name_8 = const_int_0;
        CHECK_OBJECT( var_N );
        tmp_args_element_name_9 = var_N;
        frame_f2b5b95278406b53bf2c92d77f45658d->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS9( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "ooooooo";
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


            type_description_1 = "ooooooo";
            exception_lineno = 254;
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


            type_description_1 = "ooooooo";
            exception_lineno = 254;
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


            type_description_1 = "ooooooo";
            exception_lineno = 254;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 254;
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

            type_description_1 = "ooooooo";
            exception_lineno = 254;
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
        assert( var_indptr == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_indptr = tmp_assign_source_12;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
        assert( var_indices == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_indices = tmp_assign_source_13;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_3;
        assert( var_data == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_data = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_csr_matrix );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_matrix );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csr_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_data );
        tmp_tuple_element_2 = var_data;
        tmp_tuple_element_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_indices );
        tmp_tuple_element_2 = var_indices;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( var_indptr );
        tmp_tuple_element_2 = var_indptr;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_2 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_shape;
        tmp_tuple_element_3 = const_int_pos_1;
        tmp_dict_value_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_N );
        tmp_tuple_element_3 = var_N;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dict_value_1, 1, tmp_tuple_element_3 );
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_dtype;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_copy;
        tmp_dict_value_3 = Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_f2b5b95278406b53bf2c92d77f45658d->m_frame.f_lineno = 256;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2b5b95278406b53bf2c92d77f45658d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2b5b95278406b53bf2c92d77f45658d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2b5b95278406b53bf2c92d77f45658d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f2b5b95278406b53bf2c92d77f45658d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f2b5b95278406b53bf2c92d77f45658d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f2b5b95278406b53bf2c92d77f45658d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f2b5b95278406b53bf2c92d77f45658d,
        type_description_1,
        par_self,
        par_i,
        var_M,
        var_N,
        var_indptr,
        var_indices,
        var_data
    );


    // Release cached frame.
    if ( frame_f2b5b95278406b53bf2c92d77f45658d == cache_frame_f2b5b95278406b53bf2c92d77f45658d )
    {
        Py_DECREF( frame_f2b5b95278406b53bf2c92d77f45658d );
    }
    cache_frame_f2b5b95278406b53bf2c92d77f45658d = NULL;

    assertFrameObject( frame_f2b5b95278406b53bf2c92d77f45658d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_8_getrow );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    CHECK_OBJECT( (PyObject *)var_M );
    Py_DECREF( var_M );
    var_M = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var_indptr );
    Py_DECREF( var_indptr );
    var_indptr = NULL;

    CHECK_OBJECT( (PyObject *)var_indices );
    Py_DECREF( var_indices );
    var_indices = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

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

    Py_XDECREF( par_i );
    par_i = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_indptr );
    var_indptr = NULL;

    Py_XDECREF( var_indices );
    var_indices = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_8_getrow );
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


static PyObject *impl_scipy$sparse$csr$$$function_9_getcol( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_i = python_pars[ 1 ];
    PyObject *var_M = NULL;
    PyObject *var_N = NULL;
    PyObject *var_indptr = NULL;
    PyObject *var_indices = NULL;
    PyObject *var_data = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1f82b6ac6e7b50bb6c9a321f454c922b;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1f82b6ac6e7b50bb6c9a321f454c922b = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1f82b6ac6e7b50bb6c9a321f454c922b, codeobj_1f82b6ac6e7b50bb6c9a321f454c922b, module_scipy$sparse$csr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1f82b6ac6e7b50bb6c9a321f454c922b = cache_frame_1f82b6ac6e7b50bb6c9a321f454c922b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1f82b6ac6e7b50bb6c9a321f454c922b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1f82b6ac6e7b50bb6c9a321f454c922b ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "ooooooo";
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


            type_description_1 = "ooooooo";
            exception_lineno = 263;
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


            type_description_1 = "ooooooo";
            exception_lineno = 263;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 263;
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

            type_description_1 = "ooooooo";
            exception_lineno = 263;
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
        assert( var_M == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_M = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_N == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_N = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT( par_i );
        tmp_int_arg_1 = par_i;
        tmp_assign_source_6 = PyNumber_Int( tmp_int_arg_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_i;
            assert( old != NULL );
            par_i = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_i );
        tmp_compexpr_left_1 = par_i;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 265;
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_i );
            tmp_left_name_1 = par_i;
            CHECK_OBJECT( var_N );
            tmp_right_name_1 = var_N;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 266;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = tmp_left_name_1;
            par_i = tmp_assign_source_7;

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_i );
        tmp_compexpr_left_2 = par_i;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 267;
            type_description_1 = "ooooooo";
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
        CHECK_OBJECT( par_i );
        tmp_compexpr_left_3 = par_i;
        CHECK_OBJECT( var_N );
        tmp_compexpr_right_3 = var_N;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            tmp_left_name_2 = const_str_digest_c2bcb1dd8b023454e57e8981ce5bee63;
            CHECK_OBJECT( par_i );
            tmp_right_name_2 = par_i;
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 268;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_1f82b6ac6e7b50bb6c9a321f454c922b->m_frame.f_lineno = 268;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_IndexError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 268;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_get_csr_submatrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_csr_submatrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_csr_submatrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_M );
        tmp_args_element_name_1 = var_M;
        CHECK_OBJECT( var_N );
        tmp_args_element_name_2 = var_N;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_indptr );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_indices );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_data );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_name_6 = const_int_0;
        CHECK_OBJECT( var_M );
        tmp_args_element_name_7 = var_M;
        CHECK_OBJECT( par_i );
        tmp_args_element_name_8 = par_i;
        CHECK_OBJECT( par_i );
        tmp_left_name_3 = par_i;
        tmp_right_name_3 = const_int_pos_1;
        tmp_args_element_name_9 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        frame_1f82b6ac6e7b50bb6c9a321f454c922b->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS9( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "ooooooo";
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


            type_description_1 = "ooooooo";
            exception_lineno = 269;
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


            type_description_1 = "ooooooo";
            exception_lineno = 269;
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


            type_description_1 = "ooooooo";
            exception_lineno = 269;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 269;
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

            type_description_1 = "ooooooo";
            exception_lineno = 269;
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
        assert( var_indptr == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_indptr = tmp_assign_source_12;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
        assert( var_indices == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_indices = tmp_assign_source_13;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_3;
        assert( var_data == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_data = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_csr_matrix );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_matrix );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csr_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_data );
        tmp_tuple_element_2 = var_data;
        tmp_tuple_element_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_indices );
        tmp_tuple_element_2 = var_indices;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( var_indptr );
        tmp_tuple_element_2 = var_indptr;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_2 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_shape;
        CHECK_OBJECT( var_M );
        tmp_tuple_element_3 = var_M;
        tmp_dict_value_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_3 );
        tmp_tuple_element_3 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dict_value_1, 1, tmp_tuple_element_3 );
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_dtype;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_copy;
        tmp_dict_value_3 = Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_1f82b6ac6e7b50bb6c9a321f454c922b->m_frame.f_lineno = 271;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f82b6ac6e7b50bb6c9a321f454c922b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f82b6ac6e7b50bb6c9a321f454c922b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f82b6ac6e7b50bb6c9a321f454c922b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1f82b6ac6e7b50bb6c9a321f454c922b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1f82b6ac6e7b50bb6c9a321f454c922b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1f82b6ac6e7b50bb6c9a321f454c922b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1f82b6ac6e7b50bb6c9a321f454c922b,
        type_description_1,
        par_self,
        par_i,
        var_M,
        var_N,
        var_indptr,
        var_indices,
        var_data
    );


    // Release cached frame.
    if ( frame_1f82b6ac6e7b50bb6c9a321f454c922b == cache_frame_1f82b6ac6e7b50bb6c9a321f454c922b )
    {
        Py_DECREF( frame_1f82b6ac6e7b50bb6c9a321f454c922b );
    }
    cache_frame_1f82b6ac6e7b50bb6c9a321f454c922b = NULL;

    assertFrameObject( frame_1f82b6ac6e7b50bb6c9a321f454c922b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_9_getcol );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    CHECK_OBJECT( (PyObject *)var_M );
    Py_DECREF( var_M );
    var_M = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var_indptr );
    Py_DECREF( var_indptr );
    var_indptr = NULL;

    CHECK_OBJECT( (PyObject *)var_indices );
    Py_DECREF( var_indices );
    var_indices = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

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

    Py_XDECREF( par_i );
    par_i = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_indptr );
    var_indptr = NULL;

    Py_XDECREF( var_indices );
    var_indices = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_9_getcol );
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


static PyObject *impl_scipy$sparse$csr$$$function_10__get_intXarray( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_row = python_pars[ 1 ];
    PyObject *par_col = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_e50c80017cb7dc4f44c55178e3f60159;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e50c80017cb7dc4f44c55178e3f60159 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e50c80017cb7dc4f44c55178e3f60159, codeobj_e50c80017cb7dc4f44c55178e3f60159, module_scipy$sparse$csr, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e50c80017cb7dc4f44c55178e3f60159 = cache_frame_e50c80017cb7dc4f44c55178e3f60159;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e50c80017cb7dc4f44c55178e3f60159 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e50c80017cb7dc4f44c55178e3f60159 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( par_row );
        tmp_args_element_name_1 = par_row;
        frame_e50c80017cb7dc4f44c55178e3f60159->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_instance_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_getrow, call_args );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_col );
        tmp_args_element_name_2 = par_col;
        frame_e50c80017cb7dc4f44c55178e3f60159->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__minor_index_fancy, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e50c80017cb7dc4f44c55178e3f60159 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e50c80017cb7dc4f44c55178e3f60159 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e50c80017cb7dc4f44c55178e3f60159 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e50c80017cb7dc4f44c55178e3f60159, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e50c80017cb7dc4f44c55178e3f60159->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e50c80017cb7dc4f44c55178e3f60159, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e50c80017cb7dc4f44c55178e3f60159,
        type_description_1,
        par_self,
        par_row,
        par_col
    );


    // Release cached frame.
    if ( frame_e50c80017cb7dc4f44c55178e3f60159 == cache_frame_e50c80017cb7dc4f44c55178e3f60159 )
    {
        Py_DECREF( frame_e50c80017cb7dc4f44c55178e3f60159 );
    }
    cache_frame_e50c80017cb7dc4f44c55178e3f60159 = NULL;

    assertFrameObject( frame_e50c80017cb7dc4f44c55178e3f60159 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_10__get_intXarray );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_row );
    Py_DECREF( par_row );
    par_row = NULL;

    CHECK_OBJECT( (PyObject *)par_col );
    Py_DECREF( par_col );
    par_col = NULL;

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

    CHECK_OBJECT( (PyObject *)par_row );
    Py_DECREF( par_row );
    par_row = NULL;

    CHECK_OBJECT( (PyObject *)par_col );
    Py_DECREF( par_col );
    par_col = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_10__get_intXarray );
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


static PyObject *impl_scipy$sparse$csr$$$function_11__get_intXslice( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_row = python_pars[ 1 ];
    PyObject *par_col = python_pars[ 2 ];
    PyObject *var_M = NULL;
    PyObject *var_N = NULL;
    PyObject *var_start = NULL;
    PyObject *var_stop = NULL;
    PyObject *var_stride = NULL;
    PyObject *var_ii = NULL;
    PyObject *var_jj = NULL;
    PyObject *var_row_indices = NULL;
    PyObject *var_row_data = NULL;
    PyObject *var_ind = NULL;
    PyObject *var_row_indptr = NULL;
    PyObject *var_shape = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2d197ca50c29eab1ca4f630791f0cc95;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2d197ca50c29eab1ca4f630791f0cc95 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2d197ca50c29eab1ca4f630791f0cc95, codeobj_2d197ca50c29eab1ca4f630791f0cc95, module_scipy$sparse$csr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2d197ca50c29eab1ca4f630791f0cc95 = cache_frame_2d197ca50c29eab1ca4f630791f0cc95;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d197ca50c29eab1ca4f630791f0cc95 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d197ca50c29eab1ca4f630791f0cc95 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_col );
        tmp_source_name_1 = par_col;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_step );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_tuple_int_pos_1_none_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "ooooooooooooooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__get_submatrix );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_row );
            tmp_tuple_element_1 = par_row;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_col );
            tmp_tuple_element_1 = par_col;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_10010a04cba23a4ccc75195b8c45141a );
            frame_2d197ca50c29eab1ca4f630791f0cc95->m_frame.f_lineno = 279;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooo";
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 283;
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 283;
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

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 283;
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
            exception_lineno = 283;
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
        assert( var_M == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_M = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_N == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_N = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_col );
        tmp_called_instance_1 = par_col;
        CHECK_OBJECT( var_N );
        tmp_args_element_name_1 = var_N;
        frame_2d197ca50c29eab1ca4f630791f0cc95->m_frame.f_lineno = 284;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_indices, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "ooooooooooooooo";
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
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 0, 3 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 284;
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
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_4, 1, 3 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 284;
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
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_5, 2, 3 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 284;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_3 == NULL );
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_9;
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

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 284;
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

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 284;
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
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;
        assert( var_start == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_start = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;
        assert( var_stop == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_stop = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_3;
        assert( var_stride == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_stride = tmp_assign_source_12;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_indptr );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( par_row );
        tmp_start_name_1 = par_row;
        CHECK_OBJECT( par_row );
        tmp_left_name_1 = par_row;
        tmp_right_name_1 = const_int_pos_2;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 286;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_iter_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_3__source_iter == NULL );
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_6, 0, 2 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 286;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_1 == NULL );
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_7, 1, 2 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 286;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_2 == NULL );
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_15;
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

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 286;
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

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 286;
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
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_16 = tmp_tuple_unpack_3__element_1;
        assert( var_ii == NULL );
        Py_INCREF( tmp_assign_source_16 );
        var_ii = tmp_assign_source_16;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_17 = tmp_tuple_unpack_3__element_2;
        assert( var_jj == NULL );
        Py_INCREF( tmp_assign_source_17 );
        var_jj = tmp_assign_source_17;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_indices );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ii );
        tmp_start_name_2 = var_ii;
        CHECK_OBJECT( var_jj );
        tmp_stop_name_2 = var_jj;
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_assign_source_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_row_indices == NULL );
        var_row_indices = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_step_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_data );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ii );
        tmp_start_name_3 = var_ii;
        CHECK_OBJECT( var_jj );
        tmp_stop_name_3 = var_jj;
        tmp_step_name_3 = Py_None;
        tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        assert( !(tmp_subscript_name_3 == NULL) );
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscribed_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_row_data == NULL );
        var_row_data = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_stride );
        tmp_compexpr_left_2 = var_stride;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "ooooooooooooooo";
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
            PyObject *tmp_assign_source_20;
            PyObject *tmp_left_name_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( var_row_indices );
            tmp_compexpr_left_3 = var_row_indices;
            CHECK_OBJECT( var_start );
            tmp_compexpr_right_3 = var_start;
            tmp_left_name_2 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 291;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_row_indices );
            tmp_compexpr_left_4 = var_row_indices;
            CHECK_OBJECT( var_stop );
            tmp_compexpr_right_4 = var_stop;
            tmp_right_name_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 291;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_20 = BINARY_OPERATION( PyNumber_And, tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 291;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_ind == NULL );
            var_ind = tmp_assign_source_20;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_left_name_3;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_right_name_3;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT( var_row_indices );
            tmp_compexpr_left_5 = var_row_indices;
            CHECK_OBJECT( var_start );
            tmp_compexpr_right_5 = var_start;
            tmp_left_name_3 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 293;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_row_indices );
            tmp_compexpr_left_6 = var_row_indices;
            CHECK_OBJECT( var_stop );
            tmp_compexpr_right_6 = var_stop;
            tmp_right_name_3 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 293;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_21 = BINARY_OPERATION( PyNumber_And, tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 293;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_ind == NULL );
            var_ind = tmp_assign_source_21;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( var_stride );
        tmp_args_element_name_2 = var_stride;
        frame_2d197ca50c29eab1ca4f630791f0cc95->m_frame.f_lineno = 295;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_compexpr_left_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_7 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
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
            PyObject *tmp_assign_source_22;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_left_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_5;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( var_ind );
            tmp_left_name_4 = var_ind;
            CHECK_OBJECT( var_row_indices );
            tmp_left_name_6 = var_row_indices;
            CHECK_OBJECT( var_start );
            tmp_right_name_5 = var_start;
            tmp_left_name_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_stride );
            tmp_right_name_6 = var_stride;
            tmp_compexpr_left_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_5 );
            if ( tmp_compexpr_left_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_8 = const_int_0;
            tmp_right_name_4 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            Py_DECREF( tmp_compexpr_left_8 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceAnd, &tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_22 = tmp_left_name_4;
            var_ind = tmp_assign_source_22;

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( var_row_indices );
        tmp_subscribed_name_4 = var_row_indices;
        if ( var_ind == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ind" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 298;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_4 = var_ind;
        tmp_left_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_start );
        tmp_right_name_7 = var_start;
        tmp_left_name_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_8 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_stride );
        tmp_right_name_8 = var_stride;
        tmp_assign_source_23 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_row_indices;
            assert( old != NULL );
            var_row_indices = tmp_assign_source_23;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( var_row_data );
        tmp_subscribed_name_5 = var_row_data;
        if ( var_ind == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ind" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 299;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_5 = var_ind;
        tmp_assign_source_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_row_data;
            assert( old != NULL );
            var_row_data = tmp_assign_source_24;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_len_arg_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 300;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_1;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_array );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = const_int_0;
        tmp_args_element_name_3 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_3, 0, tmp_list_element_1 );
        CHECK_OBJECT( var_row_indices );
        tmp_len_arg_1 = var_row_indices;
        tmp_list_element_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 300;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_3, 1, tmp_list_element_1 );
        frame_2d197ca50c29eab1ca4f630791f0cc95->m_frame.f_lineno = 300;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_row_indptr == NULL );
        var_row_indptr = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT( var_stride );
        tmp_compexpr_left_9 = var_stride;
        tmp_compexpr_right_9 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "ooooooooooooooo";
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
            PyObject *tmp_assign_source_26;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            CHECK_OBJECT( var_row_data );
            tmp_subscribed_name_6 = var_row_data;
            tmp_subscript_name_6 = const_slice_none_none_int_neg_1;
            tmp_assign_source_26 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_row_data;
                assert( old != NULL );
                var_row_data = tmp_assign_source_26;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_4 != NULL );
            CHECK_OBJECT( var_row_indices );
            tmp_subscribed_name_7 = var_row_indices;
            tmp_subscript_name_7 = const_slice_none_none_int_neg_1;
            tmp_args_element_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 304;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_2d197ca50c29eab1ca4f630791f0cc95->m_frame.f_lineno = 304;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 304;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_row_indices;
                assert( old != NULL );
                var_row_indices = tmp_assign_source_27;
                Py_DECREF( old );
            }

        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_9;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        tmp_tuple_element_2 = const_int_pos_1;
        tmp_assign_source_28 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_28, 0, tmp_tuple_element_2 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_assign_source_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 306;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_2;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ceil );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );

            exception_lineno = 306;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_stop );
        tmp_left_name_10 = var_stop;
        CHECK_OBJECT( var_start );
        tmp_right_name_9 = var_start;
        tmp_float_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_9 );
        if ( tmp_float_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 306;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_9 = TO_FLOAT( tmp_float_arg_1 );
        Py_DECREF( tmp_float_arg_1 );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 306;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_stride );
        tmp_right_name_10 = var_stride;
        tmp_args_element_name_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_9 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 306;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2d197ca50c29eab1ca4f630791f0cc95->m_frame.f_lineno = 306;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );

            exception_lineno = 306;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );

            exception_lineno = 306;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_assign_source_28, 1, tmp_tuple_element_2 );
        assert( var_shape == NULL );
        var_shape = tmp_assign_source_28;
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_9;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_csr_matrix );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_matrix );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csr_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 307;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_3;
        CHECK_OBJECT( var_row_data );
        tmp_tuple_element_4 = var_row_data;
        tmp_tuple_element_3 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_row_indices );
        tmp_tuple_element_4 = var_row_indices;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_3, 1, tmp_tuple_element_4 );
        CHECK_OBJECT( var_row_indptr );
        tmp_tuple_element_4 = var_row_indptr;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_3, 2, tmp_tuple_element_4 );
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
        tmp_dict_key_1 = const_str_plain_shape;
        CHECK_OBJECT( var_shape );
        tmp_dict_value_1 = var_shape;
        tmp_kw_name_2 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_dtype;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_dtype );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 308;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_copy;
        tmp_dict_value_3 = Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_2d197ca50c29eab1ca4f630791f0cc95->m_frame.f_lineno = 307;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d197ca50c29eab1ca4f630791f0cc95 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d197ca50c29eab1ca4f630791f0cc95 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d197ca50c29eab1ca4f630791f0cc95 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d197ca50c29eab1ca4f630791f0cc95, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d197ca50c29eab1ca4f630791f0cc95->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d197ca50c29eab1ca4f630791f0cc95, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2d197ca50c29eab1ca4f630791f0cc95,
        type_description_1,
        par_self,
        par_row,
        par_col,
        var_M,
        var_N,
        var_start,
        var_stop,
        var_stride,
        var_ii,
        var_jj,
        var_row_indices,
        var_row_data,
        var_ind,
        var_row_indptr,
        var_shape
    );


    // Release cached frame.
    if ( frame_2d197ca50c29eab1ca4f630791f0cc95 == cache_frame_2d197ca50c29eab1ca4f630791f0cc95 )
    {
        Py_DECREF( frame_2d197ca50c29eab1ca4f630791f0cc95 );
    }
    cache_frame_2d197ca50c29eab1ca4f630791f0cc95 = NULL;

    assertFrameObject( frame_2d197ca50c29eab1ca4f630791f0cc95 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_11__get_intXslice );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_row );
    Py_DECREF( par_row );
    par_row = NULL;

    CHECK_OBJECT( (PyObject *)par_col );
    Py_DECREF( par_col );
    par_col = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_stride );
    var_stride = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    Py_XDECREF( var_jj );
    var_jj = NULL;

    Py_XDECREF( var_row_indices );
    var_row_indices = NULL;

    Py_XDECREF( var_row_data );
    var_row_data = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_row_indptr );
    var_row_indptr = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_row );
    Py_DECREF( par_row );
    par_row = NULL;

    CHECK_OBJECT( (PyObject *)par_col );
    Py_DECREF( par_col );
    par_col = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_stride );
    var_stride = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    Py_XDECREF( var_jj );
    var_jj = NULL;

    Py_XDECREF( var_row_indices );
    var_row_indices = NULL;

    Py_XDECREF( var_row_data );
    var_row_data = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_row_indptr );
    var_row_indptr = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_11__get_intXslice );
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


static PyObject *impl_scipy$sparse$csr$$$function_12__get_sliceXint( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_row = python_pars[ 1 ];
    PyObject *par_col = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_fcd6ca8181de8f8b9a365c47562b4c18;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fcd6ca8181de8f8b9a365c47562b4c18 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fcd6ca8181de8f8b9a365c47562b4c18, codeobj_fcd6ca8181de8f8b9a365c47562b4c18, module_scipy$sparse$csr, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fcd6ca8181de8f8b9a365c47562b4c18 = cache_frame_fcd6ca8181de8f8b9a365c47562b4c18;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fcd6ca8181de8f8b9a365c47562b4c18 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fcd6ca8181de8f8b9a365c47562b4c18 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_row );
        tmp_source_name_1 = par_row;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_step );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_tuple_int_pos_1_none_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__get_submatrix );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_row );
            tmp_tuple_element_1 = par_row;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_col );
            tmp_tuple_element_1 = par_col;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_10010a04cba23a4ccc75195b8c45141a );
            frame_fcd6ca8181de8f8b9a365c47562b4c18->m_frame.f_lineno = 312;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_row );
        tmp_args_element_name_1 = par_row;
        frame_fcd6ca8181de8f8b9a365c47562b4c18->m_frame.f_lineno = 313;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_source_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__major_slice, call_args );
        }

        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__get_submatrix );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_minor;
        CHECK_OBJECT( par_col );
        tmp_dict_value_1 = par_col;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_fcd6ca8181de8f8b9a365c47562b4c18->m_frame.f_lineno = 313;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcd6ca8181de8f8b9a365c47562b4c18 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcd6ca8181de8f8b9a365c47562b4c18 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcd6ca8181de8f8b9a365c47562b4c18 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fcd6ca8181de8f8b9a365c47562b4c18, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fcd6ca8181de8f8b9a365c47562b4c18->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fcd6ca8181de8f8b9a365c47562b4c18, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fcd6ca8181de8f8b9a365c47562b4c18,
        type_description_1,
        par_self,
        par_row,
        par_col
    );


    // Release cached frame.
    if ( frame_fcd6ca8181de8f8b9a365c47562b4c18 == cache_frame_fcd6ca8181de8f8b9a365c47562b4c18 )
    {
        Py_DECREF( frame_fcd6ca8181de8f8b9a365c47562b4c18 );
    }
    cache_frame_fcd6ca8181de8f8b9a365c47562b4c18 = NULL;

    assertFrameObject( frame_fcd6ca8181de8f8b9a365c47562b4c18 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_12__get_sliceXint );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_row );
    Py_DECREF( par_row );
    par_row = NULL;

    CHECK_OBJECT( (PyObject *)par_col );
    Py_DECREF( par_col );
    par_col = NULL;

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

    CHECK_OBJECT( (PyObject *)par_row );
    Py_DECREF( par_row );
    par_row = NULL;

    CHECK_OBJECT( (PyObject *)par_col );
    Py_DECREF( par_col );
    par_col = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_12__get_sliceXint );
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


static PyObject *impl_scipy$sparse$csr$$$function_13__get_sliceXarray( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_row = python_pars[ 1 ];
    PyObject *par_col = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_7f365766f8ceafdcb2ef9fdabcd35a2f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7f365766f8ceafdcb2ef9fdabcd35a2f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7f365766f8ceafdcb2ef9fdabcd35a2f, codeobj_7f365766f8ceafdcb2ef9fdabcd35a2f, module_scipy$sparse$csr, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7f365766f8ceafdcb2ef9fdabcd35a2f = cache_frame_7f365766f8ceafdcb2ef9fdabcd35a2f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7f365766f8ceafdcb2ef9fdabcd35a2f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7f365766f8ceafdcb2ef9fdabcd35a2f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( par_row );
        tmp_args_element_name_1 = par_row;
        frame_7f365766f8ceafdcb2ef9fdabcd35a2f->m_frame.f_lineno = 316;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_instance_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__major_slice, call_args );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_col );
        tmp_args_element_name_2 = par_col;
        frame_7f365766f8ceafdcb2ef9fdabcd35a2f->m_frame.f_lineno = 316;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__minor_index_fancy, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f365766f8ceafdcb2ef9fdabcd35a2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f365766f8ceafdcb2ef9fdabcd35a2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f365766f8ceafdcb2ef9fdabcd35a2f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7f365766f8ceafdcb2ef9fdabcd35a2f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7f365766f8ceafdcb2ef9fdabcd35a2f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7f365766f8ceafdcb2ef9fdabcd35a2f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7f365766f8ceafdcb2ef9fdabcd35a2f,
        type_description_1,
        par_self,
        par_row,
        par_col
    );


    // Release cached frame.
    if ( frame_7f365766f8ceafdcb2ef9fdabcd35a2f == cache_frame_7f365766f8ceafdcb2ef9fdabcd35a2f )
    {
        Py_DECREF( frame_7f365766f8ceafdcb2ef9fdabcd35a2f );
    }
    cache_frame_7f365766f8ceafdcb2ef9fdabcd35a2f = NULL;

    assertFrameObject( frame_7f365766f8ceafdcb2ef9fdabcd35a2f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_13__get_sliceXarray );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_row );
    Py_DECREF( par_row );
    par_row = NULL;

    CHECK_OBJECT( (PyObject *)par_col );
    Py_DECREF( par_col );
    par_col = NULL;

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

    CHECK_OBJECT( (PyObject *)par_row );
    Py_DECREF( par_row );
    par_row = NULL;

    CHECK_OBJECT( (PyObject *)par_col );
    Py_DECREF( par_col );
    par_col = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_13__get_sliceXarray );
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


static PyObject *impl_scipy$sparse$csr$$$function_14__get_arrayXint( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_row = python_pars[ 1 ];
    PyObject *par_col = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_7999d1dd40077406928096b8cd46e31b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7999d1dd40077406928096b8cd46e31b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7999d1dd40077406928096b8cd46e31b, codeobj_7999d1dd40077406928096b8cd46e31b, module_scipy$sparse$csr, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7999d1dd40077406928096b8cd46e31b = cache_frame_7999d1dd40077406928096b8cd46e31b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7999d1dd40077406928096b8cd46e31b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7999d1dd40077406928096b8cd46e31b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_row );
        tmp_args_element_name_1 = par_row;
        frame_7999d1dd40077406928096b8cd46e31b->m_frame.f_lineno = 319;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_source_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__major_index_fancy, call_args );
        }

        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__get_submatrix );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_minor;
        CHECK_OBJECT( par_col );
        tmp_dict_value_1 = par_col;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_7999d1dd40077406928096b8cd46e31b->m_frame.f_lineno = 319;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7999d1dd40077406928096b8cd46e31b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7999d1dd40077406928096b8cd46e31b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7999d1dd40077406928096b8cd46e31b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7999d1dd40077406928096b8cd46e31b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7999d1dd40077406928096b8cd46e31b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7999d1dd40077406928096b8cd46e31b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7999d1dd40077406928096b8cd46e31b,
        type_description_1,
        par_self,
        par_row,
        par_col
    );


    // Release cached frame.
    if ( frame_7999d1dd40077406928096b8cd46e31b == cache_frame_7999d1dd40077406928096b8cd46e31b )
    {
        Py_DECREF( frame_7999d1dd40077406928096b8cd46e31b );
    }
    cache_frame_7999d1dd40077406928096b8cd46e31b = NULL;

    assertFrameObject( frame_7999d1dd40077406928096b8cd46e31b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_14__get_arrayXint );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_row );
    Py_DECREF( par_row );
    par_row = NULL;

    CHECK_OBJECT( (PyObject *)par_col );
    Py_DECREF( par_col );
    par_col = NULL;

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

    CHECK_OBJECT( (PyObject *)par_row );
    Py_DECREF( par_row );
    par_row = NULL;

    CHECK_OBJECT( (PyObject *)par_col );
    Py_DECREF( par_col );
    par_col = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_14__get_arrayXint );
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


static PyObject *impl_scipy$sparse$csr$$$function_15__get_arrayXslice( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_row = python_pars[ 1 ];
    PyObject *par_col = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_9a4032ba08ae7f7be3cc670b7ff93206;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9a4032ba08ae7f7be3cc670b7ff93206 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9a4032ba08ae7f7be3cc670b7ff93206, codeobj_9a4032ba08ae7f7be3cc670b7ff93206, module_scipy$sparse$csr, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9a4032ba08ae7f7be3cc670b7ff93206 = cache_frame_9a4032ba08ae7f7be3cc670b7ff93206;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9a4032ba08ae7f7be3cc670b7ff93206 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9a4032ba08ae7f7be3cc670b7ff93206 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_col );
        tmp_source_name_1 = par_col;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_step );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_tuple_int_pos_1_none_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "ooo";
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
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 323;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_arange );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 323;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_col );
            tmp_source_name_3 = par_col;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_indices );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dircall_arg1_1 );

                exception_lineno = 323;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dircall_arg1_1 );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 323;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_pos_1;
            tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dircall_arg1_1 );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 323;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_9a4032ba08ae7f7be3cc670b7ff93206->m_frame.f_lineno = 323;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_dircall_arg2_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dircall_arg1_1 );

                exception_lineno = 323;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
                tmp_assign_source_1 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
            }
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 323;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_col;
                assert( old != NULL );
                par_col = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            CHECK_OBJECT( par_row );
            tmp_args_element_name_2 = par_row;
            CHECK_OBJECT( par_col );
            tmp_args_element_name_3 = par_col;
            frame_9a4032ba08ae7f7be3cc670b7ff93206->m_frame.f_lineno = 324;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__get_arrayXarray, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 324;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( par_row );
        tmp_args_element_name_4 = par_row;
        frame_9a4032ba08ae7f7be3cc670b7ff93206->m_frame.f_lineno = 325;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_source_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__major_index_fancy, call_args );
        }

        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__get_submatrix );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_minor;
        CHECK_OBJECT( par_col );
        tmp_dict_value_1 = par_col;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_9a4032ba08ae7f7be3cc670b7ff93206->m_frame.f_lineno = 325;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a4032ba08ae7f7be3cc670b7ff93206 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a4032ba08ae7f7be3cc670b7ff93206 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a4032ba08ae7f7be3cc670b7ff93206 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9a4032ba08ae7f7be3cc670b7ff93206, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9a4032ba08ae7f7be3cc670b7ff93206->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9a4032ba08ae7f7be3cc670b7ff93206, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9a4032ba08ae7f7be3cc670b7ff93206,
        type_description_1,
        par_self,
        par_row,
        par_col
    );


    // Release cached frame.
    if ( frame_9a4032ba08ae7f7be3cc670b7ff93206 == cache_frame_9a4032ba08ae7f7be3cc670b7ff93206 )
    {
        Py_DECREF( frame_9a4032ba08ae7f7be3cc670b7ff93206 );
    }
    cache_frame_9a4032ba08ae7f7be3cc670b7ff93206 = NULL;

    assertFrameObject( frame_9a4032ba08ae7f7be3cc670b7ff93206 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_15__get_arrayXslice );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_row );
    Py_DECREF( par_row );
    par_row = NULL;

    CHECK_OBJECT( (PyObject *)par_col );
    Py_DECREF( par_col );
    par_col = NULL;

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

    CHECK_OBJECT( (PyObject *)par_row );
    Py_DECREF( par_row );
    par_row = NULL;

    CHECK_OBJECT( (PyObject *)par_col );
    Py_DECREF( par_col );
    par_col = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_15__get_arrayXslice );
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


static PyObject *impl_scipy$sparse$csr$$$function_16_isspmatrix_csr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_108d1ab8dbaeb975bc5274152acdd558;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_108d1ab8dbaeb975bc5274152acdd558 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_108d1ab8dbaeb975bc5274152acdd558, codeobj_108d1ab8dbaeb975bc5274152acdd558, module_scipy$sparse$csr, sizeof(void *) );
    frame_108d1ab8dbaeb975bc5274152acdd558 = cache_frame_108d1ab8dbaeb975bc5274152acdd558;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_108d1ab8dbaeb975bc5274152acdd558 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_108d1ab8dbaeb975bc5274152acdd558 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_isinstance_inst_1 = par_x;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_csr_matrix );

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

            exception_lineno = 351;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 351;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_108d1ab8dbaeb975bc5274152acdd558 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_108d1ab8dbaeb975bc5274152acdd558 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_108d1ab8dbaeb975bc5274152acdd558 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_108d1ab8dbaeb975bc5274152acdd558, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_108d1ab8dbaeb975bc5274152acdd558->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_108d1ab8dbaeb975bc5274152acdd558, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_108d1ab8dbaeb975bc5274152acdd558,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_108d1ab8dbaeb975bc5274152acdd558 == cache_frame_108d1ab8dbaeb975bc5274152acdd558 )
    {
        Py_DECREF( frame_108d1ab8dbaeb975bc5274152acdd558 );
    }
    cache_frame_108d1ab8dbaeb975bc5274152acdd558 = NULL;

    assertFrameObject( frame_108d1ab8dbaeb975bc5274152acdd558 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_16_isspmatrix_csr );
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
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csr$$$function_16_isspmatrix_csr );
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



static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_10__get_intXarray(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csr$$$function_10__get_intXarray,
        const_str_plain__get_intXarray,
#if PYTHON_VERSION >= 300
        const_str_digest_cca046b924ccd23efa439053770243b8,
#endif
        codeobj_e50c80017cb7dc4f44c55178e3f60159,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_11__get_intXslice(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csr$$$function_11__get_intXslice,
        const_str_plain__get_intXslice,
#if PYTHON_VERSION >= 300
        const_str_digest_1346614ceb8757f47d1ef7e860d09147,
#endif
        codeobj_2d197ca50c29eab1ca4f630791f0cc95,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_12__get_sliceXint(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csr$$$function_12__get_sliceXint,
        const_str_plain__get_sliceXint,
#if PYTHON_VERSION >= 300
        const_str_digest_d0f5f3304ccce7953bff4c1238fd634d,
#endif
        codeobj_fcd6ca8181de8f8b9a365c47562b4c18,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_13__get_sliceXarray(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csr$$$function_13__get_sliceXarray,
        const_str_plain__get_sliceXarray,
#if PYTHON_VERSION >= 300
        const_str_digest_76356a684e4d7841a8b73483e14a2bd4,
#endif
        codeobj_7f365766f8ceafdcb2ef9fdabcd35a2f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_14__get_arrayXint(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csr$$$function_14__get_arrayXint,
        const_str_plain__get_arrayXint,
#if PYTHON_VERSION >= 300
        const_str_digest_bc9453a4fe1bc0a3d9a82c60e1ce017a,
#endif
        codeobj_7999d1dd40077406928096b8cd46e31b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_15__get_arrayXslice(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csr$$$function_15__get_arrayXslice,
        const_str_plain__get_arrayXslice,
#if PYTHON_VERSION >= 300
        const_str_digest_2501cd96d895390b2151e5462fb157f4,
#endif
        codeobj_9a4032ba08ae7f7be3cc670b7ff93206,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_16_isspmatrix_csr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csr$$$function_16_isspmatrix_csr,
        const_str_plain_isspmatrix_csr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_108d1ab8dbaeb975bc5274152acdd558,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csr,
        const_str_digest_c2cc2c5adff71f4b09fe65736849c7e9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_1_transpose( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csr$$$function_1_transpose,
        const_str_plain_transpose,
#if PYTHON_VERSION >= 300
        const_str_digest_a312756b77b9be66821594c4ca57fc4d,
#endif
        codeobj_d9d233f5bc180404fbb41f1c5e0ebf4d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_2_tolil( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csr$$$function_2_tolil,
        const_str_plain_tolil,
#if PYTHON_VERSION >= 300
        const_str_digest_e3f4280e34badc0917f32516215b467f,
#endif
        codeobj_c6383d9797de9950d7e4d68388c65668,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_3_tocsr( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csr$$$function_3_tocsr,
        const_str_plain_tocsr,
#if PYTHON_VERSION >= 300
        const_str_digest_2b4b2904a33de8fed3d1208f30009a01,
#endif
        codeobj_10cca7d43f89827b8f6bff377fbbc7b1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_4_tocsc( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csr$$$function_4_tocsc,
        const_str_plain_tocsc,
#if PYTHON_VERSION >= 300
        const_str_digest_6f2ebd097735788c18cfb54da56412c7,
#endif
        codeobj_6fcac3d82b69b07c84af19086af8bfc4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_5_tobsr( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csr$$$function_5_tobsr,
        const_str_plain_tobsr,
#if PYTHON_VERSION >= 300
        const_str_digest_ecb75f8652c241b4d6dd45125e63538d,
#endif
        codeobj_99b399e64ec17baa9d3c7e971368203e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_6__swap(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csr$$$function_6__swap,
        const_str_plain__swap,
#if PYTHON_VERSION >= 300
        const_str_digest_c413276f7bf54c3d5436d22b664aeeb8,
#endif
        codeobj_db7e2a331d11d14a352c4d715c9f561e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csr,
        const_str_digest_0c99774661662127e01320e28464e03d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_7___iter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csr$$$function_7___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 300
        const_str_digest_81cde62be4c73d6a27e797419f2f7b52,
#endif
        codeobj_b00788ea6da86d956853af9eda214158,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_8_getrow(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csr$$$function_8_getrow,
        const_str_plain_getrow,
#if PYTHON_VERSION >= 300
        const_str_digest_0d7ce383d6bcbcbd9b2a45ad974c24ac,
#endif
        codeobj_f2b5b95278406b53bf2c92d77f45658d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csr,
        const_str_digest_0150659f9f0791193f239e0c4134b553,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csr$$$function_9_getcol(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csr$$$function_9_getcol,
        const_str_plain_getcol,
#if PYTHON_VERSION >= 300
        const_str_digest_7b2cda98b59c6b1605ee87aa16b985a7,
#endif
        codeobj_1f82b6ac6e7b50bb6c9a321f454c922b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csr,
        const_str_digest_37b70b90954a7b618fddbec819d4dd01,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$csr =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.csr",
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

MOD_INIT_DECL( scipy$sparse$csr )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$csr );
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
    puts("scipy.sparse.csr: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.csr: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.csr: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$sparse$csr" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$csr = Py_InitModule4(
        "scipy.sparse.csr",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$sparse$csr = PyModule_Create( &mdef_scipy$sparse$csr );
#endif

    moduledict_scipy$sparse$csr = MODULE_DICT( module_scipy$sparse$csr );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$sparse$csr,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$sparse$csr,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$csr,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$csr,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$sparse$csr );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_30a709741156267e72f59280e09d2c8e, module_scipy$sparse$csr );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    struct Nuitka_FrameObject *frame_4c11c9f8e4e047a239b6ed47e9a3e9c3;
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
    PyObject *locals_scipy$sparse$csr_20 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_4eaf5761065d4855f840b7630c072e3d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4eaf5761065d4855f840b7630c072e3d_2 = NULL;
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
        tmp_assign_source_1 = const_str_digest_21a40118994cde2edbeec424bb7c9b89;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_4c11c9f8e4e047a239b6ed47e9a3e9c3 = MAKE_MODULE_FRAME( codeobj_4c11c9f8e4e047a239b6ed47e9a3e9c3, module_scipy$sparse$csr );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_4c11c9f8e4e047a239b6ed47e9a3e9c3 );
    assert( Py_REFCNT( frame_4c11c9f8e4e047a239b6ed47e9a3e9c3 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_4c11c9f8e4e047a239b6ed47e9a3e9c3->m_frame.f_lineno = 3;
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


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_assign_source_8 = const_str_digest_e58b8e238daae7f316f45d0978267798;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___docformat__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = LIST_COPY( const_list_str_plain_csr_matrix_str_plain_isspmatrix_csr_list );
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$csr;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_4c11c9f8e4e047a239b6ed47e9a3e9c3->m_frame.f_lineno = 9;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_c88389693d9d476899c1c6e170568469;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$sparse$csr;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_xrange_tuple;
        tmp_level_name_2 = const_int_0;
        frame_4c11c9f8e4e047a239b6ed47e9a3e9c3->m_frame.f_lineno = 10;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_xrange );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_base;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$sparse$csr;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_spmatrix_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_4c11c9f8e4e047a239b6ed47e9a3e9c3->m_frame.f_lineno = 12;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$sparse$csr,
                const_str_plain_spmatrix,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_spmatrix );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_spmatrix, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain__sparsetools;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$sparse$csr;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_4435daf59841c2a3341816e701f8cb85_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_4c11c9f8e4e047a239b6ed47e9a3e9c3->m_frame.f_lineno = 13;
        tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_scipy$sparse$csr,
                const_str_plain_csr_tocsc,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_csr_tocsc );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_csr_tocsc, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$sparse$csr,
                const_str_plain_csr_tobsr,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_csr_tobsr );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_csr_tobsr, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_scipy$sparse$csr,
                const_str_plain_csr_count_blocks,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_csr_count_blocks );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_csr_count_blocks, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$sparse$csr,
                const_str_plain_get_csr_submatrix,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_get_csr_submatrix );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_get_csr_submatrix, tmp_assign_source_17 );
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
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_sputils;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$sparse$csr;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_upcast_str_plain_get_index_dtype_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_4c11c9f8e4e047a239b6ed47e9a3e9c3->m_frame.f_lineno = 15;
        tmp_assign_source_18 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy$sparse$csr,
                const_str_plain_upcast,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_upcast );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_upcast, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_scipy$sparse$csr,
                const_str_plain_get_index_dtype,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_get_index_dtype );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_get_index_dtype, tmp_assign_source_20 );
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_compressed;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$sparse$csr;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain__cs_matrix_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_4c11c9f8e4e047a239b6ed47e9a3e9c3->m_frame.f_lineno = 17;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_12 ) )
        {
           tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_scipy$sparse$csr,
                const_str_plain__cs_matrix,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain__cs_matrix );
        }

        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain__cs_matrix, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain__cs_matrix );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cs_matrix );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
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
    // Tried code:
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


            exception_lineno = 20;

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


            exception_lineno = 20;

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


            exception_lineno = 20;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

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


            exception_lineno = 20;

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


            exception_lineno = 20;

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


            exception_lineno = 20;

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


                exception_lineno = 20;

                goto try_except_handler_4;
            }
            tmp_tuple_element_2 = const_str_plain_csr_matrix;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_4c11c9f8e4e047a239b6ed47e9a3e9c3->m_frame.f_lineno = 20;
            tmp_assign_source_25 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;

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


                exception_lineno = 20;

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


                    exception_lineno = 20;

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

                    exception_lineno = 20;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 20;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 20;
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
            locals_scipy$sparse$csr_20 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_30a709741156267e72f59280e09d2c8e;
        tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_digest_01b9d2ddd97c52e325ee6570d757dcf8;
        tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_csr_matrix;
        tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto try_except_handler_6;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_4eaf5761065d4855f840b7630c072e3d_2, codeobj_4eaf5761065d4855f840b7630c072e3d, module_scipy$sparse$csr, sizeof(void *) );
        frame_4eaf5761065d4855f840b7630c072e3d_2 = cache_frame_4eaf5761065d4855f840b7630c072e3d_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_4eaf5761065d4855f840b7630c072e3d_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_4eaf5761065d4855f840b7630c072e3d_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_plain_csr;
        tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain_format, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_false_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$csr$$$function_1_transpose( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain_transpose, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_assattr_target_3;
            tmp_source_name_6 = PyObject_GetItem( locals_scipy$sparse$csr_20, const_str_plain_spmatrix );

            if ( tmp_source_name_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_spmatrix );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_spmatrix );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "spmatrix" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 140;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_6 = tmp_mvar_value_4;
                Py_INCREF( tmp_source_name_6 );
                }
            }

            tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_transpose );
            Py_DECREF( tmp_source_name_6 );
            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___doc__ );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_assattr_target_3 = PyObject_GetItem( locals_scipy$sparse$csr_20, const_str_plain_transpose );

            if ( tmp_assattr_target_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_assattr_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "transpose" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_assattr_target_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assattr_name_3 );

                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain___doc__, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_target_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$csr$$$function_2_tolil( tmp_defaults_2 );



            tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain_tolil, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_assattr_target_4;
            tmp_source_name_8 = PyObject_GetItem( locals_scipy$sparse$csr_20, const_str_plain_spmatrix );

            if ( tmp_source_name_8 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_spmatrix );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_spmatrix );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "spmatrix" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 158;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_8 = tmp_mvar_value_5;
                Py_INCREF( tmp_source_name_8 );
                }
            }

            tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_tolil );
            Py_DECREF( tmp_source_name_8 );
            if ( tmp_source_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___doc__ );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_assattr_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_assattr_target_4 = PyObject_GetItem( locals_scipy$sparse$csr_20, const_str_plain_tolil );

            if ( tmp_assattr_target_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_assattr_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tolil" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_assattr_target_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assattr_name_4 );

                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain___doc__, tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_target_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$csr$$$function_3_tocsr( tmp_defaults_3 );



            tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain_tocsr, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_source_name_9;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_assattr_target_5;
            tmp_source_name_10 = PyObject_GetItem( locals_scipy$sparse$csr_20, const_str_plain_spmatrix );

            if ( tmp_source_name_10 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_spmatrix );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_spmatrix );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "spmatrix" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 166;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_10 = tmp_mvar_value_6;
                Py_INCREF( tmp_source_name_10 );
                }
            }

            tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_tocsr );
            Py_DECREF( tmp_source_name_10 );
            if ( tmp_source_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___doc__ );
            Py_DECREF( tmp_source_name_9 );
            if ( tmp_assattr_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_assattr_target_5 = PyObject_GetItem( locals_scipy$sparse$csr_20, const_str_plain_tocsr );

            if ( tmp_assattr_target_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_assattr_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tocsr" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_assattr_target_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assattr_name_5 );

                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain___doc__, tmp_assattr_name_5 );
            Py_DECREF( tmp_assattr_name_5 );
            Py_DECREF( tmp_assattr_target_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$csr$$$function_4_tocsc( tmp_defaults_4 );



            tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain_tocsc, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_source_name_11;
            PyObject *tmp_source_name_12;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_assattr_target_6;
            tmp_source_name_12 = PyObject_GetItem( locals_scipy$sparse$csr_20, const_str_plain_spmatrix );

            if ( tmp_source_name_12 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_spmatrix );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_spmatrix );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "spmatrix" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 188;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_12 = tmp_mvar_value_7;
                Py_INCREF( tmp_source_name_12 );
                }
            }

            tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_tocsc );
            Py_DECREF( tmp_source_name_12 );
            if ( tmp_source_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_assattr_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___doc__ );
            Py_DECREF( tmp_source_name_11 );
            if ( tmp_assattr_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_assattr_target_6 = PyObject_GetItem( locals_scipy$sparse$csr_20, const_str_plain_tocsc );

            if ( tmp_assattr_target_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_assattr_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tocsc" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_assattr_target_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assattr_name_6 );

                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain___doc__, tmp_assattr_name_6 );
            Py_DECREF( tmp_assattr_name_6 );
            Py_DECREF( tmp_assattr_target_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_none_true_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$csr$$$function_5_tobsr( tmp_defaults_5 );



            tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain_tobsr, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_assattr_name_7;
            PyObject *tmp_source_name_13;
            PyObject *tmp_source_name_14;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_assattr_target_7;
            tmp_source_name_14 = PyObject_GetItem( locals_scipy$sparse$csr_20, const_str_plain_spmatrix );

            if ( tmp_source_name_14 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_spmatrix );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_spmatrix );
                }

                if ( tmp_mvar_value_8 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "spmatrix" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 224;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_14 = tmp_mvar_value_8;
                Py_INCREF( tmp_source_name_14 );
                }
            }

            tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_tobsr );
            Py_DECREF( tmp_source_name_14 );
            if ( tmp_source_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_assattr_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___doc__ );
            Py_DECREF( tmp_source_name_13 );
            if ( tmp_assattr_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_assattr_target_7 = PyObject_GetItem( locals_scipy$sparse$csr_20, const_str_plain_tobsr );

            if ( tmp_assattr_target_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_assattr_name_7 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tobsr" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_assattr_target_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assattr_name_7 );

                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain___doc__, tmp_assattr_name_7 );
            Py_DECREF( tmp_assattr_name_7 );
            Py_DECREF( tmp_assattr_target_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$csr$$$function_6__swap(  );



        tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain__swap, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$csr$$$function_7___iter__(  );



        tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain___iter__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$csr$$$function_8_getrow(  );



        tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain_getrow, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$csr$$$function_9_getcol(  );



        tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain_getcol, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 259;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$csr$$$function_10__get_intXarray(  );



        tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain__get_intXarray, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$csr$$$function_11__get_intXslice(  );



        tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain__get_intXslice, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$csr$$$function_12__get_sliceXint(  );



        tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain__get_sliceXint, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$csr$$$function_13__get_sliceXarray(  );



        tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain__get_sliceXarray, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$csr$$$function_14__get_arrayXint(  );



        tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain__get_arrayXint, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$csr$$$function_15__get_arrayXslice(  );



        tmp_res = PyObject_SetItem( locals_scipy$sparse$csr_20, const_str_plain__get_arrayXslice, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4eaf5761065d4855f840b7630c072e3d_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4eaf5761065d4855f840b7630c072e3d_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_4eaf5761065d4855f840b7630c072e3d_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_4eaf5761065d4855f840b7630c072e3d_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_4eaf5761065d4855f840b7630c072e3d_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_4eaf5761065d4855f840b7630c072e3d_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_4eaf5761065d4855f840b7630c072e3d_2 == cache_frame_4eaf5761065d4855f840b7630c072e3d_2 )
        {
            Py_DECREF( frame_4eaf5761065d4855f840b7630c072e3d_2 );
        }
        cache_frame_4eaf5761065d4855f840b7630c072e3d_2 = NULL;

        assertFrameObject( frame_4eaf5761065d4855f840b7630c072e3d_2 );

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
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_csr_matrix;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_scipy$sparse$csr_20;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_4c11c9f8e4e047a239b6ed47e9a3e9c3->m_frame.f_lineno = 20;
            tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;

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
        NUITKA_CANNOT_GET_HERE( scipy$sparse$csr );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_scipy$sparse$csr_20 );
        locals_scipy$sparse$csr_20 = NULL;
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

        Py_DECREF( locals_scipy$sparse$csr_20 );
        locals_scipy$sparse$csr_20 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$csr );
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
        NUITKA_CANNOT_GET_HERE( scipy$sparse$csr );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 20;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_csr_matrix, tmp_assign_source_27 );
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
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
    RESTORE_FRAME_EXCEPTION( frame_4c11c9f8e4e047a239b6ed47e9a3e9c3 );
#endif
    popFrameStack();

    assertFrameObject( frame_4c11c9f8e4e047a239b6ed47e9a3e9c3 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c11c9f8e4e047a239b6ed47e9a3e9c3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4c11c9f8e4e047a239b6ed47e9a3e9c3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4c11c9f8e4e047a239b6ed47e9a3e9c3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4c11c9f8e4e047a239b6ed47e9a3e9c3, exception_lineno );
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

    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_FUNCTION_scipy$sparse$csr$$$function_16_isspmatrix_csr(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain_isspmatrix_csr, tmp_assign_source_29 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csr, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$csr );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
