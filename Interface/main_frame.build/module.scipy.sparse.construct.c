/* Generated code for Python module 'scipy.sparse.construct'
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

/* The "_module_scipy$sparse$construct" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$sparse$construct;
PyDictObject *moduledict_scipy$sparse$construct;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_str_plain_get_randint_tuple;
extern PyObject *const_tuple_str_plain_xrange_tuple;
extern PyObject *const_str_plain_enumerate;
static PyObject *const_tuple_str_plain_d_none_tuple;
extern PyObject *const_str_plain_idx_dtype;
extern PyObject *const_str_plain_ones;
extern PyObject *const_str_plain_coo_matrix;
extern PyObject *const_str_plain_rand;
extern PyObject *const_str_plain_zip;
extern PyObject *const_tuple_int_neg_1_tuple;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple;
extern PyObject *const_str_plain_offset;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_bool;
static PyObject *const_list_str_plain_csr_str_plain_csc_list;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_vals;
extern PyObject *const_tuple_str_plain_dia_matrix_tuple;
static PyObject *const_str_plain_nmat;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_a;
extern PyObject *const_int_neg_1;
static PyObject *const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_indptr;
static PyObject *const_str_plain_other_axis;
static PyObject *const_str_digest_31fddb40eae1bc201f70c5874f2be1ed;
static PyObject *const_tuple_bbc68a7ba61273581c42ede81f728333_tuple;
extern PyObject *const_str_plain_toarray;
static PyObject *const_tuple_07943334dd16b05479ace4e7c34ba523_tuple;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_c120d86844567aebbd4b109e6590576a;
extern PyObject *const_str_plain_diagonal;
extern PyObject *const_str_plain_common_type;
static PyObject *const_str_digest_7008a8b5854e531ee8cf46a414202599;
extern PyObject *const_str_plain_dia;
extern PyObject *const_str_plain_astype;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_bmat;
extern PyObject *const_str_plain_random_state;
extern PyObject *const_str_plain___docformat__;
extern PyObject *const_str_plain_hstack;
static PyObject *const_tuple_str_plain_offset_str_plain_m_str_plain_n_tuple;
extern PyObject *const_str_plain_reshape;
static PyObject *const_str_digest_2fd8fde82fca89025f5caf20c8b81807;
extern PyObject *const_str_plain_blk;
extern PyObject *const_str_plain_choice;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_offsets;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_block;
extern PyObject *const_str_plain_L;
extern PyObject *const_str_digest_e58b8e238daae7f316f45d0978267798;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_b_tuple;
extern PyObject *const_str_plain_data;
static PyObject *const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple;
static PyObject *const_str_digest_53b11e6f1603cccc3afb15f515314475;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_digest_c88389693d9d476899c1c6e170568469;
extern PyObject *const_tuple_str_plain_coo_matrix_tuple;
static PyObject *const_str_digest_42ac3e0ab60e5231315f0f646f03cd36;
static PyObject *const_str_digest_2032251a696b0a271ea6872284deb8ed;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_diags;
static PyObject *const_tuple_660ab54e662d7846204cc0ed9255f331_tuple;
extern PyObject *const_str_plain_upcast;
static PyObject *const_str_digest_79974fb40b2a002e91589ff46a0b3bbb;
extern PyObject *const_str_plain_get_index_dtype;
static PyObject *const_tuple_str_plain_blk_tuple;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_nnz;
static PyObject *const_tuple_float_0_01_str_plain_coo_none_none_tuple;
static PyObject *const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple;
extern PyObject *const_str_plain_min;
static PyObject *const_str_plain_diagonals;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
static PyObject *const_str_digest_ed44fdbb63bd552418f942b7c1b082e4;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_int;
extern PyObject *const_dict_10010a04cba23a4ccc75195b8c45141a;
extern PyObject *const_str_plain_exp;
static PyObject *const_str_digest_9e903fdb3e0aea481d46e1a5c0a6029e;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_isscalarlike;
extern PyObject *const_str_plain_csc;
extern PyObject *const_str_plain_random;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_RandomState;
static PyObject *const_list_485093035f51a04f85d66107a71eb99e_list;
extern PyObject *const_str_plain_indices;
static PyObject *const_tuple_str_plain_n_str_plain_dtype_str_plain_format_tuple;
static PyObject *const_str_digest_a00ff8416db2dc8b6f95f91c54c87f6d;
extern PyObject *const_str_plain_arange;
static PyObject *const_str_digest_95344b67badea0fe9b4ba2b8c3b42370;
extern PyObject *const_str_plain_issubdtype;
extern PyObject *const_str_plain_blocks;
static PyObject *const_str_digest_bad3d0578f5b327c6828f89612d7d9cc;
static PyObject *const_str_digest_b4edd2169d17f58d4472709ab150203d;
static PyObject *const_tuple_none_int_0_type_float_none_tuple;
extern PyObject *const_str_plain_asformat;
static PyObject *const_str_digest_a9aaced8a4fb00549c7412c231b48d45;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_repeat;
extern PyObject *const_str_plain_get_randint;
static PyObject *const_tuple_a45c7d4b8c96d95ddfa26101b0373289_tuple;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple;
extern PyObject *const_tuple_str_plain_csc_matrix_tuple;
extern PyObject *const_str_plain_kron;
extern PyObject *const_str_plain_int64;
extern PyObject *const_str_plain_density;
extern PyObject *const_str_plain_dia_matrix;
static PyObject *const_str_digest_4d0994dd18779872ca9204780fb7bb1b;
static PyObject *const_str_plain_mats;
static PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_block_tuple;
extern PyObject *const_str_plain_intc;
extern PyObject *const_str_plain_b;
static PyObject *const_tuple_none_str_plain_csr_tuple;
extern PyObject *const_str_plain_integer;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_issparse;
extern PyObject *const_str_plain_rows;
extern PyObject *const_str_plain_xrange;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_str_plain_concatenate;
extern PyObject *const_complex_0_0__1_0;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_last_indptr;
extern PyObject *const_str_plain_vstack;
extern PyObject *const_str_plain_arrays;
extern PyObject *const_str_plain_idxs;
extern PyObject *const_str_plain_col;
extern PyObject *const_str_plain_K;
extern PyObject *const_int_0;
static PyObject *const_str_plain_sum_dim;
extern PyObject *const_tuple_slice_none_none_none_int_0_tuple;
extern PyObject *const_str_plain_eye;
extern PyObject *const_str_plain_row;
extern PyObject *const_str_plain_msg;
static PyObject *const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple;
extern PyObject *const_str_plain_mn;
static PyObject *const_tuple_int_0_none_none_none_tuple;
static PyObject *const_tuple_str_plain_blocks_str_plain_format_str_plain_dtype_tuple;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_B;
extern PyObject *const_str_plain_coo;
static PyObject *const_str_plain_kronsum;
static PyObject *const_tuple_str_plain_n_str_plain_randint_str_plain_dtype_tuple;
extern PyObject *const_str_plain_length;
extern PyObject *const_tuple_int_0_slice_none_none_none_tuple;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_ind;
extern PyObject *const_str_plain_atleast_1d;
extern PyObject *const_str_plain_maxval;
static PyObject *const_str_digest_67eaac68927c604e34c38ce9d71b4318;
extern PyObject *const_str_plain_identity;
static PyObject *const_str_digest_2c25ce0932880dc269c6382f3811da26;
extern PyObject *const_dict_8a6ce79bb59f45c062c2a0027a3a0c33;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain_flat;
extern PyObject *const_str_plain_iinfo;
static PyObject *const_str_plain_sum_indices;
extern PyObject *const_str_plain_randint;
extern PyObject *const_list_none_list;
static PyObject *const_str_digest_e3c332e4e4d4baa3f29ea94bb8ca26e6;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_d;
static PyObject *const_str_plain_got;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_tuple_str_plain_csr_matrix_tuple;
static PyObject *const_str_digest_55d464b4f378166ea6b20bd6cf129f76;
extern PyObject *const_str_plain_cumsum;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_f7274f670607744161893c02290b3fb7;
extern PyObject *const_str_plain_csc_matrix;
static PyObject *const_str_digest_5bc5002c7c16be2e92122022b6b6d1c3;
static PyObject *const_str_plain__compressed_sparse_stack;
extern PyObject *const_str_plain_tp;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_digest_a86d42b3a42277df12c37c3148547b24;
extern PyObject *const_float_0_01;
static PyObject *const_str_plain_spdiags;
static PyObject *const_tuple_none_str_plain_csc_tuple;
static PyObject *const_tuple_str_plain_n_str_plain_random_state_tuple;
extern PyObject *const_str_plain_complexfloating;
extern PyObject *const_tuple_str_plain_bsr_matrix_tuple;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_d7ee8ce1ad10754f2c30374b3a61d08a;
extern PyObject *const_str_plain_replace;
static PyObject *const_tuple_b8bf659a1937c946410e6791f73ab4c9_tuple;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_M;
extern PyObject *const_str_plain_data_arr;
static PyObject *const_str_plain_constant_dim;
extern PyObject *const_str_digest_8a28f7b9a9522850cd344443248d7259;
static PyObject *const_str_digest_e084eb31a2c6e8a75dbdd9ebf2df041d;
static PyObject *const_str_digest_dc78e6ed247d9477cd6371045d50d373;
extern PyObject *const_tuple_str_plain_b_tuple;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_tuple_str_plain_issparse_tuple;
static PyObject *const_tuple_5270fbb3e2a81bbef00d786e2ddbf939_tuple;
static PyObject *const_str_digest_64753bb9d7a82061d94cce40c72a8e61;
extern PyObject *const_str_plain_floor;
extern PyObject *const_str_plain_R;
extern PyObject *const_slice_none_none_none;
static PyObject *const_str_digest_8c58e7dc0dc476c14535a73a9323c136;
static PyObject *const_str_plain_data_rvs;
extern PyObject *const_str_plain_ia;
extern PyObject *const_str_plain_sputils;
extern PyObject *const_str_plain_csr_matrix;
extern PyObject *const_str_plain_csr;
static PyObject *const_str_digest_2a04e8a0f364a87b68ec195b6e01d796;
extern PyObject *const_str_plain_output_shape;
static PyObject *const_str_digest_e8c218e2459ecbc0770b6fd6517590e7;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
extern PyObject *const_str_plain_block_diag;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_bsr_matrix;
extern PyObject *const_str_plain_format;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_tuple_float_0_01_str_plain_coo_none_none_none_tuple;
static PyObject *const_str_digest_5c30678dff0062ffb4ae24218044f886;
extern PyObject *const_str_plain_bsr;
static PyObject *const_dict_5ab4855118dc1dee85b08d612b753df7;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_get_randint_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_randint_tuple, 0, const_str_plain_get_randint ); Py_INCREF( const_str_plain_get_randint );
    const_tuple_str_plain_d_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_d_none_tuple, 0, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_str_plain_d_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple, 1, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple, 2, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple, 3, const_str_plain_output_shape ); Py_INCREF( const_str_plain_output_shape );
    PyTuple_SET_ITEM( const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple, 4, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple, 5, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    PyTuple_SET_ITEM( const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple, 6, const_str_plain_col ); Py_INCREF( const_str_plain_col );
    const_list_str_plain_csr_str_plain_csc_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_csr_str_plain_csc_list, 0, const_str_plain_csr ); Py_INCREF( const_str_plain_csr );
    PyList_SET_ITEM( const_list_str_plain_csr_str_plain_csc_list, 1, const_str_plain_csc ); Py_INCREF( const_str_plain_csc );
    const_str_plain_nmat = UNSTREAM_STRING_ASCII( &constant_bin[ 878881 ], 4, 1 );
    const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 0, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 2, const_str_plain_density ); Py_INCREF( const_str_plain_density );
    PyTuple_SET_ITEM( const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 3, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 4, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 5, const_str_plain_random_state ); Py_INCREF( const_str_plain_random_state );
    const_str_plain_data_rvs = UNSTREAM_STRING_ASCII( &constant_bin[ 5331615 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 6, const_str_plain_data_rvs ); Py_INCREF( const_str_plain_data_rvs );
    PyTuple_SET_ITEM( const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 7, const_str_plain_mn ); Py_INCREF( const_str_plain_mn );
    PyTuple_SET_ITEM( const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 8, const_str_plain_tp ); Py_INCREF( const_str_plain_tp );
    PyTuple_SET_ITEM( const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 9, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 10, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 11, const_str_plain_randint ); Py_INCREF( const_str_plain_randint );
    PyTuple_SET_ITEM( const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 12, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    PyTuple_SET_ITEM( const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 13, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 14, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 15, const_str_plain_vals ); Py_INCREF( const_str_plain_vals );
    const_str_plain_other_axis = UNSTREAM_STRING_ASCII( &constant_bin[ 5331623 ], 10, 1 );
    const_str_digest_31fddb40eae1bc201f70c5874f2be1ed = UNSTREAM_STRING_ASCII( &constant_bin[ 5331633 ], 43, 0 );
    const_tuple_bbc68a7ba61273581c42ede81f728333_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_bbc68a7ba61273581c42ede81f728333_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_bbc68a7ba61273581c42ede81f728333_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_bbc68a7ba61273581c42ede81f728333_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_tuple_07943334dd16b05479ace4e7c34ba523_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_07943334dd16b05479ace4e7c34ba523_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_07943334dd16b05479ace4e7c34ba523_tuple, 1, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_07943334dd16b05479ace4e7c34ba523_tuple, 2, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_07943334dd16b05479ace4e7c34ba523_tuple, 3, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_07943334dd16b05479ace4e7c34ba523_tuple, 4, const_str_plain_L ); Py_INCREF( const_str_plain_L );
    PyTuple_SET_ITEM( const_tuple_07943334dd16b05479ace4e7c34ba523_tuple, 5, const_str_plain_R ); Py_INCREF( const_str_plain_R );
    const_str_digest_c120d86844567aebbd4b109e6590576a = UNSTREAM_STRING_ASCII( &constant_bin[ 5331676 ], 34, 0 );
    const_str_digest_7008a8b5854e531ee8cf46a414202599 = UNSTREAM_STRING_ASCII( &constant_bin[ 5331710 ], 101, 0 );
    const_tuple_str_plain_offset_str_plain_m_str_plain_n_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_offset_str_plain_m_str_plain_n_tuple, 0, const_str_plain_offset ); Py_INCREF( const_str_plain_offset );
    PyTuple_SET_ITEM( const_tuple_str_plain_offset_str_plain_m_str_plain_n_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_str_plain_offset_str_plain_m_str_plain_n_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_digest_2fd8fde82fca89025f5caf20c8b81807 = UNSTREAM_STRING_ASCII( &constant_bin[ 5331811 ], 816, 0 );
    const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple, 0, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple, 2, const_str_plain_density ); Py_INCREF( const_str_plain_density );
    PyTuple_SET_ITEM( const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple, 3, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple, 4, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple, 5, const_str_plain_random_state ); Py_INCREF( const_str_plain_random_state );
    const_str_digest_53b11e6f1603cccc3afb15f515314475 = UNSTREAM_STRING_ASCII( &constant_bin[ 5332627 ], 947, 0 );
    const_str_digest_42ac3e0ab60e5231315f0f646f03cd36 = UNSTREAM_STRING_ASCII( &constant_bin[ 5333574 ], 85, 0 );
    const_str_digest_2032251a696b0a271ea6872284deb8ed = UNSTREAM_STRING_ASCII( &constant_bin[ 5333659 ], 101, 0 );
    const_tuple_660ab54e662d7846204cc0ed9255f331_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_660ab54e662d7846204cc0ed9255f331_tuple, 0, const_str_plain_upcast ); Py_INCREF( const_str_plain_upcast );
    PyTuple_SET_ITEM( const_tuple_660ab54e662d7846204cc0ed9255f331_tuple, 1, const_str_plain_get_index_dtype ); Py_INCREF( const_str_plain_get_index_dtype );
    PyTuple_SET_ITEM( const_tuple_660ab54e662d7846204cc0ed9255f331_tuple, 2, const_str_plain_isscalarlike ); Py_INCREF( const_str_plain_isscalarlike );
    const_str_digest_79974fb40b2a002e91589ff46a0b3bbb = UNSTREAM_STRING_ASCII( &constant_bin[ 5333760 ], 39, 0 );
    const_tuple_str_plain_blk_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_blk_tuple, 0, const_str_plain_blk ); Py_INCREF( const_str_plain_blk );
    const_tuple_float_0_01_str_plain_coo_none_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_float_0_01_str_plain_coo_none_none_tuple, 0, const_float_0_01 ); Py_INCREF( const_float_0_01 );
    PyTuple_SET_ITEM( const_tuple_float_0_01_str_plain_coo_none_none_tuple, 1, const_str_plain_coo ); Py_INCREF( const_str_plain_coo );
    PyTuple_SET_ITEM( const_tuple_float_0_01_str_plain_coo_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_float_0_01_str_plain_coo_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple = PyTuple_New( 8 );
    const_str_plain_mats = UNSTREAM_STRING_ASCII( &constant_bin[ 10408 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 0, const_str_plain_mats ); Py_INCREF( const_str_plain_mats );
    PyTuple_SET_ITEM( const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 1, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 3, const_str_plain_nmat ); Py_INCREF( const_str_plain_nmat );
    PyTuple_SET_ITEM( const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 4, const_str_plain_rows ); Py_INCREF( const_str_plain_rows );
    PyTuple_SET_ITEM( const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 5, const_str_plain_ia ); Py_INCREF( const_str_plain_ia );
    PyTuple_SET_ITEM( const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 6, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 7, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    const_str_plain_diagonals = UNSTREAM_STRING_ASCII( &constant_bin[ 2294385 ], 9, 1 );
    const_str_digest_ed44fdbb63bd552418f942b7c1b082e4 = UNSTREAM_STRING_ASCII( &constant_bin[ 5333799 ], 42, 0 );
    const_str_digest_9e903fdb3e0aea481d46e1a5c0a6029e = UNSTREAM_STRING_ASCII( &constant_bin[ 5333841 ], 135, 0 );
    const_list_485093035f51a04f85d66107a71eb99e_list = PyList_New( 12 );
    const_str_plain_spdiags = UNSTREAM_STRING_ASCII( &constant_bin[ 5289715 ], 7, 1 );
    PyList_SET_ITEM( const_list_485093035f51a04f85d66107a71eb99e_list, 0, const_str_plain_spdiags ); Py_INCREF( const_str_plain_spdiags );
    PyList_SET_ITEM( const_list_485093035f51a04f85d66107a71eb99e_list, 1, const_str_plain_eye ); Py_INCREF( const_str_plain_eye );
    PyList_SET_ITEM( const_list_485093035f51a04f85d66107a71eb99e_list, 2, const_str_plain_identity ); Py_INCREF( const_str_plain_identity );
    PyList_SET_ITEM( const_list_485093035f51a04f85d66107a71eb99e_list, 3, const_str_plain_kron ); Py_INCREF( const_str_plain_kron );
    const_str_plain_kronsum = UNSTREAM_STRING_ASCII( &constant_bin[ 5289620 ], 7, 1 );
    PyList_SET_ITEM( const_list_485093035f51a04f85d66107a71eb99e_list, 4, const_str_plain_kronsum ); Py_INCREF( const_str_plain_kronsum );
    PyList_SET_ITEM( const_list_485093035f51a04f85d66107a71eb99e_list, 5, const_str_plain_hstack ); Py_INCREF( const_str_plain_hstack );
    PyList_SET_ITEM( const_list_485093035f51a04f85d66107a71eb99e_list, 6, const_str_plain_vstack ); Py_INCREF( const_str_plain_vstack );
    PyList_SET_ITEM( const_list_485093035f51a04f85d66107a71eb99e_list, 7, const_str_plain_bmat ); Py_INCREF( const_str_plain_bmat );
    PyList_SET_ITEM( const_list_485093035f51a04f85d66107a71eb99e_list, 8, const_str_plain_rand ); Py_INCREF( const_str_plain_rand );
    PyList_SET_ITEM( const_list_485093035f51a04f85d66107a71eb99e_list, 9, const_str_plain_random ); Py_INCREF( const_str_plain_random );
    PyList_SET_ITEM( const_list_485093035f51a04f85d66107a71eb99e_list, 10, const_str_plain_diags ); Py_INCREF( const_str_plain_diags );
    PyList_SET_ITEM( const_list_485093035f51a04f85d66107a71eb99e_list, 11, const_str_plain_block_diag ); Py_INCREF( const_str_plain_block_diag );
    const_tuple_str_plain_n_str_plain_dtype_str_plain_format_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_dtype_str_plain_format_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_dtype_str_plain_format_tuple, 1, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_dtype_str_plain_format_tuple, 2, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    const_str_digest_a00ff8416db2dc8b6f95f91c54c87f6d = UNSTREAM_STRING_ASCII( &constant_bin[ 5333976 ], 1373, 0 );
    const_str_digest_95344b67badea0fe9b4ba2b8c3b42370 = UNSTREAM_STRING_ASCII( &constant_bin[ 5335349 ], 35, 0 );
    const_str_digest_bad3d0578f5b327c6828f89612d7d9cc = UNSTREAM_STRING_ASCII( &constant_bin[ 5335384 ], 23, 0 );
    const_str_digest_b4edd2169d17f58d4472709ab150203d = UNSTREAM_STRING_ASCII( &constant_bin[ 5335407 ], 857, 0 );
    const_tuple_none_int_0_type_float_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_int_0_type_float_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_0_type_float_none_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_none_int_0_type_float_none_tuple, 2, (PyObject *)&PyFloat_Type ); Py_INCREF( (PyObject *)&PyFloat_Type );
    PyTuple_SET_ITEM( const_tuple_none_int_0_type_float_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_digest_a9aaced8a4fb00549c7412c231b48d45 = UNSTREAM_STRING_ASCII( &constant_bin[ 5336264 ], 714, 0 );
    const_tuple_a45c7d4b8c96d95ddfa26101b0373289_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_a45c7d4b8c96d95ddfa26101b0373289_tuple, 0, const_str_plain_blocks ); Py_INCREF( const_str_plain_blocks );
    PyTuple_SET_ITEM( const_tuple_a45c7d4b8c96d95ddfa26101b0373289_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_a45c7d4b8c96d95ddfa26101b0373289_tuple, 2, const_str_plain_other_axis ); Py_INCREF( const_str_plain_other_axis );
    PyTuple_SET_ITEM( const_tuple_a45c7d4b8c96d95ddfa26101b0373289_tuple, 3, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_plain_constant_dim = UNSTREAM_STRING_ASCII( &constant_bin[ 5336978 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_a45c7d4b8c96d95ddfa26101b0373289_tuple, 4, const_str_plain_constant_dim ); Py_INCREF( const_str_plain_constant_dim );
    PyTuple_SET_ITEM( const_tuple_a45c7d4b8c96d95ddfa26101b0373289_tuple, 5, const_str_plain_idx_dtype ); Py_INCREF( const_str_plain_idx_dtype );
    PyTuple_SET_ITEM( const_tuple_a45c7d4b8c96d95ddfa26101b0373289_tuple, 6, const_str_plain_indices ); Py_INCREF( const_str_plain_indices );
    PyTuple_SET_ITEM( const_tuple_a45c7d4b8c96d95ddfa26101b0373289_tuple, 7, const_str_plain_indptr ); Py_INCREF( const_str_plain_indptr );
    const_str_plain_last_indptr = UNSTREAM_STRING_ASCII( &constant_bin[ 5336990 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_a45c7d4b8c96d95ddfa26101b0373289_tuple, 8, const_str_plain_last_indptr ); Py_INCREF( const_str_plain_last_indptr );
    const_str_plain_sum_dim = UNSTREAM_STRING_ASCII( &constant_bin[ 5337001 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_a45c7d4b8c96d95ddfa26101b0373289_tuple, 9, const_str_plain_sum_dim ); Py_INCREF( const_str_plain_sum_dim );
    const_str_plain_sum_indices = UNSTREAM_STRING_ASCII( &constant_bin[ 5337008 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_a45c7d4b8c96d95ddfa26101b0373289_tuple, 10, const_str_plain_sum_indices ); Py_INCREF( const_str_plain_sum_indices );
    PyTuple_SET_ITEM( const_tuple_a45c7d4b8c96d95ddfa26101b0373289_tuple, 11, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_a45c7d4b8c96d95ddfa26101b0373289_tuple, 12, const_str_plain_idxs ); Py_INCREF( const_str_plain_idxs );
    const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple, 0, const_str_plain_diagonals ); Py_INCREF( const_str_plain_diagonals );
    PyTuple_SET_ITEM( const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple, 1, const_str_plain_offsets ); Py_INCREF( const_str_plain_offsets );
    PyTuple_SET_ITEM( const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple, 2, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple, 3, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple, 4, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple, 5, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple, 6, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple, 7, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple, 8, const_str_plain_data_arr ); Py_INCREF( const_str_plain_data_arr );
    PyTuple_SET_ITEM( const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple, 9, const_str_plain_K ); Py_INCREF( const_str_plain_K );
    PyTuple_SET_ITEM( const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple, 10, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple, 11, const_str_plain_diagonal ); Py_INCREF( const_str_plain_diagonal );
    PyTuple_SET_ITEM( const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple, 12, const_str_plain_offset ); Py_INCREF( const_str_plain_offset );
    PyTuple_SET_ITEM( const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple, 13, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple, 14, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    const_str_digest_4d0994dd18779872ca9204780fb7bb1b = UNSTREAM_STRING_ASCII( &constant_bin[ 5337019 ], 2078, 0 );
    const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_block_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_block_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_block_tuple, 1, const_str_plain_block ); Py_INCREF( const_str_plain_block );
    const_tuple_none_str_plain_csr_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_csr_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_csr_tuple, 1, const_str_plain_csr ); Py_INCREF( const_str_plain_csr );
    const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 0, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 3, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 4, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 5, const_str_plain_idx_dtype ); Py_INCREF( const_str_plain_idx_dtype );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 6, const_str_plain_indptr ); Py_INCREF( const_str_plain_indptr );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 7, const_str_plain_indices ); Py_INCREF( const_str_plain_indices );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 8, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 9, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 10, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 11, const_str_plain_col ); Py_INCREF( const_str_plain_col );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 12, const_str_plain_diags ); Py_INCREF( const_str_plain_diags );
    const_tuple_int_0_none_none_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_int_0_none_none_none_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_int_0_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_int_0_none_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_blocks_str_plain_format_str_plain_dtype_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_blocks_str_plain_format_str_plain_dtype_tuple, 0, const_str_plain_blocks ); Py_INCREF( const_str_plain_blocks );
    PyTuple_SET_ITEM( const_tuple_str_plain_blocks_str_plain_format_str_plain_dtype_tuple, 1, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_str_plain_blocks_str_plain_format_str_plain_dtype_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_tuple_str_plain_n_str_plain_randint_str_plain_dtype_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_randint_str_plain_dtype_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_randint_str_plain_dtype_tuple, 1, const_str_plain_randint ); Py_INCREF( const_str_plain_randint );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_randint_str_plain_dtype_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_str_digest_67eaac68927c604e34c38ce9d71b4318 = UNSTREAM_STRING_ASCII( &constant_bin[ 5339097 ], 15, 0 );
    const_str_digest_2c25ce0932880dc269c6382f3811da26 = UNSTREAM_STRING_ASCII( &constant_bin[ 5339112 ], 15, 0 );
    const_str_digest_e3c332e4e4d4baa3f29ea94bb8ca26e6 = UNSTREAM_STRING_ASCII( &constant_bin[ 5339127 ], 2630, 0 );
    const_str_plain_got = UNSTREAM_STRING_ASCII( &constant_bin[ 22422 ], 3, 1 );
    const_str_digest_55d464b4f378166ea6b20bd6cf129f76 = UNSTREAM_STRING_ASCII( &constant_bin[ 5341757 ], 859, 0 );
    const_str_digest_f7274f670607744161893c02290b3fb7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5342616 ], 1107, 0 );
    const_str_digest_5bc5002c7c16be2e92122022b6b6d1c3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5343723 ], 94, 0 );
    const_str_plain__compressed_sparse_stack = UNSTREAM_STRING_ASCII( &constant_bin[ 5331633 ], 24, 1 );
    const_tuple_none_str_plain_csc_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_csc_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_csc_tuple, 1, const_str_plain_csc ); Py_INCREF( const_str_plain_csc );
    const_tuple_str_plain_n_str_plain_random_state_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_random_state_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_random_state_tuple, 1, const_str_plain_random_state ); Py_INCREF( const_str_plain_random_state );
    const_str_digest_d7ee8ce1ad10754f2c30374b3a61d08a = UNSTREAM_STRING_ASCII( &constant_bin[ 5343817 ], 40, 0 );
    const_tuple_b8bf659a1937c946410e6791f73ab4c9_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5343857 ], 178 );
    const_str_digest_e084eb31a2c6e8a75dbdd9ebf2df041d = UNSTREAM_STRING_ASCII( &constant_bin[ 5344035 ], 527, 0 );
    const_str_digest_dc78e6ed247d9477cd6371045d50d373 = UNSTREAM_STRING_ASCII( &constant_bin[ 5344562 ], 794, 0 );
    const_tuple_5270fbb3e2a81bbef00d786e2ddbf939_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_5270fbb3e2a81bbef00d786e2ddbf939_tuple, 0, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_5270fbb3e2a81bbef00d786e2ddbf939_tuple, 1, const_str_plain_diags ); Py_INCREF( const_str_plain_diags );
    PyTuple_SET_ITEM( const_tuple_5270fbb3e2a81bbef00d786e2ddbf939_tuple, 2, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_5270fbb3e2a81bbef00d786e2ddbf939_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_5270fbb3e2a81bbef00d786e2ddbf939_tuple, 4, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    const_str_digest_64753bb9d7a82061d94cce40c72a8e61 = UNSTREAM_STRING_ASCII( &constant_bin[ 5345356 ], 24, 0 );
    const_str_digest_8c58e7dc0dc476c14535a73a9323c136 = UNSTREAM_STRING_ASCII( &constant_bin[ 5345380 ], 952, 0 );
    const_str_digest_2a04e8a0f364a87b68ec195b6e01d796 = UNSTREAM_STRING_ASCII( &constant_bin[ 5346332 ], 31, 0 );
    const_str_digest_e8c218e2459ecbc0770b6fd6517590e7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5346363 ], 18, 0 );
    const_tuple_float_0_01_str_plain_coo_none_none_none_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_float_0_01_str_plain_coo_none_none_none_tuple, 0, const_float_0_01 ); Py_INCREF( const_float_0_01 );
    PyTuple_SET_ITEM( const_tuple_float_0_01_str_plain_coo_none_none_none_tuple, 1, const_str_plain_coo ); Py_INCREF( const_str_plain_coo );
    PyTuple_SET_ITEM( const_tuple_float_0_01_str_plain_coo_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_float_0_01_str_plain_coo_none_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_float_0_01_str_plain_coo_none_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    const_str_digest_5c30678dff0062ffb4ae24218044f886 = UNSTREAM_STRING_ASCII( &constant_bin[ 5346381 ], 25, 0 );
    const_dict_5ab4855118dc1dee85b08d612b753df7 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_5ab4855118dc1dee85b08d612b753df7, const_str_plain_dtype, const_str_plain_object );
    assert( PyDict_Size( const_dict_5ab4855118dc1dee85b08d612b753df7 ) == 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$sparse$construct( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b3467028f6453f7916293b8fa42971b1;
static PyCodeObject *codeobj_6c1dec27a1b21324e84f1e54c7cbd204;
static PyCodeObject *codeobj_78f0a8050f6a321a0179fabb9c1b8a3a;
static PyCodeObject *codeobj_711053310f8dc4829a940e3c95517093;
static PyCodeObject *codeobj_b993a7e6715a704adec372303b590a4c;
static PyCodeObject *codeobj_a32dbb38160f11e6c33a219dd3788190;
static PyCodeObject *codeobj_3577735733f72252ebf8288b7e024fb6;
static PyCodeObject *codeobj_d709cd52fc18619f3d5f1065b13e4d37;
static PyCodeObject *codeobj_5690f7ccff881e6807c35ba6bf084140;
static PyCodeObject *codeobj_cb662daf9149dbc32e2624f951d946b0;
static PyCodeObject *codeobj_bee7f5c4d040444a673dc61ebdd0448e;
static PyCodeObject *codeobj_7e5da425d29fe04b4e6a7adc38d693b2;
static PyCodeObject *codeobj_72d15b9d18b0ea5f4d2a74a608e5043d;
static PyCodeObject *codeobj_c5c8a65f03fa8e7e1ece3fcf1b86af15;
static PyCodeObject *codeobj_3a276dd29323857a3d65d82f5a467803;
static PyCodeObject *codeobj_e247f8772b2b12b5d3ce6593dd5f7556;
static PyCodeObject *codeobj_2dfd65624c8a5bbe32ba1b779a97b97b;
static PyCodeObject *codeobj_19b6fb309e2f5a17a11c4b281e2f424e;
static PyCodeObject *codeobj_f3549ddbddf19afa809338ae6a042a4d;
static PyCodeObject *codeobj_669eb763640d0656b28bae531780e3b7;
static PyCodeObject *codeobj_0237e371e20d44b867f5e67b2aa075db;
static PyCodeObject *codeobj_4bb1682dd1887095d8206618145a8c0d;
static PyCodeObject *codeobj_f094f1e2fc0f452e9f9e5b0f0f432e07;
static PyCodeObject *codeobj_612d9006782ad8128772ab599dbd3cb1;
static PyCodeObject *codeobj_1b003c85600eaa13b3a1c89f5cb1ec13;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_5c30678dff0062ffb4ae24218044f886 );
    codeobj_b3467028f6453f7916293b8fa42971b1 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 412, const_tuple_bbc68a7ba61273581c42ede81f728333_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6c1dec27a1b21324e84f1e54c7cbd204 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 553, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_b_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_78f0a8050f6a321a0179fabb9c1b8a3a = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 560, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_b_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_711053310f8dc4829a940e3c95517093 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 598, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_block_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b993a7e6715a704adec372303b590a4c = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 165, const_tuple_str_plain_offset_str_plain_m_str_plain_n_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a32dbb38160f11e6c33a219dd3788190 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 407, const_tuple_str_plain_b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3577735733f72252ebf8288b7e024fb6 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 409, const_tuple_str_plain_b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d709cd52fc18619f3d5f1065b13e4d37 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 499, const_tuple_str_plain_b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5690f7ccff881e6807c35ba6bf084140 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 600, const_tuple_str_plain_blk_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cb662daf9149dbc32e2624f951d946b0 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2a04e8a0f364a87b68ec195b6e01d796, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_bee7f5c4d040444a673dc61ebdd0448e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compressed_sparse_stack, 401, const_tuple_a45c7d4b8c96d95ddfa26101b0373289_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7e5da425d29fe04b4e6a7adc38d693b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_block_diag, 626, const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_72d15b9d18b0ea5f4d2a74a608e5043d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bmat, 502, const_tuple_b8bf659a1937c946410e6791f73ab4c9_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c5c8a65f03fa8e7e1ece3fcf1b86af15 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_data_rvs, 779, const_tuple_str_plain_n_str_plain_randint_str_plain_dtype_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_3a276dd29323857a3d65d82f5a467803 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_data_rvs, 783, const_tuple_str_plain_n_str_plain_random_state_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_e247f8772b2b12b5d3ce6593dd5f7556 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_diags, 65, const_tuple_d7c11cc053e0ad66ca6fe0fc134afd90_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2dfd65624c8a5bbe32ba1b779a97b97b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_eye, 221, const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_19b6fb309e2f5a17a11c4b281e2f424e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hstack, 435, const_tuple_str_plain_blocks_str_plain_format_str_plain_dtype_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f3549ddbddf19afa809338ae6a042a4d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_identity, 191, const_tuple_str_plain_n_str_plain_dtype_str_plain_format_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_669eb763640d0656b28bae531780e3b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_kron, 276, const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0237e371e20d44b867f5e67b2aa075db = MAKE_CODEOBJ( module_filename_obj, const_str_plain_kronsum, 358, const_tuple_07943334dd16b05479ace4e7c34ba523_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4bb1682dd1887095d8206618145a8c0d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rand, 797, const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f094f1e2fc0f452e9f9e5b0f0f432e07 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_random, 680, const_tuple_2d892e93dfd1b97b5bfd51fe8c380a3a_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_612d9006782ad8128772ab599dbd3cb1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_spdiags, 27, const_tuple_5270fbb3e2a81bbef00d786e2ddbf939_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1b003c85600eaa13b3a1c89f5cb1ec13 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_vstack, 468, const_tuple_str_plain_blocks_str_plain_format_str_plain_dtype_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *scipy$sparse$construct$$$function_7__compressed_sparse_stack$$$genexpr_1_genexpr_maker( void );


static PyObject *scipy$sparse$construct$$$function_10_bmat$$$genexpr_1_genexpr_maker( void );


static PyObject *scipy$sparse$construct$$$function_10_bmat$$$genexpr_2_genexpr_maker( void );


static PyObject *scipy$sparse$construct$$$function_10_bmat$$$genexpr_3_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_10_bmat( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_11_block_diag( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_12_random( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_12_random$$$function_1_data_rvs(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_12_random$$$function_2_data_rvs(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_13_rand( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_1_spdiags( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_2_diags( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_3_identity( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_4_eye( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_5_kron( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_6_kronsum( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_7__compressed_sparse_stack(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_8_hstack( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_9_vstack( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$sparse$construct$$$function_1_spdiags( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
    PyObject *par_diags = python_pars[ 1 ];
    PyObject *par_m = python_pars[ 2 ];
    PyObject *par_n = python_pars[ 3 ];
    PyObject *par_format = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_612d9006782ad8128772ab599dbd3cb1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_612d9006782ad8128772ab599dbd3cb1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_612d9006782ad8128772ab599dbd3cb1, codeobj_612d9006782ad8128772ab599dbd3cb1, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_612d9006782ad8128772ab599dbd3cb1 = cache_frame_612d9006782ad8128772ab599dbd3cb1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_612d9006782ad8128772ab599dbd3cb1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_612d9006782ad8128772ab599dbd3cb1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_dia_matrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dia_matrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dia_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_data );
        tmp_tuple_element_2 = par_data;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_diags );
        tmp_tuple_element_2 = par_diags;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_shape;
        CHECK_OBJECT( par_m );
        tmp_tuple_element_3 = par_m;
        tmp_dict_value_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_n );
        tmp_tuple_element_3 = par_n;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dict_value_1, 1, tmp_tuple_element_3 );
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_612d9006782ad8128772ab599dbd3cb1->m_frame.f_lineno = 62;
        tmp_called_instance_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_format );
        tmp_args_element_name_1 = par_format;
        frame_612d9006782ad8128772ab599dbd3cb1->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asformat, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_612d9006782ad8128772ab599dbd3cb1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_612d9006782ad8128772ab599dbd3cb1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_612d9006782ad8128772ab599dbd3cb1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_612d9006782ad8128772ab599dbd3cb1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_612d9006782ad8128772ab599dbd3cb1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_612d9006782ad8128772ab599dbd3cb1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_612d9006782ad8128772ab599dbd3cb1,
        type_description_1,
        par_data,
        par_diags,
        par_m,
        par_n,
        par_format
    );


    // Release cached frame.
    if ( frame_612d9006782ad8128772ab599dbd3cb1 == cache_frame_612d9006782ad8128772ab599dbd3cb1 )
    {
        Py_DECREF( frame_612d9006782ad8128772ab599dbd3cb1 );
    }
    cache_frame_612d9006782ad8128772ab599dbd3cb1 = NULL;

    assertFrameObject( frame_612d9006782ad8128772ab599dbd3cb1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_1_spdiags );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_diags );
    Py_DECREF( par_diags );
    par_diags = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_diags );
    Py_DECREF( par_diags );
    par_diags = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_1_spdiags );
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


static PyObject *impl_scipy$sparse$construct$$$function_2_diags( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_diagonals = python_pars[ 0 ];
    PyObject *par_offsets = python_pars[ 1 ];
    PyObject *par_shape = python_pars[ 2 ];
    PyObject *par_format = python_pars[ 3 ];
    PyObject *par_dtype = python_pars[ 4 ];
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_M = NULL;
    PyObject *var_data_arr = NULL;
    PyObject *var_K = NULL;
    PyObject *var_j = NULL;
    PyObject *var_diagonal = NULL;
    PyObject *var_offset = NULL;
    PyObject *var_k = NULL;
    PyObject *var_length = NULL;
    PyObject *outline_0_var_offset = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e247f8772b2b12b5d3ce6593dd5f7556;
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
    struct Nuitka_FrameObject *frame_b993a7e6715a704adec372303b590a4c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_b993a7e6715a704adec372303b590a4c_2 = NULL;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e247f8772b2b12b5d3ce6593dd5f7556 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e247f8772b2b12b5d3ce6593dd5f7556, codeobj_e247f8772b2b12b5d3ce6593dd5f7556, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e247f8772b2b12b5d3ce6593dd5f7556 = cache_frame_e247f8772b2b12b5d3ce6593dd5f7556;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e247f8772b2b12b5d3ce6593dd5f7556 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e247f8772b2b12b5d3ce6593dd5f7556 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_isscalarlike );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalarlike );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isscalarlike" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 138;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_offsets );
        tmp_args_element_name_1 = par_offsets;
        frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 138;
            type_description_1 = "ooooooooooooooo";
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
            nuitka_bool tmp_condition_result_2;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_diagonals );
            tmp_len_arg_1 = par_diagonals;
            tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_compexpr_left_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 140;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_1 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            Py_DECREF( tmp_compexpr_left_1 );
            assert( !(tmp_res == -1) );
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
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_isscalarlike );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalarlike );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isscalarlike" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 140;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_diagonals );
            tmp_subscribed_name_1 = par_diagonals;
            tmp_subscript_name_1 = const_int_0;
            tmp_args_element_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 140;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 140;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 140;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 140;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
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
                PyObject *tmp_assign_source_1;
                PyObject *tmp_list_element_1;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 141;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_1 = tmp_mvar_value_3;
                CHECK_OBJECT( par_diagonals );
                tmp_args_element_name_3 = par_diagonals;
                frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 141;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_atleast_1d, call_args );
                }

                if ( tmp_list_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 141;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_1 = PyList_New( 1 );
                PyList_SET_ITEM( tmp_assign_source_1, 0, tmp_list_element_1 );
                {
                    PyObject *old = par_diagonals;
                    assert( old != NULL );
                    par_diagonals = tmp_assign_source_1;
                    Py_DECREF( old );
                }

            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_ed44fdbb63bd552418f942b7c1b082e4;
                frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 143;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 143;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_list_arg_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_5;
            tmp_called_name_3 = (PyObject *)&PyMap_Type;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 145;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_4;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_atleast_1d );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 145;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_diagonals );
            tmp_args_element_name_5 = par_diagonals;
            frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 145;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_list_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 145;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = PySequence_List( tmp_list_arg_1 );
            Py_DECREF( tmp_list_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 145;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_diagonals;
                assert( old != NULL );
                par_diagonals = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 147;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_5;
        CHECK_OBJECT( par_offsets );
        tmp_args_element_name_6 = par_offsets;
        frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_atleast_1d, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_offsets;
            assert( old != NULL );
            par_offsets = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_len_arg_3;
        if ( par_diagonals == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "diagonals" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 150;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_2 = par_diagonals;
        tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_offsets );
        tmp_len_arg_3 = par_offsets;
        tmp_compexpr_right_2 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 150;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_ed44fdbb63bd552418f942b7c1b082e4;
            frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 151;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 151;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_shape );
        tmp_compexpr_left_3 = par_shape;
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_1;
            PyObject *tmp_len_arg_4;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            if ( par_diagonals == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "diagonals" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 155;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_2 = par_diagonals;
            tmp_subscript_name_2 = const_int_0;
            tmp_len_arg_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_len_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 155;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_4 );
            Py_DECREF( tmp_len_arg_4 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 155;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_4 != NULL );
            CHECK_OBJECT( par_offsets );
            tmp_subscribed_name_3 = par_offsets;
            tmp_subscript_name_3 = const_int_0;
            tmp_int_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 155;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_7 = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 155;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 155;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 155;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 155;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_m == NULL );
            var_m = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( var_m );
            tmp_tuple_element_1 = var_m;
            tmp_assign_source_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_m );
            tmp_tuple_element_1 = var_m;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_5, 1, tmp_tuple_element_1 );
            {
                PyObject *old = par_shape;
                assert( old != NULL );
                par_shape = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_dtype );
        tmp_compexpr_left_4 = par_dtype;
        tmp_compexpr_right_4 = Py_None;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_dircall_arg2_1;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 160;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_6;
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_common_type );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( par_diagonals == NULL )
            {
                Py_DECREF( tmp_dircall_arg1_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "diagonals" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 160;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg2_1 = par_diagonals;
            Py_INCREF( tmp_dircall_arg2_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
                tmp_assign_source_6 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
            }
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_dtype;
                assert( old != NULL );
                par_dtype = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        branch_no_5:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_shape );
        tmp_iter_arg_1 = par_shape;
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooo";
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
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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
            exception_lineno = 163;
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
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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
            exception_lineno = 163;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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
                    exception_lineno = 163;
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
            exception_lineno = 163;
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
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_m;
            var_m = tmp_assign_source_10;
            Py_INCREF( var_m );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_n = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_8;
        tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_5 != NULL );
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( par_offsets );
            tmp_iter_arg_2 = par_offsets;
            tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_14;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_b993a7e6715a704adec372303b590a4c_2, codeobj_b993a7e6715a704adec372303b590a4c, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *)+sizeof(void *) );
        frame_b993a7e6715a704adec372303b590a4c_2 = cache_frame_b993a7e6715a704adec372303b590a4c_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_b993a7e6715a704adec372303b590a4c_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_b993a7e6715a704adec372303b590a4c_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_15 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "ooo";
                    exception_lineno = 165;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_15;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_16 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_offset;
                outline_0_var_offset = tmp_assign_source_16;
                Py_INCREF( outline_0_var_offset );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_3;
            PyObject *tmp_right_name_4;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_min );
            assert( tmp_called_name_6 != NULL );
            CHECK_OBJECT( var_m );
            tmp_left_name_3 = var_m;
            CHECK_OBJECT( outline_0_var_offset );
            tmp_right_name_2 = outline_0_var_offset;
            tmp_args_element_name_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( var_n );
            tmp_left_name_4 = var_n;
            CHECK_OBJECT( outline_0_var_offset );
            tmp_right_name_3 = outline_0_var_offset;
            tmp_args_element_name_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_9 );

                exception_lineno = 165;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            frame_b993a7e6715a704adec372303b590a4c_2->m_frame.f_lineno = 165;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_args_element_name_9 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_7 != NULL );
            tmp_args_element_name_11 = const_int_0;
            CHECK_OBJECT( outline_0_var_offset );
            tmp_args_element_name_12 = outline_0_var_offset;
            frame_b993a7e6715a704adec372303b590a4c_2->m_frame.f_lineno = 165;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
            }

            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 165;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            tmp_append_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_2 = "ooo";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_args_element_name_8 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_args_element_name_8 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_2_diags );
        return NULL;
        // Return handler code:
        try_return_handler_5:;
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
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
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
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_b993a7e6715a704adec372303b590a4c_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_b993a7e6715a704adec372303b590a4c_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_b993a7e6715a704adec372303b590a4c_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_b993a7e6715a704adec372303b590a4c_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_b993a7e6715a704adec372303b590a4c_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_b993a7e6715a704adec372303b590a4c_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_b993a7e6715a704adec372303b590a4c_2,
            type_description_2,
            outline_0_var_offset,
            var_m,
            var_n
        );


        // Release cached frame.
        if ( frame_b993a7e6715a704adec372303b590a4c_2 == cache_frame_b993a7e6715a704adec372303b590a4c_2 )
        {
            Py_DECREF( frame_b993a7e6715a704adec372303b590a4c_2 );
        }
        cache_frame_b993a7e6715a704adec372303b590a4c_2 = NULL;

        assertFrameObject( frame_b993a7e6715a704adec372303b590a4c_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_2_diags );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF( outline_0_var_offset );
        outline_0_var_offset = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_offset );
        outline_0_var_offset = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_2_diags );
        return NULL;
        outline_exception_1:;
        exception_lineno = 165;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M == NULL );
        var_M = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_8 != NULL );
        tmp_args_element_name_13 = const_int_0;
        CHECK_OBJECT( var_M );
        tmp_args_element_name_14 = var_M;
        frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_M;
            assert( old != NULL );
            var_M = tmp_assign_source_17;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_len_arg_5;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 168;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_7;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zeros );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_offsets );
        tmp_len_arg_5 = par_offsets;
        tmp_tuple_element_3 = BUILTIN_LEN( tmp_len_arg_5 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 168;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_M );
        tmp_tuple_element_3 = var_M;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( par_dtype );
        tmp_dict_value_1 = par_dtype;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 168;
        tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_data_arr == NULL );
        var_data_arr = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        tmp_called_name_10 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_10 != NULL );
        CHECK_OBJECT( var_m );
        tmp_args_element_name_15 = var_m;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_16 = var_n;
        frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_K == NULL );
        var_K = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_17;
        tmp_called_name_11 = (PyObject *)&PyEnum_Type;
        if ( par_diagonals == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "diagonals" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 172;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_17 = par_diagonals;
        frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_20;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_21 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_21 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 172;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_4 = tmp_for_loop_1__iter_value;
        tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_4 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_22;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 172;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_23;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 172;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_24;
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

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 172;
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

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 172;
            goto try_except_handler_8;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
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

    goto try_except_handler_7;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_25 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_25;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_26 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_diagonal;
            var_diagonal = tmp_assign_source_26;
            Py_INCREF( var_diagonal );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( par_offsets );
        tmp_subscribed_name_4 = par_offsets;
        CHECK_OBJECT( var_j );
        tmp_subscript_name_4 = var_j;
        tmp_assign_source_27 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_offset;
            var_offset = tmp_assign_source_27;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_12;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        tmp_called_name_12 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_12 != NULL );
        tmp_args_element_name_18 = const_int_0;
        CHECK_OBJECT( var_offset );
        tmp_args_element_name_19 = var_offset;
        frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
        }

        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_args_element_name_22;
        tmp_called_name_13 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_13 != NULL );
        CHECK_OBJECT( var_m );
        tmp_left_name_5 = var_m;
        CHECK_OBJECT( var_offset );
        tmp_right_name_5 = var_offset;
        tmp_args_element_name_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_args_element_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_n );
        tmp_left_name_6 = var_n;
        CHECK_OBJECT( var_offset );
        tmp_right_name_6 = var_offset;
        tmp_args_element_name_21 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_args_element_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_20 );

            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_K );
        tmp_args_element_name_22 = var_K;
        frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_args_element_name_20 );
        Py_DECREF( tmp_args_element_name_21 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_length;
            var_length = tmp_assign_source_29;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( var_length );
        tmp_compexpr_left_5 = var_length;
        tmp_compexpr_right_5 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_tuple_element_4;
            tmp_left_name_7 = const_str_digest_c120d86844567aebbd4b109e6590576a;
            CHECK_OBJECT( var_offset );
            tmp_tuple_element_4 = var_offset;
            tmp_right_name_7 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_right_name_7, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( var_j );
            tmp_tuple_element_4 = var_j;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_right_name_7, 1, tmp_tuple_element_4 );
            tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_make_exception_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_6;
            }
            frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 177;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_3 );
            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 177;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        branch_no_6:;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( var_diagonal );
        tmp_subscribed_name_5 = var_diagonal;
        tmp_tuple_element_5 = Py_Ellipsis;
        tmp_subscript_name_5 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_subscript_name_5, 0, tmp_tuple_element_5 );
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_length );
        tmp_stop_name_1 = var_length;
        tmp_step_name_1 = Py_None;
        tmp_tuple_element_5 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_tuple_element_5 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_5, 1, tmp_tuple_element_5 );
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscript_name_5 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT( var_data_arr );
        tmp_ass_subscribed_1 = var_data_arr;
        CHECK_OBJECT( var_j );
        tmp_tuple_element_6 = var_j;
        tmp_ass_subscript_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_k );
        tmp_start_name_2 = var_k;
        CHECK_OBJECT( var_k );
        tmp_left_name_8 = var_k;
        CHECK_OBJECT( var_length );
        tmp_right_name_8 = var_length;
        tmp_stop_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_stop_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_step_name_2 = Py_None;
        tmp_tuple_element_6 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_stop_name_2 );
        assert( !(tmp_tuple_element_6 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_6 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_9;
        }
    }
    goto try_end_5;
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
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_e247f8772b2b12b5d3ce6593dd5f7556, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_e247f8772b2b12b5d3ce6593dd5f7556, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_6 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_10;
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
            nuitka_bool tmp_condition_result_8;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_len_arg_6;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_len_arg_7;
            CHECK_OBJECT( var_diagonal );
            tmp_len_arg_6 = var_diagonal;
            tmp_compexpr_left_7 = BUILTIN_LEN( tmp_len_arg_6 );
            if ( tmp_compexpr_left_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_10;
            }
            CHECK_OBJECT( var_length );
            tmp_compexpr_right_7 = var_length;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            Py_DECREF( tmp_compexpr_left_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_10;
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
            CHECK_OBJECT( var_diagonal );
            tmp_len_arg_7 = var_diagonal;
            tmp_compexpr_left_8 = BUILTIN_LEN( tmp_len_arg_7 );
            if ( tmp_compexpr_left_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_10;
            }
            tmp_compexpr_right_8 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            Py_DECREF( tmp_compexpr_left_8 );
            assert( !(tmp_res == -1) );
            tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_8 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_8 = tmp_and_left_value_1;
            and_end_1:;
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
                PyObject *tmp_raise_type_4;
                PyObject *tmp_make_exception_arg_4;
                PyObject *tmp_left_name_9;
                PyObject *tmp_right_name_9;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_len_arg_8;
                tmp_left_name_9 = const_str_digest_42ac3e0ab60e5231315f0f646f03cd36;
                CHECK_OBJECT( var_j );
                tmp_tuple_element_7 = var_j;
                tmp_right_name_9 = PyTuple_New( 5 );
                Py_INCREF( tmp_tuple_element_7 );
                PyTuple_SET_ITEM( tmp_right_name_9, 0, tmp_tuple_element_7 );
                CHECK_OBJECT( var_diagonal );
                tmp_len_arg_8 = var_diagonal;
                tmp_tuple_element_7 = BUILTIN_LEN( tmp_len_arg_8 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_9 );

                    exception_lineno = 185;
                    type_description_1 = "ooooooooooooooo";
                    goto try_except_handler_10;
                }
                PyTuple_SET_ITEM( tmp_right_name_9, 1, tmp_tuple_element_7 );
                CHECK_OBJECT( var_offset );
                tmp_tuple_element_7 = var_offset;
                Py_INCREF( tmp_tuple_element_7 );
                PyTuple_SET_ITEM( tmp_right_name_9, 2, tmp_tuple_element_7 );
                CHECK_OBJECT( var_m );
                tmp_tuple_element_7 = var_m;
                Py_INCREF( tmp_tuple_element_7 );
                PyTuple_SET_ITEM( tmp_right_name_9, 3, tmp_tuple_element_7 );
                CHECK_OBJECT( var_n );
                tmp_tuple_element_7 = var_n;
                Py_INCREF( tmp_tuple_element_7 );
                PyTuple_SET_ITEM( tmp_right_name_9, 4, tmp_tuple_element_7 );
                tmp_make_exception_arg_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_9, tmp_right_name_9 );
                Py_DECREF( tmp_right_name_9 );
                if ( tmp_make_exception_arg_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 183;
                    type_description_1 = "ooooooooooooooo";
                    goto try_except_handler_10;
                }
                frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 182;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_4 };
                    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_4 );
                assert( !(tmp_raise_type_4 == NULL) );
                exception_type = tmp_raise_type_4;
                exception_lineno = 182;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_10;
            }
            branch_no_8:;
        }
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 186;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame) frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_10;
        goto branch_end_7;
        branch_no_7:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 178;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame) frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_10;
        branch_end_7:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_2_diags );
    return NULL;
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

    goto try_except_handler_6;
    // End of try:
    // End of try:
    try_end_5:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
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
    try_end_6:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_args_element_name_23;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_dia_matrix );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dia_matrix );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dia_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 188;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_14 = tmp_mvar_value_8;
        CHECK_OBJECT( var_data_arr );
        tmp_tuple_element_9 = var_data_arr;
        tmp_tuple_element_8 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_tuple_element_8, 0, tmp_tuple_element_9 );
        CHECK_OBJECT( par_offsets );
        tmp_tuple_element_9 = par_offsets;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_tuple_element_8, 1, tmp_tuple_element_9 );
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_8 );
        tmp_dict_key_2 = const_str_plain_shape;
        CHECK_OBJECT( var_m );
        tmp_tuple_element_10 = var_m;
        tmp_dict_value_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_dict_value_2, 0, tmp_tuple_element_10 );
        CHECK_OBJECT( var_n );
        tmp_tuple_element_10 = var_n;
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_dict_value_2, 1, tmp_tuple_element_10 );
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 188;
        tmp_called_instance_3 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_format );
        tmp_args_element_name_23 = par_format;
        frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_asformat, call_args );
        }

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e247f8772b2b12b5d3ce6593dd5f7556 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e247f8772b2b12b5d3ce6593dd5f7556 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e247f8772b2b12b5d3ce6593dd5f7556 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e247f8772b2b12b5d3ce6593dd5f7556, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e247f8772b2b12b5d3ce6593dd5f7556->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e247f8772b2b12b5d3ce6593dd5f7556, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e247f8772b2b12b5d3ce6593dd5f7556,
        type_description_1,
        par_diagonals,
        par_offsets,
        par_shape,
        par_format,
        par_dtype,
        var_m,
        var_n,
        var_M,
        var_data_arr,
        var_K,
        var_j,
        var_diagonal,
        var_offset,
        var_k,
        var_length
    );


    // Release cached frame.
    if ( frame_e247f8772b2b12b5d3ce6593dd5f7556 == cache_frame_e247f8772b2b12b5d3ce6593dd5f7556 )
    {
        Py_DECREF( frame_e247f8772b2b12b5d3ce6593dd5f7556 );
    }
    cache_frame_e247f8772b2b12b5d3ce6593dd5f7556 = NULL;

    assertFrameObject( frame_e247f8772b2b12b5d3ce6593dd5f7556 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_2_diags );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_diagonals );
    par_diagonals = NULL;

    CHECK_OBJECT( (PyObject *)par_offsets );
    Py_DECREF( par_offsets );
    par_offsets = NULL;

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_M );
    Py_DECREF( var_M );
    var_M = NULL;

    CHECK_OBJECT( (PyObject *)var_data_arr );
    Py_DECREF( var_data_arr );
    var_data_arr = NULL;

    CHECK_OBJECT( (PyObject *)var_K );
    Py_DECREF( var_K );
    var_K = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_diagonal );
    var_diagonal = NULL;

    Py_XDECREF( var_offset );
    var_offset = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

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

    Py_XDECREF( par_diagonals );
    par_diagonals = NULL;

    CHECK_OBJECT( (PyObject *)par_offsets );
    Py_DECREF( par_offsets );
    par_offsets = NULL;

    Py_XDECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_data_arr );
    var_data_arr = NULL;

    Py_XDECREF( var_K );
    var_K = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_diagonal );
    var_diagonal = NULL;

    Py_XDECREF( var_offset );
    var_offset = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_2_diags );
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


static PyObject *impl_scipy$sparse$construct$$$function_3_identity( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    PyObject *par_format = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_f3549ddbddf19afa809338ae6a042a4d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f3549ddbddf19afa809338ae6a042a4d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f3549ddbddf19afa809338ae6a042a4d, codeobj_f3549ddbddf19afa809338ae6a042a4d, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f3549ddbddf19afa809338ae6a042a4d = cache_frame_f3549ddbddf19afa809338ae6a042a4d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f3549ddbddf19afa809338ae6a042a4d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f3549ddbddf19afa809338ae6a042a4d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_eye );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eye );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eye" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 218;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_n );
        tmp_tuple_element_1 = par_n;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_n );
        tmp_tuple_element_1 = par_n;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( par_dtype );
        tmp_dict_value_1 = par_dtype;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_format;
        CHECK_OBJECT( par_format );
        tmp_dict_value_2 = par_format;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_f3549ddbddf19afa809338ae6a042a4d->m_frame.f_lineno = 218;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f3549ddbddf19afa809338ae6a042a4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f3549ddbddf19afa809338ae6a042a4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f3549ddbddf19afa809338ae6a042a4d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f3549ddbddf19afa809338ae6a042a4d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f3549ddbddf19afa809338ae6a042a4d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f3549ddbddf19afa809338ae6a042a4d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f3549ddbddf19afa809338ae6a042a4d,
        type_description_1,
        par_n,
        par_dtype,
        par_format
    );


    // Release cached frame.
    if ( frame_f3549ddbddf19afa809338ae6a042a4d == cache_frame_f3549ddbddf19afa809338ae6a042a4d )
    {
        Py_DECREF( frame_f3549ddbddf19afa809338ae6a042a4d );
    }
    cache_frame_f3549ddbddf19afa809338ae6a042a4d = NULL;

    assertFrameObject( frame_f3549ddbddf19afa809338ae6a042a4d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_3_identity );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_3_identity );
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


static PyObject *impl_scipy$sparse$construct$$$function_4_eye( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_k = python_pars[ 2 ];
    PyObject *par_dtype = python_pars[ 3 ];
    PyObject *par_format = python_pars[ 4 ];
    PyObject *var_idx_dtype = NULL;
    PyObject *var_indptr = NULL;
    PyObject *var_indices = NULL;
    PyObject *var_data = NULL;
    PyObject *var_cls = NULL;
    PyObject *var_row = NULL;
    PyObject *var_col = NULL;
    PyObject *var_diags = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2dfd65624c8a5bbe32ba1b779a97b97b;
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
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2dfd65624c8a5bbe32ba1b779a97b97b = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
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
            CHECK_OBJECT( par_m );
            tmp_assign_source_1 = par_m;
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_1;
                Py_INCREF( par_n );
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2dfd65624c8a5bbe32ba1b779a97b97b, codeobj_2dfd65624c8a5bbe32ba1b779a97b97b, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2dfd65624c8a5bbe32ba1b779a97b97b = cache_frame_2dfd65624c8a5bbe32ba1b779a97b97b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2dfd65624c8a5bbe32ba1b779a97b97b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2dfd65624c8a5bbe32ba1b779a97b97b ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_int_arg_2;
        CHECK_OBJECT( par_m );
        tmp_int_arg_1 = par_m;
        tmp_tuple_element_1 = PyNumber_Int( tmp_int_arg_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_n );
        tmp_int_arg_2 = par_n;
        tmp_tuple_element_1 = PyNumber_Int( tmp_int_arg_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 254;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "ooooooooooooo";
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 254;
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 254;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_m;
            assert( old != NULL );
            par_m = tmp_assign_source_5;
            Py_INCREF( par_m );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_n;
            assert( old != NULL );
            par_n = tmp_assign_source_6;
            Py_INCREF( par_n );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_m );
        tmp_compexpr_left_2 = par_m;
        CHECK_OBJECT( par_n );
        tmp_compexpr_right_2 = par_n;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "ooooooooooooo";
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
        CHECK_OBJECT( par_k );
        tmp_compexpr_left_3 = par_k;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "ooooooooooooo";
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
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( par_format );
            tmp_compexpr_left_4 = par_format;
            tmp_compexpr_right_4 = LIST_COPY( const_list_str_plain_csr_str_plain_csc_list );
            tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 258;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_kw_name_1;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_get_index_dtype );

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

                    exception_lineno = 259;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_1;
                tmp_dict_key_1 = const_str_plain_maxval;
                CHECK_OBJECT( par_n );
                tmp_dict_value_1 = par_n;
                tmp_kw_name_1 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                frame_2dfd65624c8a5bbe32ba1b779a97b97b->m_frame.f_lineno = 259;
                tmp_assign_source_7 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 259;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_idx_dtype == NULL );
                var_idx_dtype = tmp_assign_source_7;
            }
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 260;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_1 = tmp_mvar_value_2;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_arange );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 260;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_n );
                tmp_left_name_1 = par_n;
                tmp_right_name_1 = const_int_pos_1;
                tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 260;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_name_1 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
                tmp_dict_key_2 = const_str_plain_dtype;
                CHECK_OBJECT( var_idx_dtype );
                tmp_dict_value_2 = var_idx_dtype;
                tmp_kw_name_2 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                frame_2dfd65624c8a5bbe32ba1b779a97b97b->m_frame.f_lineno = 260;
                tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 260;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_indptr == NULL );
                var_indptr = tmp_assign_source_8;
            }
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_kw_name_3;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 261;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_2 = tmp_mvar_value_3;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_arange );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 261;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_n );
                tmp_tuple_element_3 = par_n;
                tmp_args_name_2 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
                tmp_dict_key_3 = const_str_plain_dtype;
                CHECK_OBJECT( var_idx_dtype );
                tmp_dict_value_3 = var_idx_dtype;
                tmp_kw_name_3 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                frame_2dfd65624c8a5bbe32ba1b779a97b97b->m_frame.f_lineno = 261;
                tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_3 );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_3 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 261;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_indices == NULL );
                var_indices = tmp_assign_source_9;
            }
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_3;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_name_3;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_kw_name_4;
                PyObject *tmp_dict_key_4;
                PyObject *tmp_dict_value_4;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 262;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_3 = tmp_mvar_value_4;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ones );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 262;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_n );
                tmp_tuple_element_4 = par_n;
                tmp_args_name_3 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
                tmp_dict_key_4 = const_str_plain_dtype;
                CHECK_OBJECT( par_dtype );
                tmp_dict_value_4 = par_dtype;
                tmp_kw_name_4 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4 );
                assert( !(tmp_res != 0) );
                frame_2dfd65624c8a5bbe32ba1b779a97b97b->m_frame.f_lineno = 262;
                tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_4 );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_3 );
                Py_DECREF( tmp_kw_name_4 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 262;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_data == NULL );
                var_data = tmp_assign_source_10;
            }
            {
                PyObject *tmp_assign_source_11;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_dict_key_5;
                PyObject *tmp_dict_value_5;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_dict_key_6;
                PyObject *tmp_dict_value_6;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_subscript_name_1;
                tmp_dict_key_5 = const_str_plain_csr;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csr_matrix );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_matrix );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csr_matrix" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 263;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_dict_value_5 = tmp_mvar_value_5;
                tmp_subscribed_name_1 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_subscribed_name_1, tmp_dict_key_5, tmp_dict_value_5 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_6 = const_str_plain_csc;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csc_matrix );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
                }

                if ( tmp_mvar_value_6 == NULL )
                {
                    Py_DECREF( tmp_subscribed_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csc_matrix" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 263;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_dict_value_6 = tmp_mvar_value_6;
                tmp_res = PyDict_SetItem( tmp_subscribed_name_1, tmp_dict_key_6, tmp_dict_value_6 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( par_format );
                tmp_subscript_name_1 = par_format;
                tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscribed_name_1 );
                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 263;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_cls == NULL );
                var_cls = tmp_assign_source_11;
            }
            {
                PyObject *tmp_called_name_5;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_tuple_element_6;
                CHECK_OBJECT( var_cls );
                tmp_called_name_5 = var_cls;
                CHECK_OBJECT( var_data );
                tmp_tuple_element_5 = var_data;
                tmp_args_element_name_1 = PyTuple_New( 3 );
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( var_indices );
                tmp_tuple_element_5 = var_indices;
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_5 );
                CHECK_OBJECT( var_indptr );
                tmp_tuple_element_5 = var_indptr;
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_args_element_name_1, 2, tmp_tuple_element_5 );
                CHECK_OBJECT( par_n );
                tmp_tuple_element_6 = par_n;
                tmp_args_element_name_2 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_6 );
                PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_6 );
                CHECK_OBJECT( par_n );
                tmp_tuple_element_6 = par_n;
                Py_INCREF( tmp_tuple_element_6 );
                PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_6 );
                frame_2dfd65624c8a5bbe32ba1b779a97b97b->m_frame.f_lineno = 264;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
                }

                Py_DECREF( tmp_args_element_name_1 );
                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 264;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                CHECK_OBJECT( par_format );
                tmp_compexpr_left_5 = par_format;
                tmp_compexpr_right_5 = const_str_plain_coo;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 265;
                    type_description_1 = "ooooooooooooo";
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
                    PyObject *tmp_assign_source_12;
                    PyObject *tmp_called_name_6;
                    PyObject *tmp_mvar_value_7;
                    PyObject *tmp_kw_name_5;
                    PyObject *tmp_dict_key_7;
                    PyObject *tmp_dict_value_7;
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_get_index_dtype );

                    if (unlikely( tmp_mvar_value_7 == NULL ))
                    {
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_index_dtype );
                    }

                    if ( tmp_mvar_value_7 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_index_dtype" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 266;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_6 = tmp_mvar_value_7;
                    tmp_dict_key_7 = const_str_plain_maxval;
                    CHECK_OBJECT( par_n );
                    tmp_dict_value_7 = par_n;
                    tmp_kw_name_5 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_7, tmp_dict_value_7 );
                    assert( !(tmp_res != 0) );
                    frame_2dfd65624c8a5bbe32ba1b779a97b97b->m_frame.f_lineno = 266;
                    tmp_assign_source_12 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_6, tmp_kw_name_5 );
                    Py_DECREF( tmp_kw_name_5 );
                    if ( tmp_assign_source_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 266;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_idx_dtype == NULL );
                    var_idx_dtype = tmp_assign_source_12;
                }
                {
                    PyObject *tmp_assign_source_13;
                    PyObject *tmp_called_name_7;
                    PyObject *tmp_source_name_4;
                    PyObject *tmp_mvar_value_8;
                    PyObject *tmp_args_name_4;
                    PyObject *tmp_tuple_element_7;
                    PyObject *tmp_kw_name_6;
                    PyObject *tmp_dict_key_8;
                    PyObject *tmp_dict_value_8;
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 267;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_4 = tmp_mvar_value_8;
                    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_arange );
                    if ( tmp_called_name_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 267;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_n );
                    tmp_tuple_element_7 = par_n;
                    tmp_args_name_4 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_7 );
                    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_7 );
                    tmp_dict_key_8 = const_str_plain_dtype;
                    CHECK_OBJECT( var_idx_dtype );
                    tmp_dict_value_8 = var_idx_dtype;
                    tmp_kw_name_6 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_8, tmp_dict_value_8 );
                    assert( !(tmp_res != 0) );
                    frame_2dfd65624c8a5bbe32ba1b779a97b97b->m_frame.f_lineno = 267;
                    tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_4, tmp_kw_name_6 );
                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_args_name_4 );
                    Py_DECREF( tmp_kw_name_6 );
                    if ( tmp_assign_source_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 267;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_row == NULL );
                    var_row = tmp_assign_source_13;
                }
                {
                    PyObject *tmp_assign_source_14;
                    PyObject *tmp_called_name_8;
                    PyObject *tmp_source_name_5;
                    PyObject *tmp_mvar_value_9;
                    PyObject *tmp_args_name_5;
                    PyObject *tmp_tuple_element_8;
                    PyObject *tmp_kw_name_7;
                    PyObject *tmp_dict_key_9;
                    PyObject *tmp_dict_value_9;
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 268;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_5 = tmp_mvar_value_9;
                    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_arange );
                    if ( tmp_called_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 268;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_n );
                    tmp_tuple_element_8 = par_n;
                    tmp_args_name_5 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_8 );
                    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_8 );
                    tmp_dict_key_9 = const_str_plain_dtype;
                    CHECK_OBJECT( var_idx_dtype );
                    tmp_dict_value_9 = var_idx_dtype;
                    tmp_kw_name_7 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_9, tmp_dict_value_9 );
                    assert( !(tmp_res != 0) );
                    frame_2dfd65624c8a5bbe32ba1b779a97b97b->m_frame.f_lineno = 268;
                    tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_5, tmp_kw_name_7 );
                    Py_DECREF( tmp_called_name_8 );
                    Py_DECREF( tmp_args_name_5 );
                    Py_DECREF( tmp_kw_name_7 );
                    if ( tmp_assign_source_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 268;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_col == NULL );
                    var_col = tmp_assign_source_14;
                }
                {
                    PyObject *tmp_assign_source_15;
                    PyObject *tmp_called_name_9;
                    PyObject *tmp_source_name_6;
                    PyObject *tmp_mvar_value_10;
                    PyObject *tmp_args_name_6;
                    PyObject *tmp_tuple_element_9;
                    PyObject *tmp_kw_name_8;
                    PyObject *tmp_dict_key_10;
                    PyObject *tmp_dict_value_10;
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 269;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_6 = tmp_mvar_value_10;
                    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ones );
                    if ( tmp_called_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 269;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_n );
                    tmp_tuple_element_9 = par_n;
                    tmp_args_name_6 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_9 );
                    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_9 );
                    tmp_dict_key_10 = const_str_plain_dtype;
                    CHECK_OBJECT( par_dtype );
                    tmp_dict_value_10 = par_dtype;
                    tmp_kw_name_8 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_10, tmp_dict_value_10 );
                    assert( !(tmp_res != 0) );
                    frame_2dfd65624c8a5bbe32ba1b779a97b97b->m_frame.f_lineno = 269;
                    tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_6, tmp_kw_name_8 );
                    Py_DECREF( tmp_called_name_9 );
                    Py_DECREF( tmp_args_name_6 );
                    Py_DECREF( tmp_kw_name_8 );
                    if ( tmp_assign_source_15 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 269;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_data == NULL );
                    var_data = tmp_assign_source_15;
                }
                {
                    PyObject *tmp_called_name_10;
                    PyObject *tmp_mvar_value_11;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_tuple_element_10;
                    PyObject *tmp_tuple_element_11;
                    PyObject *tmp_args_element_name_4;
                    PyObject *tmp_tuple_element_12;
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

                    if (unlikely( tmp_mvar_value_11 == NULL ))
                    {
                        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
                    }

                    if ( tmp_mvar_value_11 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "coo_matrix" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 270;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_10 = tmp_mvar_value_11;
                    CHECK_OBJECT( var_data );
                    tmp_tuple_element_10 = var_data;
                    tmp_args_element_name_3 = PyTuple_New( 2 );
                    Py_INCREF( tmp_tuple_element_10 );
                    PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_10 );
                    CHECK_OBJECT( var_row );
                    tmp_tuple_element_11 = var_row;
                    tmp_tuple_element_10 = PyTuple_New( 2 );
                    Py_INCREF( tmp_tuple_element_11 );
                    PyTuple_SET_ITEM( tmp_tuple_element_10, 0, tmp_tuple_element_11 );
                    CHECK_OBJECT( var_col );
                    tmp_tuple_element_11 = var_col;
                    Py_INCREF( tmp_tuple_element_11 );
                    PyTuple_SET_ITEM( tmp_tuple_element_10, 1, tmp_tuple_element_11 );
                    PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_10 );
                    CHECK_OBJECT( par_n );
                    tmp_tuple_element_12 = par_n;
                    tmp_args_element_name_4 = PyTuple_New( 2 );
                    Py_INCREF( tmp_tuple_element_12 );
                    PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_12 );
                    CHECK_OBJECT( par_n );
                    tmp_tuple_element_12 = par_n;
                    Py_INCREF( tmp_tuple_element_12 );
                    PyTuple_SET_ITEM( tmp_args_element_name_4, 1, tmp_tuple_element_12 );
                    frame_2dfd65624c8a5bbe32ba1b779a97b97b->m_frame.f_lineno = 270;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_3 );
                    Py_DECREF( tmp_args_element_name_4 );
                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 270;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                branch_no_4:;
            }
            branch_end_3:;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_11;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_name_7;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_called_name_12;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_kw_name_9;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 272;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_12;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ones );
        if ( tmp_called_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_14 = const_int_pos_1;
        tmp_tuple_element_13 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_14 );
        PyTuple_SET_ITEM( tmp_tuple_element_13, 0, tmp_tuple_element_14 );
        tmp_called_name_12 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_12 != NULL );
        tmp_args_element_name_5 = const_int_0;
        tmp_called_name_13 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_13 != NULL );
        CHECK_OBJECT( par_m );
        tmp_left_name_2 = par_m;
        CHECK_OBJECT( par_k );
        tmp_right_name_2 = par_k;
        tmp_args_element_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_tuple_element_13 );

            exception_lineno = 272;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_args_element_name_8 = par_n;
        frame_2dfd65624c8a5bbe32ba1b779a97b97b->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_tuple_element_13 );

            exception_lineno = 272;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2dfd65624c8a5bbe32ba1b779a97b97b->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_tuple_element_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_tuple_element_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_tuple_element_13 );

            exception_lineno = 272;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_13, 1, tmp_tuple_element_14 );
        tmp_args_name_7 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_13 );
        tmp_dict_key_11 = const_str_plain_dtype;
        CHECK_OBJECT( par_dtype );
        tmp_dict_value_11 = par_dtype;
        tmp_kw_name_9 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_9, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        frame_2dfd65624c8a5bbe32ba1b779a97b97b->m_frame.f_lineno = 272;
        tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_7, tmp_kw_name_9 );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_name_7 );
        Py_DECREF( tmp_kw_name_9 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_diags == NULL );
        var_diags = tmp_assign_source_16;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_spdiags );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_spdiags );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "spdiags" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 273;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_14 = tmp_mvar_value_13;
        CHECK_OBJECT( var_diags );
        tmp_args_element_name_9 = var_diags;
        CHECK_OBJECT( par_k );
        tmp_args_element_name_10 = par_k;
        CHECK_OBJECT( par_m );
        tmp_args_element_name_11 = par_m;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_12 = par_n;
        frame_2dfd65624c8a5bbe32ba1b779a97b97b->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_14, call_args );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_format );
        tmp_args_element_name_13 = par_format;
        frame_2dfd65624c8a5bbe32ba1b779a97b97b->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asformat, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2dfd65624c8a5bbe32ba1b779a97b97b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2dfd65624c8a5bbe32ba1b779a97b97b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2dfd65624c8a5bbe32ba1b779a97b97b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2dfd65624c8a5bbe32ba1b779a97b97b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2dfd65624c8a5bbe32ba1b779a97b97b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2dfd65624c8a5bbe32ba1b779a97b97b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2dfd65624c8a5bbe32ba1b779a97b97b,
        type_description_1,
        par_m,
        par_n,
        par_k,
        par_dtype,
        par_format,
        var_idx_dtype,
        var_indptr,
        var_indices,
        var_data,
        var_cls,
        var_row,
        var_col,
        var_diags
    );


    // Release cached frame.
    if ( frame_2dfd65624c8a5bbe32ba1b779a97b97b == cache_frame_2dfd65624c8a5bbe32ba1b779a97b97b )
    {
        Py_DECREF( frame_2dfd65624c8a5bbe32ba1b779a97b97b );
    }
    cache_frame_2dfd65624c8a5bbe32ba1b779a97b97b = NULL;

    assertFrameObject( frame_2dfd65624c8a5bbe32ba1b779a97b97b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_4_eye );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    Py_XDECREF( var_idx_dtype );
    var_idx_dtype = NULL;

    Py_XDECREF( var_indptr );
    var_indptr = NULL;

    Py_XDECREF( var_indices );
    var_indices = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_cls );
    var_cls = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_col );
    var_col = NULL;

    Py_XDECREF( var_diags );
    var_diags = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    Py_XDECREF( var_idx_dtype );
    var_idx_dtype = NULL;

    Py_XDECREF( var_indptr );
    var_indptr = NULL;

    Py_XDECREF( var_indices );
    var_indices = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_cls );
    var_cls = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_col );
    var_col = NULL;

    Py_XDECREF( var_diags );
    var_diags = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_4_eye );
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


static PyObject *impl_scipy$sparse$construct$$$function_5_kron( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_B = python_pars[ 1 ];
    PyObject *par_format = python_pars[ 2 ];
    PyObject *var_output_shape = NULL;
    PyObject *var_data = NULL;
    PyObject *var_row = NULL;
    PyObject *var_col = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_669eb763640d0656b28bae531780e3b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_669eb763640d0656b28bae531780e3b7 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_669eb763640d0656b28bae531780e3b7, codeobj_669eb763640d0656b28bae531780e3b7, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_669eb763640d0656b28bae531780e3b7 = cache_frame_669eb763640d0656b28bae531780e3b7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_669eb763640d0656b28bae531780e3b7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_669eb763640d0656b28bae531780e3b7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "coo_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 311;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_B );
        tmp_args_element_name_1 = par_B;
        frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 311;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_B;
            assert( old != NULL );
            par_B = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_format );
        tmp_compexpr_left_1 = par_format;
        tmp_compexpr_right_1 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_format );
        tmp_compexpr_left_2 = par_format;
        tmp_compexpr_right_2 = const_str_plain_bsr;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_left_value_1 = tmp_or_left_value_1;
        or_end_1:;
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
        tmp_left_name_1 = const_int_pos_2;
        CHECK_OBJECT( par_B );
        tmp_source_name_1 = par_B;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nnz );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_3 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_B );
        tmp_source_name_2 = par_B;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_B );
        tmp_source_name_3 = par_B;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_right_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csr_matrix );

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

                exception_lineno = 315;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_A );
            tmp_tuple_element_1 = par_A;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_10010a04cba23a4ccc75195b8c45141a );
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 315;
            tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 315;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_A;
                assert( old != NULL );
                par_A = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_left_name_4;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_right_name_4;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_6;
            CHECK_OBJECT( par_A );
            tmp_source_name_4 = par_A;
            tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
            if ( tmp_subscribed_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_3 = const_int_0;
            tmp_left_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            Py_DECREF( tmp_subscribed_name_3 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_B );
            tmp_source_name_5 = par_B;
            tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
            if ( tmp_subscribed_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 317;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_4 = const_int_0;
            tmp_right_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
            Py_DECREF( tmp_subscribed_name_4 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 317;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_assign_source_3, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_A );
            tmp_source_name_6 = par_A;
            tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
            if ( tmp_subscribed_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_3 );

                exception_lineno = 317;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_5 = const_int_pos_1;
            tmp_left_name_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 1 );
            Py_DECREF( tmp_subscribed_name_5 );
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_3 );

                exception_lineno = 317;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_B );
            tmp_source_name_7 = par_B;
            tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
            if ( tmp_subscribed_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_3 );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 317;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_6 = const_int_pos_1;
            tmp_right_name_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 1 );
            Py_DECREF( tmp_subscribed_name_6 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_3 );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 317;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_3 );

                exception_lineno = 317;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_assign_source_3, 1, tmp_tuple_element_2 );
            assert( var_output_shape == NULL );
            var_output_shape = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_or_left_truth_2;
            nuitka_bool tmp_or_left_value_2;
            nuitka_bool tmp_or_right_value_2;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_source_name_8;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( par_A );
            tmp_source_name_8 = par_A;
            tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_nnz );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_4 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooooooo";
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
            CHECK_OBJECT( par_B );
            tmp_source_name_9 = par_B;
            tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_nnz );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_5 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_2 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            tmp_condition_result_2 = tmp_or_left_value_2;
            or_end_2:;
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
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_2;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "coo_matrix" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 321;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_3;
                CHECK_OBJECT( var_output_shape );
                tmp_args_element_name_2 = var_output_shape;
                frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 321;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 321;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_B );
            tmp_called_instance_1 = par_B;
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 323;
            tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_toarray );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 323;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_B;
                assert( old != NULL );
                par_B = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_10;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_11;
            PyObject *tmp_source_name_12;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_13;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_source_name_14;
            PyObject *tmp_subscript_name_7;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_source_name_15;
            PyObject *tmp_subscript_name_8;
            CHECK_OBJECT( par_A );
            tmp_source_name_12 = par_A;
            tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_data );
            if ( tmp_source_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 324;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_repeat );
            Py_DECREF( tmp_source_name_11 );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 324;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_B );
            tmp_source_name_13 = par_B;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_size );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 324;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 324;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_source_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_source_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 324;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_reshape );
            Py_DECREF( tmp_source_name_10 );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 324;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_4 = const_int_neg_1;
            CHECK_OBJECT( par_B );
            tmp_source_name_14 = par_B;
            tmp_subscribed_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_shape );
            if ( tmp_subscribed_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 324;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_7 = const_int_0;
            tmp_args_element_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
            Py_DECREF( tmp_subscribed_name_7 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 324;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_B );
            tmp_source_name_15 = par_B;
            tmp_subscribed_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_shape );
            if ( tmp_subscribed_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_5 );

                exception_lineno = 324;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_8 = const_int_pos_1;
            tmp_args_element_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 1 );
            Py_DECREF( tmp_subscribed_name_8 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_5 );

                exception_lineno = 324;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 324;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 324;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_data == NULL );
            var_data = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( var_data );
            tmp_left_name_5 = var_data;
            CHECK_OBJECT( par_B );
            tmp_right_name_5 = par_B;
            tmp_assign_source_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 325;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_data;
                assert( old != NULL );
                var_data = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_source_name_16;
            PyObject *tmp_source_name_17;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_bsr_matrix );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bsr_matrix );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bsr_matrix" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 327;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_4;
            CHECK_OBJECT( var_data );
            tmp_tuple_element_4 = var_data;
            tmp_tuple_element_3 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( par_A );
            tmp_source_name_16 = par_A;
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_indices );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_tuple_element_3 );

                exception_lineno = 327;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_tuple_element_3, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( par_A );
            tmp_source_name_17 = par_A;
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_indptr );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_tuple_element_3 );

                exception_lineno = 327;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_tuple_element_3, 2, tmp_tuple_element_4 );
            tmp_args_name_2 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            tmp_dict_key_1 = const_str_plain_shape;
            CHECK_OBJECT( var_output_shape );
            tmp_dict_value_1 = var_output_shape;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 327;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 327;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_7;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "coo_matrix" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 330;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_5;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_7 = par_A;
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 330;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 330;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_A;
                assert( old != NULL );
                par_A = tmp_assign_source_7;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_source_name_18;
            PyObject *tmp_subscript_name_9;
            PyObject *tmp_right_name_6;
            PyObject *tmp_subscribed_name_10;
            PyObject *tmp_source_name_19;
            PyObject *tmp_subscript_name_10;
            PyObject *tmp_left_name_7;
            PyObject *tmp_subscribed_name_11;
            PyObject *tmp_source_name_20;
            PyObject *tmp_subscript_name_11;
            PyObject *tmp_right_name_7;
            PyObject *tmp_subscribed_name_12;
            PyObject *tmp_source_name_21;
            PyObject *tmp_subscript_name_12;
            CHECK_OBJECT( par_A );
            tmp_source_name_18 = par_A;
            tmp_subscribed_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_shape );
            if ( tmp_subscribed_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 331;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_9 = const_int_0;
            tmp_left_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_9, tmp_subscript_name_9, 0 );
            Py_DECREF( tmp_subscribed_name_9 );
            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 331;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_B );
            tmp_source_name_19 = par_B;
            tmp_subscribed_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_shape );
            if ( tmp_subscribed_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_6 );

                exception_lineno = 331;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_10 = const_int_0;
            tmp_right_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_10, tmp_subscript_name_10, 0 );
            Py_DECREF( tmp_subscribed_name_10 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_6 );

                exception_lineno = 331;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 331;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_assign_source_8, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( par_A );
            tmp_source_name_20 = par_A;
            tmp_subscribed_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_shape );
            if ( tmp_subscribed_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_8 );

                exception_lineno = 331;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_11 = const_int_pos_1;
            tmp_left_name_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_11, tmp_subscript_name_11, 1 );
            Py_DECREF( tmp_subscribed_name_11 );
            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_8 );

                exception_lineno = 331;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_B );
            tmp_source_name_21 = par_B;
            tmp_subscribed_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_shape );
            if ( tmp_subscribed_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_8 );
                Py_DECREF( tmp_left_name_7 );

                exception_lineno = 331;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_12 = const_int_pos_1;
            tmp_right_name_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_12, tmp_subscript_name_12, 1 );
            Py_DECREF( tmp_subscribed_name_12 );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_8 );
                Py_DECREF( tmp_left_name_7 );

                exception_lineno = 331;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_8 );

                exception_lineno = 331;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_assign_source_8, 1, tmp_tuple_element_5 );
            assert( var_output_shape == NULL );
            var_output_shape = tmp_assign_source_8;
        }
        {
            nuitka_bool tmp_condition_result_3;
            int tmp_or_left_truth_3;
            nuitka_bool tmp_or_left_value_3;
            nuitka_bool tmp_or_right_value_3;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_source_name_22;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_source_name_23;
            CHECK_OBJECT( par_A );
            tmp_source_name_22 = par_A;
            tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_nnz );
            if ( tmp_compexpr_left_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 333;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_6 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            Py_DECREF( tmp_compexpr_left_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 333;
                type_description_1 = "ooooooo";
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
            CHECK_OBJECT( par_B );
            tmp_source_name_23 = par_B;
            tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_nnz );
            if ( tmp_compexpr_left_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 333;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_7 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            Py_DECREF( tmp_compexpr_left_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 333;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_3 = tmp_or_right_value_3;
            goto or_end_3;
            or_left_3:;
            tmp_condition_result_3 = tmp_or_left_value_3;
            or_end_3:;
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
                PyObject *tmp_called_name_8;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_8;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "coo_matrix" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 335;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_8 = tmp_mvar_value_6;
                CHECK_OBJECT( var_output_shape );
                tmp_args_element_name_8 = var_output_shape;
                frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 335;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                }

                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 335;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_24;
            PyObject *tmp_source_name_25;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_source_name_26;
            CHECK_OBJECT( par_A );
            tmp_source_name_25 = par_A;
            tmp_source_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_row );
            if ( tmp_source_name_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 338;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_repeat );
            Py_DECREF( tmp_source_name_24 );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 338;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_B );
            tmp_source_name_26 = par_B;
            tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_nnz );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_9 );

                exception_lineno = 338;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 338;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 338;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_row == NULL );
            var_row = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_27;
            PyObject *tmp_source_name_28;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_source_name_29;
            CHECK_OBJECT( par_A );
            tmp_source_name_28 = par_A;
            tmp_source_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_col );
            if ( tmp_source_name_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 339;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_repeat );
            Py_DECREF( tmp_source_name_27 );
            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 339;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_B );
            tmp_source_name_29 = par_B;
            tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_nnz );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 339;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 339;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 339;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_col == NULL );
            var_col = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_30;
            PyObject *tmp_source_name_31;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_source_name_32;
            CHECK_OBJECT( par_A );
            tmp_source_name_31 = par_A;
            tmp_source_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_data );
            if ( tmp_source_name_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_repeat );
            Py_DECREF( tmp_source_name_30 );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_B );
            tmp_source_name_32 = par_B;
            tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_nnz );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_11 );

                exception_lineno = 340;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 340;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_data == NULL );
            var_data = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            PyObject *tmp_subscribed_name_13;
            PyObject *tmp_source_name_33;
            PyObject *tmp_subscript_name_13;
            CHECK_OBJECT( var_row );
            tmp_left_name_8 = var_row;
            CHECK_OBJECT( par_B );
            tmp_source_name_33 = par_B;
            tmp_subscribed_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_shape );
            if ( tmp_subscribed_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 342;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_13 = const_int_0;
            tmp_right_name_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_13, tmp_subscript_name_13, 0 );
            Py_DECREF( tmp_subscribed_name_13 );
            if ( tmp_right_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 342;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
            Py_DECREF( tmp_right_name_8 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 342;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_12 = tmp_left_name_8;
            var_row = tmp_assign_source_12;

        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            PyObject *tmp_subscribed_name_14;
            PyObject *tmp_source_name_34;
            PyObject *tmp_subscript_name_14;
            CHECK_OBJECT( var_col );
            tmp_left_name_9 = var_col;
            CHECK_OBJECT( par_B );
            tmp_source_name_34 = par_B;
            tmp_subscribed_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_shape );
            if ( tmp_subscribed_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_14 = const_int_pos_1;
            tmp_right_name_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_14, tmp_subscript_name_14, 1 );
            Py_DECREF( tmp_subscribed_name_14 );
            if ( tmp_right_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
            Py_DECREF( tmp_right_name_9 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_13 = tmp_left_name_9;
            var_col = tmp_assign_source_13;

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_called_name_12;
            PyObject *tmp_source_name_35;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_source_name_36;
            PyObject *tmp_called_name_13;
            PyObject *tmp_source_name_37;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_source_name_38;
            CHECK_OBJECT( var_row );
            tmp_source_name_35 = var_row;
            tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_reshape );
            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_args_element_name_12 = const_int_neg_1;
            CHECK_OBJECT( par_B );
            tmp_source_name_36 = par_B;
            tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_nnz );
            if ( tmp_args_element_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );

                exception_lineno = 346;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 346;
            {
                PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
            }

            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_args_element_name_13 );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_iter_arg_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( var_col );
            tmp_source_name_37 = var_col;
            tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_reshape );
            if ( tmp_called_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_1 );

                exception_lineno = 346;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_args_element_name_14 = const_int_neg_1;
            CHECK_OBJECT( par_B );
            tmp_source_name_38 = par_B;
            tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_nnz );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_1 );
                Py_DECREF( tmp_called_name_13 );

                exception_lineno = 346;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 346;
            {
                PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
            }

            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_1 );

                exception_lineno = 346;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_6 );
            tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_14;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


                type_description_1 = "ooooooo";
                exception_lineno = 346;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


                type_description_1 = "ooooooo";
                exception_lineno = 346;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_16;
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
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_17 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = var_row;
                assert( old != NULL );
                var_row = tmp_assign_source_17;
                Py_INCREF( var_row );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_18 = tmp_tuple_unpack_1__element_2;
            {
                PyObject *old = var_col;
                assert( old != NULL );
                var_col = tmp_assign_source_18;
                Py_INCREF( var_col );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            PyObject *tmp_source_name_39;
            CHECK_OBJECT( var_row );
            tmp_left_name_10 = var_row;
            CHECK_OBJECT( par_B );
            tmp_source_name_39 = par_B;
            tmp_right_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_row );
            if ( tmp_right_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_10, tmp_right_name_10 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_19 = tmp_left_name_10;
            var_row = tmp_assign_source_19;

        }
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            PyObject *tmp_source_name_40;
            CHECK_OBJECT( var_col );
            tmp_left_name_11 = var_col;
            CHECK_OBJECT( par_B );
            tmp_source_name_40 = par_B;
            tmp_right_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_col );
            if ( tmp_right_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 348;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_11, tmp_right_name_11 );
            Py_DECREF( tmp_right_name_11 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 348;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_20 = tmp_left_name_11;
            var_col = tmp_assign_source_20;

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT( var_row );
            tmp_called_instance_2 = var_row;
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 349;
            tmp_tuple_element_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_int_neg_1_tuple, 0 ) );

            if ( tmp_tuple_element_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
            tmp_iter_arg_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( var_col );
            tmp_called_instance_3 = var_col;
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 349;
            tmp_tuple_element_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_int_neg_1_tuple, 0 ) );

            if ( tmp_tuple_element_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_2 );

                exception_lineno = 349;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_7 );
            tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_21;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


                type_description_1 = "ooooooo";
                exception_lineno = 349;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_22;
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


                type_description_1 = "ooooooo";
                exception_lineno = 349;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_23;
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
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_24 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_row;
                assert( old != NULL );
                var_row = tmp_assign_source_24;
                Py_INCREF( var_row );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_25 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_col;
                assert( old != NULL );
                var_col = tmp_assign_source_25;
                Py_INCREF( var_col );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_left_name_12;
            PyObject *tmp_called_name_14;
            PyObject *tmp_source_name_41;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_source_name_42;
            PyObject *tmp_right_name_12;
            PyObject *tmp_source_name_43;
            CHECK_OBJECT( var_data );
            tmp_source_name_41 = var_data;
            tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_reshape );
            if ( tmp_called_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_16 = const_int_neg_1;
            CHECK_OBJECT( par_B );
            tmp_source_name_42 = par_B;
            tmp_args_element_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_nnz );
            if ( tmp_args_element_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );

                exception_lineno = 352;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 352;
            {
                PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
                tmp_left_name_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
            }

            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_args_element_name_17 );
            if ( tmp_left_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_B );
            tmp_source_name_43 = par_B;
            tmp_right_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_data );
            if ( tmp_right_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_12 );

                exception_lineno = 352;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_26 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
            Py_DECREF( tmp_left_name_12 );
            Py_DECREF( tmp_right_name_12 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_data;
                assert( old != NULL );
                var_data = tmp_assign_source_26;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT( var_data );
            tmp_called_instance_4 = var_data;
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 353;
            tmp_assign_source_27 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_int_neg_1_tuple, 0 ) );

            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 353;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_data;
                assert( old != NULL );
                var_data = tmp_assign_source_27;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_called_name_15;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_args_element_name_18;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "coo_matrix" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 355;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_15 = tmp_mvar_value_7;
            CHECK_OBJECT( var_data );
            tmp_tuple_element_9 = var_data;
            tmp_tuple_element_8 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_tuple_element_8, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( var_row );
            tmp_tuple_element_10 = var_row;
            tmp_tuple_element_9 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_tuple_element_9, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( var_col );
            tmp_tuple_element_10 = var_col;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_tuple_element_9, 1, tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_tuple_element_8, 1, tmp_tuple_element_9 );
            tmp_args_name_3 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_8 );
            tmp_dict_key_2 = const_str_plain_shape;
            CHECK_OBJECT( var_output_shape );
            tmp_dict_value_2 = var_output_shape;
            tmp_kw_name_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 355;
            tmp_called_instance_5 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_called_instance_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_format );
            tmp_args_element_name_18 = par_format;
            frame_669eb763640d0656b28bae531780e3b7->m_frame.f_lineno = 355;
            {
                PyObject *call_args[] = { tmp_args_element_name_18 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_asformat, call_args );
            }

            Py_DECREF( tmp_called_instance_5 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_669eb763640d0656b28bae531780e3b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_669eb763640d0656b28bae531780e3b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_669eb763640d0656b28bae531780e3b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_669eb763640d0656b28bae531780e3b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_669eb763640d0656b28bae531780e3b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_669eb763640d0656b28bae531780e3b7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_669eb763640d0656b28bae531780e3b7,
        type_description_1,
        par_A,
        par_B,
        par_format,
        var_output_shape,
        var_data,
        var_row,
        var_col
    );


    // Release cached frame.
    if ( frame_669eb763640d0656b28bae531780e3b7 == cache_frame_669eb763640d0656b28bae531780e3b7 )
    {
        Py_DECREF( frame_669eb763640d0656b28bae531780e3b7 );
    }
    cache_frame_669eb763640d0656b28bae531780e3b7 = NULL;

    assertFrameObject( frame_669eb763640d0656b28bae531780e3b7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_5_kron );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)var_output_shape );
    Py_DECREF( var_output_shape );
    var_output_shape = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_col );
    var_col = NULL;

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

    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    Py_XDECREF( var_output_shape );
    var_output_shape = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_col );
    var_col = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_5_kron );
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


static PyObject *impl_scipy$sparse$construct$$$function_6_kronsum( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_B = python_pars[ 1 ];
    PyObject *par_format = python_pars[ 2 ];
    PyObject *var_dtype = NULL;
    PyObject *var_L = NULL;
    PyObject *var_R = NULL;
    struct Nuitka_FrameObject *frame_0237e371e20d44b867f5e67b2aa075db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0237e371e20d44b867f5e67b2aa075db = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0237e371e20d44b867f5e67b2aa075db, codeobj_0237e371e20d44b867f5e67b2aa075db, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0237e371e20d44b867f5e67b2aa075db = cache_frame_0237e371e20d44b867f5e67b2aa075db;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0237e371e20d44b867f5e67b2aa075db );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0237e371e20d44b867f5e67b2aa075db ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "coo_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 384;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_0237e371e20d44b867f5e67b2aa075db->m_frame.f_lineno = 384;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "coo_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 385;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_B );
        tmp_args_element_name_2 = par_B;
        frame_0237e371e20d44b867f5e67b2aa075db->m_frame.f_lineno = 385;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_B;
            assert( old != NULL );
            par_B = tmp_assign_source_2;
            Py_DECREF( old );
        }

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
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 387;
            type_description_1 = "oooooo";
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

            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_67eaac68927c604e34c38ce9d71b4318;
            frame_0237e371e20d44b867f5e67b2aa075db->m_frame.f_lineno = 388;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 388;
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
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( par_B );
        tmp_source_name_3 = par_B;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_B );
        tmp_source_name_4 = par_B;
        tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = const_int_pos_1;
        tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 1 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oooooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_2c25ce0932880dc269c6382f3811da26;
            frame_0237e371e20d44b867f5e67b2aa075db->m_frame.f_lineno = 391;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 391;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_upcast );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_upcast );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "upcast" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_A );
        tmp_source_name_5 = par_A;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_B );
        tmp_source_name_6 = par_B;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_0237e371e20d44b867f5e67b2aa075db->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dtype == NULL );
        var_dtype = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_source_name_7;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_kron );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_kron );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "kron" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_eye );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eye );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eye" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT( par_B );
        tmp_source_name_7 = par_B;
        tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = const_int_0;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( var_dtype );
        tmp_dict_value_1 = var_dtype;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_0237e371e20d44b867f5e67b2aa075db->m_frame.f_lineno = 395;
        tmp_tuple_element_1 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_2 = const_str_plain_format;
        CHECK_OBJECT( par_format );
        tmp_dict_value_2 = par_format;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_0237e371e20d44b867f5e67b2aa075db->m_frame.f_lineno = 395;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_L == NULL );
        var_L = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_source_name_8;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_kron );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_kron );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "kron" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 396;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        CHECK_OBJECT( par_B );
        tmp_tuple_element_3 = par_B;
        tmp_args_name_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_eye );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eye );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_args_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eye" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 396;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_7;
        CHECK_OBJECT( par_A );
        tmp_source_name_8 = par_A;
        tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
        if ( tmp_subscribed_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_3 );

            exception_lineno = 396;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_6 = const_int_0;
        tmp_tuple_element_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
        Py_DECREF( tmp_subscribed_name_6 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_3 );

            exception_lineno = 396;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_4 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
        tmp_dict_key_3 = const_str_plain_dtype;
        CHECK_OBJECT( var_dtype );
        tmp_dict_value_3 = var_dtype;
        tmp_kw_name_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_0237e371e20d44b867f5e67b2aa075db->m_frame.f_lineno = 396;
        tmp_tuple_element_3 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_4, tmp_kw_name_3 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_3 );

            exception_lineno = 396;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
        tmp_dict_key_4 = const_str_plain_format;
        CHECK_OBJECT( par_format );
        tmp_dict_value_4 = par_format;
        tmp_kw_name_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        frame_0237e371e20d44b867f5e67b2aa075db->m_frame.f_lineno = 396;
        tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_4 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_R == NULL );
        var_R = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( var_L );
        tmp_left_name_1 = var_L;
        CHECK_OBJECT( var_R );
        tmp_right_name_1 = var_R;
        tmp_called_instance_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_format );
        tmp_args_element_name_5 = par_format;
        frame_0237e371e20d44b867f5e67b2aa075db->m_frame.f_lineno = 398;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asformat, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0237e371e20d44b867f5e67b2aa075db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0237e371e20d44b867f5e67b2aa075db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0237e371e20d44b867f5e67b2aa075db );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0237e371e20d44b867f5e67b2aa075db, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0237e371e20d44b867f5e67b2aa075db->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0237e371e20d44b867f5e67b2aa075db, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0237e371e20d44b867f5e67b2aa075db,
        type_description_1,
        par_A,
        par_B,
        par_format,
        var_dtype,
        var_L,
        var_R
    );


    // Release cached frame.
    if ( frame_0237e371e20d44b867f5e67b2aa075db == cache_frame_0237e371e20d44b867f5e67b2aa075db )
    {
        Py_DECREF( frame_0237e371e20d44b867f5e67b2aa075db );
    }
    cache_frame_0237e371e20d44b867f5e67b2aa075db = NULL;

    assertFrameObject( frame_0237e371e20d44b867f5e67b2aa075db );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_6_kronsum );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)var_dtype );
    Py_DECREF( var_dtype );
    var_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_L );
    Py_DECREF( var_L );
    var_L = NULL;

    CHECK_OBJECT( (PyObject *)var_R );
    Py_DECREF( var_R );
    var_R = NULL;

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

    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_L );
    var_L = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_6_kronsum );
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


static PyObject *impl_scipy$sparse$construct$$$function_7__compressed_sparse_stack( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_blocks = python_pars[ 0 ];
    struct Nuitka_CellObject *par_axis = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *var_other_axis = NULL;
    PyObject *var_data = NULL;
    PyObject *var_constant_dim = NULL;
    PyObject *var_idx_dtype = NULL;
    PyObject *var_indices = NULL;
    PyObject *var_indptr = NULL;
    PyObject *var_last_indptr = NULL;
    PyObject *var_sum_dim = NULL;
    PyObject *var_sum_indices = NULL;
    PyObject *var_b = NULL;
    PyObject *var_idxs = NULL;
    PyObject *outline_0_var_b = NULL;
    PyObject *outline_1_var_b = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_bee7f5c4d040444a673dc61ebdd0448e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_a32dbb38160f11e6c33a219dd3788190_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a32dbb38160f11e6c33a219dd3788190_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_3577735733f72252ebf8288b7e024fb6_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_3577735733f72252ebf8288b7e024fb6_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bee7f5c4d040444a673dc61ebdd0448e = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bee7f5c4d040444a673dc61ebdd0448e, codeobj_bee7f5c4d040444a673dc61ebdd0448e, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bee7f5c4d040444a673dc61ebdd0448e = cache_frame_bee7f5c4d040444a673dc61ebdd0448e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bee7f5c4d040444a673dc61ebdd0448e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bee7f5c4d040444a673dc61ebdd0448e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( PyCell_GET( par_axis ) );
        tmp_compexpr_left_1 = PyCell_GET( par_axis );
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
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
        tmp_assign_source_1 = const_int_pos_1;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_1 = const_int_0;
        condexpr_end_1:;
        assert( var_other_axis == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_other_axis = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 407;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_concatenate );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_blocks );
            tmp_iter_arg_1 = par_blocks;
            tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 407;
                type_description_1 = "ocooooooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_a32dbb38160f11e6c33a219dd3788190_2, codeobj_a32dbb38160f11e6c33a219dd3788190, module_scipy$sparse$construct, sizeof(void *) );
        frame_a32dbb38160f11e6c33a219dd3788190_2 = cache_frame_a32dbb38160f11e6c33a219dd3788190_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_a32dbb38160f11e6c33a219dd3788190_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_a32dbb38160f11e6c33a219dd3788190_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 407;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_b;
                outline_0_var_b = tmp_assign_source_6;
                Py_INCREF( outline_0_var_b );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT( outline_0_var_b );
            tmp_source_name_2 = outline_0_var_b;
            tmp_append_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_data );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 407;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 407;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_args_element_name_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_args_element_name_1 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_7__compressed_sparse_stack );
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
        RESTORE_FRAME_EXCEPTION( frame_a32dbb38160f11e6c33a219dd3788190_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_a32dbb38160f11e6c33a219dd3788190_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_a32dbb38160f11e6c33a219dd3788190_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_a32dbb38160f11e6c33a219dd3788190_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_a32dbb38160f11e6c33a219dd3788190_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_a32dbb38160f11e6c33a219dd3788190_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_a32dbb38160f11e6c33a219dd3788190_2,
            type_description_2,
            outline_0_var_b
        );


        // Release cached frame.
        if ( frame_a32dbb38160f11e6c33a219dd3788190_2 == cache_frame_a32dbb38160f11e6c33a219dd3788190_2 )
        {
            Py_DECREF( frame_a32dbb38160f11e6c33a219dd3788190_2 );
        }
        cache_frame_a32dbb38160f11e6c33a219dd3788190_2 = NULL;

        assertFrameObject( frame_a32dbb38160f11e6c33a219dd3788190_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ocooooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_7__compressed_sparse_stack );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_b );
        outline_0_var_b = NULL;

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
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_7__compressed_sparse_stack );
        return NULL;
        outline_exception_1:;
        exception_lineno = 407;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_bee7f5c4d040444a673dc61ebdd0448e->m_frame.f_lineno = 407;
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


            exception_lineno = 407;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_data == NULL );
        var_data = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_blocks );
        tmp_subscribed_name_2 = par_blocks;
        tmp_subscript_name_1 = const_int_0;
        tmp_source_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_1, 0 );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 408;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 408;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_other_axis );
        tmp_subscript_name_2 = var_other_axis;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 408;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_constant_dim == NULL );
        var_constant_dim = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_get_index_dtype );

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

            exception_lineno = 409;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        tmp_dict_key_1 = const_str_plain_arrays;
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( par_blocks );
            tmp_iter_arg_2 = par_blocks;
            tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_1 = "ocooooooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_listcomp_2__$0 == NULL );
            tmp_listcomp_2__$0 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = PyList_New( 0 );
            assert( tmp_listcomp_2__contraction == NULL );
            tmp_listcomp_2__contraction = tmp_assign_source_10;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_3577735733f72252ebf8288b7e024fb6_3, codeobj_3577735733f72252ebf8288b7e024fb6, module_scipy$sparse$construct, sizeof(void *) );
        frame_3577735733f72252ebf8288b7e024fb6_3 = cache_frame_3577735733f72252ebf8288b7e024fb6_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_3577735733f72252ebf8288b7e024fb6_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_3577735733f72252ebf8288b7e024fb6_3 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_listcomp_2__$0 );
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_11 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 409;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_11;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
            tmp_assign_source_12 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_b;
                outline_1_var_b = tmp_assign_source_12;
                Py_INCREF( outline_1_var_b );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_listcomp_2__contraction );
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT( outline_1_var_b );
            tmp_source_name_4 = outline_1_var_b;
            tmp_append_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_indptr );
            if ( tmp_append_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            assert( PyList_Check( tmp_append_list_2 ) );
            tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
            Py_DECREF( tmp_append_value_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 409;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT( tmp_listcomp_2__contraction );
        tmp_dict_value_1 = tmp_listcomp_2__contraction;
        Py_INCREF( tmp_dict_value_1 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_7__compressed_sparse_stack );
        return NULL;
        // Return handler code:
        try_return_handler_5:;
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
        try_except_handler_5:;
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
        RESTORE_FRAME_EXCEPTION( frame_3577735733f72252ebf8288b7e024fb6_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_3577735733f72252ebf8288b7e024fb6_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_3577735733f72252ebf8288b7e024fb6_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_3577735733f72252ebf8288b7e024fb6_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_3577735733f72252ebf8288b7e024fb6_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_3577735733f72252ebf8288b7e024fb6_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_3577735733f72252ebf8288b7e024fb6_3,
            type_description_2,
            outline_1_var_b
        );


        // Release cached frame.
        if ( frame_3577735733f72252ebf8288b7e024fb6_3 == cache_frame_3577735733f72252ebf8288b7e024fb6_3 )
        {
            Py_DECREF( frame_3577735733f72252ebf8288b7e024fb6_3 );
        }
        cache_frame_3577735733f72252ebf8288b7e024fb6_3 = NULL;

        assertFrameObject( frame_3577735733f72252ebf8288b7e024fb6_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ocooooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_7__compressed_sparse_stack );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF( outline_1_var_b );
        outline_1_var_b = NULL;

        goto outline_result_2;
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

        Py_XDECREF( outline_1_var_b );
        outline_1_var_b = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_7__compressed_sparse_stack );
        return NULL;
        outline_exception_2:;
        exception_lineno = 409;
        goto frame_exception_exit_1;
        outline_result_2:;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_maxval;
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_3 != NULL );
        CHECK_OBJECT( var_data );
        tmp_source_name_5 = var_data;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_size );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 410;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_constant_dim );
        tmp_args_element_name_3 = var_constant_dim;
        frame_bee7f5c4d040444a673dc61ebdd0448e->m_frame.f_lineno = 410;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 410;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_bee7f5c4d040444a673dc61ebdd0448e->m_frame.f_lineno = 409;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 409;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_idx_dtype == NULL );
        var_idx_dtype = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 411;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_3;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_empty );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_data );
        tmp_source_name_7 = var_data;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_size );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 411;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_3 = const_str_plain_dtype;
        CHECK_OBJECT( var_idx_dtype );
        tmp_dict_value_3 = var_idx_dtype;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_bee7f5c4d040444a673dc61ebdd0448e->m_frame.f_lineno = 411;
        tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_indices == NULL );
        var_indices = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_sum_sequence_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 412;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_4;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_empty );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( par_blocks );
            tmp_iter_arg_3 = par_blocks;
            tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 412;
                type_description_1 = "ocooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_15;
        }
        // Tried code:
        tmp_sum_sequence_1 = scipy$sparse$construct$$$function_7__compressed_sparse_stack$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_sum_sequence_1)->m_closure[0] = par_axis;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_sum_sequence_1)->m_closure[0] );
        ((struct Nuitka_GeneratorObject *)tmp_sum_sequence_1)->m_closure[1] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_7__compressed_sparse_stack );
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_3;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_7__compressed_sparse_stack );
        return NULL;
        outline_result_3:;
        tmp_left_name_1 = BUILTIN_SUM1( tmp_sum_sequence_1 );
        Py_DECREF( tmp_sum_sequence_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 412;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 412;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_dict_key_4 = const_str_plain_dtype;
        CHECK_OBJECT( var_idx_dtype );
        tmp_dict_value_4 = var_idx_dtype;
        tmp_kw_name_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        frame_bee7f5c4d040444a673dc61ebdd0448e->m_frame.f_lineno = 412;
        tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_indptr == NULL );
        var_indptr = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_6;
        CHECK_OBJECT( var_idx_dtype );
        tmp_called_name_6 = var_idx_dtype;
        frame_bee7f5c4d040444a673dc61ebdd0448e->m_frame.f_lineno = 413;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_last_indptr == NULL );
        var_last_indptr = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = const_int_0;
        assert( var_sum_dim == NULL );
        Py_INCREF( tmp_assign_source_17 );
        var_sum_dim = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = const_int_0;
        assert( var_sum_indices == NULL );
        Py_INCREF( tmp_assign_source_18 );
        var_sum_indices = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT( par_blocks );
        tmp_iter_arg_4 = par_blocks;
        tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_4 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_19;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_3 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_3 );
        if ( tmp_assign_source_20 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_3;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ocooooooooooo";
                exception_lineno = 416;
                goto try_except_handler_7;
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
            PyObject *old = var_b;
            var_b = tmp_assign_source_21;
            Py_INCREF( var_b );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_9;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_b );
        tmp_source_name_9 = var_b;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_other_axis );
        tmp_subscript_name_3 = var_other_axis;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_constant_dim );
        tmp_compexpr_right_2 = var_constant_dim;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            tmp_left_name_2 = const_str_digest_95344b67badea0fe9b4ba2b8c3b42370;
            CHECK_OBJECT( var_other_axis );
            tmp_right_name_2 = var_other_axis;
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 418;
                type_description_1 = "ocooooooooooo";
                goto try_except_handler_7;
            }
            frame_bee7f5c4d040444a673dc61ebdd0448e->m_frame.f_lineno = 418;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 418;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_source_name_10;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( var_b );
        tmp_source_name_10 = var_b;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_indices );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_indices );
        tmp_ass_subscribed_1 = var_indices;
        CHECK_OBJECT( var_sum_indices );
        tmp_start_name_1 = var_sum_indices;
        CHECK_OBJECT( var_sum_indices );
        tmp_left_name_3 = var_sum_indices;
        CHECK_OBJECT( var_b );
        tmp_source_name_12 = var_b;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_indices );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 419;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_size );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 419;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 419;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        tmp_step_name_1 = Py_None;
        tmp_ass_subscript_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_ass_subscript_1 == NULL) );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_source_name_13;
        PyObject *tmp_source_name_14;
        CHECK_OBJECT( var_sum_indices );
        tmp_left_name_4 = var_sum_indices;
        CHECK_OBJECT( var_b );
        tmp_source_name_14 = var_b;
        tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_indices );
        if ( tmp_source_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_size );
        Py_DECREF( tmp_source_name_13 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_22 = tmp_left_name_4;
        var_sum_indices = tmp_assign_source_22;

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_source_name_15;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( var_sum_dim );
        tmp_start_name_2 = var_sum_dim;
        CHECK_OBJECT( var_sum_dim );
        tmp_left_name_5 = var_sum_dim;
        CHECK_OBJECT( var_b );
        tmp_source_name_15 = var_b;
        tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_shape );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( PyCell_GET( par_axis ) );
        tmp_subscript_name_4 = PyCell_GET( par_axis );
        tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        tmp_stop_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_stop_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        tmp_step_name_2 = Py_None;
        tmp_assign_source_23 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_stop_name_2 );
        assert( !(tmp_assign_source_23 == NULL) );
        {
            PyObject *old = var_idxs;
            var_idxs = tmp_assign_source_23;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_source_name_16;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( var_b );
        tmp_source_name_16 = var_b;
        tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_indptr );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        tmp_subscript_name_5 = const_slice_none_int_neg_1_none;
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_indptr );
        tmp_ass_subscribed_2 = var_indptr;
        CHECK_OBJECT( var_idxs );
        tmp_ass_subscript_2 = var_idxs;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
    }
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( var_indptr );
        tmp_assign_source_24 = var_indptr;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_24;
            Py_INCREF( tmp_inplace_assign_subscr_1__target );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( var_idxs );
        tmp_assign_source_25 = var_idxs;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_25;
            Py_INCREF( tmp_inplace_assign_subscr_1__subscript );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_6;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_6 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_subscript_name_6 = tmp_inplace_assign_subscr_1__subscript;
        tmp_left_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT( var_last_indptr );
        tmp_right_name_6 = var_last_indptr;
        tmp_ass_subvalue_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_8;
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


            exception_lineno = 423;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_8;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_8:;
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

    goto try_except_handler_7;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_source_name_17;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT( var_sum_dim );
        tmp_left_name_7 = var_sum_dim;
        CHECK_OBJECT( var_b );
        tmp_source_name_17 = var_b;
        tmp_subscribed_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_shape );
        if ( tmp_subscribed_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( PyCell_GET( par_axis ) );
        tmp_subscript_name_7 = PyCell_GET( par_axis );
        tmp_right_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        Py_DECREF( tmp_subscribed_name_7 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_26 = tmp_left_name_7;
        var_sum_dim = tmp_assign_source_26;

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_source_name_18;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT( var_last_indptr );
        tmp_left_name_8 = var_last_indptr;
        CHECK_OBJECT( var_b );
        tmp_source_name_18 = var_b;
        tmp_subscribed_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_indptr );
        if ( tmp_subscribed_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        tmp_subscript_name_8 = const_int_neg_1;
        tmp_right_name_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, -1 );
        Py_DECREF( tmp_subscribed_name_8 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "ocooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_27 = tmp_left_name_8;
        var_last_indptr = tmp_assign_source_27;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        type_description_1 = "ocooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_2;
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
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( var_last_indptr );
        tmp_ass_subvalue_4 = var_last_indptr;
        CHECK_OBJECT( var_indptr );
        tmp_ass_subscribed_4 = var_indptr;
        tmp_ass_subscript_4 = const_int_neg_1;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_4, tmp_ass_subscript_4, -1, tmp_ass_subvalue_4 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( PyCell_GET( par_axis ) );
        tmp_compexpr_left_3 = PyCell_GET( par_axis );
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 427;
            type_description_1 = "ocooooooooooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_tuple_element_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csr_matrix );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_matrix );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csr_matrix" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 428;
                type_description_1 = "ocooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_5;
            CHECK_OBJECT( var_data );
            tmp_tuple_element_4 = var_data;
            tmp_tuple_element_3 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( var_indices );
            tmp_tuple_element_4 = var_indices;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_tuple_element_3, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( var_indptr );
            tmp_tuple_element_4 = var_indptr;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_tuple_element_3, 2, tmp_tuple_element_4 );
            tmp_args_name_3 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
            tmp_dict_key_5 = const_str_plain_shape;
            CHECK_OBJECT( var_sum_dim );
            tmp_tuple_element_5 = var_sum_dim;
            tmp_dict_value_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_dict_value_5, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( var_constant_dim );
            tmp_tuple_element_5 = var_constant_dim;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_dict_value_5, 1, tmp_tuple_element_5 );
            tmp_kw_name_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_5, tmp_dict_value_5 );
            Py_DECREF( tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            frame_bee7f5c4d040444a673dc61ebdd0448e->m_frame.f_lineno = 428;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 428;
                type_description_1 = "ocooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_tuple_element_8;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csc_matrix );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csc_matrix" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 431;
                type_description_1 = "ocooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_8 = tmp_mvar_value_6;
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
            tmp_args_name_4 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
            tmp_dict_key_6 = const_str_plain_shape;
            CHECK_OBJECT( var_constant_dim );
            tmp_tuple_element_8 = var_constant_dim;
            tmp_dict_value_6 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_dict_value_6, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( var_sum_dim );
            tmp_tuple_element_8 = var_sum_dim;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_dict_value_6, 1, tmp_tuple_element_8 );
            tmp_kw_name_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_6, tmp_dict_value_6 );
            Py_DECREF( tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            frame_bee7f5c4d040444a673dc61ebdd0448e->m_frame.f_lineno = 431;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_4, tmp_kw_name_5 );
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_5 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 431;
                type_description_1 = "ocooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bee7f5c4d040444a673dc61ebdd0448e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bee7f5c4d040444a673dc61ebdd0448e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bee7f5c4d040444a673dc61ebdd0448e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bee7f5c4d040444a673dc61ebdd0448e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bee7f5c4d040444a673dc61ebdd0448e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bee7f5c4d040444a673dc61ebdd0448e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bee7f5c4d040444a673dc61ebdd0448e,
        type_description_1,
        par_blocks,
        par_axis,
        var_other_axis,
        var_data,
        var_constant_dim,
        var_idx_dtype,
        var_indices,
        var_indptr,
        var_last_indptr,
        var_sum_dim,
        var_sum_indices,
        var_b,
        var_idxs
    );


    // Release cached frame.
    if ( frame_bee7f5c4d040444a673dc61ebdd0448e == cache_frame_bee7f5c4d040444a673dc61ebdd0448e )
    {
        Py_DECREF( frame_bee7f5c4d040444a673dc61ebdd0448e );
    }
    cache_frame_bee7f5c4d040444a673dc61ebdd0448e = NULL;

    assertFrameObject( frame_bee7f5c4d040444a673dc61ebdd0448e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_7__compressed_sparse_stack );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_blocks );
    Py_DECREF( par_blocks );
    par_blocks = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_other_axis );
    Py_DECREF( var_other_axis );
    var_other_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

    CHECK_OBJECT( (PyObject *)var_constant_dim );
    Py_DECREF( var_constant_dim );
    var_constant_dim = NULL;

    CHECK_OBJECT( (PyObject *)var_idx_dtype );
    Py_DECREF( var_idx_dtype );
    var_idx_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_indices );
    Py_DECREF( var_indices );
    var_indices = NULL;

    CHECK_OBJECT( (PyObject *)var_indptr );
    Py_DECREF( var_indptr );
    var_indptr = NULL;

    CHECK_OBJECT( (PyObject *)var_last_indptr );
    Py_DECREF( var_last_indptr );
    var_last_indptr = NULL;

    CHECK_OBJECT( (PyObject *)var_sum_dim );
    Py_DECREF( var_sum_dim );
    var_sum_dim = NULL;

    CHECK_OBJECT( (PyObject *)var_sum_indices );
    Py_DECREF( var_sum_indices );
    var_sum_indices = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_idxs );
    var_idxs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_blocks );
    Py_DECREF( par_blocks );
    par_blocks = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_other_axis );
    var_other_axis = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_constant_dim );
    var_constant_dim = NULL;

    Py_XDECREF( var_idx_dtype );
    var_idx_dtype = NULL;

    Py_XDECREF( var_indices );
    var_indices = NULL;

    Py_XDECREF( var_indptr );
    var_indptr = NULL;

    Py_XDECREF( var_last_indptr );
    var_last_indptr = NULL;

    Py_XDECREF( var_sum_dim );
    var_sum_dim = NULL;

    Py_XDECREF( var_sum_indices );
    var_sum_indices = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_idxs );
    var_idxs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_7__compressed_sparse_stack );
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



struct scipy$sparse$construct$$$function_7__compressed_sparse_stack$$$genexpr_1_genexpr_locals {
    PyObject *var_b;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
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

static PyObject *scipy$sparse$construct$$$function_7__compressed_sparse_stack$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$sparse$construct$$$function_7__compressed_sparse_stack$$$genexpr_1_genexpr_locals *generator_heap = (struct scipy$sparse$construct$$$function_7__compressed_sparse_stack$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_b = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_b3467028f6453f7916293b8fa42971b1, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
        CHECK_OBJECT( PyCell_GET( generator->m_closure[1] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[1] );
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
                generator_heap->exception_lineno = 412;
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
            PyObject *old = generator_heap->var_b;
            generator_heap->var_b = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_b );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_b );
        tmp_source_name_1 = generator_heap->var_b;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 412;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_subscribed_name_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "axis" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 412;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_subscript_name_1 = PyCell_GET( generator->m_closure[0] );
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 412;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_subscribed_name_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), &tmp_subscript_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_subscribed_name_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), &tmp_subscript_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 412;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 412;
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
            generator_heap->var_b,
            generator->m_closure[0]
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

    Py_XDECREF( generator_heap->var_b );
    generator_heap->var_b = NULL;

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

    Py_XDECREF( generator_heap->var_b );
    generator_heap->var_b = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$sparse$construct$$$function_7__compressed_sparse_stack$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$sparse$construct$$$function_7__compressed_sparse_stack$$$genexpr_1_genexpr_context,
        module_scipy$sparse$construct,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_31fddb40eae1bc201f70c5874f2be1ed,
#endif
        codeobj_b3467028f6453f7916293b8fa42971b1,
        2,
        sizeof(struct scipy$sparse$construct$$$function_7__compressed_sparse_stack$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_scipy$sparse$construct$$$function_8_hstack( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_blocks = python_pars[ 0 ];
    PyObject *par_format = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_19b6fb309e2f5a17a11c4b281e2f424e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_19b6fb309e2f5a17a11c4b281e2f424e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_19b6fb309e2f5a17a11c4b281e2f424e, codeobj_19b6fb309e2f5a17a11c4b281e2f424e, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_19b6fb309e2f5a17a11c4b281e2f424e = cache_frame_19b6fb309e2f5a17a11c4b281e2f424e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_19b6fb309e2f5a17a11c4b281e2f424e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_19b6fb309e2f5a17a11c4b281e2f424e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_bmat );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bmat );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bmat" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 465;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_blocks );
        tmp_list_element_1 = par_blocks;
        tmp_tuple_element_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_format;
        CHECK_OBJECT( par_format );
        tmp_dict_value_1 = par_format;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_dtype;
        CHECK_OBJECT( par_dtype );
        tmp_dict_value_2 = par_dtype;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_19b6fb309e2f5a17a11c4b281e2f424e->m_frame.f_lineno = 465;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 465;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19b6fb309e2f5a17a11c4b281e2f424e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_19b6fb309e2f5a17a11c4b281e2f424e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19b6fb309e2f5a17a11c4b281e2f424e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_19b6fb309e2f5a17a11c4b281e2f424e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_19b6fb309e2f5a17a11c4b281e2f424e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_19b6fb309e2f5a17a11c4b281e2f424e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_19b6fb309e2f5a17a11c4b281e2f424e,
        type_description_1,
        par_blocks,
        par_format,
        par_dtype
    );


    // Release cached frame.
    if ( frame_19b6fb309e2f5a17a11c4b281e2f424e == cache_frame_19b6fb309e2f5a17a11c4b281e2f424e )
    {
        Py_DECREF( frame_19b6fb309e2f5a17a11c4b281e2f424e );
    }
    cache_frame_19b6fb309e2f5a17a11c4b281e2f424e = NULL;

    assertFrameObject( frame_19b6fb309e2f5a17a11c4b281e2f424e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_8_hstack );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_blocks );
    Py_DECREF( par_blocks );
    par_blocks = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

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

    CHECK_OBJECT( (PyObject *)par_blocks );
    Py_DECREF( par_blocks );
    par_blocks = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_8_hstack );
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


static PyObject *impl_scipy$sparse$construct$$$function_9_vstack( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_blocks = python_pars[ 0 ];
    PyObject *par_format = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *outline_0_var_b = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_1b003c85600eaa13b3a1c89f5cb1ec13;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_d709cd52fc18619f3d5f1065b13e4d37_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_d709cd52fc18619f3d5f1065b13e4d37_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_1b003c85600eaa13b3a1c89f5cb1ec13 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1b003c85600eaa13b3a1c89f5cb1ec13, codeobj_1b003c85600eaa13b3a1c89f5cb1ec13, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1b003c85600eaa13b3a1c89f5cb1ec13 = cache_frame_1b003c85600eaa13b3a1c89f5cb1ec13;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1b003c85600eaa13b3a1c89f5cb1ec13 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1b003c85600eaa13b3a1c89f5cb1ec13 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_bmat );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bmat );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bmat" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 499;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_blocks );
            tmp_iter_arg_1 = par_blocks;
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 499;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_d709cd52fc18619f3d5f1065b13e4d37_2, codeobj_d709cd52fc18619f3d5f1065b13e4d37, module_scipy$sparse$construct, sizeof(void *) );
        frame_d709cd52fc18619f3d5f1065b13e4d37_2 = cache_frame_d709cd52fc18619f3d5f1065b13e4d37_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_d709cd52fc18619f3d5f1065b13e4d37_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_d709cd52fc18619f3d5f1065b13e4d37_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
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
                    type_description_2 = "o";
                    exception_lineno = 499;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_b;
                outline_0_var_b = tmp_assign_source_4;
                Py_INCREF( outline_0_var_b );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_list_element_1;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT( outline_0_var_b );
            tmp_list_element_1 = outline_0_var_b;
            tmp_append_value_1 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_append_value_1, 0, tmp_list_element_1 );
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 499;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 499;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_tuple_element_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_tuple_element_1 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_9_vstack );
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
        RESTORE_FRAME_EXCEPTION( frame_d709cd52fc18619f3d5f1065b13e4d37_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_d709cd52fc18619f3d5f1065b13e4d37_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_d709cd52fc18619f3d5f1065b13e4d37_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_d709cd52fc18619f3d5f1065b13e4d37_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_d709cd52fc18619f3d5f1065b13e4d37_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_d709cd52fc18619f3d5f1065b13e4d37_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_d709cd52fc18619f3d5f1065b13e4d37_2,
            type_description_2,
            outline_0_var_b
        );


        // Release cached frame.
        if ( frame_d709cd52fc18619f3d5f1065b13e4d37_2 == cache_frame_d709cd52fc18619f3d5f1065b13e4d37_2 )
        {
            Py_DECREF( frame_d709cd52fc18619f3d5f1065b13e4d37_2 );
        }
        cache_frame_d709cd52fc18619f3d5f1065b13e4d37_2 = NULL;

        assertFrameObject( frame_d709cd52fc18619f3d5f1065b13e4d37_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_9_vstack );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_b );
        outline_0_var_b = NULL;

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
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_9_vstack );
        return NULL;
        outline_exception_1:;
        exception_lineno = 499;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_format;
        CHECK_OBJECT( par_format );
        tmp_dict_value_1 = par_format;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_dtype;
        CHECK_OBJECT( par_dtype );
        tmp_dict_value_2 = par_dtype;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_1b003c85600eaa13b3a1c89f5cb1ec13->m_frame.f_lineno = 499;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 499;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b003c85600eaa13b3a1c89f5cb1ec13 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b003c85600eaa13b3a1c89f5cb1ec13 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b003c85600eaa13b3a1c89f5cb1ec13 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1b003c85600eaa13b3a1c89f5cb1ec13, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1b003c85600eaa13b3a1c89f5cb1ec13->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1b003c85600eaa13b3a1c89f5cb1ec13, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1b003c85600eaa13b3a1c89f5cb1ec13,
        type_description_1,
        par_blocks,
        par_format,
        par_dtype
    );


    // Release cached frame.
    if ( frame_1b003c85600eaa13b3a1c89f5cb1ec13 == cache_frame_1b003c85600eaa13b3a1c89f5cb1ec13 )
    {
        Py_DECREF( frame_1b003c85600eaa13b3a1c89f5cb1ec13 );
    }
    cache_frame_1b003c85600eaa13b3a1c89f5cb1ec13 = NULL;

    assertFrameObject( frame_1b003c85600eaa13b3a1c89f5cb1ec13 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_9_vstack );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_blocks );
    Py_DECREF( par_blocks );
    par_blocks = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

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

    CHECK_OBJECT( (PyObject *)par_blocks );
    Py_DECREF( par_blocks );
    par_blocks = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_9_vstack );
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


static PyObject *impl_scipy$sparse$construct$$$function_10_bmat( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_blocks = python_pars[ 0 ];
    PyObject *par_format = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *var_M = NULL;
    PyObject *var_N = NULL;
    PyObject *var_A = NULL;
    PyObject *var_block_mask = NULL;
    PyObject *var_brow_lengths = NULL;
    PyObject *var_bcol_lengths = NULL;
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *var_msg = NULL;
    PyObject *var_nnz = NULL;
    PyObject *var_all_dtypes = NULL;
    PyObject *var_row_offsets = NULL;
    PyObject *var_col_offsets = NULL;
    PyObject *var_shape = NULL;
    PyObject *var_data = NULL;
    PyObject *var_idx_dtype = NULL;
    PyObject *var_row = NULL;
    PyObject *var_col = NULL;
    PyObject *var_ii = NULL;
    PyObject *var_jj = NULL;
    PyObject *var_B = NULL;
    PyObject *var_idx = NULL;
    PyObject *outline_0_var_blk = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    PyObject *tmp_genexpr_3__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_72d15b9d18b0ea5f4d2a74a608e5043d;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_5690f7ccff881e6807c35ba6bf084140_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_5690f7ccff881e6807c35ba6bf084140_2 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_72d15b9d18b0ea5f4d2a74a608e5043d = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_72d15b9d18b0ea5f4d2a74a608e5043d, codeobj_72d15b9d18b0ea5f4d2a74a608e5043d, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_72d15b9d18b0ea5f4d2a74a608e5043d = cache_frame_72d15b9d18b0ea5f4d2a74a608e5043d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_72d15b9d18b0ea5f4d2a74a608e5043d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_72d15b9d18b0ea5f4d2a74a608e5043d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 545;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_blocks );
        tmp_tuple_element_1 = par_blocks;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_5ab4855118dc1dee85b08d612b753df7 );
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 545;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_blocks;
            assert( old != NULL );
            par_blocks = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_blocks );
        tmp_source_name_2 = par_blocks;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 547;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 547;
            type_description_1 = "ooooooooooooooooooooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_e8c218e2459ecbc0770b6fd6517590e7;
            frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 548;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 548;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_blocks );
        tmp_source_name_3 = par_blocks;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 550;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 550;
            type_description_1 = "ooooooooooooooooooooooooo";
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


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 550;
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


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 550;
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

                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 550;
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
            exception_lineno = 550;
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
        assert( var_M == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_M = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_N == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_N = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_N );
        tmp_compexpr_left_2 = var_N;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 553;
            type_description_1 = "ooooooooooooooooooooooooo";
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
        CHECK_OBJECT( par_format );
        tmp_compexpr_left_3 = par_format;
        tmp_compexpr_right_3 = const_tuple_none_str_plain_csr_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 553;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_all );
        assert( tmp_called_name_2 != NULL );
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_blocks );
            tmp_source_name_4 = par_blocks;
            tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_flat );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 554;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 553;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_7;
        }
        // Tried code:
        tmp_args_element_name_1 = scipy$sparse$construct$$$function_10_bmat$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_10_bmat );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_10_bmat );
        return NULL;
        outline_result_1:;
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 553;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 553;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 553;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain__compressed_sparse_stack );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compressed_sparse_stack );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_compressed_sparse_stack" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 555;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_2;
            CHECK_OBJECT( par_blocks );
            tmp_subscribed_name_1 = par_blocks;
            tmp_subscript_name_1 = const_tuple_slice_none_none_none_int_0_tuple;
            tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 555;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_3 = const_int_0;
            frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 555;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 555;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_A == NULL );
            var_A = tmp_assign_source_8;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( par_dtype );
            tmp_compexpr_left_4 = par_dtype;
            tmp_compexpr_right_4 = Py_None;
            tmp_condition_result_3 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_9;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_args_element_name_4;
                CHECK_OBJECT( var_A );
                tmp_called_instance_1 = var_A;
                CHECK_OBJECT( par_dtype );
                tmp_args_element_name_4 = par_dtype;
                frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 557;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_astype, call_args );
                }

                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 557;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_A;
                    assert( old != NULL );
                    var_A = tmp_assign_source_9;
                    Py_DECREF( old );
                }

            }
            branch_no_3:;
        }
        CHECK_OBJECT( var_A );
        tmp_return_value = var_A;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_4;
            int tmp_and_left_truth_3;
            nuitka_bool tmp_and_left_value_3;
            nuitka_bool tmp_and_right_value_3;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            int tmp_and_left_truth_4;
            nuitka_bool tmp_and_left_value_4;
            nuitka_bool tmp_and_right_value_4;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_called_name_4;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_5;
            int tmp_truth_name_2;
            CHECK_OBJECT( var_M );
            tmp_compexpr_left_5 = var_M;
            tmp_compexpr_right_5 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 559;
                type_description_1 = "ooooooooooooooooooooooooo";
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
            CHECK_OBJECT( par_format );
            tmp_compexpr_left_6 = par_format;
            tmp_compexpr_right_6 = const_tuple_none_str_plain_csc_tuple;
            tmp_res = PySequence_Contains( tmp_compexpr_right_6, tmp_compexpr_left_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 559;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_4 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_all );
            assert( tmp_called_name_4 != NULL );
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_iter_arg_3;
                PyObject *tmp_source_name_5;
                CHECK_OBJECT( par_blocks );
                tmp_source_name_5 = par_blocks;
                tmp_iter_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_flat );
                if ( tmp_iter_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 560;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
                Py_DECREF( tmp_iter_arg_3 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 560;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_genexpr_2__$0 == NULL );
                tmp_genexpr_2__$0 = tmp_assign_source_10;
            }
            // Tried code:
            tmp_args_element_name_5 = scipy$sparse$construct$$$function_10_bmat$$$genexpr_2_genexpr_maker();

            ((struct Nuitka_GeneratorObject *)tmp_args_element_name_5)->m_closure[0] = PyCell_NEW0( tmp_genexpr_2__$0 );


            goto try_return_handler_5;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_10_bmat );
            return NULL;
            // Return handler code:
            try_return_handler_5:;
            CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
            Py_DECREF( tmp_genexpr_2__$0 );
            tmp_genexpr_2__$0 = NULL;

            goto outline_result_2;
            // End of try:
            CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
            Py_DECREF( tmp_genexpr_2__$0 );
            tmp_genexpr_2__$0 = NULL;

            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_10_bmat );
            return NULL;
            outline_result_2:;
            frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 560;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 560;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 560;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
            tmp_and_right_value_3 = tmp_and_right_value_4;
            goto and_end_4;
            and_left_4:;
            tmp_and_right_value_3 = tmp_and_left_value_4;
            and_end_4:;
            tmp_condition_result_4 = tmp_and_right_value_3;
            goto and_end_3;
            and_left_3:;
            tmp_condition_result_4 = tmp_and_left_value_3;
            and_end_3:;
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
                PyObject *tmp_assign_source_11;
                PyObject *tmp_called_name_5;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_args_element_name_7;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain__compressed_sparse_stack );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compressed_sparse_stack );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_compressed_sparse_stack" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 561;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_5 = tmp_mvar_value_3;
                CHECK_OBJECT( par_blocks );
                tmp_subscribed_name_2 = par_blocks;
                tmp_subscript_name_2 = const_tuple_int_0_slice_none_none_none_tuple;
                tmp_args_element_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 561;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_7 = const_int_pos_1;
                frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 561;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
                }

                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 561;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_A == NULL );
                var_A = tmp_assign_source_11;
            }
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_7;
                PyObject *tmp_compexpr_right_7;
                CHECK_OBJECT( par_dtype );
                tmp_compexpr_left_7 = par_dtype;
                tmp_compexpr_right_7 = Py_None;
                tmp_condition_result_5 = ( tmp_compexpr_left_7 != tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_args_element_name_8;
                    CHECK_OBJECT( var_A );
                    tmp_called_instance_2 = var_A;
                    CHECK_OBJECT( par_dtype );
                    tmp_args_element_name_8 = par_dtype;
                    frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 563;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_8 };
                        tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_astype, call_args );
                    }

                    if ( tmp_assign_source_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 563;
                        type_description_1 = "ooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_A;
                        assert( old != NULL );
                        var_A = tmp_assign_source_12;
                        Py_DECREF( old );
                    }

                }
                branch_no_5:;
            }
            CHECK_OBJECT( var_A );
            tmp_return_value = var_A;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_no_4:;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 566;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_4;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_zeros );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 566;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_blocks );
        tmp_source_name_7 = par_blocks;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 566;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_8a6ce79bb59f45c062c2a0027a3a0c33 );
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 566;
        tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 566;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_block_mask == NULL );
        var_block_mask = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 567;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_5;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_zeros );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 567;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_M );
        tmp_tuple_element_3 = var_M;
        tmp_args_name_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
        tmp_dict_key_1 = const_str_plain_dtype;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 567;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_6;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_int64 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_name_3 );

            exception_lineno = 567;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 567;
        tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 567;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_brow_lengths == NULL );
        var_brow_lengths = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 568;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_7;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_zeros );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 568;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_N );
        tmp_tuple_element_4 = var_N;
        tmp_args_name_4 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
        tmp_dict_key_2 = const_str_plain_dtype;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 568;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_8;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_int64 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_name_4 );

            exception_lineno = 568;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 568;
        tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 568;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_bcol_lengths == NULL );
        var_bcol_lengths = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( var_M );
        tmp_xrange_low_1 = var_M;
        tmp_iter_arg_4 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 571;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 571;
            type_description_1 = "ooooooooooooooooooooooooo";
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
                type_description_1 = "ooooooooooooooooooooooooo";
                exception_lineno = 571;
                goto try_except_handler_6;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_18;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_xrange_low_2;
        CHECK_OBJECT( var_N );
        tmp_xrange_low_2 = var_N;
        tmp_iter_arg_5 = BUILTIN_XRANGE1( tmp_xrange_low_2 );
        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 572;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 572;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_20 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooo";
                exception_lineno = 572;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_20;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_21 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_21;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT( par_blocks );
        tmp_subscribed_name_3 = par_blocks;
        CHECK_OBJECT( var_i );
        tmp_tuple_element_5 = var_i;
        tmp_subscript_name_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_j );
        tmp_tuple_element_5 = var_j;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_5 );
        tmp_compexpr_left_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 573;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_compexpr_right_8 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_8 != tmp_compexpr_right_8 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_8 );
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
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_tuple_element_6;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "coo_matrix" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 574;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }

            tmp_called_name_9 = tmp_mvar_value_9;
            CHECK_OBJECT( par_blocks );
            tmp_subscribed_name_4 = par_blocks;
            CHECK_OBJECT( var_i );
            tmp_tuple_element_6 = var_i;
            tmp_subscript_name_4 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_subscript_name_4, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( var_j );
            tmp_tuple_element_6 = var_j;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_subscript_name_4, 1, tmp_tuple_element_6 );
            tmp_args_element_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 574;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 574;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 574;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = var_A;
                var_A = tmp_assign_source_22;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_tuple_element_7;
            CHECK_OBJECT( var_A );
            tmp_ass_subvalue_1 = var_A;
            CHECK_OBJECT( par_blocks );
            tmp_ass_subscribed_1 = par_blocks;
            CHECK_OBJECT( var_i );
            tmp_tuple_element_7 = var_i;
            tmp_ass_subscript_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( var_j );
            tmp_tuple_element_7 = var_j;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_7 );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 575;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_tuple_element_8;
            tmp_ass_subvalue_2 = Py_True;
            CHECK_OBJECT( var_block_mask );
            tmp_ass_subscribed_2 = var_block_mask;
            CHECK_OBJECT( var_i );
            tmp_tuple_element_8 = var_i;
            tmp_ass_subscript_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_ass_subscript_2, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( var_j );
            tmp_tuple_element_8 = var_j;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_ass_subscript_2, 1, tmp_tuple_element_8 );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 576;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( var_brow_lengths );
            tmp_subscribed_name_5 = var_brow_lengths;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_5 = var_i;
            tmp_compexpr_left_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_compexpr_left_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 578;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_compexpr_right_9 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
            Py_DECREF( tmp_compexpr_left_9 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 578;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_7;
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
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_source_name_12;
                PyObject *tmp_subscript_name_6;
                PyObject *tmp_ass_subscribed_3;
                PyObject *tmp_ass_subscript_3;
                CHECK_OBJECT( var_A );
                tmp_source_name_12 = var_A;
                tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_shape );
                if ( tmp_subscribed_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 579;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_subscript_name_6 = const_int_0;
                tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
                Py_DECREF( tmp_subscribed_name_6 );
                if ( tmp_ass_subvalue_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 579;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_brow_lengths );
                tmp_ass_subscribed_3 = var_brow_lengths;
                CHECK_OBJECT( var_i );
                tmp_ass_subscript_3 = var_i;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
                Py_DECREF( tmp_ass_subvalue_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 579;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
            }
            goto branch_end_7;
            branch_no_7:;
            {
                nuitka_bool tmp_condition_result_8;
                PyObject *tmp_compexpr_left_10;
                PyObject *tmp_compexpr_right_10;
                PyObject *tmp_subscribed_name_7;
                PyObject *tmp_subscript_name_7;
                PyObject *tmp_subscribed_name_8;
                PyObject *tmp_source_name_13;
                PyObject *tmp_subscript_name_8;
                CHECK_OBJECT( var_brow_lengths );
                tmp_subscribed_name_7 = var_brow_lengths;
                CHECK_OBJECT( var_i );
                tmp_subscript_name_7 = var_i;
                tmp_compexpr_left_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
                if ( tmp_compexpr_left_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 580;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_A );
                tmp_source_name_13 = var_A;
                tmp_subscribed_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_shape );
                if ( tmp_subscribed_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_10 );

                    exception_lineno = 580;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_subscript_name_8 = const_int_0;
                tmp_compexpr_right_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 0 );
                Py_DECREF( tmp_subscribed_name_8 );
                if ( tmp_compexpr_right_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_10 );

                    exception_lineno = 580;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                Py_DECREF( tmp_compexpr_left_10 );
                Py_DECREF( tmp_compexpr_right_10 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 580;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_7;
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
                    PyObject *tmp_assign_source_23;
                    PyObject *tmp_called_name_10;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_kw_name_5;
                    PyObject *tmp_dict_key_3;
                    PyObject *tmp_dict_value_3;
                    PyObject *tmp_dict_key_4;
                    PyObject *tmp_dict_value_4;
                    PyObject *tmp_dict_key_5;
                    PyObject *tmp_dict_value_5;
                    PyObject *tmp_subscribed_name_9;
                    PyObject *tmp_subscript_name_9;
                    PyObject *tmp_dict_key_6;
                    PyObject *tmp_dict_value_6;
                    PyObject *tmp_subscribed_name_10;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_subscript_name_10;
                    tmp_source_name_14 = const_str_digest_7008a8b5854e531ee8cf46a414202599;
                    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_format );
                    assert( !(tmp_called_name_10 == NULL) );
                    tmp_dict_key_3 = const_str_plain_i;
                    CHECK_OBJECT( var_i );
                    tmp_dict_value_3 = var_i;
                    tmp_kw_name_5 = _PyDict_NewPresized( 4 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_3, tmp_dict_value_3 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_4 = const_str_plain_j;
                    CHECK_OBJECT( var_j );
                    tmp_dict_value_4 = var_j;
                    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_4, tmp_dict_value_4 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_5 = const_str_plain_exp;
                    CHECK_OBJECT( var_brow_lengths );
                    tmp_subscribed_name_9 = var_brow_lengths;
                    CHECK_OBJECT( var_i );
                    tmp_subscript_name_9 = var_i;
                    tmp_dict_value_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
                    if ( tmp_dict_value_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );
                        Py_DECREF( tmp_kw_name_5 );

                        exception_lineno = 584;
                        type_description_1 = "ooooooooooooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_5, tmp_dict_value_5 );
                    Py_DECREF( tmp_dict_value_5 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_6 = const_str_plain_got;
                    CHECK_OBJECT( var_A );
                    tmp_source_name_15 = var_A;
                    tmp_subscribed_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_shape );
                    if ( tmp_subscribed_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );
                        Py_DECREF( tmp_kw_name_5 );

                        exception_lineno = 585;
                        type_description_1 = "ooooooooooooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    tmp_subscript_name_10 = const_int_0;
                    tmp_dict_value_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_10, tmp_subscript_name_10, 0 );
                    Py_DECREF( tmp_subscribed_name_10 );
                    if ( tmp_dict_value_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );
                        Py_DECREF( tmp_kw_name_5 );

                        exception_lineno = 585;
                        type_description_1 = "ooooooooooooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_6, tmp_dict_value_6 );
                    Py_DECREF( tmp_dict_value_6 );
                    assert( !(tmp_res != 0) );
                    frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 581;
                    tmp_assign_source_23 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_10, tmp_kw_name_5 );
                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_kw_name_5 );
                    if ( tmp_assign_source_23 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 581;
                        type_description_1 = "ooooooooooooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    {
                        PyObject *old = var_msg;
                        var_msg = tmp_assign_source_23;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_make_exception_arg_2;
                    CHECK_OBJECT( var_msg );
                    tmp_make_exception_arg_2 = var_msg;
                    frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 586;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_2 };
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_2 == NULL) );
                    exception_type = tmp_raise_type_2;
                    exception_lineno = 586;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                branch_no_8:;
            }
            branch_end_7:;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            PyObject *tmp_subscribed_name_11;
            PyObject *tmp_subscript_name_11;
            CHECK_OBJECT( var_bcol_lengths );
            tmp_subscribed_name_11 = var_bcol_lengths;
            CHECK_OBJECT( var_j );
            tmp_subscript_name_11 = var_j;
            tmp_compexpr_left_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
            if ( tmp_compexpr_left_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 588;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_compexpr_right_11 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
            Py_DECREF( tmp_compexpr_left_11 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 588;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_7;
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
                PyObject *tmp_ass_subvalue_4;
                PyObject *tmp_subscribed_name_12;
                PyObject *tmp_source_name_16;
                PyObject *tmp_subscript_name_12;
                PyObject *tmp_ass_subscribed_4;
                PyObject *tmp_ass_subscript_4;
                CHECK_OBJECT( var_A );
                tmp_source_name_16 = var_A;
                tmp_subscribed_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_shape );
                if ( tmp_subscribed_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 589;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_subscript_name_12 = const_int_pos_1;
                tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_12, tmp_subscript_name_12, 1 );
                Py_DECREF( tmp_subscribed_name_12 );
                if ( tmp_ass_subvalue_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 589;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_bcol_lengths );
                tmp_ass_subscribed_4 = var_bcol_lengths;
                CHECK_OBJECT( var_j );
                tmp_ass_subscript_4 = var_j;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
                Py_DECREF( tmp_ass_subvalue_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 589;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
            }
            goto branch_end_9;
            branch_no_9:;
            {
                nuitka_bool tmp_condition_result_10;
                PyObject *tmp_compexpr_left_12;
                PyObject *tmp_compexpr_right_12;
                PyObject *tmp_subscribed_name_13;
                PyObject *tmp_subscript_name_13;
                PyObject *tmp_subscribed_name_14;
                PyObject *tmp_source_name_17;
                PyObject *tmp_subscript_name_14;
                CHECK_OBJECT( var_bcol_lengths );
                tmp_subscribed_name_13 = var_bcol_lengths;
                CHECK_OBJECT( var_j );
                tmp_subscript_name_13 = var_j;
                tmp_compexpr_left_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
                if ( tmp_compexpr_left_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 590;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_A );
                tmp_source_name_17 = var_A;
                tmp_subscribed_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_shape );
                if ( tmp_subscribed_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_12 );

                    exception_lineno = 590;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_subscript_name_14 = const_int_pos_1;
                tmp_compexpr_right_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_14, tmp_subscript_name_14, 1 );
                Py_DECREF( tmp_subscribed_name_14 );
                if ( tmp_compexpr_right_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_12 );

                    exception_lineno = 590;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
                Py_DECREF( tmp_compexpr_left_12 );
                Py_DECREF( tmp_compexpr_right_12 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 590;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_7;
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
                    PyObject *tmp_assign_source_24;
                    PyObject *tmp_called_name_11;
                    PyObject *tmp_source_name_18;
                    PyObject *tmp_kw_name_6;
                    PyObject *tmp_dict_key_7;
                    PyObject *tmp_dict_value_7;
                    PyObject *tmp_dict_key_8;
                    PyObject *tmp_dict_value_8;
                    PyObject *tmp_dict_key_9;
                    PyObject *tmp_dict_value_9;
                    PyObject *tmp_subscribed_name_15;
                    PyObject *tmp_subscript_name_15;
                    PyObject *tmp_dict_key_10;
                    PyObject *tmp_dict_value_10;
                    PyObject *tmp_subscribed_name_16;
                    PyObject *tmp_source_name_19;
                    PyObject *tmp_subscript_name_16;
                    tmp_source_name_18 = const_str_digest_2032251a696b0a271ea6872284deb8ed;
                    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_format );
                    assert( !(tmp_called_name_11 == NULL) );
                    tmp_dict_key_7 = const_str_plain_i;
                    CHECK_OBJECT( var_i );
                    tmp_dict_value_7 = var_i;
                    tmp_kw_name_6 = _PyDict_NewPresized( 4 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_7, tmp_dict_value_7 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_8 = const_str_plain_j;
                    CHECK_OBJECT( var_j );
                    tmp_dict_value_8 = var_j;
                    tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_8, tmp_dict_value_8 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_9 = const_str_plain_exp;
                    CHECK_OBJECT( var_bcol_lengths );
                    tmp_subscribed_name_15 = var_bcol_lengths;
                    CHECK_OBJECT( var_j );
                    tmp_subscript_name_15 = var_j;
                    tmp_dict_value_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
                    if ( tmp_dict_value_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_11 );
                        Py_DECREF( tmp_kw_name_6 );

                        exception_lineno = 594;
                        type_description_1 = "ooooooooooooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_9, tmp_dict_value_9 );
                    Py_DECREF( tmp_dict_value_9 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_10 = const_str_plain_got;
                    CHECK_OBJECT( var_A );
                    tmp_source_name_19 = var_A;
                    tmp_subscribed_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_shape );
                    if ( tmp_subscribed_name_16 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_11 );
                        Py_DECREF( tmp_kw_name_6 );

                        exception_lineno = 595;
                        type_description_1 = "ooooooooooooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    tmp_subscript_name_16 = const_int_pos_1;
                    tmp_dict_value_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_16, tmp_subscript_name_16, 1 );
                    Py_DECREF( tmp_subscribed_name_16 );
                    if ( tmp_dict_value_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_11 );
                        Py_DECREF( tmp_kw_name_6 );

                        exception_lineno = 595;
                        type_description_1 = "ooooooooooooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_10, tmp_dict_value_10 );
                    Py_DECREF( tmp_dict_value_10 );
                    assert( !(tmp_res != 0) );
                    frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 591;
                    tmp_assign_source_24 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_11, tmp_kw_name_6 );
                    Py_DECREF( tmp_called_name_11 );
                    Py_DECREF( tmp_kw_name_6 );
                    if ( tmp_assign_source_24 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 591;
                        type_description_1 = "ooooooooooooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    {
                        PyObject *old = var_msg;
                        var_msg = tmp_assign_source_24;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_make_exception_arg_3;
                    CHECK_OBJECT( var_msg );
                    tmp_make_exception_arg_3 = var_msg;
                    frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 596;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_3 };
                        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_3 == NULL) );
                    exception_type = tmp_raise_type_3;
                    exception_lineno = 596;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                branch_no_10:;
            }
            branch_end_9:;
        }
        branch_no_6:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 572;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 571;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_sum_sequence_1;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_subscribed_name_17;
            PyObject *tmp_subscript_name_17;
            CHECK_OBJECT( par_blocks );
            tmp_subscribed_name_17 = par_blocks;
            CHECK_OBJECT( var_block_mask );
            tmp_subscript_name_17 = var_block_mask;
            tmp_iter_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
            if ( tmp_iter_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 598;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_6 );
            Py_DECREF( tmp_iter_arg_6 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 598;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_3__$0 == NULL );
            tmp_genexpr_3__$0 = tmp_assign_source_26;
        }
        // Tried code:
        tmp_sum_sequence_1 = scipy$sparse$construct$$$function_10_bmat$$$genexpr_3_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_sum_sequence_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_3__$0 );


        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_10_bmat );
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_3__$0 );
        Py_DECREF( tmp_genexpr_3__$0 );
        tmp_genexpr_3__$0 = NULL;

        goto outline_result_3;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_3__$0 );
        Py_DECREF( tmp_genexpr_3__$0 );
        tmp_genexpr_3__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_10_bmat );
        return NULL;
        outline_result_3:;
        tmp_assign_source_25 = BUILTIN_SUM1( tmp_sum_sequence_1 );
        Py_DECREF( tmp_sum_sequence_1 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 598;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nnz == NULL );
        var_nnz = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        CHECK_OBJECT( par_dtype );
        tmp_compexpr_left_13 = par_dtype;
        tmp_compexpr_right_13 = Py_None;
        tmp_condition_result_11 = ( tmp_compexpr_left_13 == tmp_compexpr_right_13 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            // Tried code:
            {
                PyObject *tmp_assign_source_28;
                PyObject *tmp_iter_arg_7;
                PyObject *tmp_subscribed_name_18;
                PyObject *tmp_subscript_name_18;
                CHECK_OBJECT( par_blocks );
                tmp_subscribed_name_18 = par_blocks;
                CHECK_OBJECT( var_block_mask );
                tmp_subscript_name_18 = var_block_mask;
                tmp_iter_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
                if ( tmp_iter_arg_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 600;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_9;
                }
                tmp_assign_source_28 = MAKE_ITERATOR( tmp_iter_arg_7 );
                Py_DECREF( tmp_iter_arg_7 );
                if ( tmp_assign_source_28 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 600;
                    type_description_1 = "ooooooooooooooooooooooooo";
                    goto try_except_handler_9;
                }
                assert( tmp_listcomp_1__$0 == NULL );
                tmp_listcomp_1__$0 = tmp_assign_source_28;
            }
            {
                PyObject *tmp_assign_source_29;
                tmp_assign_source_29 = PyList_New( 0 );
                assert( tmp_listcomp_1__contraction == NULL );
                tmp_listcomp_1__contraction = tmp_assign_source_29;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_5690f7ccff881e6807c35ba6bf084140_2, codeobj_5690f7ccff881e6807c35ba6bf084140, module_scipy$sparse$construct, sizeof(void *) );
            frame_5690f7ccff881e6807c35ba6bf084140_2 = cache_frame_5690f7ccff881e6807c35ba6bf084140_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_5690f7ccff881e6807c35ba6bf084140_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_5690f7ccff881e6807c35ba6bf084140_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_3:;
            {
                PyObject *tmp_next_source_3;
                PyObject *tmp_assign_source_30;
                CHECK_OBJECT( tmp_listcomp_1__$0 );
                tmp_next_source_3 = tmp_listcomp_1__$0;
                tmp_assign_source_30 = ITERATOR_NEXT( tmp_next_source_3 );
                if ( tmp_assign_source_30 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_3;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_2 = "o";
                        exception_lineno = 600;
                        goto try_except_handler_10;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_30;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_31;
                CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                tmp_assign_source_31 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_blk;
                    outline_0_var_blk = tmp_assign_source_31;
                    Py_INCREF( outline_0_var_blk );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_source_name_20;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT( outline_0_var_blk );
                tmp_source_name_20 = outline_0_var_blk;
                tmp_append_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_dtype );
                if ( tmp_append_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 600;
                    type_description_2 = "o";
                    goto try_except_handler_10;
                }
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 600;
                    type_description_2 = "o";
                    goto try_except_handler_10;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 600;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            goto loop_start_3;
            loop_end_3:;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_assign_source_27 = tmp_listcomp_1__contraction;
            Py_INCREF( tmp_assign_source_27 );
            goto try_return_handler_10;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_10_bmat );
            return NULL;
            // Return handler code:
            try_return_handler_10:;
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
            try_except_handler_10:;
            exception_keeper_type_5 = exception_type;
            exception_keeper_value_5 = exception_value;
            exception_keeper_tb_5 = exception_tb;
            exception_keeper_lineno_5 = exception_lineno;
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
            exception_type = exception_keeper_type_5;
            exception_value = exception_keeper_value_5;
            exception_tb = exception_keeper_tb_5;
            exception_lineno = exception_keeper_lineno_5;

            goto frame_exception_exit_2;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_5690f7ccff881e6807c35ba6bf084140_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_2:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_5690f7ccff881e6807c35ba6bf084140_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_9;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_5690f7ccff881e6807c35ba6bf084140_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_5690f7ccff881e6807c35ba6bf084140_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_5690f7ccff881e6807c35ba6bf084140_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_5690f7ccff881e6807c35ba6bf084140_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_5690f7ccff881e6807c35ba6bf084140_2,
                type_description_2,
                outline_0_var_blk
            );


            // Release cached frame.
            if ( frame_5690f7ccff881e6807c35ba6bf084140_2 == cache_frame_5690f7ccff881e6807c35ba6bf084140_2 )
            {
                Py_DECREF( frame_5690f7ccff881e6807c35ba6bf084140_2 );
            }
            cache_frame_5690f7ccff881e6807c35ba6bf084140_2 = NULL;

            assertFrameObject( frame_5690f7ccff881e6807c35ba6bf084140_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_9;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_10_bmat );
            return NULL;
            // Return handler code:
            try_return_handler_9:;
            Py_XDECREF( outline_0_var_blk );
            outline_0_var_blk = NULL;

            goto outline_result_4;
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

            Py_XDECREF( outline_0_var_blk );
            outline_0_var_blk = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_6;
            exception_value = exception_keeper_value_6;
            exception_tb = exception_keeper_tb_6;
            exception_lineno = exception_keeper_lineno_6;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_10_bmat );
            return NULL;
            outline_exception_1:;
            exception_lineno = 600;
            goto frame_exception_exit_1;
            outline_result_4:;
            assert( var_all_dtypes == NULL );
            var_all_dtypes = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_32;
            nuitka_bool tmp_condition_result_12;
            int tmp_truth_name_3;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_dircall_arg2_1;
            CHECK_OBJECT( var_all_dtypes );
            tmp_truth_name_3 = CHECK_IF_TRUE( var_all_dtypes );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 601;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_12 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_1;
            }
            else
            {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_upcast );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_upcast );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "upcast" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 601;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg1_1 = tmp_mvar_value_10;
            CHECK_OBJECT( var_all_dtypes );
            tmp_dircall_arg2_1 = var_all_dtypes;
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg2_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
                tmp_assign_source_32 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
            }
            if ( tmp_assign_source_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 601;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_assign_source_32 = Py_None;
            Py_INCREF( tmp_assign_source_32 );
            condexpr_end_1:;
            {
                PyObject *old = par_dtype;
                assert( old != NULL );
                par_dtype = tmp_assign_source_32;
                Py_DECREF( old );
            }

        }
        branch_no_11:;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_12;
        PyObject *tmp_source_name_21;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 603;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_21 = tmp_mvar_value_11;
        tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_append );
        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 603;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_10 = const_int_0;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_called_name_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 603;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_12;
        CHECK_OBJECT( var_brow_lengths );
        tmp_args_element_name_12 = var_brow_lengths;
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 603;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_args_element_name_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_cumsum, call_args );
        }

        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );

            exception_lineno = 603;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 603;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 603;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_row_offsets == NULL );
        var_row_offsets = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_name_13;
        PyObject *tmp_source_name_22;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_15;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 604;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_22 = tmp_mvar_value_13;
        tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_append );
        if ( tmp_called_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 604;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = const_int_0;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_called_name_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 604;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_14;
        CHECK_OBJECT( var_bcol_lengths );
        tmp_args_element_name_15 = var_bcol_lengths;
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 604;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_args_element_name_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_cumsum, call_args );
        }

        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );

            exception_lineno = 604;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 604;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 604;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_col_offsets == NULL );
        var_col_offsets = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_subscribed_name_19;
        PyObject *tmp_subscript_name_19;
        PyObject *tmp_subscribed_name_20;
        PyObject *tmp_subscript_name_20;
        CHECK_OBJECT( var_row_offsets );
        tmp_subscribed_name_19 = var_row_offsets;
        tmp_subscript_name_19 = const_int_neg_1;
        tmp_tuple_element_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_19, tmp_subscript_name_19, -1 );
        if ( tmp_tuple_element_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 606;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_assign_source_35, 0, tmp_tuple_element_9 );
        CHECK_OBJECT( var_col_offsets );
        tmp_subscribed_name_20 = var_col_offsets;
        tmp_subscript_name_20 = const_int_neg_1;
        tmp_tuple_element_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_20, tmp_subscript_name_20, -1 );
        if ( tmp_tuple_element_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_35 );

            exception_lineno = 606;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_assign_source_35, 1, tmp_tuple_element_9 );
        assert( var_shape == NULL );
        var_shape = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_name_14;
        PyObject *tmp_source_name_23;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kw_name_7;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 608;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_23 = tmp_mvar_value_15;
        tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_empty );
        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 608;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_nnz );
        tmp_tuple_element_10 = var_nnz;
        tmp_args_name_5 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_10 );
        tmp_dict_key_11 = const_str_plain_dtype;
        CHECK_OBJECT( par_dtype );
        tmp_dict_value_11 = par_dtype;
        tmp_kw_name_7 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 608;
        tmp_assign_source_36 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_5, tmp_kw_name_7 );
        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_7 );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 608;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_data == NULL );
        var_data = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_kw_name_8;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_called_name_16;
        PyObject *tmp_args_element_name_16;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_get_index_dtype );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_index_dtype );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_index_dtype" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 609;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_15 = tmp_mvar_value_16;
        tmp_dict_key_12 = const_str_plain_maxval;
        tmp_called_name_16 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_16 != NULL );
        CHECK_OBJECT( var_shape );
        tmp_args_element_name_16 = var_shape;
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 609;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_dict_value_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        if ( tmp_dict_value_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 609;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_8 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_12, tmp_dict_value_12 );
        Py_DECREF( tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 609;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_15, tmp_kw_name_8 );
        Py_DECREF( tmp_kw_name_8 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 609;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_idx_dtype == NULL );
        var_idx_dtype = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_17;
        PyObject *tmp_source_name_24;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_name_6;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_kw_name_9;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 610;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_24 = tmp_mvar_value_17;
        tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_empty );
        if ( tmp_called_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 610;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_nnz );
        tmp_tuple_element_11 = var_nnz;
        tmp_args_name_6 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_11 );
        tmp_dict_key_13 = const_str_plain_dtype;
        CHECK_OBJECT( var_idx_dtype );
        tmp_dict_value_13 = var_idx_dtype;
        tmp_kw_name_9 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_9, tmp_dict_key_13, tmp_dict_value_13 );
        assert( !(tmp_res != 0) );
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 610;
        tmp_assign_source_38 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_6, tmp_kw_name_9 );
        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_9 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 610;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_row == NULL );
        var_row = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_18;
        PyObject *tmp_source_name_25;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_name_7;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kw_name_10;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 611;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_25 = tmp_mvar_value_18;
        tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_empty );
        if ( tmp_called_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 611;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_nnz );
        tmp_tuple_element_12 = var_nnz;
        tmp_args_name_7 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_12 );
        tmp_dict_key_14 = const_str_plain_dtype;
        CHECK_OBJECT( var_idx_dtype );
        tmp_dict_value_14 = var_idx_dtype;
        tmp_kw_name_10 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_10, tmp_dict_key_14, tmp_dict_value_14 );
        assert( !(tmp_res != 0) );
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 611;
        tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_7, tmp_kw_name_10 );
        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_args_name_7 );
        Py_DECREF( tmp_kw_name_10 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 611;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_col == NULL );
        var_col = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = const_int_0;
        {
            PyObject *old = var_nnz;
            assert( old != NULL );
            var_nnz = tmp_assign_source_40;
            Py_INCREF( var_nnz );
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_17;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 614;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_called_instance_5 = tmp_mvar_value_19;
        CHECK_OBJECT( var_block_mask );
        tmp_args_element_name_17 = var_block_mask;
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 614;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_iter_arg_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_nonzero, call_args );
        }

        if ( tmp_iter_arg_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 614;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_41 = MAKE_ITERATOR( tmp_iter_arg_8 );
        Py_DECREF( tmp_iter_arg_8 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 614;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_41;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_42 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 614;
            goto try_except_handler_12;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_43 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 614;
            goto try_except_handler_12;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_43;
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

                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 614;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 614;
            goto try_except_handler_12;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_11;
    // End of try:
    try_end_5:;
    goto try_end_6;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_44 = tmp_tuple_unpack_2__element_1;
        assert( var_ii == NULL );
        Py_INCREF( tmp_assign_source_44 );
        var_ii = tmp_assign_source_44;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_45 = tmp_tuple_unpack_2__element_2;
        assert( var_jj == NULL );
        Py_INCREF( tmp_assign_source_45 );
        var_jj = tmp_assign_source_45;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_name_19;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        tmp_called_name_19 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT( var_ii );
        tmp_args_element_name_18 = var_ii;
        CHECK_OBJECT( var_jj );
        tmp_args_element_name_19 = var_jj;
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 615;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_iter_arg_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
        }

        if ( tmp_iter_arg_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 615;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_46 = MAKE_ITERATOR( tmp_iter_arg_9 );
        Py_DECREF( tmp_iter_arg_9 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 615;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_3__for_iterator == NULL );
        tmp_for_loop_3__for_iterator = tmp_assign_source_46;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT( tmp_for_loop_3__for_iterator );
        tmp_next_source_4 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_47 = ITERATOR_NEXT( tmp_next_source_4 );
        if ( tmp_assign_source_47 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_4;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooo";
                exception_lineno = 615;
                goto try_except_handler_13;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_47;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_iter_arg_10;
        CHECK_OBJECT( tmp_for_loop_3__iter_value );
        tmp_iter_arg_10 = tmp_for_loop_3__iter_value;
        tmp_assign_source_48 = MAKE_ITERATOR( tmp_iter_arg_10 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 615;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_48;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_49 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
        if ( tmp_assign_source_49 == NULL )
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
            exception_lineno = 615;
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_49;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_50 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
        if ( tmp_assign_source_50 == NULL )
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
            exception_lineno = 615;
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_50;
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

                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 615;
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

            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 615;
            goto try_except_handler_15;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_14;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_13;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    {
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_51 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_51;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_52 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_52;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_subscribed_name_21;
        PyObject *tmp_subscript_name_21;
        PyObject *tmp_tuple_element_13;
        CHECK_OBJECT( par_blocks );
        tmp_subscribed_name_21 = par_blocks;
        CHECK_OBJECT( var_i );
        tmp_tuple_element_13 = var_i;
        tmp_subscript_name_21 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_13 );
        PyTuple_SET_ITEM( tmp_subscript_name_21, 0, tmp_tuple_element_13 );
        CHECK_OBJECT( var_j );
        tmp_tuple_element_13 = var_j;
        Py_INCREF( tmp_tuple_element_13 );
        PyTuple_SET_ITEM( tmp_subscript_name_21, 1, tmp_tuple_element_13 );
        tmp_assign_source_53 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
        Py_DECREF( tmp_subscript_name_21 );
        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 616;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = var_B;
            var_B = tmp_assign_source_53;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_26;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( var_nnz );
        tmp_start_name_1 = var_nnz;
        CHECK_OBJECT( var_nnz );
        tmp_left_name_1 = var_nnz;
        CHECK_OBJECT( var_B );
        tmp_source_name_26 = var_B;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_nnz );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 617;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 617;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_step_name_1 = Py_None;
        tmp_assign_source_54 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_assign_source_54 == NULL) );
        {
            PyObject *old = var_idx;
            var_idx = tmp_assign_source_54;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_source_name_27;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        CHECK_OBJECT( var_B );
        tmp_source_name_27 = var_B;
        tmp_ass_subvalue_5 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_data );
        if ( tmp_ass_subvalue_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 618;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT( var_data );
        tmp_ass_subscribed_5 = var_data;
        CHECK_OBJECT( var_idx );
        tmp_ass_subscript_5 = var_idx;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subvalue_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 618;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_28;
        PyObject *tmp_right_name_2;
        PyObject *tmp_subscribed_name_22;
        PyObject *tmp_subscript_name_22;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        CHECK_OBJECT( var_B );
        tmp_source_name_28 = var_B;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_row );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 619;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT( var_row_offsets );
        tmp_subscribed_name_22 = var_row_offsets;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_22 = var_i;
        tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_22, tmp_subscript_name_22 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 619;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_ass_subvalue_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_ass_subvalue_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 619;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT( var_row );
        tmp_ass_subscribed_6 = var_row;
        CHECK_OBJECT( var_idx );
        tmp_ass_subscript_6 = var_idx;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
        Py_DECREF( tmp_ass_subvalue_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 619;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_29;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscribed_name_23;
        PyObject *tmp_subscript_name_23;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        CHECK_OBJECT( var_B );
        tmp_source_name_29 = var_B;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_col );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 620;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT( var_col_offsets );
        tmp_subscribed_name_23 = var_col_offsets;
        CHECK_OBJECT( var_j );
        tmp_subscript_name_23 = var_j;
        tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_23, tmp_subscript_name_23 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 620;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_ass_subvalue_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_ass_subvalue_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 620;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT( var_col );
        tmp_ass_subscribed_7 = var_col;
        CHECK_OBJECT( var_idx );
        tmp_ass_subscript_7 = var_idx;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
        Py_DECREF( tmp_ass_subvalue_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 620;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_source_name_30;
        CHECK_OBJECT( var_nnz );
        tmp_left_name_4 = var_nnz;
        CHECK_OBJECT( var_B );
        tmp_source_name_30 = var_B;
        tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_nnz );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 621;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 621;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assign_source_55 = tmp_left_name_4;
        var_nnz = tmp_assign_source_55;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 615;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_9;
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

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_name_20;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_name_8;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kw_name_11;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_args_element_name_20;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "coo_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 623;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_20 = tmp_mvar_value_20;
        CHECK_OBJECT( var_data );
        tmp_tuple_element_15 = var_data;
        tmp_tuple_element_14 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_15 );
        PyTuple_SET_ITEM( tmp_tuple_element_14, 0, tmp_tuple_element_15 );
        CHECK_OBJECT( var_row );
        tmp_tuple_element_16 = var_row;
        tmp_tuple_element_15 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_16 );
        PyTuple_SET_ITEM( tmp_tuple_element_15, 0, tmp_tuple_element_16 );
        CHECK_OBJECT( var_col );
        tmp_tuple_element_16 = var_col;
        Py_INCREF( tmp_tuple_element_16 );
        PyTuple_SET_ITEM( tmp_tuple_element_15, 1, tmp_tuple_element_16 );
        PyTuple_SET_ITEM( tmp_tuple_element_14, 1, tmp_tuple_element_15 );
        tmp_args_name_8 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_14 );
        tmp_dict_key_15 = const_str_plain_shape;
        CHECK_OBJECT( var_shape );
        tmp_dict_value_15 = var_shape;
        tmp_kw_name_11 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_11, tmp_dict_key_15, tmp_dict_value_15 );
        assert( !(tmp_res != 0) );
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 623;
        tmp_called_instance_6 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_8, tmp_kw_name_11 );
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_kw_name_11 );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 623;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_format );
        tmp_args_element_name_20 = par_format;
        frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame.f_lineno = 623;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_asformat, call_args );
        }

        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 623;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72d15b9d18b0ea5f4d2a74a608e5043d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_72d15b9d18b0ea5f4d2a74a608e5043d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72d15b9d18b0ea5f4d2a74a608e5043d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_72d15b9d18b0ea5f4d2a74a608e5043d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_72d15b9d18b0ea5f4d2a74a608e5043d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_72d15b9d18b0ea5f4d2a74a608e5043d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_72d15b9d18b0ea5f4d2a74a608e5043d,
        type_description_1,
        par_blocks,
        par_format,
        par_dtype,
        var_M,
        var_N,
        var_A,
        var_block_mask,
        var_brow_lengths,
        var_bcol_lengths,
        var_i,
        var_j,
        var_msg,
        var_nnz,
        var_all_dtypes,
        var_row_offsets,
        var_col_offsets,
        var_shape,
        var_data,
        var_idx_dtype,
        var_row,
        var_col,
        var_ii,
        var_jj,
        var_B,
        var_idx
    );


    // Release cached frame.
    if ( frame_72d15b9d18b0ea5f4d2a74a608e5043d == cache_frame_72d15b9d18b0ea5f4d2a74a608e5043d )
    {
        Py_DECREF( frame_72d15b9d18b0ea5f4d2a74a608e5043d );
    }
    cache_frame_72d15b9d18b0ea5f4d2a74a608e5043d = NULL;

    assertFrameObject( frame_72d15b9d18b0ea5f4d2a74a608e5043d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_10_bmat );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_blocks );
    Py_DECREF( par_blocks );
    par_blocks = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_M );
    Py_DECREF( var_M );
    var_M = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_A );
    var_A = NULL;

    Py_XDECREF( var_block_mask );
    var_block_mask = NULL;

    Py_XDECREF( var_brow_lengths );
    var_brow_lengths = NULL;

    Py_XDECREF( var_bcol_lengths );
    var_bcol_lengths = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    Py_XDECREF( var_nnz );
    var_nnz = NULL;

    Py_XDECREF( var_all_dtypes );
    var_all_dtypes = NULL;

    Py_XDECREF( var_row_offsets );
    var_row_offsets = NULL;

    Py_XDECREF( var_col_offsets );
    var_col_offsets = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_idx_dtype );
    var_idx_dtype = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_col );
    var_col = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    Py_XDECREF( var_jj );
    var_jj = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_blocks );
    Py_DECREF( par_blocks );
    par_blocks = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_A );
    var_A = NULL;

    Py_XDECREF( var_block_mask );
    var_block_mask = NULL;

    Py_XDECREF( var_brow_lengths );
    var_brow_lengths = NULL;

    Py_XDECREF( var_bcol_lengths );
    var_bcol_lengths = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    Py_XDECREF( var_nnz );
    var_nnz = NULL;

    Py_XDECREF( var_all_dtypes );
    var_all_dtypes = NULL;

    Py_XDECREF( var_row_offsets );
    var_row_offsets = NULL;

    Py_XDECREF( var_col_offsets );
    var_col_offsets = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_idx_dtype );
    var_idx_dtype = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_col );
    var_col = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    Py_XDECREF( var_jj );
    var_jj = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_10_bmat );
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



struct scipy$sparse$construct$$$function_10_bmat$$$genexpr_1_genexpr_locals {
    PyObject *var_b;
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

static PyObject *scipy$sparse$construct$$$function_10_bmat$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$sparse$construct$$$function_10_bmat$$$genexpr_1_genexpr_locals *generator_heap = (struct scipy$sparse$construct$$$function_10_bmat$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_b = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_6c1dec27a1b21324e84f1e54c7cbd204, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *) );
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
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 553;
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
            PyObject *old = generator_heap->var_b;
            generator_heap->var_b = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_b );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_b );
        tmp_isinstance_inst_1 = generator_heap->var_b;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csr_matrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_matrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csr_matrix" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 553;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        generator_heap->tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 553;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_expression_name_1 = ( generator_heap->tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_expression_name_1 );
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 553;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 553;
        generator_heap->type_description_1 = "No";
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
            generator_heap->var_b
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

    Py_XDECREF( generator_heap->var_b );
    generator_heap->var_b = NULL;

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

    Py_XDECREF( generator_heap->var_b );
    generator_heap->var_b = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$sparse$construct$$$function_10_bmat$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$sparse$construct$$$function_10_bmat$$$genexpr_1_genexpr_context,
        module_scipy$sparse$construct,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_bad3d0578f5b327c6828f89612d7d9cc,
#endif
        codeobj_6c1dec27a1b21324e84f1e54c7cbd204,
        1,
        sizeof(struct scipy$sparse$construct$$$function_10_bmat$$$genexpr_1_genexpr_locals)
    );
}



struct scipy$sparse$construct$$$function_10_bmat$$$genexpr_2_genexpr_locals {
    PyObject *var_b;
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

static PyObject *scipy$sparse$construct$$$function_10_bmat$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$sparse$construct$$$function_10_bmat$$$genexpr_2_genexpr_locals *generator_heap = (struct scipy$sparse$construct$$$function_10_bmat$$$genexpr_2_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_b = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_78f0a8050f6a321a0179fabb9c1b8a3a, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *) );
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
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 560;
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
            PyObject *old = generator_heap->var_b;
            generator_heap->var_b = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_b );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_b );
        tmp_isinstance_inst_1 = generator_heap->var_b;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csc_matrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csc_matrix" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 560;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        generator_heap->tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 560;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_expression_name_1 = ( generator_heap->tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_expression_name_1 );
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 560;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 560;
        generator_heap->type_description_1 = "No";
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
            generator_heap->var_b
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

    Py_XDECREF( generator_heap->var_b );
    generator_heap->var_b = NULL;

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

    Py_XDECREF( generator_heap->var_b );
    generator_heap->var_b = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$sparse$construct$$$function_10_bmat$$$genexpr_2_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$sparse$construct$$$function_10_bmat$$$genexpr_2_genexpr_context,
        module_scipy$sparse$construct,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_bad3d0578f5b327c6828f89612d7d9cc,
#endif
        codeobj_78f0a8050f6a321a0179fabb9c1b8a3a,
        1,
        sizeof(struct scipy$sparse$construct$$$function_10_bmat$$$genexpr_2_genexpr_locals)
    );
}



struct scipy$sparse$construct$$$function_10_bmat$$$genexpr_3_genexpr_locals {
    PyObject *var_block;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
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

static PyObject *scipy$sparse$construct$$$function_10_bmat$$$genexpr_3_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$sparse$construct$$$function_10_bmat$$$genexpr_3_genexpr_locals *generator_heap = (struct scipy$sparse$construct$$$function_10_bmat$$$genexpr_3_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_block = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_711053310f8dc4829a940e3c95517093, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *) );
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
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 598;
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
            PyObject *old = generator_heap->var_block;
            generator_heap->var_block = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_block );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_source_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_block );
        tmp_source_name_1 = generator_heap->var_block;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nnz );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 598;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 598;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 598;
        generator_heap->type_description_1 = "No";
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
            generator_heap->var_block
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

    Py_XDECREF( generator_heap->var_block );
    generator_heap->var_block = NULL;

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

    Py_XDECREF( generator_heap->var_block );
    generator_heap->var_block = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$sparse$construct$$$function_10_bmat$$$genexpr_3_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$sparse$construct$$$function_10_bmat$$$genexpr_3_genexpr_context,
        module_scipy$sparse$construct,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_bad3d0578f5b327c6828f89612d7d9cc,
#endif
        codeobj_711053310f8dc4829a940e3c95517093,
        1,
        sizeof(struct scipy$sparse$construct$$$function_10_bmat$$$genexpr_3_genexpr_locals)
    );
}


static PyObject *impl_scipy$sparse$construct$$$function_11_block_diag( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mats = python_pars[ 0 ];
    PyObject *par_format = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *var_nmat = NULL;
    PyObject *var_rows = NULL;
    PyObject *var_ia = NULL;
    PyObject *var_a = NULL;
    PyObject *var_row = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_7e5da425d29fe04b4e6a7adc38d693b2;
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
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7e5da425d29fe04b4e6a7adc38d693b2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7e5da425d29fe04b4e6a7adc38d693b2, codeobj_7e5da425d29fe04b4e6a7adc38d693b2, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7e5da425d29fe04b4e6a7adc38d693b2 = cache_frame_7e5da425d29fe04b4e6a7adc38d693b2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7e5da425d29fe04b4e6a7adc38d693b2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7e5da425d29fe04b4e6a7adc38d693b2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_mats );
        tmp_len_arg_1 = par_mats;
        tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 668;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nmat == NULL );
        var_nmat = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New( 0 );
        assert( var_rows == NULL );
        var_rows = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT( par_mats );
        tmp_args_element_name_1 = par_mats;
        frame_7e5da425d29fe04b4e6a7adc38d693b2->m_frame.f_lineno = 670;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 670;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 670;
            type_description_1 = "oooooooo";
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
                type_description_1 = "oooooooo";
                exception_lineno = 670;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 670;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF( old );
        }

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


            type_description_1 = "oooooooo";
            exception_lineno = 670;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF( old );
        }

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


            type_description_1 = "oooooooo";
            exception_lineno = 670;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "oooooooo";
                    exception_lineno = 670;
                    goto try_except_handler_4;
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
            exception_lineno = 670;
            goto try_except_handler_4;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_ia;
            var_ia = tmp_assign_source_8;
            Py_INCREF( var_ia );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_9;
            Py_INCREF( var_a );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = LIST_COPY( const_list_none_list );
        CHECK_OBJECT( var_nmat );
        tmp_right_name_1 = var_nmat;
        tmp_assign_source_10 = BINARY_OPERATION_MUL_LIST_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        assert( !(tmp_assign_source_10 == NULL) );
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_issparse );

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

            exception_lineno = 672;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_a );
        tmp_args_element_name_2 = var_a;
        frame_7e5da425d29fe04b4e6a7adc38d693b2->m_frame.f_lineno = 672;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 672;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 672;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( var_a );
            tmp_ass_subvalue_1 = var_a;
            CHECK_OBJECT( var_row );
            tmp_ass_subscribed_1 = var_row;
            CHECK_OBJECT( var_ia );
            tmp_ass_subscript_1 = var_ia;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 673;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "coo_matrix" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 675;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_3 = tmp_mvar_value_2;
            CHECK_OBJECT( var_a );
            tmp_args_element_name_3 = var_a;
            frame_7e5da425d29fe04b4e6a7adc38d693b2->m_frame.f_lineno = 675;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 675;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_row );
            tmp_ass_subscribed_2 = var_row;
            CHECK_OBJECT( var_ia );
            tmp_ass_subscript_2 = var_ia;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 675;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( var_rows );
        tmp_called_instance_1 = var_rows;
        CHECK_OBJECT( var_row );
        tmp_args_element_name_4 = var_row;
        frame_7e5da425d29fe04b4e6a7adc38d693b2->m_frame.f_lineno = 676;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 676;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 670;
        type_description_1 = "oooooooo";
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

    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_bmat );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bmat );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bmat" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 677;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_3;
        CHECK_OBJECT( var_rows );
        tmp_tuple_element_1 = var_rows;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_format;
        CHECK_OBJECT( par_format );
        tmp_dict_value_1 = par_format;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_dtype;
        CHECK_OBJECT( par_dtype );
        tmp_dict_value_2 = par_dtype;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_7e5da425d29fe04b4e6a7adc38d693b2->m_frame.f_lineno = 677;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 677;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e5da425d29fe04b4e6a7adc38d693b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e5da425d29fe04b4e6a7adc38d693b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e5da425d29fe04b4e6a7adc38d693b2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7e5da425d29fe04b4e6a7adc38d693b2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7e5da425d29fe04b4e6a7adc38d693b2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7e5da425d29fe04b4e6a7adc38d693b2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7e5da425d29fe04b4e6a7adc38d693b2,
        type_description_1,
        par_mats,
        par_format,
        par_dtype,
        var_nmat,
        var_rows,
        var_ia,
        var_a,
        var_row
    );


    // Release cached frame.
    if ( frame_7e5da425d29fe04b4e6a7adc38d693b2 == cache_frame_7e5da425d29fe04b4e6a7adc38d693b2 )
    {
        Py_DECREF( frame_7e5da425d29fe04b4e6a7adc38d693b2 );
    }
    cache_frame_7e5da425d29fe04b4e6a7adc38d693b2 = NULL;

    assertFrameObject( frame_7e5da425d29fe04b4e6a7adc38d693b2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_11_block_diag );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_mats );
    Py_DECREF( par_mats );
    par_mats = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_nmat );
    Py_DECREF( var_nmat );
    var_nmat = NULL;

    CHECK_OBJECT( (PyObject *)var_rows );
    Py_DECREF( var_rows );
    var_rows = NULL;

    Py_XDECREF( var_ia );
    var_ia = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mats );
    Py_DECREF( par_mats );
    par_mats = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( var_nmat );
    var_nmat = NULL;

    Py_XDECREF( var_rows );
    var_rows = NULL;

    Py_XDECREF( var_ia );
    var_ia = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_11_block_diag );
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


static PyObject *impl_scipy$sparse$construct$$$function_12_random( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_density = python_pars[ 2 ];
    PyObject *par_format = python_pars[ 3 ];
    struct Nuitka_CellObject *par_dtype = PyCell_NEW1( python_pars[ 4 ] );
    struct Nuitka_CellObject *par_random_state = PyCell_NEW1( python_pars[ 5 ] );
    PyObject *par_data_rvs = python_pars[ 6 ];
    PyObject *var_mn = NULL;
    PyObject *var_tp = NULL;
    PyObject *var_k = NULL;
    struct Nuitka_CellObject *var_randint = PyCell_EMPTY();
    PyObject *var_ind = NULL;
    PyObject *var_j = NULL;
    PyObject *var_i = NULL;
    PyObject *var_vals = NULL;
    struct Nuitka_FrameObject *frame_f094f1e2fc0f452e9f9e5b0f0f432e07;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f094f1e2fc0f452e9f9e5b0f0f432e07 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f094f1e2fc0f452e9f9e5b0f0f432e07, codeobj_f094f1e2fc0f452e9f9e5b0f0f432e07, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f094f1e2fc0f452e9f9e5b0f0f432e07 = cache_frame_f094f1e2fc0f452e9f9e5b0f0f432e07;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f094f1e2fc0f452e9f9e5b0f0f432e07 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f094f1e2fc0f452e9f9e5b0f0f432e07 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_density );
        tmp_compexpr_left_1 = par_density;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 750;
            type_description_1 = "ooooccoooNocoooo";
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
        CHECK_OBJECT( par_density );
        tmp_compexpr_left_2 = par_density;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 750;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_make_exception_arg_1 = const_str_digest_d7ee8ce1ad10754f2c30374b3a61d08a;
            frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 751;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 751;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 752;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_dtype ) );
        tmp_args_element_name_1 = PyCell_GET( par_dtype );
        frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 752;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 752;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = PyCell_GET( par_dtype );
            PyCell_SET( par_dtype, tmp_assign_source_1 );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_m );
        tmp_left_name_1 = par_m;
        CHECK_OBJECT( par_n );
        tmp_right_name_1 = par_n;
        tmp_assign_source_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 754;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        assert( var_mn == NULL );
        var_mn = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 756;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_intc );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 756;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        assert( var_tp == NULL );
        var_tp = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_mn );
        tmp_compexpr_left_3 = var_mn;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 757;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_tp );
        tmp_args_element_name_2 = var_tp;
        frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 757;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_source_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_iinfo, call_args );
        }

        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 757;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_max );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 757;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 757;
            type_description_1 = "ooooccoooNocoooo";
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
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 758;
                type_description_1 = "ooooccoooNocoooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_4;
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_int64 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 758;
                type_description_1 = "ooooccoooNocoooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_tp;
                assert( old != NULL );
                var_tp = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( var_mn );
        tmp_compexpr_left_4 = var_mn;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 760;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_5;
        CHECK_OBJECT( var_tp );
        tmp_args_element_name_3 = var_tp;
        frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 760;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_source_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_iinfo, call_args );
        }

        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 760;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_max );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 760;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 760;
            type_description_1 = "ooooccoooNocoooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_4;
            tmp_left_name_2 = const_str_digest_9e903fdb3e0aea481d46e1a5c0a6029e;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 765;
                type_description_1 = "ooooccoooNocoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_6;
            CHECK_OBJECT( var_tp );
            tmp_args_element_name_4 = var_tp;
            frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 765;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_source_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_iinfo, call_args );
            }

            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 765;
                type_description_1 = "ooooccoooNocoooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_max );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 765;
                type_description_1 = "ooooccoooNocoooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 765;
                type_description_1 = "ooooccoooNocoooo";
                goto frame_exception_exit_1;
            }
            frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 765;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 765;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_density );
        tmp_left_name_4 = par_density;
        CHECK_OBJECT( par_m );
        tmp_right_name_3 = par_m;
        tmp_left_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 768;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_right_name_4 = par_n;
        tmp_int_arg_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 768;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 768;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        assert( var_k == NULL );
        var_k = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( PyCell_GET( par_random_state ) );
        tmp_compexpr_left_5 = PyCell_GET( par_random_state );
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_4 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 771;
                type_description_1 = "ooooccoooNocoooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_7;
            tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_random );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 771;
                type_description_1 = "ooooccoooNocoooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = PyCell_GET( par_random_state );
                PyCell_SET( par_random_state, tmp_assign_source_6 );
                Py_XDECREF( old );
            }

        }
        goto branch_end_4;
        branch_no_4:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_8;
            CHECK_OBJECT( PyCell_GET( par_random_state ) );
            tmp_isinstance_inst_1 = PyCell_GET( par_random_state );
            tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
            tmp_isinstance_cls_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_8 == NULL )
            {
                Py_DECREF( tmp_isinstance_cls_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 772;
                type_description_1 = "ooooccoooNocoooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_8;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_integer );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_isinstance_cls_1 );

                exception_lineno = 772;
                type_description_1 = "ooooccoooNocoooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            Py_DECREF( tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 772;
                type_description_1 = "ooooccoooNocoooo";
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
                PyObject *tmp_assign_source_7;
                PyObject *tmp_called_instance_5;
                PyObject *tmp_source_name_8;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_args_element_name_5;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 773;
                    type_description_1 = "ooooccoooNocoooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_8 = tmp_mvar_value_9;
                tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_random );
                if ( tmp_called_instance_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 773;
                    type_description_1 = "ooooccoooNocoooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( PyCell_GET( par_random_state ) );
                tmp_args_element_name_5 = PyCell_GET( par_random_state );
                frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 773;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_RandomState, call_args );
                }

                Py_DECREF( tmp_called_instance_5 );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 773;
                    type_description_1 = "ooooccoooNocoooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = PyCell_GET( par_random_state );
                    PyCell_SET( par_random_state, tmp_assign_source_7 );
                    Py_XDECREF( old );
                }

            }
            branch_no_5:;
        }
        branch_end_4:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_data_rvs );
        tmp_compexpr_left_6 = par_data_rvs;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_11;
            int tmp_truth_name_1;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 776;
                type_description_1 = "ooooccoooNocoooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_10;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_issubdtype );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 776;
                type_description_1 = "ooooccoooNocoooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_dtype ) );
            tmp_args_element_name_6 = PyCell_GET( par_dtype );
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_11 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 776;
                type_description_1 = "ooooccoooNocoooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_10 = tmp_mvar_value_11;
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_integer );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 776;
                type_description_1 = "ooooccoooNocoooo";
                goto frame_exception_exit_1;
            }
            frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 776;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 776;
                type_description_1 = "ooooccoooNocoooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 776;
                type_description_1 = "ooooccoooNocoooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_7 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_1 );
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
                PyObject *tmp_assign_source_8;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_12;
                PyObject *tmp_args_element_name_8;
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_get_randint );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_randint );
                }

                if ( tmp_mvar_value_12 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_randint" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 777;
                    type_description_1 = "ooooccoooNocoooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_12;
                if ( PyCell_GET( par_random_state ) == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "random_state" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 777;
                    type_description_1 = "ooooccoooNocoooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_8 = PyCell_GET( par_random_state );
                frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 777;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8 };
                    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 777;
                    type_description_1 = "ooooccoooNocoooo";
                    goto frame_exception_exit_1;
                }
                assert( PyCell_GET( var_randint ) == NULL );
                PyCell_SET( var_randint, tmp_assign_source_8 );

            }
            {
                PyObject *tmp_assign_source_9;
                tmp_assign_source_9 = MAKE_FUNCTION_scipy$sparse$construct$$$function_12_random$$$function_1_data_rvs(  );

                ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[0] = par_dtype;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[0] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[1] = var_randint;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[1] );


                {
                    PyObject *old = par_data_rvs;
                    assert( old != NULL );
                    par_data_rvs = tmp_assign_source_9;
                    Py_DECREF( old );
                }

            }
            goto branch_end_7;
            branch_no_7:;
            {
                nuitka_bool tmp_condition_result_8;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_11;
                PyObject *tmp_mvar_value_13;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_args_element_name_10;
                PyObject *tmp_source_name_12;
                PyObject *tmp_mvar_value_14;
                int tmp_truth_name_2;
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 782;
                    type_description_1 = "ooooccoooNocoooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_11 = tmp_mvar_value_13;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_issubdtype );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 782;
                    type_description_1 = "ooooccoooNocoooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( PyCell_GET( par_dtype ) );
                tmp_args_element_name_9 = PyCell_GET( par_dtype );
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_14 == NULL ))
                {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_14 == NULL )
                {
                    Py_DECREF( tmp_called_name_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 782;
                    type_description_1 = "ooooccoooNocoooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_12 = tmp_mvar_value_14;
                tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_complexfloating );
                if ( tmp_args_element_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 782;
                    type_description_1 = "ooooccoooNocoooo";
                    goto frame_exception_exit_1;
                }
                frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 782;
                {
                    PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_10 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 782;
                    type_description_1 = "ooooccoooNocoooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
                if ( tmp_truth_name_2 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_2 );

                    exception_lineno = 782;
                    type_description_1 = "ooooccoooNocoooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_2 );
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
                    PyObject *tmp_assign_source_10;
                    tmp_assign_source_10 = MAKE_FUNCTION_scipy$sparse$construct$$$function_12_random$$$function_2_data_rvs(  );

                    ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[0] = par_random_state;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[0] );


                    {
                        PyObject *old = par_data_rvs;
                        assert( old != NULL );
                        par_data_rvs = tmp_assign_source_10;
                        Py_DECREF( old );
                    }

                }
                goto branch_end_8;
                branch_no_8:;
                {
                    PyObject *tmp_assign_source_11;
                    PyObject *tmp_source_name_13;
                    if ( PyCell_GET( par_random_state ) == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "random_state" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 786;
                        type_description_1 = "ooooccoooNocoooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_13 = PyCell_GET( par_random_state );
                    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_rand );
                    if ( tmp_assign_source_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 786;
                        type_description_1 = "ooooccoooNocoooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_data_rvs;
                        assert( old != NULL );
                        par_data_rvs = tmp_assign_source_11;
                        Py_DECREF( old );
                    }

                }
                branch_end_8:;
            }
            branch_end_7:;
        }
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_14;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        if ( PyCell_GET( par_random_state ) == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "random_state" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 788;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = PyCell_GET( par_random_state );
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_choice );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 788;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mn );
        tmp_tuple_element_2 = var_mn;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        tmp_dict_key_1 = const_str_plain_size;
        CHECK_OBJECT( var_k );
        tmp_dict_value_1 = var_k;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_replace;
        tmp_dict_value_2 = Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 788;
        tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 788;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        assert( var_ind == NULL );
        var_ind = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_15;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 790;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_16 = tmp_mvar_value_15;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_floor );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 790;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ind );
        tmp_left_name_6 = var_ind;
        tmp_right_name_5 = const_float_1_0;
        tmp_left_name_5 = BINARY_OPERATION_MUL_OBJECT_FLOAT( tmp_left_name_6, tmp_right_name_5 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 790;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_m );
        tmp_right_name_6 = par_m;
        tmp_args_element_name_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 790;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 790;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_source_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_source_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 790;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_astype );
        Py_DECREF( tmp_source_name_15 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 790;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_tp );
        tmp_tuple_element_3 = var_tp;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
        frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 790;
        tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 790;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        assert( var_j == NULL );
        var_j = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_17;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_3;
        CHECK_OBJECT( var_ind );
        tmp_left_name_7 = var_ind;
        CHECK_OBJECT( var_j );
        tmp_left_name_8 = var_j;
        CHECK_OBJECT( par_m );
        tmp_right_name_8 = par_m;
        tmp_right_name_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 791;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_source_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 791;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_astype );
        Py_DECREF( tmp_source_name_17 );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 791;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_tp );
        tmp_tuple_element_4 = var_tp;
        tmp_args_name_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
        tmp_kw_name_3 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
        frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 791;
        tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 791;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        assert( var_i == NULL );
        var_i = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_18;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kw_name_4;
        if ( par_data_rvs == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data_rvs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 792;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = par_data_rvs;
        CHECK_OBJECT( var_k );
        tmp_args_element_name_12 = var_k;
        frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 792;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_source_name_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        if ( tmp_source_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 792;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_astype );
        Py_DECREF( tmp_source_name_18 );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 792;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_dtype ) );
        tmp_tuple_element_5 = PyCell_GET( par_dtype );
        tmp_args_name_4 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
        tmp_kw_name_4 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
        frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 792;
        tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 792;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        assert( var_vals == NULL );
        var_vals = tmp_assign_source_15;
    }
    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_19;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kw_name_5;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_args_name_6;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kw_name_6;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "coo_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 793;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_16;
        CHECK_OBJECT( var_vals );
        tmp_tuple_element_7 = var_vals;
        tmp_tuple_element_6 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_tuple_element_6, 0, tmp_tuple_element_7 );
        CHECK_OBJECT( var_i );
        tmp_tuple_element_8 = var_i;
        tmp_tuple_element_7 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_tuple_element_7, 0, tmp_tuple_element_8 );
        CHECK_OBJECT( var_j );
        tmp_tuple_element_8 = var_j;
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_tuple_element_7, 1, tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_tuple_element_6, 1, tmp_tuple_element_7 );
        tmp_args_name_5 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_6 );
        tmp_dict_key_3 = const_str_plain_shape;
        CHECK_OBJECT( par_m );
        tmp_tuple_element_9 = par_m;
        tmp_dict_value_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_dict_value_3, 0, tmp_tuple_element_9 );
        CHECK_OBJECT( par_n );
        tmp_tuple_element_9 = par_n;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_dict_value_3, 1, tmp_tuple_element_9 );
        tmp_kw_name_5 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 793;
        tmp_source_name_19 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_5, tmp_kw_name_5 );
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_5 );
        if ( tmp_source_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 793;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_asformat );
        Py_DECREF( tmp_source_name_19 );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 793;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_format );
        tmp_tuple_element_10 = par_format;
        tmp_args_name_6 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_10 );
        tmp_kw_name_6 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
        frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame.f_lineno = 793;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_6, tmp_kw_name_6 );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_6 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 793;
            type_description_1 = "ooooccoooNocoooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f094f1e2fc0f452e9f9e5b0f0f432e07 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f094f1e2fc0f452e9f9e5b0f0f432e07 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f094f1e2fc0f452e9f9e5b0f0f432e07 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f094f1e2fc0f452e9f9e5b0f0f432e07, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f094f1e2fc0f452e9f9e5b0f0f432e07->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f094f1e2fc0f452e9f9e5b0f0f432e07, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f094f1e2fc0f452e9f9e5b0f0f432e07,
        type_description_1,
        par_m,
        par_n,
        par_density,
        par_format,
        par_dtype,
        par_random_state,
        par_data_rvs,
        var_mn,
        var_tp,
        NULL,
        var_k,
        var_randint,
        var_ind,
        var_j,
        var_i,
        var_vals
    );


    // Release cached frame.
    if ( frame_f094f1e2fc0f452e9f9e5b0f0f432e07 == cache_frame_f094f1e2fc0f452e9f9e5b0f0f432e07 )
    {
        Py_DECREF( frame_f094f1e2fc0f452e9f9e5b0f0f432e07 );
    }
    cache_frame_f094f1e2fc0f452e9f9e5b0f0f432e07 = NULL;

    assertFrameObject( frame_f094f1e2fc0f452e9f9e5b0f0f432e07 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_12_random );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_density );
    Py_DECREF( par_density );
    par_density = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_random_state );
    Py_DECREF( par_random_state );
    par_random_state = NULL;

    Py_XDECREF( par_data_rvs );
    par_data_rvs = NULL;

    CHECK_OBJECT( (PyObject *)var_mn );
    Py_DECREF( var_mn );
    var_mn = NULL;

    CHECK_OBJECT( (PyObject *)var_tp );
    Py_DECREF( var_tp );
    var_tp = NULL;

    CHECK_OBJECT( (PyObject *)var_k );
    Py_DECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)var_randint );
    Py_DECREF( var_randint );
    var_randint = NULL;

    CHECK_OBJECT( (PyObject *)var_ind );
    Py_DECREF( var_ind );
    var_ind = NULL;

    CHECK_OBJECT( (PyObject *)var_j );
    Py_DECREF( var_j );
    var_j = NULL;

    CHECK_OBJECT( (PyObject *)var_i );
    Py_DECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)var_vals );
    Py_DECREF( var_vals );
    var_vals = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_density );
    Py_DECREF( par_density );
    par_density = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_random_state );
    Py_DECREF( par_random_state );
    par_random_state = NULL;

    Py_XDECREF( par_data_rvs );
    par_data_rvs = NULL;

    Py_XDECREF( var_mn );
    var_mn = NULL;

    Py_XDECREF( var_tp );
    var_tp = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)var_randint );
    Py_DECREF( var_randint );
    var_randint = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_vals );
    var_vals = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_12_random );
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


static PyObject *impl_scipy$sparse$construct$$$function_12_random$$$function_1_data_rvs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c5c8a65f03fa8e7e1ece3fcf1b86af15;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c5c8a65f03fa8e7e1ece3fcf1b86af15 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c5c8a65f03fa8e7e1ece3fcf1b86af15, codeobj_c5c8a65f03fa8e7e1ece3fcf1b86af15, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c5c8a65f03fa8e7e1ece3fcf1b86af15 = cache_frame_c5c8a65f03fa8e7e1ece3fcf1b86af15;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c5c8a65f03fa8e7e1ece3fcf1b86af15 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c5c8a65f03fa8e7e1ece3fcf1b86af15 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "randint" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 780;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 780;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_iinfo );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 780;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "dtype" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 780;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( self->m_closure[0] );
        frame_c5c8a65f03fa8e7e1ece3fcf1b86af15->m_frame.f_lineno = 780;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 780;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_min );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 780;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 780;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_2;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_iinfo );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 780;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "dtype" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 780;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = PyCell_GET( self->m_closure[0] );
        frame_c5c8a65f03fa8e7e1ece3fcf1b86af15->m_frame.f_lineno = 780;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 780;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_max );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 780;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_n );
        tmp_tuple_element_1 = par_n;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_dtype;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "dtype" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 781;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = PyCell_GET( self->m_closure[0] );
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_c5c8a65f03fa8e7e1ece3fcf1b86af15->m_frame.f_lineno = 780;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 780;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5c8a65f03fa8e7e1ece3fcf1b86af15 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5c8a65f03fa8e7e1ece3fcf1b86af15 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5c8a65f03fa8e7e1ece3fcf1b86af15 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c5c8a65f03fa8e7e1ece3fcf1b86af15, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c5c8a65f03fa8e7e1ece3fcf1b86af15->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c5c8a65f03fa8e7e1ece3fcf1b86af15, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c5c8a65f03fa8e7e1ece3fcf1b86af15,
        type_description_1,
        par_n,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_c5c8a65f03fa8e7e1ece3fcf1b86af15 == cache_frame_c5c8a65f03fa8e7e1ece3fcf1b86af15 )
    {
        Py_DECREF( frame_c5c8a65f03fa8e7e1ece3fcf1b86af15 );
    }
    cache_frame_c5c8a65f03fa8e7e1ece3fcf1b86af15 = NULL;

    assertFrameObject( frame_c5c8a65f03fa8e7e1ece3fcf1b86af15 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_12_random$$$function_1_data_rvs );
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
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_12_random$$$function_1_data_rvs );
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


static PyObject *impl_scipy$sparse$construct$$$function_12_random$$$function_2_data_rvs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_3a276dd29323857a3d65d82f5a467803;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3a276dd29323857a3d65d82f5a467803 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3a276dd29323857a3d65d82f5a467803, codeobj_3a276dd29323857a3d65d82f5a467803, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *) );
    frame_3a276dd29323857a3d65d82f5a467803 = cache_frame_3a276dd29323857a3d65d82f5a467803;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3a276dd29323857a3d65d82f5a467803 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3a276dd29323857a3d65d82f5a467803 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_2;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "random_state" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 784;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_n );
        tmp_args_element_name_1 = par_n;
        frame_3a276dd29323857a3d65d82f5a467803->m_frame.f_lineno = 784;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_rand, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 784;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "random_state" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 784;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_n );
        tmp_args_element_name_2 = par_n;
        frame_3a276dd29323857a3d65d82f5a467803->m_frame.f_lineno = 784;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_left_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_rand, call_args );
        }

        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 784;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_complex_0_0__1_0;
        tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 784;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 784;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a276dd29323857a3d65d82f5a467803 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a276dd29323857a3d65d82f5a467803 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a276dd29323857a3d65d82f5a467803 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3a276dd29323857a3d65d82f5a467803, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3a276dd29323857a3d65d82f5a467803->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3a276dd29323857a3d65d82f5a467803, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3a276dd29323857a3d65d82f5a467803,
        type_description_1,
        par_n,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_3a276dd29323857a3d65d82f5a467803 == cache_frame_3a276dd29323857a3d65d82f5a467803 )
    {
        Py_DECREF( frame_3a276dd29323857a3d65d82f5a467803 );
    }
    cache_frame_3a276dd29323857a3d65d82f5a467803 = NULL;

    assertFrameObject( frame_3a276dd29323857a3d65d82f5a467803 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_12_random$$$function_2_data_rvs );
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
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_12_random$$$function_2_data_rvs );
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


static PyObject *impl_scipy$sparse$construct$$$function_13_rand( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_density = python_pars[ 2 ];
    PyObject *par_format = python_pars[ 3 ];
    PyObject *par_dtype = python_pars[ 4 ];
    PyObject *par_random_state = python_pars[ 5 ];
    struct Nuitka_FrameObject *frame_4bb1682dd1887095d8206618145a8c0d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4bb1682dd1887095d8206618145a8c0d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4bb1682dd1887095d8206618145a8c0d, codeobj_4bb1682dd1887095d8206618145a8c0d, module_scipy$sparse$construct, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4bb1682dd1887095d8206618145a8c0d = cache_frame_4bb1682dd1887095d8206618145a8c0d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4bb1682dd1887095d8206618145a8c0d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4bb1682dd1887095d8206618145a8c0d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_random );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "random" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 842;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_m );
        tmp_args_element_name_1 = par_m;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_2 = par_n;
        CHECK_OBJECT( par_density );
        tmp_args_element_name_3 = par_density;
        CHECK_OBJECT( par_format );
        tmp_args_element_name_4 = par_format;
        CHECK_OBJECT( par_dtype );
        tmp_args_element_name_5 = par_dtype;
        CHECK_OBJECT( par_random_state );
        tmp_args_element_name_6 = par_random_state;
        frame_4bb1682dd1887095d8206618145a8c0d->m_frame.f_lineno = 842;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 842;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4bb1682dd1887095d8206618145a8c0d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4bb1682dd1887095d8206618145a8c0d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4bb1682dd1887095d8206618145a8c0d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4bb1682dd1887095d8206618145a8c0d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4bb1682dd1887095d8206618145a8c0d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4bb1682dd1887095d8206618145a8c0d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4bb1682dd1887095d8206618145a8c0d,
        type_description_1,
        par_m,
        par_n,
        par_density,
        par_format,
        par_dtype,
        par_random_state
    );


    // Release cached frame.
    if ( frame_4bb1682dd1887095d8206618145a8c0d == cache_frame_4bb1682dd1887095d8206618145a8c0d )
    {
        Py_DECREF( frame_4bb1682dd1887095d8206618145a8c0d );
    }
    cache_frame_4bb1682dd1887095d8206618145a8c0d = NULL;

    assertFrameObject( frame_4bb1682dd1887095d8206618145a8c0d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_13_rand );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_density );
    Py_DECREF( par_density );
    par_density = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_random_state );
    Py_DECREF( par_random_state );
    par_random_state = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_density );
    Py_DECREF( par_density );
    par_density = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_random_state );
    Py_DECREF( par_random_state );
    par_random_state = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$construct$$$function_13_rand );
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



static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_10_bmat( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$construct$$$function_10_bmat,
        const_str_plain_bmat,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_72d15b9d18b0ea5f4d2a74a608e5043d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$construct,
        const_str_digest_f7274f670607744161893c02290b3fb7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_11_block_diag( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$construct$$$function_11_block_diag,
        const_str_plain_block_diag,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7e5da425d29fe04b4e6a7adc38d693b2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$construct,
        const_str_digest_8c58e7dc0dc476c14535a73a9323c136,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_12_random( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$construct$$$function_12_random,
        const_str_plain_random,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f094f1e2fc0f452e9f9e5b0f0f432e07,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$construct,
        const_str_digest_e3c332e4e4d4baa3f29ea94bb8ca26e6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_12_random$$$function_1_data_rvs(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$construct$$$function_12_random$$$function_1_data_rvs,
        const_str_plain_data_rvs,
#if PYTHON_VERSION >= 300
        const_str_digest_64753bb9d7a82061d94cce40c72a8e61,
#endif
        codeobj_c5c8a65f03fa8e7e1ece3fcf1b86af15,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$construct,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_12_random$$$function_2_data_rvs(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$construct$$$function_12_random$$$function_2_data_rvs,
        const_str_plain_data_rvs,
#if PYTHON_VERSION >= 300
        const_str_digest_64753bb9d7a82061d94cce40c72a8e61,
#endif
        codeobj_3a276dd29323857a3d65d82f5a467803,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$construct,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_13_rand( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$construct$$$function_13_rand,
        const_str_plain_rand,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4bb1682dd1887095d8206618145a8c0d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$construct,
        const_str_digest_a00ff8416db2dc8b6f95f91c54c87f6d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_1_spdiags( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$construct$$$function_1_spdiags,
        const_str_plain_spdiags,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_612d9006782ad8128772ab599dbd3cb1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$construct,
        const_str_digest_53b11e6f1603cccc3afb15f515314475,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_2_diags( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$construct$$$function_2_diags,
        const_str_plain_diags,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e247f8772b2b12b5d3ce6593dd5f7556,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$construct,
        const_str_digest_4d0994dd18779872ca9204780fb7bb1b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_3_identity( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$construct$$$function_3_identity,
        const_str_plain_identity,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f3549ddbddf19afa809338ae6a042a4d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$construct,
        const_str_digest_a9aaced8a4fb00549c7412c231b48d45,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_4_eye( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$construct$$$function_4_eye,
        const_str_plain_eye,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2dfd65624c8a5bbe32ba1b779a97b97b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$construct,
        const_str_digest_55d464b4f378166ea6b20bd6cf129f76,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_5_kron( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$construct$$$function_5_kron,
        const_str_plain_kron,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_669eb763640d0656b28bae531780e3b7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$construct,
        const_str_digest_b4edd2169d17f58d4472709ab150203d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_6_kronsum( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$construct$$$function_6_kronsum,
        const_str_plain_kronsum,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0237e371e20d44b867f5e67b2aa075db,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$construct,
        const_str_digest_e084eb31a2c6e8a75dbdd9ebf2df041d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_7__compressed_sparse_stack(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$construct$$$function_7__compressed_sparse_stack,
        const_str_plain__compressed_sparse_stack,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bee7f5c4d040444a673dc61ebdd0448e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$construct,
        const_str_digest_5bc5002c7c16be2e92122022b6b6d1c3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_8_hstack( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$construct$$$function_8_hstack,
        const_str_plain_hstack,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_19b6fb309e2f5a17a11c4b281e2f424e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$construct,
        const_str_digest_dc78e6ed247d9477cd6371045d50d373,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$construct$$$function_9_vstack( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$construct$$$function_9_vstack,
        const_str_plain_vstack,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1b003c85600eaa13b3a1c89f5cb1ec13,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$construct,
        const_str_digest_2fd8fde82fca89025f5caf20c8b81807,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$construct =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.construct",
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

MOD_INIT_DECL( scipy$sparse$construct )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$construct );
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
    puts("scipy.sparse.construct: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.construct: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.construct: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$sparse$construct" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$construct = Py_InitModule4(
        "scipy.sparse.construct",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$sparse$construct = PyModule_Create( &mdef_scipy$sparse$construct );
#endif

    moduledict_scipy$sparse$construct = MODULE_DICT( module_scipy$sparse$construct );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$sparse$construct,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$sparse$construct,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$construct,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$construct,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$sparse$construct );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_a86d42b3a42277df12c37c3148547b24, module_scipy$sparse$construct );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_cb662daf9149dbc32e2624f951d946b0;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_79974fb40b2a002e91589ff46a0b3bbb;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_cb662daf9149dbc32e2624f951d946b0 = MAKE_MODULE_FRAME( codeobj_cb662daf9149dbc32e2624f951d946b0, module_scipy$sparse$construct );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_cb662daf9149dbc32e2624f951d946b0 );
    assert( Py_REFCNT( frame_cb662daf9149dbc32e2624f951d946b0 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_cb662daf9149dbc32e2624f951d946b0->m_frame.f_lineno = 3;
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___docformat__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = LIST_COPY( const_list_485093035f51a04f85d66107a71eb99e_list );
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$construct;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_cb662daf9149dbc32e2624f951d946b0->m_frame.f_lineno = 11;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_8a28f7b9a9522850cd344443248d7259;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$sparse$construct;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_get_randint_tuple;
        tmp_level_name_2 = const_int_0;
        frame_cb662daf9149dbc32e2624f951d946b0->m_frame.f_lineno = 12;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_get_randint );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_get_randint, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_c88389693d9d476899c1c6e170568469;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$sparse$construct;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_xrange_tuple;
        tmp_level_name_3 = const_int_0;
        frame_cb662daf9149dbc32e2624f951d946b0->m_frame.f_lineno = 14;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_xrange );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_sputils;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$sparse$construct;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_660ab54e662d7846204cc0ed9255f331_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_cb662daf9149dbc32e2624f951d946b0->m_frame.f_lineno = 16;
        tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

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
                (PyObject *)moduledict_scipy$sparse$construct,
                const_str_plain_upcast,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_upcast );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_upcast, tmp_assign_source_14 );
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
                (PyObject *)moduledict_scipy$sparse$construct,
                const_str_plain_get_index_dtype,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_get_index_dtype );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_get_index_dtype, tmp_assign_source_15 );
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
                (PyObject *)moduledict_scipy$sparse$construct,
                const_str_plain_isscalarlike,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_isscalarlike );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_isscalarlike, tmp_assign_source_16 );
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_csr;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$sparse$construct;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_csr_matrix_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_cb662daf9149dbc32e2624f951d946b0->m_frame.f_lineno = 18;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$sparse$construct,
                const_str_plain_csr_matrix,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_csr_matrix );
        }

        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csr_matrix, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_csc;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$sparse$construct;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_csc_matrix_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_cb662daf9149dbc32e2624f951d946b0->m_frame.f_lineno = 19;
        tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy$sparse$construct,
                const_str_plain_csc_matrix,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_csc_matrix );
        }

        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csc_matrix, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_bsr;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$sparse$construct;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_bsr_matrix_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_cb662daf9149dbc32e2624f951d946b0->m_frame.f_lineno = 20;
        tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_scipy$sparse$construct,
                const_str_plain_bsr_matrix,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_bsr_matrix );
        }

        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_bsr_matrix, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_coo;
        tmp_globals_name_8 = (PyObject *)moduledict_scipy$sparse$construct;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_coo_matrix_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_cb662daf9149dbc32e2624f951d946b0->m_frame.f_lineno = 21;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_12 ) )
        {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_scipy$sparse$construct,
                const_str_plain_coo_matrix,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_coo_matrix );
        }

        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain_dia;
        tmp_globals_name_9 = (PyObject *)moduledict_scipy$sparse$construct;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_dia_matrix_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_cb662daf9149dbc32e2624f951d946b0->m_frame.f_lineno = 22;
        tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_import_name_from_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_13 ) )
        {
           tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_scipy$sparse$construct,
                const_str_plain_dia_matrix,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_dia_matrix );
        }

        Py_DECREF( tmp_import_name_from_13 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_dia_matrix, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain_base;
        tmp_globals_name_10 = (PyObject *)moduledict_scipy$sparse$construct;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_issparse_tuple;
        tmp_level_name_10 = const_int_pos_1;
        frame_cb662daf9149dbc32e2624f951d946b0->m_frame.f_lineno = 24;
        tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_import_name_from_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_14 ) )
        {
           tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_scipy$sparse$construct,
                const_str_plain_issparse,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_issparse );
        }

        Py_DECREF( tmp_import_name_from_14 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_issparse, tmp_assign_source_22 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb662daf9149dbc32e2624f951d946b0 );
#endif
    popFrameStack();

    assertFrameObject( frame_cb662daf9149dbc32e2624f951d946b0 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb662daf9149dbc32e2624f951d946b0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cb662daf9149dbc32e2624f951d946b0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cb662daf9149dbc32e2624f951d946b0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cb662daf9149dbc32e2624f951d946b0, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_23 = MAKE_FUNCTION_scipy$sparse$construct$$$function_1_spdiags( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_spdiags, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_int_0_none_none_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_24 = MAKE_FUNCTION_scipy$sparse$construct$$$function_2_diags( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_diags, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_str_plain_d_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_25 = MAKE_FUNCTION_scipy$sparse$construct$$$function_3_identity( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_identity, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_none_int_0_type_float_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_26 = MAKE_FUNCTION_scipy$sparse$construct$$$function_4_eye( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_eye, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_assign_source_27 = MAKE_FUNCTION_scipy$sparse$construct$$$function_5_kron( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_kron, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_assign_source_28 = MAKE_FUNCTION_scipy$sparse$construct$$$function_6_kronsum( tmp_defaults_6 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_kronsum, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_FUNCTION_scipy$sparse$construct$$$function_7__compressed_sparse_stack(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain__compressed_sparse_stack, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_7;
        tmp_defaults_7 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_7 );
        tmp_assign_source_30 = MAKE_FUNCTION_scipy$sparse$construct$$$function_8_hstack( tmp_defaults_7 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_hstack, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_defaults_8;
        tmp_defaults_8 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_8 );
        tmp_assign_source_31 = MAKE_FUNCTION_scipy$sparse$construct$$$function_9_vstack( tmp_defaults_8 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_vstack, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_9;
        tmp_defaults_9 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_9 );
        tmp_assign_source_32 = MAKE_FUNCTION_scipy$sparse$construct$$$function_10_bmat( tmp_defaults_9 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_bmat, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_defaults_10;
        tmp_defaults_10 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_10 );
        tmp_assign_source_33 = MAKE_FUNCTION_scipy$sparse$construct$$$function_11_block_diag( tmp_defaults_10 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_block_diag, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_defaults_11;
        tmp_defaults_11 = const_tuple_float_0_01_str_plain_coo_none_none_none_tuple;
        Py_INCREF( tmp_defaults_11 );
        tmp_assign_source_34 = MAKE_FUNCTION_scipy$sparse$construct$$$function_12_random( tmp_defaults_11 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_random, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_defaults_12;
        tmp_defaults_12 = const_tuple_float_0_01_str_plain_coo_none_none_tuple;
        Py_INCREF( tmp_defaults_12 );
        tmp_assign_source_35 = MAKE_FUNCTION_scipy$sparse$construct$$$function_13_rand( tmp_defaults_12 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_rand, tmp_assign_source_35 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$construct );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
